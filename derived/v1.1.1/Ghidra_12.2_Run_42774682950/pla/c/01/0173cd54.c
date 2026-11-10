/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0173cd54; name: FUN_0173cd54
 */


void FUN_0173cd54(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  param_1 = (undefined8 *)*param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*PTR_DAT_0437a0d0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437a0d0);
    if (iVar2 != 0) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
  }
  puVar1 = PTR_DAT_0437a0d8;
  param_1[1] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[2] = *(undefined8 *)(puVar1 + 8);
  param_1[3] = *(undefined8 *)(puVar1 + 0x10);
  plVar3 = *(long **)(puVar1 + 0x18);
  param_1[4] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0173cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


