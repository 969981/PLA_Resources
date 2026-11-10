/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003062c0; name: FUN_003062c0
 */


void FUN_003062c0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*plVar1 == 0) {
    uVar3 = (ulong)*(byte *)(plVar1 + 1);
  }
  else {
    uVar3 = plVar1[1];
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar3;
  lStack_58 = plVar1[1];
  local_60 = *plVar1;
  lStack_48 = plVar1[3];
  lStack_50 = plVar1[2];
  FUN_002f3390(&local_40,&local_60,param_2,param_3);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar2[1] = uStack_38;
  *puVar2 = local_40;
  puVar2[3] = uStack_28;
  puVar2[2] = uStack_30;
  *(long *)(param_1 + 0x20) = (param_3 - param_2) + *(long *)(param_1 + 0x20);
  return;
}


