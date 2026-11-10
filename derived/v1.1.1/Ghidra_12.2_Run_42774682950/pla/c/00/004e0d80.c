/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e0d80; name: FUN_004e0d80
 */


void FUN_004e0d80(undefined4 *param_1,int *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_3,"RSA");
  if (iVar1 == 0) {
    *param_1 = 6;
    return;
  }
  iVar1 = strcmp(param_3,"RSA-PSS");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_3,"PSS"), iVar1 == 0)) {
    *param_1 = 0x390;
    return;
  }
  iVar1 = strcmp(param_3,"DSA");
  if (iVar1 == 0) {
    *param_1 = 0x74;
    return;
  }
  iVar1 = strcmp(param_3,"ECDSA");
  if (iVar1 == 0) {
    *param_1 = 0x198;
    return;
  }
  iVar1 = FUN_004083f0(param_3);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_004084e0(param_3);
    *param_2 = iVar1;
    return;
  }
  return;
}


