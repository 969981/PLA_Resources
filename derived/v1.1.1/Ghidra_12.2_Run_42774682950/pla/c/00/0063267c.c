/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0063267c; name: FUN_0063267c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0063267c(undefined *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined *puVar13;
  byte *pbVar14;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
                 ,799);
                    /* try { // try from 006326e0 to 006326f3 has its CatchHandler @ 00632940 */
    uVar6 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006326f4 to 006326fb has its CatchHandler @ 0063293c */
    FUN_0030f41c(auStack_68,uVar6);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) == 0) goto LAB_006326a8;
LAB_00632710:
    uVar10 = uVar10 & 0xfffffffffffffffe;
    uVar11 = *(ulong *)(param_1 + 8);
    if ((uVar11 & 1) == 0) {
      lVar7 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar7 = (uVar11 & 0xfffffffffffffffe) + 8;
    }
    uVar11 = *(ulong *)(uVar10 + 0x10);
    lVar3 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar3 = uVar10 + 9;
      uVar11 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_002e4094(lVar7,lVar3,uVar11);
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) == 0) goto LAB_006326b4;
LAB_00632750:
    pbVar14 = PTR_DAT_043730c0;
    if (*(long *)(pbVar9 + 8) != 0) goto LAB_00632760;
LAB_006327a0:
    pbVar9 = *(byte **)(param_2 + 0x18);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) == 0) goto LAB_006327ac;
LAB_006327d8:
    uVar11 = *(ulong *)(pbVar9 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) != 0) goto LAB_00632710;
LAB_006326a8:
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) != 0) goto LAB_00632750;
LAB_006326b4:
    pbVar14 = PTR_DAT_043730c0;
    if (uVar10 >> 1 == 0) goto LAB_006327a0;
LAB_00632760:
    pbVar14 = PTR_DAT_043730c0;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 != PTR_DAT_043730c0) {
      if (pbVar12 != pbVar9) {
        uVar11 = *(ulong *)(pbVar9 + 8);
        pbVar4 = *(byte **)(pbVar9 + 0x10);
        if ((uVar10 & 1) == 0) {
          pbVar4 = pbVar9 + 1;
          uVar11 = uVar10 >> 1;
        }
        FUN_00291910(pbVar12,pbVar4,uVar11);
      }
      goto LAB_006327a0;
    }
    FUN_0029175c(puVar1,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x18);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) != 0) goto LAB_006327d8;
LAB_006327ac:
    uVar11 = uVar10 >> 1;
  }
  if (uVar11 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == pbVar14) {
      FUN_0029175c(puVar1,puVar8);
      pbVar9 = *(byte **)(param_2 + 0x20);
      bVar5 = *pbVar9;
      goto joined_r0x00632828;
    }
    if (pbVar12 != pbVar9) {
      uVar11 = *(ulong *)(pbVar9 + 8);
      pbVar4 = *(byte **)(pbVar9 + 0x10);
      if ((uVar10 & 1) == 0) {
        pbVar4 = pbVar9 + 1;
        uVar11 = uVar10 >> 1;
      }
      FUN_00291910(pbVar12,pbVar4,uVar11);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  bVar5 = *pbVar9;
joined_r0x00632828:
  if ((bVar5 & 1) == 0) {
    uVar10 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar10 = *(ulong *)(pbVar9 + 8);
  }
  if (uVar10 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == pbVar14) {
      FUN_0029175c(puVar1,puVar8);
    }
    else if (pbVar12 != pbVar9) {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar14 = *(byte **)(pbVar9 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar14 = pbVar9 + 1;
        uVar10 = (ulong)(bVar5 >> 1);
      }
      FUN_00291910(pbVar12,pbVar14,uVar10);
    }
  }
  if (param_2 != PTR_DAT_04375638) {
    puVar13 = *(undefined **)(param_2 + 0x28);
    if (puVar13 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_00633910(puVar8);
        *(long *)(param_1 + 0x28) = lVar7;
        puVar13 = *(undefined **)(param_2 + 0x28);
      }
      puVar2 = PTR_DAT_04375650;
      if (puVar13 != (undefined *)0x0) {
        puVar2 = puVar13;
      }
      FUN_00631810(lVar7,puVar2);
    }
  }
  return;
}


