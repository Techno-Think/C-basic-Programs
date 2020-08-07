#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
	int i,j,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("\nA:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(i==0||i==n/2&&j<n/2||j==0||j==n/2-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nB:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||j<=n/2&&i==0||j<n/2-1&&i==n/2||j<=n/2&&i==n-1||j==n/2-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nC:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==0||i==n-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nD:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==0&&j<n/2-1||j==n/2-1&&i!=0&&i!=n-1||i==n-1&&j<n/2-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nE:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==0&&j<=n/2-1||i==n-1&&j<=n/2-1||i==n/2&&j<=n/2-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nF:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==0&&j<=n/2-1||i==n/2&&j<=n/2-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nG:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2+1;j++)
			{
				if(i==0&&j<=n/2||j==0||i==n-1&&j<=n/2-2||i>n/2&&j==n/2-2||j>n/2-2&&i==n/2+1||i>n/2&&j==n/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nH:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||j==n/2-1||i==n/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nI:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(i==0||i==n-1||j==n/2/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nJ:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(i==0||j==(n/2/2)||i==n-1&&j<n/2/2||j==0&&i>n/2+1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nK:\n");
		for(i=0;i<n;i++)
		{
			for(j=n-(n/2);j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n;j++)
			{
				if(j==n/2||i==j&&i>n/2||i+j==n&&i<n/2+1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nL:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==n-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nM:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n;j++)
			{
				if(j==0||j==n-1||i==j&&i<n/2||i+j==n-1&&i<=n/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nN:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n;j++)
			{
				if(j==0||j==n-1||i==j)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nO:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==0||j==n/2-1&&i!=0&&i!=n-1||i==n-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nP:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0||i==0||j==n/2-1&&i<n/2||i==n/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nQ:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n;j++)
			{
				if(j==0&&i<n-3||i==0&&j<n/2||j==n/2-1&&i<n-3||i==n-3&&j<n/2||i==n-2&&j==n/2||i==n-4&&j==n/2-2||i==n-5&&j==n/2-3||i==n-1&&j==n-(n/2))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
		printf("\nR:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				printf("  ");
		    }
			for(j=0;j<n/2;j++)
			{
				if(j==0&&i<n-1||i==0||j==n/2-1&&i<n/2||i==n/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		printf("\n");
		}
}
