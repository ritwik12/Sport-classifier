# Sport-classifier

it is an Implementation of Pattern classification.

# What it can do?

Just give some hint about a sport and it will try to guess the sport about which you are talking.
# How it works?
The pattern classification algorithm is somewhat like [Naive Bayes Classifier](https://en.wikipedia.org/wiki/Naive_Bayes_classifier).
The difference is that instead of classifying based on the probability of each and every word, we are classifying user's sentence based on the score of each and every word when compared with our training sets.

# Pattern Classification

Given a set of sentences, each belonging to a class, and a new input sentence, we can count the occurrence of each word in each class, account for its commonality and assign each class a score. Factoring for commonality is important: matching the word “it” is considerably less meaningful than a match for the word “cheese”. The class with the highest score is the one most likely to belong to the input sentence. This is a slight oversimplification as words need to be reduced to their stems, but you get the basic idea.

A sample training set:


![ai sample](https://user-images.githubusercontent.com/20038775/32407882-50b9dc54-c1b5-11e7-9b61-5617e1c849ba.png)

Let’s classify a few sample input sentences:

![screenshot from 2017-11-04 23 08 21](https://user-images.githubusercontent.com/20038775/32407872-1df10b26-c1b5-11e7-988b-d6ec965761f7.png)

Notice that the classification for “What’s it like outside” found a term in another class but the term similarities to the desired class produced a higher score. By using an equation we are looking for word matches given some sample sentences for each class, and we avoid having to identify every pattern.

# See it working
![1](https://user-images.githubusercontent.com/20038775/34358819-f1415274-ea78-11e7-80bc-b9b7a2ce0ec8.png)
![2](https://user-images.githubusercontent.com/20038775/34358820-f193a402-ea78-11e7-9313-a61b38e01f35.png)
![3](https://user-images.githubusercontent.com/20038775/34358821-f1e60314-ea78-11e7-9302-bc13e23e4ff8.png)
![4](https://user-images.githubusercontent.com/20038775/34358824-f2398084-ea78-11e7-949c-e68d7e51d5eb.png)
![5](https://user-images.githubusercontent.com/20038775/34358825-f2848fde-ea78-11e7-932f-6c1c4d290400.png)
