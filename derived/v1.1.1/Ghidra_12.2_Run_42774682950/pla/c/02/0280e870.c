/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280e870; name: FUN_0280e870
 */


void FUN_0280e870(undefined8 *param_1,long param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  lVar2 = *(long *)(param_2 + 0x468);
  if (*(int *)(lVar2 + 0x1c) == 0) {
    uVar4 = *param_3 + *(int *)(lVar2 + 0xc) * param_3[1];
  }
  else {
    uVar4 = param_3[1] + *(int *)(lVar2 + 0x10) * *param_3;
  }
  puVar3 = (undefined8 *)(*(long *)(*(long *)(lVar2 + 0x40) + 0x20) + (ulong)uVar4 * 0x28);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  plVar1 = (long *)puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0280e8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


