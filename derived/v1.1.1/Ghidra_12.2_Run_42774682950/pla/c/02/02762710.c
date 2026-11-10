/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762710; name: FUN_02762710
 */


ulong * FUN_02762710(ulong *param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *__dest;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar2 = 0x16;
    if (0x16 < param_3) {
LAB_02762764:
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = param_1[1];
      }
      FUN_027627d4(param_1,uVar2,param_3 - uVar2,uVar3,uVar3,param_3);
      return param_1;
    }
  }
  else {
    uVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar2 < param_3) goto LAB_02762764;
  }
  if ((bVar1 & 1) == 0) {
    __dest = (byte *)((long)param_1 + 1);
  }
  else {
    __dest = (byte *)param_1[2];
  }
  if (param_3 != 0) {
    memmove(__dest,param_2,param_3);
  }
  __dest[param_3] = 0;
  if ((*param_1 & 1) == 0) {
    *(byte *)param_1 = (byte)((int)param_3 << 1);
  }
  else {
    param_1[1] = param_3;
  }
  return param_1;
}


