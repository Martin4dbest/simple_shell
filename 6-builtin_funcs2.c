#include "shell.h"

/**
 * handle_setenv - sets an environment var
 * @args: command entered
 * @p: shell global variable
 *
 */
void handle_setenv(char **args, shell_t *p)
{
	int i = 0;

	(void) p;
	while (args[i])
		i++;
	if (i != 3)
	{
		_printf("setenv: wrong number of arguments\n", STDERR_FILENO);
		_printf("type help for more info\n", STDERR_FILENO);
		return;
	}
	i = _setenv(args[1], args[2]);
	if (i)
		_printf("setenv: invalid arguments\n", STDERR_FILENO);
}

/**
 * handle_unsetenv - unsets an environment var
 * @args: command entered
 * @p: shell global variable
 *
 */
void handle_unsetenv(char **args, shell_t *p)
{
	int i = 0;

	(void) p;

	while (args[i])
		i++;
	if (i != 2)
	{
		_printf("unsetenv: wrong number of arguments\n", STDERR_FILENO);
		_printf("type help for more info\n", STDERR_FILENO);
		return;
	}
	i = _unsetenv(args[1]);
	if (i)
		_printf("unsetenv: invalid arguments\n", STDERR_FILENO);
}

/**
 * aliasFunc - handles aliases for commands
 * @args: command entered
 * @p: shell global variable
 *
 */
void aliasFunc(char **args, shell_t *p)
{
	(void)args;
	(void)p;
}
