
# VectorNeumannBC
!syntax description /BCs/VectorNeumannBC

## Description
`VectorNeumannBC` is an `IntegratedBC` which weakly imposes the flux boundary
condition $\frac{\partial u}{\partial n} = \vec{V}\cdot\hat{n}$, where the user
specifies the vector $\vec{V}$ and the unit normal vector $\hat{n}$ is
determined by the geometry of the domain $\Omega$. This class is
appropriate to use in systems of partial differential equations (PDEs) of the form
\begin{alignat}{2}
  -\nabla^2 u &= f && \quad \in \Omega \\
  u &= g && \quad \in \partial \Omega_D \\
  \frac{\partial u}{\partial n} &= \vec{V} \cdot \hat{n} && \quad \in \partial \Omega_N
\end{alignat}

!!!note
    There is not a 1:1 correspondence between the choice of
    $\vec{V}$ and the resulting solution, since the component of $\vec{V}$
    which is orthogonal to the outward normal vector will not have any
    effect on the result.

This class exists mainly for convenience: if the true
solution has a constant flux, then it is easier to specify Neumann boundary
conditions on parts of the boundary with different outward normal vectors
by simply specifying the true constant flux vector, and allowing MOOSE to
dot it with the appropriate outward normals as necessary.


## Example Input Syntax
!listing test/tests/bcs/misc_bcs/vector_neumann_bc_test.i start=[./top] end=[../] include-end=true

!syntax parameters /BCs/VectorNeumannBC

!syntax inputs /BCs/VectorNeumannBC

!syntax children /BCs/VectorNeumannBC
