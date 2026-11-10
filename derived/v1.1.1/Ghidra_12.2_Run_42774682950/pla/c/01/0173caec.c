/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0173caec; name: FUN_0173caec
 */


void FUN_0173caec(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)FUN_00fcae7c(param_1,*(int *)(param_2 + 4) + 3,param_2);
  puVar1 = (undefined8 *)(param_4 + *param_3);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  plVar4 = (long *)puVar2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = (long *)puVar1[3];
  puVar1[3] = plVar4;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0173cb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


