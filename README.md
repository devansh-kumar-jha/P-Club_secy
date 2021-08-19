### Go to the specific folder to see the specific tasks along with the README file.
### Please check the CP Folder as of now only as the rest are not completed yet.

# P-Club_secy


**TASK 1 - CRITERIONS**

Optimization problems are based on optimizing a certain function. Machine Learning often boils down to a convex optimization problem, and this is used widely - from approximating a very simple mathematical function, to predicting complex representations in images. 
Before every major library (like PyTorch) is brought to fruition, there is a lot of boilerplate that is written. There are proof of concepts written in a very shabby way, and then constructed modularly so that they can be easily extensible. Since we are beginners, we want you to do the following -
There exists a Mean Squared Error Loss function |x -  x̂|². We want you to experiment with different types of loss functions. Consider the following loss functions:
 - |x -  x̂|³
 - |x -  x̂|
 - |x -  x̂|⁴
 - |x -  x̂|⁷
We want you to train a Linear Regression model using (a.) and (b.) as criterion and a polynomial regression (2nd degree polynomial) model using (c.) and (d.) as criterion. 
You are required to not use any library like scikit-learn, torch, tensorflow or any machine learning/data science stack. You are allowed to use only numpy, pandas (won’t be needed) and matplotlib to plot your results.
You can generate your own dataset and use it to train the models.
Submission: The link to GitHub repository containing 4 separate jupyter notebooks, or 1 single notebook containing all the results. We want to see the training loops and a plot of how it performs with respect to the ground truth. A comparison of the loss functions is expected.


**TASK 2 - INFOSEC**

You are provided with a binary file here https://drive.google.com/file/d/1X2bxRgSyNrH4HighZeRjq0z4lLvAC-D5/view?usp=sharing

A flag in the form of SHA-256 is hidden in some form in this binary file. Your task is to reverse engineer the binary to get the flag. Write a detailed writeup (containing the flag) as a markdown file, push any associated code into a private github repository. 

You may use any programming language, binary exploitation tool to solve this task.


**TASK 3 - PUPPY LOVE UI**

We love it when love is in the air, but the 2010’s are long gone! Many people wanted a lovely UI for Puppy Love, and we feel that now is the time to revamp it.
What we want is for you to create a login and logged in page UI for Puppy Love. We don’t want you to worry about the server side. You can make all the assumptions you want about the server side. 
We want you guys to make the UIs, store it in a private GitHub repository and host it using GitHub pages. You can make use of other platforms for hosting too, but just make sure you don’t incur any costs because PClub won’t pay for them xD.
The main thing is - we should be able to see a proof of concept. 
Link to GitHub repository, and the link to where it is hosted.


**TASK 4 - STUDENT SEARCH**

Everyone loves Student Search! It is by far the most popular project of the campus community, and we want to make it better.
Our coordie Som comes from Maharashtra, and so his name has a middle name: 
Som Vishwas Tambe. OARs stores the name in a single name field. Therefore, if you search for Som Tambe, you won’t get Som. Therefore, most people won’t be able to find Som in the directory. Similarly, our friends from Gujarat with names in the format Tambe Som Vishwas also face a similar problem, when typed as Som Tambe. You get it right!
There exists an issue for this opened by PClub Legend Bhuvan here - https://github.com/pclubiitk/student-search/issues/26
What we want to do is to create a fork of the repo, and resolve the relevant changes mentioned in the issue. After you do that, we want you to create an issue in that fork of yours titled PClub Task submission, and in the description, we want you to mention Bhuvan’s issue opened in the PClub Student Search repo that I have mentioned above.
Submission: Link to GitHub issue on your fork. 


**TASK 5 - MOOKIT SCRAPING**

This is purely a scripting task. We want you to provide us with a script which scrapes the latest `n` lectures from MOOKIT for a course, where `n` is an argument provided by the user himself.
Now what should it scrape? Scrape the name of the lecture, the week, and possibly the link to the lecture if possible. Output the data to a CSV file. 
You may use python scraping libraries, but brownie points to those who do this using regex. You may use another language as a whole for the task. We love surprises, and more importantly people who surprise us.
Submission: Link to private GitHub repo which contains the script. The GitHub repo should contain a README of how you operated it, and what were the results. The CSV containing the results should also be present in the repo. Also make sure not to include any login credentials in the code.


**TASK 6 - CP**

Propose a competitive programming problem in a format similar to the problem statements in Codeforces. The problem statement needs to be written as a markdown file.

Write accompanying code to generate the test cases (which follow the constraints proposed earlier), also code the solution to your proposed problem. Both these files should be in C++. Write editorial to your problem, again formatted as markdown (use latex wherever necessary).

Your submission will be judged according to the novelty and originality of your problem, the problem should not be taken from any source.
Push these files in a private GitHub repository.
