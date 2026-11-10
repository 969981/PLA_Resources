/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0f7d4; name: FUN_01a0f7d4
 */


undefined8 FUN_01a0f7d4(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_043823e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043823e0), iVar1 != 0))
  {
    uVar2 = FUN_01a0f868();
    *(undefined8 *)PTR_DAT_043823e8 = uVar2;
    __cxa_guard_release(PTR_DAT_043823e0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_043823e8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


