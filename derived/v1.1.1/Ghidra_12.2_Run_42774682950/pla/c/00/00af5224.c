/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af5224; name: FUN_00af5224
 */


void FUN_00af5224(long param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  *(int *)(param_1 + 0x24c) = param_2;
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x244);
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x240) = 0;
    }
    else {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x240) = 2;
        fVar2 = *(float *)(param_1 + 0x2d0);
        *(undefined2 *)(param_1 + 0x260) = 0;
        goto LAB_00af5240;
      }
      if (iVar1 != 1) {
        return;
      }
      *(undefined2 *)(param_1 + 0x260) = 1;
      *(undefined4 *)(param_1 + 0x240) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x2c8);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x240) = 1;
    fVar2 = *(float *)(param_1 + 0x2cc);
    *(undefined2 *)(param_1 + 0x260) = 0;
  }
LAB_00af5240:
  *(float *)(param_1 + 700) = fVar2;
  *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x2d4) * fVar2;
  FUN_00af52e8();
  return;
}


