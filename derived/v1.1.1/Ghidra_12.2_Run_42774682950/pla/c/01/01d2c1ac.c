/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d2c1ac; name: FUN_01d2c1ac
 */


undefined * FUN_01d2c1ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_04381ae8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04381ae8), puVar3 = PTR_DAT_04381af0,
     puVar2 = PTR_DAT_0437ef00, iVar4 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437eef8), puVar1 = PTR_DAT_043794d8, iVar4 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
        uVar5 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_04381ae8);
  }
  return PTR_DAT_04381af0;
}


