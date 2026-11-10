/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbd274; name: FUN_00bbd274
 */


void FUN_00bbd274(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((*PTR_DAT_0437a0d0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0);
    if (iVar4 != 0) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
  }
  puVar3 = PTR_DAT_0437a0d8;
  uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar1;
  plVar2 = *(long **)(puVar3 + 0x18);
  param_1[2] = *(undefined8 *)(puVar3 + 0x10);
  param_1[3] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bbd2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


