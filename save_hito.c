#include <unistd.h>
#include <string.h>
#include <stdio.h>
void delay(const char *str) {
    while (*str) {
        printf("%c", *str);
        fflush(stdout);
        usleep(62000);
        str++;
        }
}

int main() {
    delay("\nThis is a popular game called 'Save Hito'\n\n");
    sleep(3);
    delay("The game was started, Good Luck!\n\n");
    sleep(2);

    char name[20];
    putchar(10);

    delay("Aaa shit I'm hurt!... Ohh Hii, I'm a little gnome and my name's Hito!\n");
    delay("Hito: What is your name?\n");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    delay("\nNice to meet you ");
    delay(name);
    delay("\nWe don't have much time ");
    delay(name);
    delay(" ! Please, help me to get out of here !\n");
    delay("\nYou and Hito are trapped in a dungeon\n");
    delay("Help him to get out !\n\nThere are three ways to exit the dungeon\n\n");
    delay("Which way will you choose ?");

    int wayCh = 0;

    delay("\n1. go left?\n");
    delay("2. go right?\n");
    delay("3. go straight?\n");

    while (!(wayCh >= 1 && wayCh <= 3)) {
        scanf("%d", &wayCh);
    }

    delay("\nWho knows, maybe you're on the way out!\n");
    sleep(2);

    if (wayCh == 2) {
        delay("\nIt was too easy :)\n");
        delay("\nYou and Hito were saved!\n");
        delay("Hito: Thank you ");
        delay(name);
    } else if (wayCh == 1) {
        delay("\nYou are going, going, and at some moment...\n");
        sleep(1);

        delay("\nHito: This is the way out! This is the way out! But...\n");
        sleep(1);
        delay("Hito: Ahh damn! This is a Cursed Jason! Be careful!\n");

        sleep(2);
        delay("\n1. Kill Cursed Jason?\n");
        delay("2. Run away with Hito?\n");

        int jsnKillway = 0;
        while (!(jsnKillway >= 1 && jsnKillway <= 2)) {
            scanf("%d", &jsnKillway);
        }

        if (jsnKillway == 1) {
            delay(name);
            delay(" took out his Desert Eagle and fired a couple of bullets towards the damned Jason and killed him...\n");
            sleep(1);
            delay("\nHito: Ohh my God! Ohh my Goood!\n");
            delay("Hito: Thanks for saving me!\n");
            delay("I owe you ");
            delay(name);
            delay(" I owe you!!!\n");
            delay("\nCongratulations ! You found a way out of the dungeon and saved Hito\n");
        } else if (jsnKillway == 2) {
            delay("\nHito: Ahh, my leg, my leeeg, aaaa!!!\n");

            delay(name);
            delay(": Don't worry Hito! We'll get out!\n");
            sleep(2);
            delay("\nYou have come to the place of intersection of paths.\nWhich path do you want to take?\n");
            delay("1. go right?\n");
            delay("2. go straight?\n");

            int jsnRunAway = 0;
            while (!(jsnRunAway >= 1 && jsnRunAway <= 2)) {
                scanf("%d", &jsnRunAway);
            }

            if (jsnRunAway == 1) {
                delay("Congratulations! You found a way out of the dungeon and saved Hito\n\n");
            } else {
                delay("Hito: I think this path will be true\n");
                sleep(2);
                delay("Hito: Oh! My! God!\n");
                delay("Hito: I have never seen so many demons!\n");

                sleep(1);
                delay("\n1. go back?\n");
                delay("2. use the Bible?\n");

                int dmns = 0;
                while (!(dmns >= 1 && dmns <= 2)) {
                    scanf("%d", &dmns);
                }

                if (dmns == 1) {
                    delay("\nHito: Going back is not an option!\n");
                    delay("Hito: Wait ");
                    delay(name);
                    delay("Hito: It's that damn Jason again!\n");
                    delay("Hito: Oh noooo! ....\n\n");
                    sleep(2);
                    delay("God: You are on the brink of Heaven and Hell\n");
                    sleep(2);
                    delay("God: You and Hito died as heroes and will go to Heaven.\n\n");
                } else {
                    delay(name);
                    delay(" took the Bible out of his backpack and pointed it at the demons\n");
                    delay("They evaporated like water!\n");
                    delay("\nCongratulations ! You have found the right path\n");
                }
            }
        }
    } else if (wayCh == 3) {
        delay("Hito: I think this path will be true\n");
        sleep(2);
        delay("Hito: Oh! My! God!\n");
        delay("Hito: I have never seen so many demons!\n");

        sleep(1);
        delay("\n1. go back?\n");
        delay("2. use the Bible?\n");

        int dmns = 0;
        while (!(dmns >= 1 && dmns <= 2)) {
            scanf("%d", &dmns);
        }

        if (dmns == 1) {
            delay("\nHito: Going back is not an option!\n");
            delay("Hito: Wait ");
            delay(name);
            delay("\nHito: It's that damn Jason !\n");
            delay("Hito: Oh noooo! ....\n");
            sleep(3);
            delay("\nGod: You are on the brink of Heaven and Hell\n");
            sleep(2);
            delay("God: You and Hito died as heroes and will go to Heaven.\n\n");
        } else {
            putchar(10);
            delay(name);
            delay(" took the Bible out of his backpack and pointed it at the demons\n");
            delay("They evaporated like water!\n");
            delay("\nCongratulations ! You have found the right path and saved Hito !\n");
        }
    }

    delay("\n\nThis game was created by Armen Aslanyan on 02.08.2024\nThank you for your time\n\n");

    return 0;
}