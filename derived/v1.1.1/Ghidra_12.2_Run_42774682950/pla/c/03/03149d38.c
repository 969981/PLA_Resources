/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03149d38; name: FUN_03149d38
 */


void FUN_03149d38(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  uint local_38;
  uint local_34;
  
  param_1[0x10] = 0;
  param_1[0xe] = &DAT_3f0000003f000000;
  param_1[0xf] = 0x7fffffff;
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x3089705f;
  *param_1 = &PTR_LAB_042db088;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  lVar11 = *(long *)(param_2 + 0x88);
  param_1[0x11] = lVar11;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
    plVar2 = (long *)(lVar11 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  puVar7 = PTR_PTR_0434a080;
  uVar4 = *(uint *)(param_2 + 0x98);
  puVar12 = *(undefined4 **)(param_2 + 0x90);
  local_38 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[0x12] = 0;
    param_1[0x13] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_38);
    *(uint *)(param_1 + 0x13) = uVar4;
    *(uint *)((long)param_1 + 0x9c) = local_38;
    uVar3 = uVar4 & 3;
    param_1[0x12] = puVar8;
    if (2 < uVar4 - 1) {
      iVar10 = uVar3 - uVar4;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar12;
        puVar9[1] = puVar12[1];
        puVar9[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar8 = puVar9 + 4;
        puVar12 = puVar12 + 4;
        iVar10 = iVar10 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar12;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xa8);
  puVar12 = *(undefined4 **)(param_2 + 0xa0);
  local_34 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)FUN_032cf190(puVar7,4,&local_34);
    *(uint *)(param_1 + 0x15) = uVar4;
    *(uint *)((long)param_1 + 0xac) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0x14] = puVar8;
    if (2 < uVar4 - 1) {
      iVar10 = uVar3 - uVar4;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar12;
        puVar9[1] = puVar12[1];
        puVar9[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar8 = puVar9 + 4;
        puVar12 = puVar12 + 4;
        iVar10 = iVar10 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar12;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  FUN_03149f54(param_1,param_2);
  return;
}


