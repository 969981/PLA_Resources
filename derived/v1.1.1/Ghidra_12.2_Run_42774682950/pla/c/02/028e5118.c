/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e5118; name: FUN_028e5118
 */


undefined * FUN_028e5118(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (((*PTR_DAT_04388008 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04388008), puVar4 = PTR_DAT_04388010,
     puVar2 = PTR_DAT_04379d18, iVar5 != 0)) {
    if (((*PTR_DAT_04379d10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d10), puVar3 = PTR_DAT_04379d28, iVar5 != 0)) {
      if (((*PTR_DAT_04379d20 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d20), puVar1 = PTR_DAT_043794d8, iVar5 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(PTR_DAT_04379d20);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_04379d10);
    }
    *(undefined **)puVar4 = puVar2;
    __cxa_guard_release(PTR_DAT_04388008);
  }
  return PTR_DAT_04388010;
}


