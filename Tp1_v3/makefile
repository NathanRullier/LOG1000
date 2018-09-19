src_dir = src
build_dir = build
date_dir = data
site_dir = site
trg = $(build_dir)/$(PRJ_NAME)
PRJ_NAME = pari
CXXFLAGS= -W -Wall -ansi -pedantic
CXX = g++

all : $(trg)

# HashMap.o SomeKeyHash.o main.o
$(trg) : $(build_dir)/*.o
	$(CXX) *.o -o $(PRJ_NAME)
	@echo "\n L'exécutable" $(PRJ_NAME) "a été créé! \n"  

# $(src_dir)/HashNode.h semble permettre la compilation simultanée du header
# ajouter $(CXXFLAGS) après $(CXX) -c $^ pour avoir les warnings
$(build_dir)/*.o : $(src_dir)/*.cpp
	@mkdir -p $(@D)
	@echo "\n Dossier build créé! \n"
	$(CXX) -c $^
	@echo "\n Les fichiers .o ont été créés! \n"
	

clean :
	rm *.o $(PRJ_NAME)

# en ajoutant all devant clean, on refait le build puis on l'efface
# cela nous permet de ne pas avoir l'erreur de retirer un fichier inexsitant...
# IMP!!! Rechanger c pour mrproper avant la remise
c : all clean 
	rm -rf $(build_dir)/

