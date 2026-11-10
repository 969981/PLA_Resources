/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015207a8; name: FUN_015207a8
 */


undefined8 FUN_015207a8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_0437f9b0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437f9b0), puVar1 = PTR_DAT_043794d8, iVar2 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar2 != 0)) {
      uVar3 = FUN_0087f8f0();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)PTR_DAT_0437f9b8 = puVar1;
    __cxa_guard_release(PTR_DAT_0437f9b0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_0437f9b8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


