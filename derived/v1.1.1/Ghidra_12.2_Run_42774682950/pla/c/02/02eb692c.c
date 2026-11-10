/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb692c; name: FUN_02eb692c
 */


int FUN_02eb692c(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) == param_2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
  }
  else {
    FUN_02ee0bf4(DAT_0440a160,param_1);
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
  }
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_02edfeb8(DAT_0440a160,param_1,param_2,param_3);
    if (iVar1 != 1) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  FUN_02eb5c1c(param_1,0,0);
  return iVar1;
}


