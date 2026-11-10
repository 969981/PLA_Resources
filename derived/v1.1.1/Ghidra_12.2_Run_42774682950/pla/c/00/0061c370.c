/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061c370; name: FUN_0061c370
 */


void FUN_0061c370(ulong *param_1,ulong param_2,byte *param_3,uint *param_4,ulong *param_5)

{
  ulong __n;
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  param_1[4] = param_2;
  uVar6 = (ulong)*param_4;
  uVar4 = *param_5;
  plVar2 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar2;
  bVar1 = *param_3;
  uVar5 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  __n = uVar5 - uVar6;
  if (uVar4 <= uVar5 - uVar6) {
    __n = uVar4;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0061c428;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  memcpy(__dest,pbVar3 + uVar6,__n);
LAB_0061c428:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


