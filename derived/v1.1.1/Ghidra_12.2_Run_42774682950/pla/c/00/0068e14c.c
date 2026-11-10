/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068e14c; name: FUN_0068e14c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0068e14c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x40b);
                    /* try { // try from 0068e1a8 to 0068e1bb has its CatchHandler @ 0068e380 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0068e1bc to 0068e1c3 has its CatchHandler @ 0068e37c */
    FUN_0030f41c(auStack_68,uVar5);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if ((uVar10 & 1) == 0) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    bVar4 = *pbVar9;
  }
  else {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    uVar11 = *(ulong *)(param_1 + 8);
    if ((uVar11 & 1) == 0) {
      lVar6 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar6 = (uVar11 & 0xfffffffffffffffe) + 8;
    }
    uVar11 = *(ulong *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar2 = uVar10 + 9;
      uVar11 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar11);
    pbVar9 = *(byte **)(param_2 + 0x10);
    bVar4 = *pbVar9;
  }
  if ((bVar4 & 1) == 0) {
    uVar10 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar10 = *(ulong *)(pbVar9 + 8);
  }
  if (uVar10 != 0) {
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar8 = (ulong *)*puVar8;
    }
    pbVar12 = *(byte **)(param_1 + 0x10);
    if (pbVar12 == PTR_DAT_043730c0) {
      FUN_0029175c(param_1 + 0x10,puVar8);
    }
    else if (pbVar12 != pbVar9) {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar3 = *(byte **)(pbVar9 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar3 = pbVar9 + 1;
        uVar10 = (ulong)(bVar4 >> 1);
      }
      FUN_00291910(pbVar12,pbVar3,uVar10);
    }
  }
  if (param_2 != PTR_DAT_04375918) {
    puVar8 = (ulong *)(param_1 + 8);
    puVar13 = *(undefined **)(param_2 + 0x18);
    if (puVar13 != (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
        if ((*puVar8 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_002e1a14(puVar7);
        *(long *)(param_1 + 0x18) = lVar6;
        puVar13 = *(undefined **)(param_2 + 0x18);
      }
      puVar14 = PTR_DAT_04373798;
      if (puVar13 != (undefined *)0x0) {
        puVar14 = puVar13;
      }
      FUN_002dec54(lVar6,puVar14);
    }
    puVar13 = PTR_DAT_043737a8;
    puVar14 = *(undefined **)(param_2 + 0x20);
    if (puVar14 != (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
        if ((*puVar8 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_00602b5c(puVar7);
        *(long *)(param_1 + 0x20) = lVar6;
        puVar14 = *(undefined **)(param_2 + 0x20);
      }
      puVar1 = puVar13;
      if (puVar14 != (undefined *)0x0) {
        puVar1 = puVar14;
      }
      FUN_006028cc(lVar6,puVar1);
    }
    puVar14 = *(undefined **)(param_2 + 0x28);
    if (puVar14 != (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
        if ((*puVar8 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_00602b5c(puVar7);
        *(long *)(param_1 + 0x28) = lVar6;
        puVar14 = *(undefined **)(param_2 + 0x28);
      }
      if (puVar14 != (undefined *)0x0) {
        puVar13 = puVar14;
      }
      FUN_006028cc(lVar6,puVar13);
    }
  }
  return;
}


