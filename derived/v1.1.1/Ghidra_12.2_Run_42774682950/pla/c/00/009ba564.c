/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009ba564; name: FUN_009ba564
 */


undefined8 FUN_009ba564(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0437a338 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a338), iVar1 != 0))
  {
    uVar2 = FUN_009ba604();
    *(undefined8 *)PTR_DAT_0437a340 = uVar2;
    __cxa_guard_release(PTR_DAT_0437a338);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_0437a340) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


