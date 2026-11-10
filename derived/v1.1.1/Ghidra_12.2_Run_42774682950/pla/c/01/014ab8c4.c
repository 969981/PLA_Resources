/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ab8c4; name: FUN_014ab8c4
 */


void FUN_014ab8c4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_043c3f40 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_043c3f40), puVar1 = PTR_DAT_04379c98, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar2 != 0))
  {
    uVar3 = FUN_009311a8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  DAT_043c3f38 = puVar1;
  __cxa_guard_release(&DAT_043c3f40);
  return;
}


