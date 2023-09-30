Jeu "GUESSING GAME BinarySearch" :


# GUESSING GAME BinarySearch

Bienvenue dans le jeu de devinette GUESSING GAME BinarySearch ! Dans ce jeu, l'ordinateur tentera de deviner un nombre
que vous choisissez en utilisant l'algorithme de recherche binaire. L'algorithme de recherche binaire
est une méthode efficace pour trouver le nombre rapidement.

## Comment Jouer

1. Clonez ce dépôt sur votre ordinateur :
   ```bash
   git clone https://github.com/votre-utilisateur/GUESSING-GAME-BinarySearch.git
   ```

2. Compilez le jeu en utilisant un compilateur C (par exemple, GCC) :
   ```bash
   gcc main.c -o guessing_game
   ```

3. Exécutez le jeu :
   ```bash
   ./guessing_game
   ```

4. Choisissez un nombre que l'ordinateur devra deviner.

5. Sélectionnez l'option "Jouer" dans le menu principal.

6. L'ordinateur utilisera l'algorithme de recherche binaire pour deviner le nombre.

7. Le jeu se poursuivra jusqu'à ce que l'ordinateur ait deviné le nombre ou que la plage possible se réduise à un seul nombre.

8. Une fois le nombre trouvé, l'ordinateur affichera le temps en millisecondes qu'il a mis pour deviner le nombre.

9. Vous pouvez choisir de rejouer ou de quitter le jeu à la fin de chaque partie.

## Algorithme de Recherche Binaire

L'algorithme de recherche binaire est utilisé dans ce jeu pour deviner le nombre de manière efficace. Voici comment il fonctionne :

- Au début, l'ordinateur détermine une plage possible pour le nombre secret.

- L'ordinateur calcule ensuite le nombre au milieu de cette plage et le compare au nombre secret.

- Si le nombre deviné est égal au nombre secret, le jeu se termine.

- Sinon, l'ordinateur ajuste la plage possible en fonction de la comparaison. Si le nombre deviné est inférieur au nombre secret, la plage minimale est mise à jour. Si le nombre deviné est supérieur, la plage maximale est mise à jour.

- L'algorithme répète ces étapes jusqu'à ce que le nombre secret soit trouvé.

- À chaque tentative, l'ordinateur divise la plage possible par deux, réduisant ainsi considérablement le nombre de tentatives nécessaires pour trouver le nombre.

## Optimisation

L'optimisation de ce jeu réside dans l'utilisation de l'algorithme de recherche binaire. Contrairement à la méthode de devinette aléatoire, la recherche binaire suit une stratégie systématique pour deviner le nombre. Cela réduit le nombre moyen de tentatives nécessaires pour trouver le nombre secret, ce qui rend le jeu plus efficace.

Amusez-vous à jouer et à défier l'ordinateur en utilisant l'algorithme de recherche binaire !
