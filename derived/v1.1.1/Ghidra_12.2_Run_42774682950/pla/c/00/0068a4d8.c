/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068a4d8; name: FUN_0068a4d8
 */


void FUN_0068a4d8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/gamesync.pb.cc"
                 ,0x16af);
                    /* try { // try from 0068a548 to 0068a55b has its CatchHandler @ 0068a72c */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0068a55c to 0068a563 has its CatchHandler @ 0068a728 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) == 0) goto LAB_0068a500;
LAB_0068a574:
    uVar9 = uVar9 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar7 = FUN_0033aecc();
    }
    else {
      lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_002e4094(lVar7,lVar2,uVar1);
    iVar4 = *(int *)(param_2 + 0x1c);
    pbVar3 = PTR_DAT_043730c0;
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) != 0) goto LAB_0068a574;
LAB_0068a500:
    iVar4 = *(int *)(param_2 + 0x1c);
    pbVar3 = PTR_DAT_043730c0;
  }
  PTR_DAT_043730c0 = pbVar3;
  if (iVar4 == 1) {
    pbVar11 = *(byte **)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) == 1) {
      uVar9 = *(ulong *)(param_1 + 8);
    }
    else {
      FUN_00689a9c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *(byte **)(param_1 + 0x10) = pbVar3;
      uVar9 = *(ulong *)(param_1 + 8);
    }
    puVar6 = (ulong *)(uVar9 & 0xfffffffffffffffe);
    if ((uVar9 & 1) == 0) {
      pbVar10 = *(byte **)(param_1 + 0x10);
    }
    else {
      puVar6 = (ulong *)*puVar6;
      pbVar10 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar10 == pbVar3) {
      FUN_0029175c(param_1 + 0x10,puVar6,pbVar11);
    }
    else if (pbVar10 != pbVar11) {
      uVar9 = *(ulong *)(pbVar11 + 8);
      pbVar3 = *(byte **)(pbVar11 + 0x10);
      if ((*pbVar11 & 1) == 0) {
        pbVar3 = pbVar11 + 1;
        uVar9 = (ulong)(*pbVar11 >> 1);
      }
      FUN_00291910(pbVar10,pbVar3,uVar9);
    }
    return;
  }
  if (iVar4 == 2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00689a9c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar5 = FUN_0069d788(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_0069aac0(uVar5,PTR_DAT_04375910);
        return;
      }
    }
    FUN_0069aac0(uVar5,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar4 != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    FUN_00689a9c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 3;
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    uVar5 = FUN_0069d854(puVar6);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    if (*(int *)(param_2 + 0x1c) != 3) {
      puVar8 = PTR_DAT_04375c10;
      goto LAB_0068a6e8;
    }
  }
  puVar8 = *(undefined **)(param_2 + 0x10);
LAB_0068a6e8:
  FUN_0069b6f0(uVar5,puVar8);
  return;
}


