/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c8bd8; name: FUN_031c8bd8
 */


void FUN_031c8bd8(long param_1,int *param_2,byte param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  uint local_60;
  undefined2 uStack_5c;
  uint local_58;
  byte local_54 [4];
  int local_48;
  undefined2 local_44 [2];
  
  local_58 = *param_2;
  local_60 = 0x8000010;
  uStack_5c = 1;
  local_54[0] = param_3 & 1;
  FUN_031aa380(param_1 + 0x28,param_1,&local_60);
  uVar7 = local_60;
  if (*(long *)(param_1 + 0x4d8) != 0) {
    lVar16 = *(long *)(param_1 + 0x4e0);
    if ((int)(*(int *)(lVar16 + 0x18) + (local_60 & 0xffff)) < 0xee1) {
      puVar11 = (undefined8 *)(*(long *)(lVar16 + 0x10) + (long)*(int *)(lVar16 + 0x18) + 0x20);
    }
    else {
      puVar11 = (undefined8 *)FUN_032bf82c(lVar16);
    }
    uVar12 = uVar7 >> 4 & 0xfff;
    puVar14 = &local_60;
    do {
      uVar12 = uVar12 - 1;
      uVar2 = puVar14[2];
      uVar3 = puVar14[3];
      *puVar11 = *(undefined8 *)puVar14;
      *(uint *)(puVar11 + 1) = uVar2;
      *(uint *)((long)puVar11 + 0xc) = uVar3;
      puVar14 = puVar14 + 4;
      puVar11 = puVar11 + 2;
    } while (0 < (int)uVar12);
    *(uint *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + (uVar7 & 0xffff);
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    return;
  }
  lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + (long)*param_2 * 0xf0);
  if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
    plVar1 = (long *)(lVar16 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((param_3 & 1) == 0) {
    iVar9 = 0;
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + (long)*param_2 * 0xf0 + 0x10);
    if (lVar17 == 0) {
      iVar9 = 0;
    }
    else {
      if (*(long *)(lVar17 + 8) != 0) {
        plVar1 = (long *)(lVar17 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      iVar9 = 1;
    }
  }
  local_68[0] = *param_2;
  FUN_031cc660(*(undefined8 *)(param_1 + 0x138),local_68);
  local_70[0] = *param_2;
  FUN_031cb390(*(undefined8 *)(param_1 + 0x138),local_70);
  local_78[0] = *param_2;
  FUN_031e8b60(*(undefined8 *)(param_1 + 0x170),local_78);
  local_80[0] = *param_2;
  FUN_031770fc(*(undefined8 *)(param_1 + 0x130),local_80,iVar9);
  lVar18 = *(long *)(*(long *)(param_1 + 0x138) + 0xf0);
  local_48 = *param_2;
  plVar1 = (long *)(lVar18 + 0x18);
  local_44[0] = 0;
  lVar10 = FUN_031c9374(plVar1,&local_48,local_44);
  lVar13 = *(long *)(lVar18 + 0x18);
  pbVar15 = (byte *)(lVar13 + ((lVar10 << 0x20) >> 0x1d) + 4);
  bVar4 = *pbVar15;
  iVar8 = (int)lVar10;
  if ((bVar4 & 1) == 0) {
    *pbVar15 = bVar4 | 2;
  }
  else {
    *pbVar15 = bVar4 & 0xfe;
    if ((bVar4 & 0xfe) == 0) {
      if ((*(uint *)(lVar18 + 0x30) < (uint)((ulong)lVar10 >> 0x20)) ||
         (lVar10 = *(long *)(lVar18 + 0x28) + (lVar10 >> 0x20) * 8, *(int *)(lVar10 + 4) != iVar8))
      {
        lVar10 = FUN_031acbdc(plVar1,*plVar1 + (long)iVar8 * 8);
      }
      FUN_031c9670(plVar1,lVar10);
    }
  }
  *(undefined1 *)(lVar13 + (long)iVar8 * 8 + 5) = 0;
  if (iVar9 != 0) {
    lVar18 = *(long *)(*(long *)(param_1 + 0x138) + 0xf0);
    local_48 = *param_2;
    plVar1 = (long *)(lVar18 + 0x18);
    local_44[0] = 0;
    lVar10 = FUN_031c9374(plVar1,&local_48,local_44);
    lVar13 = *(long *)(lVar18 + 0x18);
    pbVar15 = (byte *)(lVar13 + ((lVar10 << 0x20) >> 0x1d) + 4);
    bVar4 = *pbVar15;
    iVar9 = (int)lVar10;
    if ((bVar4 >> 2 & 1) == 0) {
      *pbVar15 = bVar4 | 8;
    }
    else {
      *pbVar15 = bVar4 & 0xfb;
      if ((bVar4 & 0xfb) == 0) {
        if ((*(uint *)(lVar18 + 0x30) < (uint)((ulong)lVar10 >> 0x20)) ||
           (lVar10 = *(long *)(lVar18 + 0x28) + (lVar10 >> 0x20) * 8, *(int *)(lVar10 + 4) != iVar9)
           ) {
          lVar10 = FUN_031acbdc(plVar1,*plVar1 + (long)iVar9 * 8);
        }
        FUN_031c9670(plVar1,lVar10);
      }
    }
    *(undefined1 *)(lVar13 + (long)iVar9 * 8 + 5) = 0;
    if (*(char *)(lVar17 + 0x30) == '\x01') {
      lVar10 = *(long *)(lVar17 + 0x20);
    }
    else {
      lVar10 = FUN_02898d80();
    }
    *(undefined4 *)(lVar10 + 0x60) = 0xffffffff;
    FUN_03184ef4(lVar17);
  }
  if (*(char *)(lVar16 + 0x30) == '\x01') {
    lVar10 = *(long *)(lVar16 + 0x20);
  }
  else {
    lVar10 = FUN_02898b44();
  }
  *(undefined4 *)(lVar10 + 0x17c) = 0xffffffff;
  FUN_0318b470(lVar16);
  local_88[0] = *param_2;
  FUN_031c8b10(param_1 + 0x48,param_1,local_88);
  if (lVar17 != 0) {
    FUN_032d647c(lVar17);
  }
  FUN_032d647c(lVar16);
  return;
}


