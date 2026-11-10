/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019fbc2c; name: FUN_019fbc2c
 */


undefined * FUN_019fbc2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (((*PTR_DAT_04382398 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04382398), puVar4 = PTR_DAT_043823a0,
     puVar3 = PTR_DAT_04382350, iVar5 != 0)) {
    if (((*PTR_DAT_04382348 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04382348), puVar2 = PTR_DAT_043795e0, iVar5 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar1 = PTR_DAT_043794d8, iVar5 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar3 = puVar2;
      __cxa_guard_release(PTR_DAT_04382348);
    }
    *(undefined **)puVar4 = puVar3;
    __cxa_guard_release(PTR_DAT_04382398);
  }
  return PTR_DAT_043823a0;
}


