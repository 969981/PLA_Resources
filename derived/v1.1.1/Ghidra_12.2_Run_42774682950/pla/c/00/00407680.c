/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407680; name: FUN_00407680
 */


undefined8 FUN_00407680(uint *param_1,uint param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != (uint *)0x0) && (-1 < (int)param_2)) {
    uVar1 = *param_1;
    if ((int)uVar1 <= (int)param_2) {
      return 0;
    }
    __dest = (undefined8 *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 8);
    uVar2 = *__dest;
    if (uVar1 - 1 != param_2) {
      memmove(__dest,(void *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 8 + 8),
              -(ulong)(uVar1 + ~param_2 >> 0x1f) & 0xfffffff800000000 |
              (ulong)(uVar1 + ~param_2) << 3);
      param_2 = *param_1 - 1;
    }
    *param_1 = param_2;
  }
  return uVar2;
}


