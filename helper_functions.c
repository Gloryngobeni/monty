#include "monty.h"

/**
 * line_validator - Check for leading whitespaces in a string.
 * @str: The string to be checked.
 *
 * Return: 1 if the string is empty or contains only whitespaces, 0 otherwise.
 */
int line_validator(char *str)
{
    int index = 0;

    while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }

    return (str[index] == '\0');
}

/**
 * is_digit - Check if a string represents a valid integer.
 * @number: The string to be checked.
 *
 * Return: void
 */
void is_digit(char *number)
{
    unsigned int i = 0;

    if (number == NULL || (number[0] != '-' && (number[0] < '0' || number[0] > '9')))
    {
        fprintf(stderr, "L%u: usage: push integer\n", var.n_lines);
        free(var.getl_info);
        handle_dlist_head(var.stack_head);
        fclose(var.fp_struct);
        exit(EXIT_FAILURE);
    }

    for (i = 1; number[i] != '\0'; i++)
    {
        if (number[i] < '0' || number[i] > '9')
        {
            fprintf(stderr, "L%u: usage: push integer\n", var.n_lines);
            free(var.getl_info);
            handle_dlist_head(var.stack_head);
            fclose(var.fp_struct);
            exit(EXIT_FAILURE);
        }
    }
}

/**
 * dlistint_len - Get the number of nodes in a doubly linked list.
 * @h: The head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(stack_t *h)
{
    size_t n_nodes = 0;

    while (h != NULL)
    {
        h = h->next;
        n_nodes++;
    }

    return (n_nodes);
}
