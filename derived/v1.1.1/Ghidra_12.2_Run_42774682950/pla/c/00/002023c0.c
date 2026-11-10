/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002023c0; name: FUN_002023c0
 */


void FUN_002023c0(uint *param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint *__dest;
  ulong uVar3;
  uint uVar4;
  size_t __n;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar1 = uVar2 + (uint)param_3 & 0x1fffffff;
  *param_1 = uVar1;
  if (uVar1 < uVar2) {
    uVar4 = uVar4 + 1;
    param_1[1] = uVar4;
  }
  uVar3 = (ulong)uVar2 & 0x3f;
  param_1[1] = uVar4 + ((uint)param_3 >> 0x1d);
  if ((int)uVar3 != 0) {
    __n = 0x40 - uVar3;
    __dest = (uint *)((long)param_1 + uVar3 + 0x18);
    if (param_3 < __n) goto LAB_0020246c;
    memcpy(__dest,param_2,__n);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - __n;
    FUN_00202790(param_1,param_1 + 6,0x40);
  }
  if (0x3f < param_3) {
    param_2 = (void *)FUN_00202790(param_1,param_2,param_3 & 0xffffffffffffffc0);
    param_3 = param_3 & 0x3f;
  }
  __dest = param_1 + 6;
LAB_0020246c:
  memcpy(__dest,param_2,param_3);
  return;
}


