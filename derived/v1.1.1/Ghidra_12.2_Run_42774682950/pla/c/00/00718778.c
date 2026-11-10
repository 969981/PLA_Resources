/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00718778; name: FUN_00718778
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00718778(undefined *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0x836);
                    /* try { // try from 007187dc to 007187ef has its CatchHandler @ 00718ad0 */
    uVar6 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007187f0 to 007187f7 has its CatchHandler @ 00718acc */
    FUN_0030f41c(auStack_68,uVar6);
    FUN_0030f658(auStack_60);
    uVar11 = *(ulong *)(param_2 + 8);
    if ((uVar11 & 1) == 0) goto LAB_007187a4;
LAB_0071880c:
    uVar11 = uVar11 & 0xfffffffffffffffe;
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      lVar7 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar7 = (uVar12 & 0xfffffffffffffffe) + 8;
    }
    uVar12 = *(ulong *)(uVar11 + 0x10);
    lVar3 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar3 = uVar11 + 9;
      uVar12 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_002e4094(lVar7,lVar3,uVar12);
    pbVar10 = *(byte **)(param_2 + 0x10);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) == 0) goto LAB_007187b0;
LAB_0071884c:
    pbVar15 = PTR_DAT_043730c0;
    if (*(long *)(pbVar10 + 8) != 0) goto LAB_0071885c;
LAB_0071889c:
    pbVar10 = *(byte **)(param_2 + 0x18);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) == 0) goto LAB_007188a8;
LAB_007188d4:
    uVar12 = *(ulong *)(pbVar10 + 8);
  }
  else {
    uVar11 = *(ulong *)(param_2 + 8);
    if ((uVar11 & 1) != 0) goto LAB_0071880c;
LAB_007187a4:
    pbVar10 = *(byte **)(param_2 + 0x10);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) != 0) goto LAB_0071884c;
LAB_007187b0:
    pbVar15 = PTR_DAT_043730c0;
    if (uVar11 >> 1 == 0) goto LAB_0071889c;
LAB_0071885c:
    pbVar15 = PTR_DAT_043730c0;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar13 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar13 = (byte *)*puVar1;
    }
    if (pbVar13 != PTR_DAT_043730c0) {
      if (pbVar13 != pbVar10) {
        uVar12 = *(ulong *)(pbVar10 + 8);
        pbVar4 = *(byte **)(pbVar10 + 0x10);
        if ((uVar11 & 1) == 0) {
          pbVar4 = pbVar10 + 1;
          uVar12 = uVar11 >> 1;
        }
        FUN_00291910(pbVar13,pbVar4,uVar12);
      }
      goto LAB_0071889c;
    }
    FUN_0029175c(puVar1,puVar9);
    pbVar10 = *(byte **)(param_2 + 0x18);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) != 0) goto LAB_007188d4;
LAB_007188a8:
    uVar12 = uVar11 >> 1;
  }
  if (uVar12 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar13 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar13 = (byte *)*puVar1;
    }
    if (pbVar13 == pbVar15) {
      FUN_0029175c(puVar1,puVar9);
      pbVar10 = *(byte **)(param_2 + 0x20);
      bVar5 = *pbVar10;
      goto joined_r0x00718924;
    }
    if (pbVar13 != pbVar10) {
      uVar12 = *(ulong *)(pbVar10 + 8);
      pbVar4 = *(byte **)(pbVar10 + 0x10);
      if ((uVar11 & 1) == 0) {
        pbVar4 = pbVar10 + 1;
        uVar12 = uVar11 >> 1;
      }
      FUN_00291910(pbVar13,pbVar4,uVar12);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  bVar5 = *pbVar10;
joined_r0x00718924:
  if ((bVar5 & 1) == 0) {
    uVar11 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar11 = *(ulong *)(pbVar10 + 8);
  }
  if (uVar11 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar13 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar13 = (byte *)*puVar1;
    }
    if (pbVar13 == pbVar15) {
      FUN_0029175c(puVar1,puVar9);
    }
    else if (pbVar13 != pbVar10) {
      uVar11 = *(ulong *)(pbVar10 + 8);
      pbVar15 = *(byte **)(pbVar10 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar15 = pbVar10 + 1;
        uVar11 = (ulong)(bVar5 >> 1);
      }
      FUN_00291910(pbVar13,pbVar15,uVar11);
    }
  }
  if (param_2 != PTR_DAT_043766b8) {
    puVar9 = (ulong *)(param_1 + 8);
    puVar14 = *(undefined **)(param_2 + 0x28);
    if (puVar14 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar9 & 0xfffffffffffffffe);
        if ((*puVar9 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_00724a34(puVar8);
        *(long *)(param_1 + 0x28) = lVar7;
        puVar14 = *(undefined **)(param_2 + 0x28);
      }
      puVar2 = PTR_DAT_04376540;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
      }
      FUN_00718ae4(lVar7,puVar2);
    }
    puVar14 = *(undefined **)(param_2 + 0x30);
    if (puVar14 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar9 & 0xfffffffffffffffe);
        if ((*puVar9 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_00602b5c(puVar8);
        *(long *)(param_1 + 0x30) = lVar7;
        puVar14 = *(undefined **)(param_2 + 0x30);
      }
      puVar2 = PTR_DAT_043737a8;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
      }
      FUN_006028cc(lVar7,puVar2);
    }
    puVar14 = *(undefined **)(param_2 + 0x38);
    if (puVar14 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar9 & 0xfffffffffffffffe);
        if ((*puVar9 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_002e1a14(puVar8);
        *(long *)(param_1 + 0x38) = lVar7;
        puVar14 = *(undefined **)(param_2 + 0x38);
      }
      puVar2 = PTR_DAT_04373798;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
      }
      FUN_002dec54(lVar7,puVar2);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  return;
}


