/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122a634; name: FUN_0122a634
 */


undefined * FUN_0122a634(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_0437e920 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_0437e920), puVar3 = PTR_DAT_0437e928,
     puVar2 = PTR_DAT_0437b320, iVar4 != 0)) {
    if (((*PTR_DAT_0437b318 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b318), puVar1 = PTR_DAT_04379c98, iVar4 != 0)) {
      if (((*PTR_DAT_04379ca8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar4 != 0)) {
        uVar5 = FUN_009311a8();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_04379ca8);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_0437b318);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_0437e920);
  }
  return PTR_DAT_0437e928;
}


