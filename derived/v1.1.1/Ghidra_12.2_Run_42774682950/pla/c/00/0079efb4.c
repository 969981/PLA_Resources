/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079efb4; name: FUN_0079efb4
 */


long FUN_0079efb4(undefined *param_1)

{
  byte bVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long local_80;
  uint *puStack_78;
  undefined8 local_70;
  long local_60;
  uint *puStack_58;
  undefined8 local_50;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    lVar9 = 0;
LAB_0079f054:
    uVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = 0;
    iVar7 = 0;
    do {
      puVar2 = (uint *)FUN_00326ad0(param_1 + 0x10,iVar7);
      if ((int)*puVar2 < 0) {
        uVar5 = 10;
      }
      else {
        uVar5 = (ulong)(((uint)LZCOUNT(*puVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      iVar7 = iVar7 + 1;
      lVar9 = uVar5 + lVar9;
    } while (iVar4 != iVar7);
    if (lVar9 == 0) goto LAB_0079f054;
    uVar8 = (uint)lVar9;
    if ((int)uVar8 < 0) {
      uVar5 = 10;
    }
    else {
      uVar5 = (ulong)(((uint)LZCOUNT(uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    lVar3 = uVar5 + 1;
  }
  *(uint *)(param_1 + 0x20) = uVar8;
  puStack_58 = *(uint **)(param_1 + 0x38);
  lVar9 = lVar3 + lVar9 + (ulong)*puStack_58;
  FUN_0079bf44(&local_60,*(undefined8 *)(puStack_58 + 6));
  local_70 = local_50;
  puStack_78 = puStack_58;
  local_80 = local_60;
  if (local_60 != 0) {
    puVar2 = *(uint **)(local_60 + 8);
    uVar8 = *puVar2;
    if (-1 < (int)uVar8) goto LAB_0079f114;
LAB_0079f13c:
    iVar4 = 0xc;
    uVar8 = puVar2[1];
    if (-1 < (int)uVar8) goto LAB_0079f0bc;
    do {
      uVar8 = 10;
      while( true ) {
        lVar9 = lVar9 + (ulong)(uVar8 + iVar4) +
                (ulong)(((uint)LZCOUNT(uVar8 + iVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        FUN_0079c0b4(&local_80);
        if (local_80 == 0) goto LAB_0079f150;
        puVar2 = *(uint **)(local_80 + 8);
        uVar8 = *puVar2;
        if ((int)uVar8 < 0) goto LAB_0079f13c;
LAB_0079f114:
        iVar4 = (((uint)LZCOUNT(uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
        uVar8 = puVar2[1];
        if ((int)uVar8 < 0) break;
LAB_0079f0bc:
        uVar8 = ((uint)LZCOUNT(uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
    } while( true );
  }
LAB_0079f150:
  pbVar6 = *(byte **)(param_1 + 0x40);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0079f170:
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      lVar9 = lVar9 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_0079f170;
  pbVar6 = *(byte **)(param_1 + 0x48);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0079f1c4:
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      lVar9 = lVar9 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_0079f1c4;
  pbVar6 = *(byte **)(param_1 + 0x50);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0079f218:
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      lVar9 = lVar9 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_0079f218;
  pbVar6 = *(byte **)(param_1 + 0x58);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0079f26c:
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      lVar9 = lVar9 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_0079f26c;
  if (param_1 != PTR_DAT_04376f28) {
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar3 = FUN_00602744();
      lVar9 = lVar9 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar3 = FUN_00602744();
      lVar9 = lVar9 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if (*(int *)(param_1 + 0x7c) == 10) {
    lVar3 = FUN_0030c308(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    if (*(int *)(param_1 + 0x7c) != 9) goto LAB_0079f35c;
    lVar3 = FUN_00602744(*(undefined8 *)(param_1 + 0x70));
  }
  lVar9 = lVar9 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0079f35c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar5 + 8);
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    lVar9 = uVar5 + lVar9;
  }
  *(int *)(param_1 + 0x78) = (int)lVar9;
  return lVar9;
}


