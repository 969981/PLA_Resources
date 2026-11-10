/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5d00c; name: FUN_01a5d00c
 */


void FUN_01a5d00c(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((param_3 < 0) ||
     ((int)((ulong)(*(long *)(param_2 + 0x118) - *(long *)(param_2 + 0x110)) >> 4) * -0x5cc0ed73 <=
      param_3)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar2 = PTR_DAT_0437a0d8;
    uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
    param_1[1] = uVar1;
    plVar4 = *(long **)(puVar2 + 0x18);
    param_1[2] = *(undefined8 *)(puVar2 + 0x10);
    param_1[3] = plVar4;
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_2 + 0x110) + (long)param_3 * 0x450);
    *param_1 = *puVar5;
    param_1[1] = puVar5[1];
    param_1[2] = puVar5[2];
    plVar4 = (long *)puVar5[3];
    param_1[3] = plVar4;
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a5d0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
}


