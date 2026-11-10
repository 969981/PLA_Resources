/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124cb5c; name: FUN_0124cb5c
 */


undefined8 FUN_0124cb5c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0437e9d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437e9d0), iVar1 != 0))
  {
    uVar2 = FUN_01248f5c();
    *(undefined8 *)PTR_DAT_0437e9d8 = uVar2;
    __cxa_guard_release(PTR_DAT_0437e9d0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_0437e9d8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


