/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d35700; name: FUN_00d35700
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00d35700(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar6 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0437b278 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b278), puVar2 = PTR_DAT_0437b290, iVar5 != 0)) {
    if (((*PTR_DAT_0437b288 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b288), puVar3 = PTR_DAT_0437b2a0, iVar5 != 0)) {
      if (((*PTR_DAT_0437b298 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b298), puVar4 = PTR_DAT_0437b2b0, iVar5 != 0)) {
        if (((*PTR_DAT_0437b2a8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b2a8), puVar1 = PTR_DAT_043794d8, iVar5 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
            uVar7 = FUN_0087f8f0();
            *(undefined8 *)puVar1 = uVar7;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(PTR_DAT_0437b2a8);
        }
        *(undefined **)puVar3 = puVar4;
        __cxa_guard_release(PTR_DAT_0437b298);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_0437b288);
    }
    *(undefined **)PTR_DAT_0437b280 = puVar2;
    __cxa_guard_release(PTR_DAT_0437b278);
  }
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar6 == (long *)PTR_DAT_0437b280) break;
    plVar6 = (long *)*plVar6;
  }
  return param_1 + -10;
}


