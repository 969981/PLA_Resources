/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f84008; name: FUN_01f84008
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_01f84008(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar5 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0437a448 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a448), puVar3 = PTR_DAT_0437a3d0, iVar4 != 0)) {
    if (((*PTR_DAT_0437a3c8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a3c8), puVar2 = PTR_DAT_043795e0, iVar4 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar1 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar3 = puVar2;
      __cxa_guard_release(PTR_DAT_0437a3c8);
    }
    *(undefined **)PTR_DAT_0437a438 = puVar3;
    __cxa_guard_release(PTR_DAT_0437a448);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar5 == (long *)PTR_DAT_0437a438) break;
    plVar5 = (long *)*plVar5;
  }
  return param_1 + -10;
}


