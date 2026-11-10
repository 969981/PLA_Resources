/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a70b30; name: FUN_02a70b30
 */


undefined * FUN_02a70b30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_04379ea8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ea8), puVar2 = PTR_DAT_04379eb0,
     puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
      uVar4 = FUN_0087f8f0();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_04379ea8);
  }
  return PTR_DAT_04379eb0;
}


