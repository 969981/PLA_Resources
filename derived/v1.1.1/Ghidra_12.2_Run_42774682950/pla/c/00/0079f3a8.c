/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079f3a8; name: FUN_0079f3a8
 */


void FUN_0079f3a8(undefined *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined *puVar16;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  
  if (param_2 == param_1) {
    FUN_0030f640(&local_80,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/resources.pb.cc"
                 ,0x2db);
                    /* try { // try from 0079f424 to 0079f437 has its CatchHandler @ 0079f85c */
    uVar11 = FUN_0030f3ac(&local_80,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0079f438 to 0079f43f has its CatchHandler @ 0079f858 */
    FUN_0030f41c(&local_50,uVar11);
    FUN_0030f658(&local_80);
    uVar13 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar13 = *(ulong *)(param_2 + 8);
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffffffffffe;
    uVar14 = *(ulong *)(param_1 + 8);
    if ((uVar14 & 1) == 0) {
      lVar9 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar9 = (uVar14 & 0xfffffffffffffffe) + 8;
    }
    uVar14 = *(ulong *)(uVar13 + 0x10);
    lVar4 = *(long *)(uVar13 + 0x18);
    if ((*(byte *)(uVar13 + 8) & 1) == 0) {
      lVar4 = uVar13 + 9;
      uVar14 = (ulong)(*(byte *)(uVar13 + 8) >> 1);
    }
    FUN_002e4094(lVar9,lVar4,uVar14);
  }
  FUN_00326f44(param_1 + 0x10,param_2 + 0x10);
  lStack_78 = *(long *)(param_2 + 0x38);
  FUN_0079bf44(&local_80,*(undefined8 *)(lStack_78 + 0x18));
  local_40 = local_70;
  lStack_48 = lStack_78;
  local_50 = local_80;
  if (local_80 != 0) {
    do {
      uVar6 = *(undefined4 *)(*(long *)(local_50 + 8) + 4);
      puVar8 = (undefined4 *)FUN_0079a6dc(param_1 + 0x28);
      *puVar8 = uVar6;
      FUN_0079c0b4(&local_50);
    } while (local_50 != 0);
  }
  puVar16 = PTR_DAT_043730c0;
  pbVar12 = *(byte **)(param_2 + 0x40);
  bVar7 = *pbVar12;
  if ((bVar7 & 1) == 0) {
    if (bVar7 >> 1 != 0) goto LAB_0079f4e4;
LAB_0079f524:
    pbVar12 = *(byte **)(param_2 + 0x48);
    uVar13 = (ulong)*pbVar12;
    if ((*pbVar12 & 1) != 0) goto LAB_0079f55c;
LAB_0079f530:
    if (uVar13 >> 1 != 0) goto LAB_0079f564;
LAB_0079f5a4:
    pbVar12 = *(byte **)(param_2 + 0x50);
    uVar13 = (ulong)*pbVar12;
    if ((*pbVar12 & 1) != 0) goto LAB_0079f5dc;
LAB_0079f5b0:
    if (uVar13 >> 1 != 0) goto LAB_0079f5e4;
LAB_0079f624:
    pbVar12 = *(byte **)(param_2 + 0x58);
    uVar13 = (ulong)*pbVar12;
    if ((*pbVar12 & 1) != 0) goto LAB_0079f65c;
LAB_0079f630:
    uVar14 = uVar13 >> 1;
  }
  else {
    if (*(long *)(pbVar12 + 8) == 0) goto LAB_0079f524;
LAB_0079f4e4:
    puVar1 = (undefined8 *)(param_1 + 0x40);
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 != PTR_DAT_043730c0) {
      if (pbVar15 != pbVar12) {
        uVar13 = *(ulong *)(pbVar12 + 8);
        pbVar5 = *(byte **)(pbVar12 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar5 = pbVar12 + 1;
          uVar13 = (ulong)(bVar7 >> 1);
        }
        FUN_00291910(pbVar15,pbVar5,uVar13);
      }
      goto LAB_0079f524;
    }
    FUN_0029175c(puVar1,puVar10);
    pbVar12 = *(byte **)(param_2 + 0x48);
    uVar13 = (ulong)*pbVar12;
    if ((*pbVar12 & 1) == 0) goto LAB_0079f530;
LAB_0079f55c:
    if (*(long *)(pbVar12 + 8) == 0) goto LAB_0079f5a4;
LAB_0079f564:
    puVar1 = (undefined8 *)(param_1 + 0x48);
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 != puVar16) {
      if (pbVar15 != pbVar12) {
        uVar14 = *(ulong *)(pbVar12 + 8);
        pbVar5 = *(byte **)(pbVar12 + 0x10);
        if ((uVar13 & 1) == 0) {
          pbVar5 = pbVar12 + 1;
          uVar14 = uVar13 >> 1;
        }
        FUN_00291910(pbVar15,pbVar5,uVar14);
      }
      goto LAB_0079f5a4;
    }
    FUN_0029175c(puVar1,puVar10);
    pbVar12 = *(byte **)(param_2 + 0x50);
    uVar13 = (ulong)*pbVar12;
    if ((*pbVar12 & 1) == 0) goto LAB_0079f5b0;
LAB_0079f5dc:
    if (*(long *)(pbVar12 + 8) == 0) goto LAB_0079f624;
LAB_0079f5e4:
    puVar1 = (undefined8 *)(param_1 + 0x50);
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 != puVar16) {
      if (pbVar15 != pbVar12) {
        uVar14 = *(ulong *)(pbVar12 + 8);
        pbVar5 = *(byte **)(pbVar12 + 0x10);
        if ((uVar13 & 1) == 0) {
          pbVar5 = pbVar12 + 1;
          uVar14 = uVar13 >> 1;
        }
        FUN_00291910(pbVar15,pbVar5,uVar14);
      }
      goto LAB_0079f624;
    }
    FUN_0029175c(puVar1,puVar10);
    pbVar12 = *(byte **)(param_2 + 0x58);
    uVar13 = (ulong)*pbVar12;
    if ((*pbVar12 & 1) == 0) goto LAB_0079f630;
