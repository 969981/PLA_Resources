/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020d3d60; name: FUN_020d3d60
 */


undefined8 FUN_020d3d60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_04381a48 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04381a48), puVar2 = PTR_DAT_043795e0, iVar3 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
        uVar4 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)PTR_DAT_04381a50 = puVar2;
    __cxa_guard_release(PTR_DAT_04381a48);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_04381a50) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


