/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0151a798; name: FUN_0151a798
 */


undefined8 FUN_0151a798(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0437f940 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437f940), puVar2 = PTR_DAT_0437f880, iVar3 != 0)) {
    if (((*PTR_DAT_0437f878 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437f878), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
        uVar5 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_0437f878);
    }
    *(undefined **)PTR_DAT_0437f948 = puVar2;
    __cxa_guard_release(PTR_DAT_0437f940);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    if (plVar4 == (long *)PTR_DAT_0437f948) break;
    plVar4 = (long *)*plVar4;
  }
  return 1;
}


