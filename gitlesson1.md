## LESSON 1 : STARTING AND USING GIT ( UBUNTU 14.04 )

### STEPS INVOLVED
    1. INSTALL GIT
    2. OPEN GIT HELP 
    3. CONFIGURE GIT
    4. PROJECT CREATION AND 
      A. INITIALIZE GIT
      B. CLONE GIT PROJECT
    5. TRACK FILE
    6. UNTRACK FILE
    7. COMMIT TO GIT SERVER
    8. REMOTE ADD
    9. PUSH TO GIT SERVER
   
   
### STEP 1 : INSTALL GIT
    apt-get install git
   
### STEP 2 : OPEN GIT HELP
    type 'git' on the terminal
  
### STEP 3 : CONFIGURE GIT
    git config --global user.name "Type your user name here"
    git config --global user.email "Type your user email id"
  

### STEP 4 : PROJECT CREATION
    A. Create directory , change directory , initialize
       mkdir directory
       cd directory
       git init
  
    B. Clone git project
       git clone https://github.com/eshani97/myproject mypath/myproject.git
    
### STEP 5 : TRACK FILE
    git add filename
    git add .
    git add -U
    git add -A
  
  
### STEP 6 : UNTRACK FILE
    echo 'myfile' >> .gitignore
  
### STEP 7 : COMMIT
    git commit -m "first commit"
    
### STEP 8 : REMOTE ADD
    git remote add origin https://github.com/eshani97/TEST1.git ( that is )
    git remote add origin https://github.com/username/repositoryname.git
    
### STEP 9 : PUSH
    git push -u origin master ( if pushing first file )
    git push
  




  

  
