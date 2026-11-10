/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071d8e8; name: FUN_0071d8e8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0071d8e8(undefined *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined *puVar14;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0x10a3);
                    /* try { // try from 0071d94c to 0071d95f has its CatchHandler @ 0071db70 */
    uVar7 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0071d960 to 0071d967 has its CatchHandler @ 0071db6c */
    FUN_0030f41c(auStack_68,uVar7);
    FUN_0030f658(auStack_60);
    uVar11 = *(ulong *)(param_2 + 8);
    if ((uVar11 & 1) == 0) goto LAB_0071d914;
LAB_0071d97c:
    uVar11 = uVar11 & 0xfffffffffffffffe;
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      lVar8 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar8 = (uVar12 & 0xfffffffffffffffe) + 8;
    }
    uVar12 = *(ulong *)(uVar11 + 0x10);
    lVar3 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar3 = uVar11 + 9;
      uVar12 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_002e4094(lVar8,lVar3,uVar12);
    pbVar10 = *(byte **)(param_2 + 0x10);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) == 0) goto LAB_0071d920;
LAB_0071d9bc:
    uVar12 = *(ulong *)(pbVar10 + 8);
    pbVar5 = PTR_DAT_043730c0;
  }
  else {
    uVar11 = *(ulong *)(param_2 + 8);
    if ((uVar11 & 1) != 0) goto LAB_0071d97c;
LAB_0071d914:
    pbVar10 = *(byte **)(param_2 + 0x10);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) != 0) goto LAB_0071d9bc;
LAB_0071d920:
    uVar12 = uVar11 >> 1;
    pbVar5 = PTR_DAT_043730c0;
  }
  PTR_DAT_043730c0 = pbVar5;
  if (uVar12 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar13 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar13 = (byte *)*puVar1;
    }
    if (pbVar13 == pbVar5) {
      FUN_0029175c(puVar1,puVar9);
      pbVar10 = *(byte **)(param_2 + 0x18);
      bVar6 = *pbVar10;
      goto joined_r0x0071da14;
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
  pbVar10 = *(byte **)(param_2 + 0x18);
  bVar6 = *pbVar10;
joined_r0x0071da14:
  if ((bVar6 & 1) == 0) {
    uVar11 = (ulong)(bVar6 >> 1);
  }
  else {
    uVar11 = *(ulong *)(pbVar10 + 8);
  }
  if (uVar11 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar13 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar13 = (byte *)*puVar1;
    }
    if (pbVar13 == pbVar5) {
      FUN_0029175c(puVar1,puVar9);
    }
    else if (pbVar13 != pbVar10) {
      uVar11 = *(ulong *)(pbVar10 + 8);
      pbVar5 = *(byte **)(pbVar10 + 0x10);
      if ((bVar6 & 1) == 0) {
        pbVar5 = pbVar10 + 1;
        uVar11 = (ulong)(bVar6 >> 1);
      }
      FUN_00291910(pbVar13,pbVar5,uVar11);
    }
  }
  if (param_2 != PTR_DAT_04376490) {
    puVar14 = *(undefined **)(param_2 + 0x20);
    if (puVar14 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == 0) {
        uVar11 = *(ulong *)(param_1 + 8);
        puVar9 = (ulong *)(uVar11 & 0xfffffffffffffffe);
        if ((uVar11 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_002e1a14(puVar9);
        *(long *)(param_1 + 0x20) = lVar8;
        puVar14 = *(undefined **)(param_2 + 0x20);
      }
      puVar2 = PTR_DAT_04373798;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
      }
      FUN_002dec54(lVar8,puVar2);
    }
    puVar14 = *(undefined **)(param_2 + 0x28);
    if (puVar14 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 == 0) {
        uVar11 = *(ulong *)(param_1 + 8);
        puVar9 = (ulong *)(uVar11 & 0xfffffffffffffffe);
        if ((uVar11 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_00724a34(puVar9);
        *(long *)(param_1 + 0x28) = lVar8;
        puVar14 = *(undefined **)(param_2 + 0x28);
      }
      puVar2 = PTR_DAT_04376540;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
      }
      FUN_00718ae4(lVar8,puVar2);
    }
  }
  return;
}


