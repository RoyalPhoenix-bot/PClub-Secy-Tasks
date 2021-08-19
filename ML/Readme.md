# Various Loss Functions

## Cube loss function
After a lot of hit and trial, I found that the most optimal solution was only obtained because the dataset was self generated, I could easily take the ideal values as the beginning point of the model parameters. (Yet still the gradient could not be brought down less than 10<sup>-5</sup>).\
Taking more random starting points of the model parameters, it gives quite a bad solution and the gradient of the loss function is still far away from being zero.\
In all the cases, if the learning rate and tolerance(min value of the gradient) is taken the same as that of the Squared loss function, the gradient does not converge and starts to blow up, and gives an overflow error after a few iterations.

Even theoritically, the cube loss function(or any other loss function with power >2) might give wrong errors because its gradient becomes zero at more than a single point, thereby giving multiple local extrema at which the model can converge to.

## Linear loss function
The Linear loss function seems to be somewhat useless as the gradient is constant and does not get updated and converge.\
And the best error term obtained depends on the initial values of the model parameters.

Even theoritically, the linear loss function has a sharp turn at the "minimum" point of the model, at which the gradient won't be defined.