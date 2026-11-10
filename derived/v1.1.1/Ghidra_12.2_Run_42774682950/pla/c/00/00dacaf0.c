/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dacaf0; name: FUN_00dacaf0
 */


undefined8 FUN_00dacaf0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar2 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar2;
  if (((lVar2 != 0) && (lVar2 = FUN_00d9f320(), lVar2 != 0)) &&
     (plVar3 = (long *)FUN_00d9a98c(lVar2,0), plVar3 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar3 + 0x40))();
    if (iVar1 - 1U < 5) {
      return *(undefined8 *)(&DAT_03a786b8 + (long)(int)(iVar1 - 1U) * 8);
    }
  }
  return 0;
}


