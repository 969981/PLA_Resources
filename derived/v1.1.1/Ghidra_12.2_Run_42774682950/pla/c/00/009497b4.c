/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009497b4; name: FUN_009497b4
 */


undefined * FUN_009497b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_04379dd8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379dd8), puVar2 = PTR_DAT_04379de0,
     puVar1 = PTR_DAT_04379d98, iVar3 != 0)) {
    if (((*PTR_DAT_04379d90 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379d90), iVar3 != 0)) {
      uVar4 = FUN_0087f8f0();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_04379d90);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_04379dd8);
  }
  return PTR_DAT_04379de0;
}


