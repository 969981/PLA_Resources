/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0154f338; name: FUN_0154f338
 */


void FUN_0154f338(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_043c97f8 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(&DAT_043c97f8), puVar2 = PTR_DAT_0437f880, iVar3 == 0)) {
    return;
  }
  if (((*PTR_DAT_0437f878 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437f878), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
      uVar4 = FUN_0087f8f0();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_0437f878);
  }
  DAT_043c97f0 = puVar2;
  __cxa_guard_release(&DAT_043c97f8);
  return;
}


