/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d85540; name: FUN_00d85540
 */


void FUN_00d85540(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_0437a158 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_0437a158);
    if (iVar3 != 0) {
      FUN_00100250(PTR_LAB_0437aff8,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a158);
    }
  }
  uVar4 = FUN_00d893ac(param_1);
  puVar2 = PTR_DAT_0437a160;
  FUN_00d89140(PTR_DAT_0437a160,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x48;
  }
  FUN_02a47440(lVar1);
  return;
}


