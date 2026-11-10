/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00612330; name: FUN_00612330
 */


undefined ** FUN_00612330(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((DAT_0439f420 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_0439f420), iVar1 == 0)) {
    return DAT_0439f418;
  }
  plVar2 = (long *)FUN_006126f0();
  uVar3 = (**(code **)(*plVar2 + 0x28))();
  if (uVar3 < 0x1000) {
    if (((DAT_0439f400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439f400), iVar1 != 0)) {
      __cxa_guard_release(&DAT_0439f400);
    }
    DAT_0439f418 = &PTR_PTR_041909e0;
  }
  else if (((DAT_0439f3f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439f3f8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0439f3f8);
    DAT_0439f418 = &PTR_PTR_041909d8;
  }
  else {
    DAT_0439f418 = &PTR_PTR_041909d8;
  }
  __cxa_guard_release(&DAT_0439f420);
  return DAT_0439f418;
}


