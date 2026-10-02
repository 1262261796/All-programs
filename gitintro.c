// git status
// git add .
// git commit


// mkdir project 1 , cd project 1, git init to initialize
//                                 a new git repository
// git add . to add all files to the staging area
// git commit -m "initial commit" to commit the changes with a message
// 


// type nul > 'project 1.c' to create a new file using cmd
// git add . to add all files in that folder to the staging area
// git add 'file name' to add a specific file to the staging area

//to commit a change is to store a version of ur file into git history
// git add 'file name' 
// git commit -m "message" to commit the changes with a message

// when we use push we update the remote repository with our local changes
// git push origin update-name to push the changes to 
// the remote repository on the main branch
//

// git pull origin update-name to pull the changes from 
// the remote repository to your local repository

// git show displays all the changes made in the last commit together
// with the commit message and the author, time of the commit

// git flow is :
// git clone
// git checkout -b new-branch-name to create a new branch and switch to it
// git add . to add all files to the staging area
// git commit -m "message" to commit the changes with a message
// git push origin new-branch-name to push the changes to the remote repository on the new branch
// open a Pull Request on GitHub to merge the changes from the new branch to the main branch
// merge Pull Request and delete the branch

#include<stdio.h>
int main(){

printf("Hello World \n");

printf("Hello Git \n");

return 0;
}