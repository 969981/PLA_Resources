/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0271a9b0; name: FUN_0271a9b0
 */


undefined * FUN_0271a9b0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_04387c00 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04387c00), puVar1 = PTR_DAT_04387c08, iVar2 != 0)) {
    uVar3 = FUN_0271a914();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_04387c00);
  }
  return PTR_DAT_04387c08;
}


