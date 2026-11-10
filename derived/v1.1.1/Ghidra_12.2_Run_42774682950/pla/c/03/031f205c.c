/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f205c; name: FUN_031f205c
 */


void FUN_031f205c(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  void *__dest;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  void *__src;
  undefined4 uVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)(param_1 + 0x150);
  if (lVar8 == 0) {
    uVar14 = 0;
    lVar8 = *(long *)(param_1 + 0x168);
  }
  else {
    uVar14 = *(undefined4 *)(lVar8 + 0x1c);
    FUN_031c215c(lVar8,0);
    lVar8 = *(long *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (lVar8 != 0) {
      FUN_032d647c();
    }
    lVar8 = *(long *)(param_1 + 0x168);
  }
  if (lVar8 != 0) {
    FUN_031f3d84();
  }
  puVar9 = (undefined8 *)FUN_032cf5b0(0x50);
  puVar9[5] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar10 = puVar9 + 6;
  *puVar10 = 0;
  *puVar9 = &PTR_LAB_0430b500;
  puVar9[1] = 0xffffffff;
  puVar9[2] = 1;
  puVar9[7] = 0x8000000000000000;
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  puVar9[5] = *(undefined8 *)(param_1 + 0x38);
  puVar9[4] = uVar15;
  if ((undefined8 *)(param_1 + 0x20) != puVar10) {
    iVar4 = *(int *)(param_1 + 0x28);
    __src = *(void **)(param_1 + 0x20);
    if (iVar4 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar4,0x10,0,0,(long)puVar9 + 0x3c);
      *puVar10 = __dest;
    }
    memcpy(__dest,__src,(long)iVar4 << 4);
    *(int *)(puVar9 + 7) = iVar4;
  }
  puVar10 = (undefined8 *)FUN_032cf5b0(0xa0);
  *puVar10 = &PTR_LAB_0430b4a0;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  uVar15 = *(undefined8 *)(param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(param_1 + 0xe0);
  puVar10[0xf] = uVar12;
  puVar10[0xd] = uVar15;
  uVar15 = *(undefined8 *)(param_1 + 0xa8);
  uVar12 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  puVar10[0xb] = *(undefined8 *)(param_1 + 0xb8);
  puVar10[0xc] = uVar3;
  puVar10[9] = uVar15;
  puVar10[10] = uVar12;
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  puVar10[7] = *(undefined8 *)(param_1 + 0x98);
  puVar10[8] = uVar3;
  puVar10[5] = uVar15;
  puVar10[6] = uVar12;
  puVar10[4] = *(undefined8 *)(param_1 + 0x80);
  puVar10[0xe] = uVar2;
  lVar8 = *(long *)(param_1 + 0xf0);
  puVar10[0x12] = lVar8;
  if (lVar8 != 0) {
    FUN_032d645c(lVar8);
  }
  lVar8 = *(long *)(param_1 + 0xf8);
  puVar10[0x13] = lVar8;
  if (lVar8 != 0) {
    FUN_032d645c(lVar8);
  }
  lVar8 = puVar9[8];
  puVar9[8] = puVar10;
  if (lVar8 != 0) {
    FUN_032d647c(lVar8);
  }
  puVar10 = (undefined8 *)FUN_032cf5b0(0x58);
  uVar5 = *(undefined1 *)(param_1 + 0x198);
  *(undefined1 *)(puVar10 + 4) = 0;
  puVar10[2] = 1;
  *(undefined4 *)((long)puVar10 + 0x1c) = uVar14;
  *puVar10 = &PTR_LAB_04302c40;
  puVar10[1] = 0xffffffff;
  *(undefined1 *)(puVar10 + 3) = uVar5;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = param_1;
  puVar10[8] = puVar9;
  FUN_032d645c(puVar9);
  puVar10[9] = 0;
  puVar10[10] = 0x8000000000000000;
  lVar8 = *(long *)(param_1 + 0x150);
  *(undefined8 **)(param_1 + 0x150) = puVar10;
  if (lVar8 != 0) {
    FUN_032d647c();
  }
  puVar1 = (ulong *)(param_2 + 4);
  do {
    uVar11 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = *param_2;
  uVar11 = -(uVar11 >> 0x1f & 1) & 0xfffffff000000000 | (uVar11 & 0xffffffff) << 4;
  *(undefined8 *)(lVar8 + uVar11) = 0;
  plVar13 = (long *)(lVar8 + uVar11 + 8);
  *plVar13 = 0;
  *(undefined4 *)(lVar8 + uVar11) = *(undefined4 *)(param_1 + 0x194);
  if (*(long *)(param_1 + 0x150) != 0) {
    if (*(long *)(param_1 + 0x150) == 0) {
      *plVar13 = 0;
    }
    else {
      FUN_032d645c();
      lVar8 = *plVar13;
      *plVar13 = *(long *)(param_1 + 0x150);
      if (lVar8 != 0) {
        FUN_032d647c(lVar8);
      }
    }
  }
  FUN_032d647c(puVar9);
  return;
}


