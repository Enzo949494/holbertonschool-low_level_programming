# FILE I/O

Ce projet consiste à créer des fonctions en C pour gérer des fichiers, y compris la lecture, l'écriture, la création et la copie de fichiers.

## Fonctionnalités

- Lire le contenu d'un fichier et l'afficher dans la sortie standard.
- Créer un fichier avec un contenu spécifié.
- Ajouter du texte à la fin d'un fichier existant.
- Copier le contenu d'un fichier source vers un fichier de destination.

## Prérequis

- Un compilateur C (comme `gcc`).
- Ubuntu 20.04 LTS pour le développement.

## Compilation

Pour compiler les fichiers, utilisez les commandes suivantes :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o nom_du_programme nom_du_fichier.c
```
## Utilisation

### Lire un fichier 
```bash
ssize_t read_textfile(const char *filename, size_t letters);
```
Créer un fichier
```bash
int create_file(const char *filename, char *text_content);
```
Ajouter du texte à un fichier
```bash
int append_text_to_file(const char *filename, char *text_content);
```
Copier un fichier
Utilisez la commande suivante pour copier le contenu d'un fichier :
```bash
./cp file_from file_to
```

### Exigences
* Tous les fichiers doivent se terminer par une nouvelle ligne.
* Utiliser le style de codage Betty.
* Ne pas utiliser de variables globales.
* Pas plus de 5 fonctions par fichier.
* Les seules fonctions autorisées de la bibliothèque standard C sont malloc, free et exit.
