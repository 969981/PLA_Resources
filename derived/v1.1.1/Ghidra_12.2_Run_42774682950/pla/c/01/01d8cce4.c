/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d8cce4; name: FUN_01d8cce4
 */


undefined8 FUN_01d8cce4(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_04379ed8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ed8), puVar1 = PTR_DAT_043794d8, iVar2 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar2 != 0)) {
      uVar4 = FUN_0087f8f0();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)PTR_DAT_04379ee0 = puVar1;
    __cxa_guard_release(PTR_DAT_04379ed8);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_04379ee0) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


