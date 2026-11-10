/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b65f6c; name: FUN_00b65f6c
 */


undefined * FUN_00b65f6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (((*PTR_DAT_043795a8 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_043795a8), puVar3 = PTR_DAT_043795c0,
     puVar2 = PTR_DAT_043795b0, iVar6 != 0)) {
    if (((*PTR_DAT_043795b8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043795b8), puVar4 = PTR_DAT_043795d0, iVar6 != 0)) {
      if (((*PTR_DAT_043795c8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043795c8), puVar5 = PTR_DAT_043795e0, iVar6 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar1 = PTR_DAT_043794d8, iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar7 = FUN_0087f8f0();
            *(undefined8 *)puVar1 = uVar7;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar5 = puVar1;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar4 = puVar5;
        __cxa_guard_release(PTR_DAT_043795c8);
      }
      *(undefined **)puVar3 = puVar4;
      __cxa_guard_release(PTR_DAT_043795b8);
    }
    *(undefined **)puVar2 = puVar3;
    __cxa_guard_release(PTR_DAT_043795a8);
  }
  return PTR_DAT_043795b0;
}


