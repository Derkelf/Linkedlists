typedef struct node
{
    int n;
    struct node* next;
}
node;

/*
 * //node* prev = *i
 * int counter = 0;
 *
 * if i is the first element, and i->n is greater than new->n
 *      put new before i
 *      break;
 *      
 * else if i->n is less than new->n 
 *      //prev = i
 *      if i->next->n is less than new->n and i->next is not NULL
 *          i = i->next
 *      else
 *          new->next = i->next
 *          i->next = new;
 *          break;
 *          
 *          
 *
 *      
 *  
 *
 */
