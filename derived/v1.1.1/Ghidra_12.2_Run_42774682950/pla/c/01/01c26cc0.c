/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c26cc0; name: FUN_01c26cc0
 */


undefined * FUN_01c26cc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_0437a5d8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a5d8), puVar2 = PTR_DAT_0437a5e0,
     puVar1 = PTR_DAT_0437a5b0, iVar3 != 0)) {
    if (((*PTR_DAT_0437a5a8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a5a8), iVar3 != 0)) {
      uVar4 = FUN_00ab38cc();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_0437a5a8);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_0437a5d8);
  }
  return PTR_DAT_0437a5e0;
}


