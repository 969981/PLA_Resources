/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086633c; name: FUN_0086633c
 */


undefined * FUN_0086633c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_04378280 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04378280), puVar2 = PTR_DAT_04378298,
     puVar1 = PTR_DAT_04378288, iVar5 != 0)) {
    if (((*PTR_DAT_04378290 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04378290), puVar3 = PTR_DAT_043782a8, iVar5 != 0)) {
      if (((*PTR_DAT_043782a0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_043782a0), puVar4 = PTR_DAT_043782b8, iVar5 != 0)) {
        if (((*PTR_DAT_043782b0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043782b0), iVar5 != 0)) {
          *(undefined8 *)puVar4 = 0;
          __cxa_guard_release(PTR_DAT_043782b0);
        }
        *(undefined **)puVar3 = puVar4;
        __cxa_guard_release(PTR_DAT_043782a0);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_04378290);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_04378280);
  }
  return PTR_DAT_04378288;
}


