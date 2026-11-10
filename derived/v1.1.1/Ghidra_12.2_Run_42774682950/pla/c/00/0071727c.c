/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071727c; name: FUN_0071727c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0071727c(undefined *param_1,undefined *param_2)

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
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0xe30);
                    /* try { // try from 007172f8 to 0071730b has its CatchHandler @ 007175d8 */
    uVar6 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0071730c to 00717313 has its CatchHandler @ 007175d4 */
    FUN_0030f41c(auStack_68,uVar6);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if ((uVar10 & 1) != 0) {
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
  }
  FUN_00712fd8(param_1 + 0x10,param_2 + 0x10);
  puVar13 = PTR_DAT_043730c0;
  pbVar9 = *(byte **)(param_2 + 0x28);
  bVar5 = *pbVar9;
  if ((bVar5 & 1) == 0) {
    if (bVar5 >> 1 != 0) goto LAB_00717364;
LAB_007173a4:
    pbVar9 = *(byte **)(param_2 + 0x30);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) != 0) goto LAB_007173dc;
LAB_007173b0:
    uVar11 = uVar10 >> 1;
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_007173a4;
LAB_00717364:
    puVar1 = (undefined8 *)(param_1 + 0x28);
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
        uVar10 = *(ulong *)(pbVar9 + 8);
        pbVar4 = *(byte **)(pbVar9 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar4 = pbVar9 + 1;
          uVar10 = (ulong)(bVar5 >> 1);
        }
        FUN_00291910(pbVar12,pbVar4,uVar10);
      }
      goto LAB_007173a4;
    }
    FUN_0029175c(puVar1,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x30);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) == 0) goto LAB_007173b0;
LAB_007173dc:
    uVar11 = *(ulong *)(pbVar9 + 8);
  }
  if (uVar11 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == puVar13) {
      FUN_0029175c(puVar1,puVar8);
      pbVar9 = *(byte **)(param_2 + 0x38);
      bVar5 = *pbVar9;
      goto joined_r0x0071742c;
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
  pbVar9 = *(byte **)(param_2 + 0x38);
  bVar5 = *pbVar9;
joined_r0x0071742c:
  if ((bVar5 & 1) == 0) {
    uVar10 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar10 = *(ulong *)(pbVar9 + 8);
  }
  if (uVar10 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x38);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == puVar13) {
      FUN_0029175c(puVar1,puVar8);
    }
    else if (pbVar12 != pbVar9) {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar4 = *(byte **)(pbVar9 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar4 = pbVar9 + 1;
        uVar10 = (ulong)(bVar5 >> 1);
      }
      FUN_00291910(pbVar12,pbVar4,uVar10);
    }
  }
  if (param_2 != PTR_DAT_04376270) {
    puVar13 = *(undefined **)(param_2 + 0x40);
    if (puVar13 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 == 0) {
        uVar10 = *(ulong *)(param_1 + 8);
        puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
        if ((uVar10 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_00602b5c(puVar8);
        *(long *)(param_1 + 0x40) = lVar7;
        puVar13 = *(undefined **)(param_2 + 0x40);
      }
      puVar2 = PTR_DAT_043737a8;
      if (puVar13 != (undefined *)0x0) {
        puVar2 = puVar13;
      }
      FUN_006028cc(lVar7,puVar2);
    }
    puVar13 = *(undefined **)(param_2 + 0x48);
    if (puVar13 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x48);
      if (lVar7 == 0) {
        uVar10 = *(ulong *)(param_1 + 8);
        puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
        if ((uVar10 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_002e1a14(puVar8);
        *(long *)(param_1 + 0x48) = lVar7;
        puVar13 = *(undefined **)(param_2 + 0x48);
      }
      puVar2 = PTR_DAT_04373798;
      if (puVar13 != (undefined *)0x0) {
        puVar2 = puVar13;
      }
      FUN_002dec54(lVar7,puVar2);
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (param_2[0x58] != '\0') {
    param_1[0x58] = 1;
  }
  if (param_2[0x59] != '\0') {
    param_1[0x59] = 1;
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  return;
}


