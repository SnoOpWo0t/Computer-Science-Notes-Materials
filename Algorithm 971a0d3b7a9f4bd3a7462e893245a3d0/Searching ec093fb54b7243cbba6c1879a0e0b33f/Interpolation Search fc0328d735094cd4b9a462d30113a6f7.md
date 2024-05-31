# Interpolation Search

## Interpolation Search

```c
int a[]={1,2,3,4};
    int pos , low = 0, high= sizeof(a)/sizeof(a[0]); 
    int x ;
    scanf("%d",&x);
    while(low<=high)
    {
      **pos  =low + ((x - a[low]) * (high - low) / (a[high] - a[low]));
      if(a[pos]==x)**
      {
        printf("element found");
      }
     else if(a[pos]>x)
      {
        high = pos -1;
      }
      else
      {
        low = pos +1;
      }

    }
```