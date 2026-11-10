/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ede04; name: FUN_007ede04
 */


void FUN_007ede04(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 3) & 0x3f;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) + param_3;
  uVar2 = 0x40 - (int)uVar3;
  if (param_3 < uVar2) {
    if (param_3 == 0) {
      return;
    }
    __dest = (void *)((long)param_1 + uVar3 + 0x1c);
  }
  else {
    __dest = (void *)((long)param_1 + 0x1c);
    memcpy((void *)((long)__dest + uVar3),param_2,(ulong)uVar2);
    (**(code **)(*param_1 + 0x38))(param_1);
    param_2 = (void *)((ulong)uVar2 + (long)param_2);
    uVar1 = param_3 - uVar2 >> 6;
    uVar3 = (ulong)uVar1;
    if (uVar1 != 0) {
      do {
        memcpy(__dest,param_2,0x40);
        param_2 = (void *)((long)param_2 + 0x40);
        (**(code **)(*param_1 + 0x38))(param_1);
        uVar3 = uVar3 - 1;
      } while (0 < (long)uVar3);
    }
    param_3 = param_3 - uVar2 & 0x3f;
    if (param_3 == 0) {
      return;
    }
  }
  memcpy(__dest,param_2,(ulong)param_3);
  return;
}


