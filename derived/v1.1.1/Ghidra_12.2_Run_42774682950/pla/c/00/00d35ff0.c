/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d35ff0; name: FUN_00d35ff0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00d35ff0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar5 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0437b288 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b288), puVar2 = PTR_DAT_0437b2a0, iVar4 != 0)) {
    if (((*PTR_DAT_0437b298 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b298), puVar3 = PTR_DAT_0437b2b0, iVar4 != 0)) {
      if (((*PTR_DAT_0437b2a8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b2a8), puVar1 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(PTR_DAT_0437b2a8);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_0437b298);
    }
    *(undefined **)PTR_DAT_0437b290 = puVar2;
    __cxa_guard_release(PTR_DAT_0437b288);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar5 == (long *)PTR_DAT_0437b290) break;
    plVar5 = (long *)*plVar5;
  }
  return param_1 + -10;
}


