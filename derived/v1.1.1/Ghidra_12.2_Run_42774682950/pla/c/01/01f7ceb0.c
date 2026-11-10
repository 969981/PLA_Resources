/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f7ceb0; name: FUN_01f7ceb0
 */


undefined8 FUN_01f7ceb0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_04382d68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04382d68), iVar1 != 0))
  {
    uVar2 = FUN_01e3a060();
    *(undefined8 *)PTR_DAT_04382d70 = uVar2;
    __cxa_guard_release(PTR_DAT_04382d68);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_04382d70) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


