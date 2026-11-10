/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e073d0; name: FUN_02e073d0
 */


undefined8 FUN_02e073d0(int *param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  
  __src = *(void **)(param_1 + 4);
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = param_1[3];
  if ((param_4 & 1) == 0) {
    if (uVar1 < param_3) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    if (param_3 - uVar1 != 0) {
      memset((void *)((long)param_2 + (ulong)uVar1 * 4),0,(ulong)((param_3 - uVar1) * 4));
    }
  }
  uVar2 = *param_1 - param_1[2];
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = uVar2;
  }
  memcpy(param_2,(void *)((long)__src + (ulong)(uint)param_1[2] * 4),(ulong)(uVar1 << 2));
  if (param_3 - uVar1 != 0) {
    memcpy((void *)((long)param_2 + (ulong)uVar1 * 4),__src,(ulong)((param_3 - uVar1) * 4));
  }
  return 1;
}


