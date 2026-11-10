/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1a2c; name: FUN_007f1a2c
 */


void FUN_007f1a2c(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 9);
    do {
      uVar1 = param_3;
      if (0x40 - uVar3 <= param_3) {
        uVar1 = 0x40 - uVar3;
      }
      memcpy((void *)((long)param_1 + (ulong)uVar3 + 8),param_2,(ulong)uVar1);
      uVar3 = uVar1 + (int)param_1[9];
      param_2 = (void *)((long)param_2 + (ulong)uVar1);
      param_3 = param_3 - uVar1;
      *(uint *)(param_1 + 9) = uVar3;
      if (0x3f < uVar3) {
        (**(code **)(*param_1 + 0x38))(param_1);
        iVar2 = *(int *)((long)param_1 + 0x4c);
        uVar3 = 0;
        *(undefined4 *)(param_1 + 9) = 0;
        *(int *)((long)param_1 + 0x4c) = iVar2 + 1;
        if (iVar2 == -1) {
          uVar3 = 0;
          *(int *)(param_1 + 10) = (int)param_1[10] + 1;
        }
      }
    } while (param_3 != 0);
  }
  return;
}


