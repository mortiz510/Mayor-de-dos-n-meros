/* Mayor de dos números
 * 2017204
   *Mauro Ariel Ortiz
   */
   #include <iostream>
   int main () {
   	unsigned a,b;
   		std::cin >>a;
   		std::cin >>b;
   		if(a==b)
   			std::cout<<a<<" y "<<b<<" son iguales";
   		else{
   			std::cout<<"el mayor es: ";
   			if(a>b)
   			   std::cout<<a;
   			   else
   			   std::cout<<b;
		   }	
   }
