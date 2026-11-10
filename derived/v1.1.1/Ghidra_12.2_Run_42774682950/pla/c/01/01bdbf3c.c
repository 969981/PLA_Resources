/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdbf3c; name: FUN_01bdbf3c
 */


void FUN_01bdbf3c(long param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x228) = uVar1;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x228) = uVar1;
    FUN_01bdb280(uVar1,param_1);
    if (*(int *)(param_1 + 0x210) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 0;
    FUN_01bdb280(0,param_1);
    if (*(int *)(param_1 + 0x210) == param_2) {
      return;
    }
    *(int *)(param_1 + 0x210) = param_2;
  }
  FUN_01bdb4e8(param_1);
  return;
}


