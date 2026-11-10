/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423f20; name: FUN_00423f20
 */


undefined8 FUN_00423f20(undefined8 *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar2 = FUN_0041cbf0(*param_1);
    iVar1 = *(int *)(param_1 + 0x11);
    uVar5 = (ulong)iVar2;
    if (0 < iVar1) {
      uVar4 = uVar5 - (long)iVar1;
      __n = param_3;
      if (uVar4 <= param_3) {
        __n = uVar4;
      }
      memcpy((void *)((long)param_1 + (long)iVar1 + 0x68),param_2,__n);
      param_3 = param_3 - __n;
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)__n;
      if (param_3 == 0) {
        return 1;
      }
      uVar3 = FUN_0041cc00(*param_1,param_1 + 9,param_1 + 0xd,iVar2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_2 = (void *)((long)param_2 + __n);
    }
    if (uVar5 < param_3) {
      do {
        uVar3 = FUN_0041cc00(*param_1,param_1 + 9,param_2,iVar2);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        param_3 = param_3 - uVar5;
        param_2 = (void *)((long)param_2 + uVar5);
      } while (uVar5 < param_3);
    }
    memcpy(param_1 + 0xd,param_2,param_3);
    *(int *)(param_1 + 0x11) = (int)param_3;
  }
  return 1;
}


