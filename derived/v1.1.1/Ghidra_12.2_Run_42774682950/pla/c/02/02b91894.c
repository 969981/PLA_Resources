/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b91894; name: FUN_02b91894
 */


void FUN_02b91894(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_28;
  long local_18;
  
  *(long *)(param_1 + 0xf0) = param_2;
  plVar3 = *(long **)(param_1 + 0xb0);
  local_28 = param_2;
  local_18 = param_3;
  if ((plVar3 == (long *)0x0) || (plVar3 == (long *)(param_1 + 0xb0))) {
    FUN_02b92d44(param_1 + 0x18,&local_18,&local_28);
    uVar2 = (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) - 1;
    plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x20) + (uVar2 / 0x38) * 8) +
                     (uVar2 % 0x38) * 0x48);
  }
  else {
    plVar3 = *(long **)(param_1 + 0xb8);
    plVar3[6] = param_3;
    plVar3[7] = param_2;
    plVar4 = *(long **)(param_1 + 0xb8);
    lVar6 = *plVar4;
    plVar1 = (long *)plVar4[1];
    *plVar1 = lVar6;
    *(long **)(lVar6 + 8) = plVar1;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0xa0);
  *plVar3 = param_1 + 0x98;
  plVar3[1] = (long)puVar5;
  *(long **)(param_1 + 0xa0) = plVar3;
  *puVar5 = plVar3;
  plVar4 = (long *)(param_1 + 0xd8);
  lVar6 = *plVar4;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  plVar1 = plVar3 + 2;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  if (lVar6 == param_1 + 200) {
    *(long **)(param_1 + 200) = plVar1;
    plVar4 = (long *)(param_1 + 0xd0);
    *(long **)(param_1 + 0xd8) = plVar1;
  }
  else {
    *(long **)(lVar6 + 0x10) = plVar1;
    if (lVar6 != *plVar4) goto LAB_02b919a4;
  }
  *plVar4 = (long)plVar1;
LAB_02b919a4:
  plVar3[2] = lVar6;
  plVar3[3] = 0;
  plVar3[4] = 0;
  FUN_02b92bec();
  return;
}


