/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b4ed4; name: FUN_014b4ed4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_014b4ed4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char *local_88;
  char acStack_80 [64];
  long *local_38;
  
  snprintf(acStack_80,0x40,"pane_P_bg_%02d",0);
  local_88 = acStack_80;
  FUN_009313e8(&local_38,&local_88);
  plVar4 = local_38;
  if (local_38 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar8 = local_38[0xb];
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))(local_38);
    }
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = plVar7;
  if ((lVar2 != 0) && (*plVar7 != lVar8)) {
    lVar6 = lVar2 * 0x30;
    plVar5 = plVar7 + lVar2 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar3 = plVar5;
      if (lVar6 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar3 = plVar7;
    } while (*plVar1 != lVar8);
  }
  if (plVar4 == (long *)0x0) {
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  snprintf(acStack_80,0x40,"pane_P_bg_%02d",1);
  local_88 = acStack_80;
  FUN_009313e8(&local_38,&local_88);
  plVar4 = local_38;
  if (local_38 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar8 = local_38[0xb];
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))(local_38);
    }
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = plVar7;
  if ((lVar2 != 0) && (*plVar7 != lVar8)) {
    lVar6 = lVar2 * 0x30;
    plVar5 = plVar7 + lVar2 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar3 = plVar5;
      if (lVar6 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar3 = plVar7;
    } while (*plVar1 != lVar8);
  }
  if (plVar4 == (long *)0x0) {
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


