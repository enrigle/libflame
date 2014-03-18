
#include "FLAME.h"

FLA_Error FLA_Chol_solve_check( FLA_Uplo uplo, FLA_Obj A, FLA_Obj B, FLA_Obj X )
{
  FLA_Error e_val;

  e_val = FLA_Check_valid_uplo( uplo );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_floating_object( A );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_nonconstant_object( A );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_datatype( A, B );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_datatype( A, X );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_square( A );
  FLA_Check_error_code( e_val );
  
  e_val = FLA_Check_matrix_matrix_dims( FLA_NO_TRANSPOSE, FLA_NO_TRANSPOSE, A, X, B );
  FLA_Check_error_code( e_val );

  return FLA_SUCCESS;
}

