/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00723300; name: FUN_00723300
 */


void FUN_00723300(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
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
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0x1696);
                    /* try { // try from 00723360 to 00723373 has its CatchHandler @ 00723578 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00723374 to 0072337b has its CatchHandler @ 00723574 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) != 0) goto LAB_0072338c;
LAB_00723328:
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_00723334;
LAB_007233d0:
    pbVar12 = PTR_DAT_043730c0;
    if (*(long *)(pbVar8 + 8) != 0) goto LAB_007233e0;
LAB_00723420:
    pbVar8 = *(byte **)(param_2 + 0x18);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_0072342c;
LAB_00723458:
    if (*(long *)(pbVar8 + 8) != 0) goto LAB_00723460;
LAB_007234a0:
    pbVar8 = *(byte **)(param_2 + 0x20);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_007234ac;
LAB_007234d8:
    uVar10 = *(ulong *)(pbVar8 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) == 0) goto LAB_00723328;
LAB_0072338c:
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
    if ((*pbVar8 & 1) != 0) goto LAB_007233d0;
LAB_00723334:
    pbVar12 = PTR_DAT_043730c0;
    if (uVar9 >> 1 == 0) goto LAB_00723420;
LAB_007233e0:
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
      goto LAB_00723420;
    }
    FUN_0029175c(puVar1,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x18);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_00723458;
LAB_0072342c:
    if (uVar9 >> 1 == 0) goto LAB_007234a0;
LAB_00723460:
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar11 = (byte *)*puVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar11 = (byte *)*puVar1;
    }
    if (pbVar11 != pbVar12) {
      if (pbVar11 != pbVar8) {
        uVar10 = *(ulong *)(pbVar8 + 8);
        pbVar3 = *(byte **)(pbVar8 + 0x10);
        if ((uVar9 & 1) == 0) {
          pbVar3 = pbVar8 + 1;
          uVar10 = uVar9 >> 1;
        }
        FUN_00291910(pbVar11,pbVar3,uVar10);
      }
      goto LAB_007234a0;
    }
    FUN_0029175c(puVar1,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x20);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_007234d8;
LAB_007234ac:
    uVar10 = uVar9 >> 1;
  }
  if (uVar10 != 0) {
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
      iVar4 = *(int *)(param_2 + 0x28);
      goto joined_r0x00723524;
    }
    if (pbVar11 != pbVar8) {
      uVar10 = *(ulong *)(pbVar8 + 8);
      pbVar12 = *(byte **)(pbVar8 + 0x10);
      if ((uVar9 & 1) == 0) {
        pbVar12 = pbVar8 + 1;
        uVar10 = uVar9 >> 1;
      }
      FUN_00291910(pbVar11,pbVar12,uVar10);
    }
  }
  iVar4 = *(int *)(param_2 + 0x28);
joined_r0x00723524:
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x28) = iVar4;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  return;
}


