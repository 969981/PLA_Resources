/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01477e6c; name: FUN_01477e6c
 */


void FUN_01477e6c(long param_1,long param_2,int param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  char *local_90;
  long *local_88;
  char acStack_80 [64];
  
  snprintf(acStack_80,0x40,"pane_L_result_plate_%02d_P_icon_bspoke_00",param_3);
  local_90 = acStack_80;
  FUN_009313e8(&local_88,&local_90);
  plVar5 = local_88;
  if (local_88 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar10 = local_88[0xb];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))(local_88);
    }
  }
  lVar9 = *(long *)(param_1 + 0x2c8);
  plVar11 = *(long **)(lVar9 + 0x148);
  lVar3 = *(long *)(lVar9 + 0x150);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = plVar11;
  if ((lVar3 != 0) && (*plVar11 != lVar10)) {
    lVar8 = lVar3 * 0x30;
    plVar7 = plVar11 + lVar3 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      plVar4 = plVar7;
      if (lVar8 == 0) break;
      plVar1 = plVar11 + 6;
      plVar11 = plVar11 + 6;
      plVar4 = plVar11;
    } while (*plVar1 != lVar10);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar4 == (long *)(*(long *)(lVar9 + 0x148) + *(long *)(lVar9 + 0x150) * 0x30)) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar4[4];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar6 = FUN_02c6d5b0(*(undefined8 *)(param_2 + 0x98));
  bVar2 = *(byte *)(lVar10 + 0x58) | 1;
  if ((uVar6 & 1) == 0) {
    bVar2 = *(byte *)(lVar10 + 0x58) & 0xfe;
  }
  *(byte *)(lVar10 + 0x58) = bVar2;
  return;
}


