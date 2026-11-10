/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f1650; name: FUN_019f1650
 */


undefined * FUN_019f1650(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_04382380 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04382380), puVar1 = PTR_DAT_04382388, iVar2 != 0)) {
    uVar3 = FUN_018cc4fc();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_04382380);
  }
  return PTR_DAT_04382388;
}


