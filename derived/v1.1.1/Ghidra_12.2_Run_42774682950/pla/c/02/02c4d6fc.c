/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4d6fc; name: FUN_02c4d6fc
 */


void FUN_02c4d6fc(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  
  lVar15 = *param_1;
  lVar8 = FUN_02b75c1c(*(long *)(param_1[2] + 600),
                       *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1[2] + 600) + 0x80) +
                                                    0x28) + (long)(int)param_1[0x11] * 8) + 0x60) +
                       2);
  local_58 = lVar15;
  auVar17 = FUN_01b34908(&local_48,*(undefined8 *)(lVar15 + 8),&local_58);
  local_40 = auVar17._8_8_;
  lVar15 = auVar17._0_8_;
  if (lVar15 == 0) {
    lVar16 = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = lVar15;
  }
  lVar13 = *(long *)(*(long *)(lVar16 + 0x98) + 0x58);
  lVar3 = *(long *)(lVar8 + 0x88);
  if (*(long *)(lVar8 + 0x80) == 0) {
    if (lVar3 == 0) {
      uVar14 = 0;
      local_48 = 0;
      goto LAB_02c4d7d4;
    }
    local_50 = *(undefined8 *)(lVar3 + 8);
LAB_02c4d79c:
    uVar11 = *(undefined8 *)(lVar3 + 0x10);
  }
  else {
    local_50 = *(undefined8 *)(*(long *)(lVar8 + 0x80) + 8);
    if (lVar3 != 0) goto LAB_02c4d79c;
    uVar11 = 0;
  }
  local_48 = *(ulong *)(lVar13 + 8);
  local_40 = *(undefined8 *)(lVar13 + 0x6098);
  local_38 = lVar13 + 0x10;
  auVar17 = FUN_02b94dac(*(undefined8 *)(lVar13 + 0x6140),&local_48,&local_50,1,uVar11);
  local_40 = auVar17._8_8_;
  local_48 = auVar17._0_8_ & 0xffffffffffffff00;
  uVar14 = auVar17._0_8_ & 0xff;
LAB_02c4d7d4:
  local_48 = local_48 | uVar14;
  local_38 = local_38 & 0xffffffffffffff00;
  FUN_02bc082c(lVar16 + 0x58,&local_48);
  *(undefined4 *)(lVar16 + 0xa0) = 1;
  plVar9 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[7] = lVar15;
  param_1[9] = -1;
  local_48 = 0xffffffffffffffff;
  uVar4 = *(uint *)(lVar15 + 0xa0);
  uVar14 = *(ulong *)(*(long *)(lVar15 + 0x98) + 0x138);
  uVar12 = (uint)uVar14;
  if (uVar4 < 3) {
    uVar12 = uVar12 & uVar4 - 1;
  }
  else {
    iVar7 = 0;
    if ((ulong)uVar4 != 0) {
      iVar7 = (int)(uVar14 / uVar4);
    }
    uVar12 = uVar12 - iVar7 * uVar4;
  }
  pcVar10 = (char *)FUN_02bc0470((long)(int)uVar12,lVar15 + 0x58);
  if (*pcVar10 == '\0' || *(long *)(pcVar10 + 8) == 0) {
    local_48 = 0xffffffffffffffff;
  }
  else {
    FUN_00878414(*(long *)(*(long *)(*param_1 + 0x58) + 0x6140) + 0x110,&local_48,
                 *(undefined4 *)(*(long *)(pcVar10 + 8) + 0x80));
  }
  param_1[9] = local_48;
  return;
}


