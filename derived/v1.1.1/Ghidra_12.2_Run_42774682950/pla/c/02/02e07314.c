/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e07314; name: FUN_02e07314
 */


uint FUN_02e07314(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  
  __dest = *(void **)(param_1 + 4);
  uVar1 = *param_1 - param_1[3];
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  uVar3 = 0;
  if ((param_2 != (void *)0x0) && (uVar1 != 0)) {
    uVar2 = *param_1 - param_1[1];
    uVar3 = uVar1;
    if (uVar2 <= uVar1) {
      uVar3 = uVar2;
    }
    if (uVar3 != 0) {
      memcpy((void *)((long)__dest + (ulong)param_1[1] * 4),param_2,(ulong)(uVar3 << 2));
    }
    if (uVar1 - uVar3 != 0) {
      memcpy(__dest,(void *)((long)param_2 + (ulong)uVar3 * 4),(ulong)((uVar1 - uVar3) * 4));
    }
    uVar3 = *param_1;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = (param_1[1] + uVar1) / uVar3;
    }
    param_1[1] = (param_1[1] + uVar1) - uVar2 * uVar3;
    param_1[3] = param_1[3] + uVar1;
    uVar3 = uVar1;
  }
  return uVar3;
}


