#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char response1[128]; 
char response2[128]; 

void alright() {
    printf("okay, will you be able to get an early night tonight? ");
    scanf("%[^\n]%*c", response2);
    if (strcmp(response2, "Yeah I think so") == 0) {
        printf("Dope! Have a great day bud, I\'ll see you later!\n");
        return;
    } else if (strcmp(response2, "I don\'t think so unfortunately") == 0) {
        printf("oh man, that\'s alright though. Hope your day isn\'t too tough, you got this homie!\n");
        return;
    } else {
        printf("That\'s not a Dhruvy enough response! Try \'Yeah I think so\' or \'I don\'t think so unfortunately\'\n");
        alright();
    }
}

void  start() {
    printf("Good morning bud, how\'d ya sleep? "); 
    scanf("%[^\n]%*c", response1); 

    if (strcmp(response1, "Alright") == 0) {
        alright();
    }
    else if (strcmp(response1, "Not great") == 0) {
        printf("oh no how come? ");
        scanf("%[^\n]%*c", response2);
        printf("Dang, that stinks homie. If you wanna talk about it more shoot me a text! Real Jay is always here. Hope you\'re able to sleep better tonight man.\n");
        return; 
    }    
    else if (strcmp(response1, "Pretty good actually") == 0) {
        printf("yay! Glad to hear it. What's your day looking like? ");
        scanf("%[^\n]%*c", response2);
        printf("That sounds really cool!! I\'m happy that you\'re living large in SF. Shoot me a text or call when you get the chance! Miss you, have a great day!\n");
        return; 
    }
    else {
        printf("That\'s not a Dhruvy enough response! Try \'Alright\' \'Not great\' or \'Pretty good actually\'\n");
        start();
    }
}

int main() { 
    
    start();

    return 0; 
}