LAB_0079f65c:
    uVar14 = *(ulong *)(pbVar12 + 8);
  }
  puVar3 = PTR_DAT_043737a8;
  if (uVar14 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 == puVar16) {
      FUN_0029175c(puVar1,puVar10);
      puVar3 = PTR_DAT_043737a8;
    }
    else if (pbVar15 != pbVar12) {
      uVar14 = *(ulong *)(pbVar12 + 8);
      pbVar5 = *(byte **)(pbVar12 + 0x10);
      if ((uVar13 & 1) == 0) {
        pbVar5 = pbVar12 + 1;
        uVar14 = uVar13 >> 1;
      }
      FUN_00291910(pbVar15,pbVar5,uVar14);
      puVar3 = PTR_DAT_043737a8;
    }
  }
  PTR_DAT_043737a8 = puVar3;
  if (param_2 != PTR_DAT_04376f28) {
    puVar16 = *(undefined **)(param_2 + 0x60);
    if (puVar16 != (undefined *)0x0) {
      lVar9 = *(long *)(param_1 + 0x60);
      if (lVar9 == 0) {
        uVar13 = *(ulong *)(param_1 + 8);
        puVar10 = (ulong *)(uVar13 & 0xfffffffffffffffe);
        if ((uVar13 & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
        lVar9 = FUN_00602b5c(puVar10);
        *(long *)(param_1 + 0x60) = lVar9;
        puVar16 = *(undefined **)(param_2 + 0x60);
      }
      puVar2 = puVar3;
      if (puVar16 != (undefined *)0x0) {
        puVar2 = puVar16;
      }
      FUN_006028cc(lVar9,puVar2);
    }
    puVar16 = *(undefined **)(param_2 + 0x68);
    if (puVar16 != (undefined *)0x0) {
      lVar9 = *(long *)(param_1 + 0x68);
      if (lVar9 == 0) {
        uVar13 = *(ulong *)(param_1 + 8);
        puVar10 = (ulong *)(uVar13 & 0xfffffffffffffffe);
        if ((uVar13 & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
        lVar9 = FUN_00602b5c(puVar10);
        *(long *)(param_1 + 0x68) = lVar9;
        puVar16 = *(undefined **)(param_2 + 0x68);
      }
      if (puVar16 != (undefined *)0x0) {
        puVar3 = puVar16;
      }
      FUN_006028cc(lVar9,puVar3);
    }
  }
  if (*(int *)(param_2 + 0x7c) != 10) {
    if (*(int *)(param_2 + 0x7c) != 9) {
      return;
    }
    if (*(int *)(param_1 + 0x7c) == 9) {
      uVar11 = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      FUN_0079d6a4(param_1);
      *(undefined4 *)(param_1 + 0x7c) = 9;
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
      uVar11 = FUN_00602b5c(puVar10);
      *(undefined8 *)(param_1 + 0x70) = uVar11;
      if (*(int *)(param_2 + 0x7c) != 9) {
        FUN_006028cc(uVar11,PTR_DAT_043737a8);
        return;
      }
    }
    FUN_006028cc(uVar11,*(undefined8 *)(param_2 + 0x70));
    return;
  }
  if (*(int *)(param_1 + 0x7c) == 10) {
    uVar11 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    FUN_0079d6a4(param_1);
    *(undefined4 *)(param_1 + 0x7c) = 10;
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar10 = (ulong *)*puVar10;
    }
    uVar11 = FUN_0030c720(puVar10);
    *(undefined8 *)(param_1 + 0x70) = uVar11;
    if (*(int *)(param_2 + 0x7c) != 10) {
      puVar16 = PTR_DAT_04373198;
      goto LAB_0079f7ec;
    }
  }
  puVar16 = *(undefined **)(param_2 + 0x70);
LAB_0079f7ec:
  FUN_0030c490(uVar11,puVar16);
  return;
}


