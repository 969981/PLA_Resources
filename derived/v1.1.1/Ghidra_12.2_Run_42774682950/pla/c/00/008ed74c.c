/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ed74c; name: FUN_008ed74c
 */


undefined8 FUN_008ed74c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04379b88 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379b88);
    if (iVar1 != 0) {
      uVar2 = FUN_008ecc30();
      *(undefined8 *)PTR_DAT_04379b90 = uVar2;
      __cxa_guard_release(PTR_DAT_04379b88);
    }
  }
  return *(undefined8 *)PTR_DAT_04379b90;
}


