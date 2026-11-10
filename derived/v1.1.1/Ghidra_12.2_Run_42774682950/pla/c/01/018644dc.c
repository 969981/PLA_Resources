/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018644dc; name: FUN_018644dc
 */


undefined * FUN_018644dc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_04381ad8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04381ad8), puVar1 = PTR_DAT_04381ae0, iVar2 != 0)) {
    uVar3 = FUN_00d8faf4();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_04381ad8);
  }
  return PTR_DAT_04381ae0;
}


