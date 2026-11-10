/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d854a0; name: FUN_00d854a0
 */


void FUN_00d854a0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_0437a780 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_0437a780);
    if (iVar3 != 0) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
  }
  uVar4 = FUN_00d883bc(param_1);
  puVar2 = PTR_DAT_0437a788;
  FUN_00d88150(PTR_DAT_0437a788,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x48;
  }
  FUN_02a47440(lVar1);
  return;
}


