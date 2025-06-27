#ifndef STRUCTFT_H
# define STRUCTFT_H

typedef enum e_type
{
	NULLF;
	OBJECT,
	TABLEAU,
	INT,
	FLOAT,
	DOUBLE,
	STRING
}	t_type;

typedef struct s_obejct
{
	void	*name;
	void	*value;
}	t_object;

typedef struct s_element
{
	t_type		type;
	t_object	*objet;
}t_element


#endif
