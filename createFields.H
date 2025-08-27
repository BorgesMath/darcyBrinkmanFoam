Info<< "Reading transportProperties\n" << endl;

IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);

dimensionedScalar nu
(
    "nu",
    dimViscosity,
    transportProperties
);


// PROPRIEDADES DE PROPROSIDADE!!!

IOdictionary porousProperties
(
    IOobject
    (
        "porousProperties",
        "constant",
        mesh,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);


dimensionedScalar K
(
    "K",
    porousProperties.subDict("porousRegion").get<scalar>("K")
);
K.dimensions().reset(dimensionSet(0, 2, 0, 0, 0)); // TA EM METROS QUADRADOS
// AQUI TO DEFININDO, VOU USAR SO DPS 

Info<< "Reading field p\n" << endl;
volScalarField p
(
    IOobject
    (
        "p",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);


Info<< "Reading field U\n" << endl;
volVectorField U
(
    IOobject
    (
        "U",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);


#include "createPhi.H"


label pRefCell = 0;
scalar pRefValue = 0.0;
setRefCell(p, mesh.solutionDict().subDict("PISO"), pRefCell, pRefValue);
mesh.setFluxRequired(p.name());
