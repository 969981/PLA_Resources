/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006757d8; name: FUN_006757d8
 */


void FUN_006757d8(ulong *param_1,long param_2)

{
  long *plVar1;
  void *__dest;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  
  plVar1 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    uVar3 = *(ulong *)(param_2 + 0x80);
    uVar2 = *(ulong *)(param_2 + 0x78);
    param_1[2] = *(ulong *)(param_2 + 0x88);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    return;
  }
  uVar2 = *(ulong *)(param_2 + 0x80);
  if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 0067589c to 006758a3 has its CatchHandler @ 006758a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 0x88);
  if (uVar2 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar2 << 1);
    if (uVar2 == 0) goto LAB_00675888;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[1] = uVar2;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,__src,uVar2);
LAB_00675888:
  *(undefined1 *)((long)__dest + uVar2) = 0;
  return;
}


