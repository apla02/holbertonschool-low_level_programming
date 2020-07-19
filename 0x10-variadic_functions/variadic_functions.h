#ifndef _V_FUNCTIONS_
#define _V_FUNCTIONS_
/**
* struct typ - type format
*
*
* @typef: cifs
* @f: function pointer
 */
typedef struct typ
{
	char *typef;
	void (*f)();
} format_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
