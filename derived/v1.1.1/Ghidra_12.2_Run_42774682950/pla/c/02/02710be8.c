/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02710be8; name: FUN_02710be8
 */


undefined * FUN_02710be8(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_04387bc0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04387bc0), puVar1 = PTR_DAT_04387bc8, iVar2 != 0)) {
    uVar3 = FUN_02710b4c();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_04387bc0);
  }
  return PTR_DAT_04387bc8;
}


