/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd5410; name: FUN_02cd5410
 */


void FUN_02cd5410(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((DAT_04408c20 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(&DAT_04408c20), puVar1 = PTR_DAT_043782a8, iVar3 == 0)) {
    return;
  }
  if (((*PTR_DAT_043782a0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_043782a0), puVar2 = PTR_DAT_043782b8, iVar3 != 0)) {
    if (((*PTR_DAT_043782b0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043782b0), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_043782b0);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_043782a0);
  }
  DAT_04408c18 = puVar1;
  __cxa_guard_release(&DAT_04408c20);
  return;
}


