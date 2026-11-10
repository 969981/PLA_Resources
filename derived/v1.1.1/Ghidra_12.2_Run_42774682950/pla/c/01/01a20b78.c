/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a20b78; name: FUN_01a20b78
 */


undefined * FUN_01a20b78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (((*PTR_DAT_0437a1e0 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a1e0), puVar5 = PTR_DAT_0437a1f0,
     puVar4 = PTR_DAT_0437a1e8, iVar6 != 0)) {
    if (((*PTR_DAT_0437a1f8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a1f8), puVar3 = PTR_DAT_04379fe0, iVar6 != 0)) {
      if (((*PTR_DAT_04379fd8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379fd8), puVar2 = PTR_DAT_043795e0, iVar6 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar1 = PTR_DAT_043794d8, iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar7 = FUN_0087f8f0();
            *(undefined8 *)puVar1 = uVar7;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_04379fd8);
      }
      *(undefined **)puVar4 = puVar3;
      __cxa_guard_release(PTR_DAT_0437a1f8);
    }
    *(undefined **)puVar5 = puVar4;
    __cxa_guard_release(PTR_DAT_0437a1e0);
  }
  return PTR_DAT_0437a1f0;
}


