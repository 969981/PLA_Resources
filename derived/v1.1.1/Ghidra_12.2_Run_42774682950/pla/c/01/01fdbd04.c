/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fdbd04; name: FUN_01fdbd04
 */


undefined8 * FUN_01fdbd04(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((*param_1 != 0) && (puVar9 = *(undefined8 **)(*param_1 + 0x18), puVar9 != (undefined8 *)0x0))
  {
    puVar7 = (undefined8 *)(**(code **)*puVar9)(puVar9);
    puVar1 = (undefined8 *)PTR_DAT_04381fc8;
    if (((*PTR_DAT_04381fc0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04381fc0), puVar5 = PTR_DAT_0437a1e8,
       puVar1 = (undefined8 *)PTR_DAT_04381fc8, iVar6 != 0)) {
      if (((*PTR_DAT_0437a1f8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a1f8), puVar4 = PTR_DAT_04379fe0, iVar6 != 0)) {
        if (((*PTR_DAT_04379fd8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379fd8), puVar3 = PTR_DAT_043795e0, iVar6 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar2 = PTR_DAT_043794d8, iVar6 != 0))
          {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
              uVar8 = FUN_0087f8f0();
              *(undefined8 *)puVar2 = uVar8;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar3 = puVar2;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar4 = puVar3;
          __cxa_guard_release(PTR_DAT_04379fd8);
        }
        *(undefined **)puVar5 = puVar4;
        __cxa_guard_release(PTR_DAT_0437a1f8);
      }
      puVar1 = (undefined8 *)PTR_DAT_04381fc8;
      *(undefined **)PTR_DAT_04381fc8 = puVar5;
      __cxa_guard_release(PTR_DAT_04381fc0);
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        if (puVar7 == puVar1) {
          return puVar9 + -10;
        }
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)0x0);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


