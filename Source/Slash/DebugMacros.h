#pragma once

#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, true);
#define DRAW_SPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, false, -1.f);
#define DRAW_LINE(StartLocation, EndLocation)  if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_LINE_SingleFrame(StartLocation, EndLocation)  if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);
#define DRAW_POINT_SingleFrame(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f);
#define DRAW_CAPSULE(Location) if (GetWorld()) DrawDebugCapsule(GetWorld(), Location, 100, 50, FQuat::Identity, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_CAPSULE_SingleFrame(Location) if (GetWorld()) DrawDebugCapsule(GetWorld(), Location, 100, 50, FQuat::Identity, FColor::Red, false, -1.f, 0, 1.f);
#define DRAW_BOX(Location, Extent) if (GetWorld()) DrawDebugBox(GetWorld(), Location, Extent, FColor::Red, true);
#define DRAW_BOX_SingleFrame(Location, Extent) if (GetWorld()) DrawDebugBox(GetWorld(), Location, Extent, FColor::Red, false, -1.f);
#define DRAW_ARROW(StartLocation, EndLocation) if (GetWorld()) DrawDebugDirectionalArrow(GetWorld(), StartLocation, EndLocation, 60.f, FColor::Red, true, -1,f, 0,1.f);
#define DRAW_ARROW_SingleFrame(StartLocation, EndLocation) if (GetWorld()) DrawDebugDirectionalArrow(GetWorld(), StartLocation, EndLocation, 60.f, FColor::Red, false, -1.f, 0,1.f);
#define DRAW_CONE(StartLocation, EndLocation) if (GetWorld()) DrawDebugCone(GetWorld(),StartLocation,EndLocation*100.f,125.f,115.f,215.f,4,FColor::Red,true,-1.f,0,10.f);
#define DRAW_CONE_SingleFrame(StartLocation, EndLocation) if (GetWorld()) DrawDebugCone(GetWorld(),StartLocation,EndLocation*100.f,125.f,115.f,215.f,4,FColor::Red,false,-1.f,0,10.f);

#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
{	\
	 DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
	 DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true); \
}

#define DRAW_VECTOR_SingleFrame(StartLocation, EndLocation) if (GetWorld()) \
{	\
	 DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f); \
	 DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, false, 1.f); \
}
