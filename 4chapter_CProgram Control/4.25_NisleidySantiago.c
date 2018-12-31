/*4.25 (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a program that prints a table of the binary, octal and hexadecimal  equivalents of the decimal numbers in the range 1 through 256. If you’re not familiar with these number systems, read Appendix C before you at tempt this exercise. [Note: You can display an integer as an octal or hexadecimal value with the conversion specifiers %o and %X , respectively.]
---------------------------------------------------------------------------
Imprima una tabla con los equivalentes en decimal, binario, octal, y hexadecimal. Si desea intentar este ejercicio y
no conoce estos sistemas de numeración, primero lea el Apéndice E.*/
#include <stdio.h>
int main(){

  int i, aa, bb, cc, dd , ee, ff, gg, hh, jj, kk, ll, mm, nn, oo, pp , qq, a, b, c, d, e, f, g, h, j, k, l, m, n, o, p, q, r, s, t, a1, a2, a4, a5, a6, a7, b1, b2, b4, b5, b6, b7, c2, c3, c4, c5, c6, c7, d2, d3, d4, d5, d6, e2, e3, e4,e5, e6, f2, f3, f4, f5, g2, g3, g4, g5, h2, h3, h4, i2, i3, i4, j2, j3, k2, k3, m2, m3, l2, l3;

  printf("DECIMAL\tOCTAL HEXADECIMAL\tBINARIO\n");

  for(i = 1; i <=256; i++){
        //hexadecimal
    printf("  %d\t", i);
        //octal
        if((i >= 0)&&(i < 8)){
          printf("%d\t", i);
        }

        else if((i >= 8)&&(i < 64)){
            aa = i/8;
            bb = i%8;
            cc = bb/1;
            printf("%d%d \t", aa, cc);
        }

        else if((i >= 64)&&(i<=256)){
            dd = i/64;
            ee = i%64;
            ff = ee/8;
            gg = ee%8;
            hh = gg/1;
            printf("%d%d%d\t", dd, ff, hh);
          }

          //hexadecimal
          if((i >=1)&&(i<16)){
            printf("%d\t\t", i);
        }

          else if((i>=16)&&(i<256)){
            jj= i/16;
            kk= i%16;
            ll= kk/1;
            printf("%d%d\t\t", jj, ll);
          }
          else if(i==256){
            mm=i/256;
            nn=i%256;
            oo=nn/16;
            pp=nn%16;
            qq=pp/1;
            printf("%d%d%d\t\t", mm, oo, qq);

          }
            //binario
        if(i == 1){
          printf("%d", i);
        }
        //------------------------------------------- //
        else if((i>=2)&&(i<4)){
          a7=i/2;
          b7=i%2;
          c7=b7/1;

        printf("%d%d", a7, c7);
        }
        //..............................................
        else if((i>=4)&&(i<8)){
          a6=i/4;
          b6=i%4;
          c6=b6/2;
          d6=b6%2;
          e6=d6/1;

          printf("%d%d%d", a6, c6, e6);
        }
        //.............................
        else if((i>=8)&&(i<16)){
          a5 = i/8;
          b5 = i%8;
          c5 = b5/4;
          d5 = b5%4;
          e5 = d5/2;
          f5 = d5%2;
          g5 = f5/1;
          printf("%d%d%d%d",a5, c5, e5, g5);
        }
        //.....................................

      else if((i>=16)&&(i<32)){
        a4 = i/16;
        b4 = i%16;
        c4 = b4/8;
        d4 = b4%8;
        e4 = d4/4;
        f4 = d4%4;
        g4 = f4/2;
        h4 = f4%2;
        i4 = h4/1;

        printf("%d%d%d%d%d", a4,c4,e4,g4,i4);
      }
      //.................................................
      else if((i>=32)&&(i<64)){
        c3 = i/32;
        d3 = i%32;
        e3 = d3/16;
        f3 = d3%16;
        g3 = f3/8;
        h3 = f3%8;
        i3 = h3/4;
        j3 = h3%4;
        k3 = j3/2;
        l3 = j3%2;
        m3 = l3/1;

        printf("%d%d%d%d%d", c3,e3, g3,i3,k3, l3,m3);
      }
//....................................................
      else if((i>=64)&&(i<128)){
        a2 = i/64;
        b2 = i%64;
        c2 = b2/32;
        d2 = b2%32;
        e2 = d2/16;
        f2 = d2%16;
        g2 = f2/8;
        h2 = f2%8;
        i2 = h2/4;
        j2 = h2%4;
        k2 = j2/2;
        l2 = j2%2;
        m2 = l2/1;
        printf("%d%d%d%d%d%d%d", a2, c2, e2, g2, i2, k2, m2);
      }
      //.....................................................
      else if((i>=128)&&(i<256)){
        a1 = i/128;
        b1 = i%128;
        a = b1/64;
        b = b1%64;
        c = b/32;
        d = b%32;
        e = d/16;
        f = d%16;
        g = f/8;
        h = f%8;
        j = h/4;
        k = h%4;
        l = k/2;
        m = k%2;
        n = m/1;
        o = m%1;
        printf("%d%d%d%d%d%d%d%d", a1, a, c, e, g, j, l, n);
        }
  //.............................................................
printf("\n");
}//FIN DEL FOR

return 0;
}
