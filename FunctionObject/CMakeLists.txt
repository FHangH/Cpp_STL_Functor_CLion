cmake_minimum_required(VERSION 3.20)
project(FunctionObject)

set(CMAKE_CXX_STANDARD 14)

#Functor Base
#add_executable(FunctionObject Functor_Base/Functor_BasicUse.cpp)

#Functor Predicate
#add_executable(FunctionObject Functor_Predicate/Functor_UnaryPredicate.cpp)
#add_executable(FunctionObject Functor_Predicate/Functor_BinaryPredicate.cpp)

#Functor Functional
#add_executable(FunctionObject Functor_Functional/Functor_Arithmetic.cpp)
#add_executable(FunctionObject Functor_Functional/Functor_Relation.cpp)
add_executable(FunctionObject Functor_Functional/Functor_Logic.cpp)