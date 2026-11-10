/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069aac0; name: FUN_0069aac0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0069aac0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
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
  undefined *puVar12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x19b1);
                    /* try { // try from 0069ab1c to 0069ab2f has its CatchHandler @ 0069ac80 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0069ab30 to 0069ab37 has its CatchHandler @ 0069ac7c */
    FUN_0030f41c(auStack_68,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
  }
  if ((uVar9 & 1) == 0) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    bVar4 = *pbVar8;
  }
  else {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar10 = *(ulong *)(param_1 + 8);
    if ((uVar10 & 1) == 0) {
      lVar6 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar6 = (uVar10 & 0xfffffffffffffffe) + 8;
    }
    uVar10 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar10 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar10);
    pbVar8 = *(byte **)(param_2 + 0x10);
    bVar4 = *pbVar8;
  }
  if ((bVar4 & 1) == 0) {
    uVar9 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbVar8 + 8);
  }
  if (uVar9 != 0) {
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    pbVar11 = *(byte **)(param_1 + 0x10);
    if (pbVar11 == PTR_DAT_043730c0) {
      FUN_0029175c(param_1 + 0x10,puVar7);
    }
    else if (pbVar11 != pbVar8) {
      uVar9 = *(ulong *)(pbVar8 + 8);
      pbVar3 = *(byte **)(pbVar8 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar3 = pbVar8 + 1;
        uVar9 = (ulong)(bVar4 >> 1);
      }
      FUN_00291910(pbVar11,pbVar3,uVar9);
    }
  }
  if (param_2 != PTR_DAT_04375910) {
    puVar12 = *(undefined **)(param_2 + 0x18);
    if (puVar12 != (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_0069c8f0(puVar7);
        *(long *)(param_1 + 0x18) = lVar6;
        puVar12 = *(undefined **)(param_2 + 0x18);
      }
      puVar1 = PTR_DAT_04375918;
      if (puVar12 != (undefined *)0x0) {
        puVar1 = puVar12;
      }
      FUN_0068e14c(lVar6,puVar1);
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  return;
}


