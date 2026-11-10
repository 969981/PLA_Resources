/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bde78c; name: FUN_02bde78c
 */


void FUN_02bde78c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_043f2010 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_043f2010), iVar2 == 0)) {
    return;
  }
  if (((DAT_043f1ff0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_043f1ff0), puVar1 = PTR_DAT_043794d8, iVar2 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar2 != 0)) {
      uVar3 = FUN_0087f8f0();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    DAT_043f1fe8 = puVar1;
    __cxa_guard_release(&DAT_043f1ff0);
  }
  DAT_043f2008 = &DAT_043f1fe8;
  __cxa_guard_release(&DAT_043f2010);
  return;
}


