/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006333b4; name: FUN_006333b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006333b4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
                 ,0x42f);
                    /* try { // try from 00633414 to 00633427 has its CatchHandler @ 0063360c */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00633428 to 0063342f has its CatchHandler @ 00633608 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) != 0) goto LAB_00633440;
LAB_006333dc:
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_006333e8;
LAB_00633484:
    pbVar12 = PTR_DAT_043730c0;
    if (*(long *)(pbVar8 + 8) != 0) goto LAB_00633494;
LAB_006334d4:
    pbVar8 = *(byte **)(param_2 + 0x18);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_006334e0;
LAB_0063350c:
    uVar10 = *(ulong *)(pbVar8 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) == 0) goto LAB_006333dc;
LAB_00633440:
    uVar9 = uVar9 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0033aecc();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar10 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar10 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar10);
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_00633484;
LAB_006333e8:
    pbVar12 = PTR_DAT_043730c0;
    if (uVar9 >> 1 == 0) goto LAB_006334d4;
LAB_00633494:
    pbVar12 = PTR_DAT_043730c0;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar11 = (byte *)*puVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar11 = (byte *)*puVar1;
    }
    if (pbVar11 != PTR_DAT_043730c0) {
      if (pbVar11 != pbVar8) {
        uVar10 = *(ulong *)(pbVar8 + 8);
        pbVar3 = *(byte **)(pbVar8 + 0x10);
        if ((uVar9 & 1) == 0) {
          pbVar3 = pbVar8 + 1;
          uVar10 = uVar9 >> 1;
        }
        FUN_00291910(pbVar11,pbVar3,uVar10);
      }
      goto LAB_006334d4;
    }
    FUN_0029175c(puVar1,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x18);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_0063350c;
LAB_006334e0:
    uVar10 = uVar9 >> 1;
  }
  if (uVar10 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar11 = (byte *)*puVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar11 = (byte *)*puVar1;
    }
    if (pbVar11 == pbVar12) {
      FUN_0029175c(puVar1,puVar7);
      pbVar8 = *(byte **)(param_2 + 0x20);
      bVar4 = *pbVar8;
      goto joined_r0x0063355c;
    }
    if (pbVar11 != pbVar8) {
      uVar10 = *(ulong *)(pbVar8 + 8);
      pbVar3 = *(byte **)(pbVar8 + 0x10);
      if ((uVar9 & 1) == 0) {
        pbVar3 = pbVar8 + 1;
        uVar10 = uVar9 >> 1;
      }
      FUN_00291910(pbVar11,pbVar3,uVar10);
    }
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  bVar4 = *pbVar8;
joined_r0x0063355c:
  if ((bVar4 & 1) == 0) {
    uVar9 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbVar8 + 8);
  }
  if (uVar9 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar11 = (byte *)*puVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar11 = (byte *)*puVar1;
    }
    if (pbVar11 == pbVar12) {
      FUN_0029175c(puVar1,puVar7);
    }
    else if (pbVar11 != pbVar8) {
      uVar9 = *(ulong *)(pbVar8 + 8);
      pbVar12 = *(byte **)(pbVar8 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar12 = pbVar8 + 1;
        uVar9 = (ulong)(bVar4 >> 1);
      }
      FUN_00291910(pbVar11,pbVar12,uVar9);
    }
  }
  return;
}


