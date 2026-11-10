/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00724264; name: FUN_00724264
 */


void FUN_00724264(long param_1,long param_2)

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
                 ,0x17e0);
                    /* try { // try from 007242c4 to 007242d7 has its CatchHandler @ 007244dc */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007242d8 to 007242df has its CatchHandler @ 007244d8 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) != 0) goto LAB_007242f0;
LAB_0072428c:
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_00724298;
LAB_00724334:
    pbVar12 = PTR_DAT_043730c0;
    if (*(long *)(pbVar8 + 8) != 0) goto LAB_00724344;
LAB_00724384:
    pbVar8 = *(byte **)(param_2 + 0x18);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_00724390;
LAB_007243bc:
    if (*(long *)(pbVar8 + 8) != 0) goto LAB_007243c4;
LAB_00724404:
    pbVar8 = *(byte **)(param_2 + 0x20);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_00724410;
LAB_0072443c:
    uVar10 = *(ulong *)(pbVar8 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) == 0) goto LAB_0072428c;
LAB_007242f0:
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
    if ((*pbVar8 & 1) != 0) goto LAB_00724334;
LAB_00724298:
    pbVar12 = PTR_DAT_043730c0;
    if (uVar9 >> 1 == 0) goto LAB_00724384;
LAB_00724344:
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
      goto LAB_00724384;
    }
    FUN_0029175c(puVar1,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x18);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_007243bc;
LAB_00724390:
    if (uVar9 >> 1 == 0) goto LAB_00724404;
LAB_007243c4:
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
      goto LAB_00724404;
    }
    FUN_0029175c(puVar1,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x20);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_0072443c;
LAB_00724410:
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
      goto joined_r0x00724488;
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
joined_r0x00724488:
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x28) = iVar4;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  return;
}


