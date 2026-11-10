/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141fa4c; name: FUN_0141fa4c
 */


void FUN_0141fa4c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar10 = param_1[3];
  if (lVar10 == 0) {
    return;
  }
  lVar7 = *(long *)(param_2 + 0x70);
  bVar11 = *(byte *)(lVar7 + 0x2dc);
  bVar3 = *(byte *)(lVar7 + 0x2dd);
  bVar4 = (*(byte *)(lVar7 + 0x168) & 7) != 0;
  bVar5 = bVar3 != 0x12;
  bVar6 = bVar3 != 2;
  bVar12 = bVar3;
  if (*(char *)(lVar7 + 0x389) < '\0') {
    if (bVar11 != 0x12 && (bVar11 != 2 || !bVar4)) goto joined_r0x0141fc44;
    bVar11 = bVar3;
    if (bVar5 && (!bVar4 || bVar6)) goto LAB_0141fad4;
    bVar11 = 0x12;
  }
  else {
    if (bVar11 == 0x12 || bVar11 == 2 && bVar4) {
      bVar11 = 0;
      bVar12 = 0;
      if (bVar5 && (!bVar4 || bVar6)) {
        bVar11 = bVar3;
        bVar12 = bVar3;
      }
      goto LAB_0141fad4;
    }
joined_r0x0141fc44:
    if (bVar5 && (!bVar4 || bVar6)) goto LAB_0141fad4;
  }
  bVar12 = bVar11;
LAB_0141fad4:
  local_70 = 0xb65a076c70065ece;
  pcStack_68 = "pane_P_icon_poke_type_00";
  local_60 = 0x18;
  local_58 = (long *)0x0;
  lVar7 = FUN_00d63240(*param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (lVar7 != 0) {
    FUN_0284fbb0(lVar10,bVar11 & 0x1f,1,lVar7,0,0);
  }
  local_70 = 0xb65a086c70066081;
  pcStack_68 = "pane_P_icon_poke_type_01";
  local_60 = 0x18;
  local_58 = (long *)0x0;
  lVar7 = FUN_00d63240(*param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (lVar7 != 0) {
    FUN_0284fbb0(lVar10,bVar12 & 0x1f,1,lVar7,0,0);
  }
  plVar8 = *(long **)(*param_1 + 0x148);
  lVar10 = *(long *)(*param_1 + 0x150);
  if ((lVar10 != 0) && (*plVar8 != -0x49a5f7938ff99f7f)) {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != -0x49a5f7938ff99f7f);
  }
  *(byte *)(plVar8[4] + 0x58) =
       *(byte *)(plVar8[4] + 0x58) & 0xfe | (bVar11 & 0x1f) != (bVar12 & 0x1f);
  return;
}


