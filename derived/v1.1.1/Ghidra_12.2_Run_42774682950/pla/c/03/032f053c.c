/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f053c; name: FUN_032f053c
 */


void FUN_032f053c(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 *local_70;
  undefined1 local_68;
  
  FUN_032f7678();
  *param_1 = &PTR_LAB_0434d058;
  param_1[5] = 0x8000000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0332cf84(param_1 + 6);
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  puVar1 = (uint *)((long)param_1 + 0x7c);
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  plVar9 = param_1 + 0xe;
  *plVar9 = 0;
  piVar10 = (int *)(param_1 + 0xf);
  piVar10[0] = 0;
  piVar10[1] = -1;
  FUN_032c311c(param_1 + 0x10);
  local_94 = 0x3fff;
  local_98[0] = 1;
  local_80 = (undefined8 *)0x0;
  local_90 = 0x1fffffff;
  local_88 = (undefined1 *)0x1;
  local_78 = 0;
  local_70 = (undefined8 *)0x0;
  local_68 = 1;
  FUN_03318678(param_1 + 0x12,local_98);
  param_1[0x1e] = param_1;
  param_1[0x1f] = param_1 + 0x10;
  pbVar5 = &DAT_043512a8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if ((DAT_043512a8 & 1) == 0) {
    bVar2 = *DAT_043512b0;
    pbVar5 = DAT_043512b0;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043512a8;
  pbVar5 = &DAT_04351358;
  if ((DAT_04351358 & 1) == 0) {
    bVar2 = *DAT_04351360;
    pbVar5 = DAT_04351360;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351358;
  pbVar5 = &DAT_04351408;
  if ((DAT_04351408 & 1) == 0) {
    bVar2 = *DAT_04351410;
    pbVar5 = DAT_04351410;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351408;
  pbVar5 = &DAT_043514b8;
  if ((DAT_043514b8 & 1) == 0) {
    bVar2 = *DAT_043514c0;
    pbVar5 = DAT_043514c0;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043514b8;
  pbVar5 = &DAT_04351568;
  if ((DAT_04351568 & 1) == 0) {
    bVar2 = *DAT_04351570;
    pbVar5 = DAT_04351570;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351568;
  pbVar5 = &DAT_04351618;
  if ((DAT_04351618 & 1) == 0) {
    bVar2 = *DAT_04351620;
    pbVar5 = DAT_04351620;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351618;
  pbVar5 = &DAT_043516c8;
  if ((DAT_043516c8 & 1) == 0) {
    bVar2 = *DAT_043516d0;
    pbVar5 = DAT_043516d0;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043516c8;
  pbVar5 = &DAT_04351778;
  if ((DAT_04351778 & 1) == 0) {
    bVar2 = *DAT_04351780;
    pbVar5 = DAT_04351780;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351778;
  pbVar5 = &DAT_04351300;
  if ((DAT_04351300 & 1) == 0) {
    bVar2 = *DAT_04351308;
    pbVar5 = DAT_04351308;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351300;
  pbVar5 = &DAT_043513b0;
  if ((DAT_043513b0 & 1) == 0) {
    bVar2 = *DAT_043513b8;
    pbVar5 = DAT_043513b8;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043513b0;
  pbVar5 = &DAT_04351460;
  if ((DAT_04351460 & 1) == 0) {
    bVar2 = *DAT_04351468;
    pbVar5 = DAT_04351468;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351460;
  pbVar5 = &DAT_04351510;
  if ((DAT_04351510 & 1) == 0) {
    bVar2 = *DAT_04351518;
    pbVar5 = DAT_04351518;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351510;
  pbVar5 = &DAT_043515c0;
  if ((DAT_043515c0 & 1) == 0) {
    bVar2 = *DAT_043515c8;
    pbVar5 = DAT_043515c8;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043515c0;
  pbVar5 = &DAT_04351670;
  if ((DAT_04351670 & 1) == 0) {
    bVar2 = *DAT_04351678;
    pbVar5 = DAT_04351678;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351670;
  pbVar5 = &DAT_04351720;
  if ((DAT_04351720 & 1) == 0) {
    bVar2 = *DAT_04351728;
    pbVar5 = DAT_04351728;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351720;
  pbVar5 = &DAT_043517d0;
  if ((DAT_043517d0 & 1) == 0) {
    bVar2 = *DAT_043517d8;
    pbVar5 = DAT_043517d8;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043517d0;
  pbVar5 = &DAT_043518d8;
  if ((DAT_043518d8 & 1) == 0) {
    bVar2 = *DAT_043518e0;
    pbVar5 = DAT_043518e0;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043518d8;
  pbVar5 = &DAT_04351988;
  if ((DAT_04351988 & 1) == 0) {
    bVar2 = *DAT_04351990;
    pbVar5 = DAT_04351990;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351988;
  pbVar5 = &DAT_04351930;
  if ((DAT_04351930 & 1) == 0) {
    bVar2 = *DAT_04351938;
    pbVar5 = DAT_04351938;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351930;
  pbVar5 = &DAT_043519e0;
  if ((DAT_043519e0 & 1) == 0) {
    bVar2 = *DAT_043519e8;
    pbVar5 = DAT_043519e8;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_043519e0;
  pbVar5 = &DAT_04351828;
  if ((DAT_04351828 & 1) == 0) {
    bVar2 = *DAT_04351830;
    pbVar5 = DAT_04351830;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351828;
  pbVar5 = &DAT_04351880;
  if ((DAT_04351880 & 1) == 0) {
    bVar2 = *DAT_04351888;
    pbVar5 = DAT_04351888;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_04351880;
  pbVar5 = &DAT_0435e090;
  if ((DAT_0435e090 & 1) == 0) {
    bVar2 = *DAT_0435e098;
    pbVar5 = DAT_0435e098;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_0435e090;
  pbVar5 = &DAT_0435e128;
  if ((DAT_0435e128 & 1) == 0) {
    bVar2 = *DAT_0435e130;
    pbVar5 = DAT_0435e130;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_0435e128;
  pbVar5 = &DAT_0435e1c0;
  if ((DAT_0435e1c0 & 1) == 0) {
    bVar2 = *DAT_0435e1c8;
    pbVar5 = DAT_0435e1c8;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_0435e1c0;
  pbVar5 = &DAT_0435e258;
  if ((DAT_0435e258 & 1) == 0) {
    bVar2 = *DAT_0435e260;
    pbVar5 = DAT_0435e260;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  while (uVar7 != 0xffffffffffffffff) {
    if (uVar7 == uVar11) {
      iVar8 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  }
  *piVar10 = *piVar10 + iVar8;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(ulong *)(lVar6 + uVar12) = uVar11;
  *(byte **)(*plVar9 + uVar12 + 8) = &DAT_0435e258;
  pbVar5 = (byte *)&DAT_0434b3b0;
  if (((byte)DAT_0434b3b0 & 1) == 0) {
    bVar2 = *DAT_0434b3b8;
    pbVar5 = DAT_0434b3b8;
    while ((bVar2 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar2 = *pbVar5;
    }
  }
  uVar12 = *(ulong *)(pbVar5 + 0x10);
  uVar11 = uVar12 & 0xffffffff;
  uVar4 = *puVar1;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_032f6514(plVar9,PTR_PTR_0434a080,uVar4 * 2 + 2);
    uVar4 = *puVar1;
  }
  uVar3 = (int)uVar12 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  lVar6 = *plVar9;
  uVar12 = (ulong)(uVar4 & uVar3 + (uVar3 >> 2) + 0x9e3779b9);
  iVar8 = 1;
  uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  do {
    if (uVar7 == 0xffffffffffffffff) {
LAB_032f157c:
      *(int *)(param_1 + 0xf) = *(int *)(param_1 + 0xf) + iVar8;
      uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
      *(ulong *)(lVar6 + uVar12) = uVar11;
      *(undefined8 **)(param_1[0xe] + uVar12 + 8) = &DAT_0434b3b0;
      *(undefined4 *)(param_1 + 0x22) = 0;
      local_94 = 0x3fff;
      local_90 = 0x1fffffff;
      local_78 = 0;
      local_68 = 1;
      local_98[0] = 0;
      local_70 = &DAT_0444aaa8;
      local_88 = &LAB_032f0420;
      local_80 = param_1 + 0x1e;
      FUN_033186ec(param_1 + 0x12,local_98);
      return;
    }
    if (uVar7 == uVar11) {
      iVar8 = 0;
      goto LAB_032f157c;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar4);
    uVar7 = *(ulong *)(lVar6 + uVar12 * 0x10);
  } while( true );
}


