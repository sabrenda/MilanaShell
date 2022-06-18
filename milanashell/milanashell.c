#include "milanashell.h"

int main(int argc, char *argv[], char **env)
{
	char **env_cp = NULL;
	t_list *list;
	char *line;//считываем гнлом

	list = init_struct();//возвращает структуру
	env_cp = ft_env();//возвращает копию env
	while (1)
	{
		line = get_next_line();
		list = ft_parser(line);//возвращает массив
		ft_do_commands(list);//ничего не возвращает
		ft_free();
	}
	ft_free();
	return (0);
}