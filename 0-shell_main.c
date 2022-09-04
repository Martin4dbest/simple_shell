#include "shell.h"

/**
 * main - the main function that starts the shell
 *			and calls the shell_loop function
 *
 * @argc: arguement count passed to main attribute unused
 * @argv: character array passed to the main function
 *
 * Return: 1 on success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	shell_t var;

	shell_init(&var);
	var.shell_name = argv[0];

	/* call the loop function */
	shell_loop(&var);
	free_tokenized(environ);

	return (EXIT_SUCCESS);
}
/**
 * shell_init - the function initialize shell
 * @var: variable
 *
 * Return: 1 on success
 */

shell_t *shell_init(shell_t *var)
{
	int i;
	char **tmp;

	var->shell_name = NULL;
	var->old_pwd = NULL;
	var->err_status = 0;
	var->cmd_counter = 1;

	for (i = 0; environ[i]; i++)
		;

	tmp = malloc(sizeof(char *) * (i + 1));

	for (i = 0; environ[i]; i++)
	{
		tmp[i] = _strdup(environ[i]);
	}
	tmp[i] = NULL;
	environ = tmp;

	return (var);
}
