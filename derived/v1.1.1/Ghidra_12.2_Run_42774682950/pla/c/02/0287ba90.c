/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287ba90; name: FUN_0287ba90
 */


undefined * FUN_0287ba90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_04387ef8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04387ef8), puVar3 = PTR_DAT_04387f00,
     puVar2 = PTR_DAT_04379dd0, iVar4 != 0)) {
    if (((*PTR_DAT_04379dc8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379dc8), puVar1 = PTR_DAT_04379d98, iVar4 != 0)) {
      if (((*PTR_DAT_04379d90 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379d90), iVar4 != 0)) {
        uVar5 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_04379d90);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_04379dc8);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_04387ef8);
  }
  return PTR_DAT_04387f00;
}


