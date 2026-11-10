/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9d30; name: FUN_004f9d30
 */


bool FUN_004f9d30(char *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,"grpc-exp",param_2);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = strncmp(param_1,"h2",param_2);
  return iVar1 == 0;
}


