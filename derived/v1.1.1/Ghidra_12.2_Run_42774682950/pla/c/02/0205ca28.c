/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0205ca28; name: FUN_0205ca28
 */


undefined8 FUN_0205ca28(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  puVar1 = PTR_DAT_04379f80;
  if (((*PTR_DAT_04379f78 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379f78), puVar2 = PTR_DAT_043794d8,
     puVar1 = PTR_DAT_04379f80, iVar3 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
      uVar5 = FUN_0087f8f0();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    puVar1 = PTR_DAT_04379f80;
    *(undefined **)PTR_DAT_04379f80 = puVar2;
    __cxa_guard_release(PTR_DAT_04379f78);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    if (plVar4 == (long *)puVar1) break;
    plVar4 = (long *)*plVar4;
  }
  return 1;
}


