/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125f188; name: FUN_0125f188
 */


undefined * FUN_0125f188(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_0437ea08 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437ea08), puVar2 = PTR_DAT_0437ea10,
     puVar1 = PTR_DAT_04379c98, iVar3 != 0)) {
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0)) {
      uVar4 = FUN_009311a8();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_0437ea08);
  }
  return PTR_DAT_0437ea10;
}


