Lors de la création de la DLL j'ai rencontré plus de difficulté car la structure pour créer une DLL est assez différente
d'une librairie statique. Il faut également faire attention a placer correctement le fichier .dll en plus du .lib dans
le projet cible. Mais en contre-partie l'utilisation d'une Dll dans un projet cible, une fois ce dernier configuré
correctement, est bien plus simple a utiliser dans l'appel de ses fonctions qu'une librairie statique.