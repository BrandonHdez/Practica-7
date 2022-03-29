package Practica7;

import java.util.Scanner;

public class principal {
    public static void main(String[] args) {
        int opc,opc1;
        Scanner sn = new Scanner(System.in);
        boolean salir = false;

        

        
        
        while(!salir){
            System.out.println("1. Ice");
            System.out.println("2. Bubbles");
            System.out.println("3. Red");
            System.out.println("4. Salir");

            System.out.println(" Seleccione un personaje a usar  ");
            
            opc= sn.nextInt();


            if(opc==1){
                System.out.println("1.mostar caracteristicas");
                System.out.println("Seleccione una opcion");
                opc2= sn.nextInt();
                red bird1 = new red("Ice", "Azul", "100", "congelar todo en su área", "Cuadrado");
                if(opc2==1){
                    bird1.mostrarbird();
                }   
            }
            
            if(opc==2){
                System.out.println("1.mostar caracteristicas");
                System.out.println("Seleccione una opcion");
                opc2= sn.nextInt();
                chuck bird2 = new chuck("Bubbles", "Naranja", "100", "Se infla", "Redondo");
                if(opc2==1){
                    bird2.mostrarbird();    
                }   
            }
            
            if(opc==3){
                System.out.println("1.mostar caracteristicas");
                System.out.println("Seleccione una opcion");
                opc2= sn.nextInt();
                boom bird3 = new boom("Red", "Rojo", "100", "No tiene poder", "Ovalado");
                if(opc2==1){
                    bird3.mostrarbird();
                }   
            }

            if(opc==4){
                salir=true;
            }
        }
    }
    
}

