/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016c1e60; name: FUN_016c1e60
 */


undefined8 * FUN_016c1e60(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_043807a0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_043807a0), puVar2 = PTR_DAT_0437ef00, iVar3 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437eef8), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
        uVar5 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)PTR_DAT_043807a8 = puVar2;
    __cxa_guard_release(PTR_DAT_043807a0);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar4 == (long *)PTR_DAT_043807a8) break;
    plVar4 = (long *)*plVar4;
  }
  return param_1 + -10;
}


