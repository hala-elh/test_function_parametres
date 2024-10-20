# test_function_parametres
le code :

![Screenshot 2024-10-20 154944](https://github.com/user-attachments/assets/2633a71d-59f6-4ff2-9600-9e4a9feeee77)

-Pendant l'exécution du programme, la fonction a été appelée avec un nombre croissant de paramètres jusqu'à ce qu'une « erreur d'allocation de mémoire » se produise après avoir atteint 10 460 353 203 paramètres.

![Screenshot 2024-10-20 155336](https://github.com/user-attachments/assets/ad2e8b00-04c2-46fe-893e-2c24a4363753)

l'explication:Lors de l'exécution du programme, il a été observé que la fonction pouvait gérer un nombre croissant de paramètres, atteignant jusqu'à 10,460,353,203 avant de provoquer une erreur de type "Memory allocation error". Cette erreur se produit en raison des limitations de la mémoire disponible et de la taille de la pile d'appels (stack) sur l'ordinateur, qui ne peut plus allouer suffisamment de mémoire pour stocker les paramètres supplémentaires. La capacité à gérer un tel volume de données dépend fortement de l'architecture de la machine et des ressources mémoire disponibles. Les résultats montrent une augmentation exponentielle du nombre de paramètres traités, indiquant que l'erreur survient lorsque la demande de mémoire dépasse les capacités allouées au programme.
