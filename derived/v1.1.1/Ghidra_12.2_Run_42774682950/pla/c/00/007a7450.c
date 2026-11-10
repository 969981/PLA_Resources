/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a7450; name: FUN_007a7450
 */


void FUN_007a7450(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0x830);
                    /* try { // try from 007a7494 to 007a74a7 has its CatchHandler @ 007a762c */
    uVar7 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007a74a8 to 007a74af has its CatchHandler @ 007a7628 */
    FUN_0030f41c(auStack_28,uVar7);
    FUN_0030f658(auStack_60);
    uVar11 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar8 = FUN_0033aecc();
    }
    else {
      lVar8 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar11 + 0x10);
    lVar3 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar3 = uVar11 + 9;
      uVar2 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_002e4094(lVar8,lVar3,uVar2);
  }
  FUN_007a645c(param_1 + 0x10,param_2 + 0x10);
  puVar6 = PTR_DAT_043730c0;
  pbVar10 = *(byte **)(param_2 + 0x28);
  bVar5 = *pbVar10;
  if ((bVar5 & 1) == 0) {
    if (bVar5 >> 1 != 0) goto LAB_007a7534;
  }
  else if (*(long *)(pbVar10 + 8) != 0) {
LAB_007a7534:
    puVar1 = (undefined8 *)(param_1 + 0x28);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == PTR_DAT_043730c0) {
      FUN_0029175c(puVar1,puVar9);
      pbVar10 = *(byte **)(param_2 + 0x30);
      bVar5 = *pbVar10;
      goto joined_r0x007a757c;
    }
    if (pbVar12 != pbVar10) {
      uVar11 = *(ulong *)(pbVar10 + 8);
      pbVar4 = *(byte **)(pbVar10 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar4 = pbVar10 + 1;
        uVar11 = (ulong)(bVar5 >> 1);
      }
      FUN_00291910(pbVar12,pbVar4,uVar11);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x30);
  bVar5 = *pbVar10;
joined_r0x007a757c:
  if ((bVar5 & 1) == 0) {
    uVar11 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar11 = *(ulong *)(pbVar10 + 8);
  }
  if (uVar11 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == puVar6) {
      FUN_0029175c(puVar1,puVar9);
    }
    else if (pbVar12 != pbVar10) {
      uVar11 = *(ulong *)(pbVar10 + 8);
      pbVar4 = *(byte **)(pbVar10 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar4 = pbVar10 + 1;
        uVar11 = (ulong)(bVar5 >> 1);
      }
      FUN_00291910(pbVar12,pbVar4,uVar11);
    }
  }
  return;
}


