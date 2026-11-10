/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007219f8; name: FUN_007219f8
 */


void FUN_007219f8(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0x1554);
                    /* try { // try from 00721a50 to 00721a63 has its CatchHandler @ 00721b60 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00721a64 to 00721a6b has its CatchHandler @ 00721b5c */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) == 0) goto LAB_00721a20;
LAB_00721a7c:
    uVar8 = uVar8 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0033aecc();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar9 = *(ulong *)(uVar8 + 0x10);
    lVar1 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar1 = uVar8 + 9;
      uVar9 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_002e4094(lVar5,lVar1,uVar9);
    pbVar7 = *(byte **)(param_2 + 0x10);
    uVar8 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) == 0) goto LAB_00721a2c;
LAB_00721ac0:
    uVar9 = *(ulong *)(pbVar7 + 8);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) != 0) goto LAB_00721a7c;
LAB_00721a20:
    pbVar7 = *(byte **)(param_2 + 0x10);
    uVar8 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) != 0) goto LAB_00721ac0;
LAB_00721a2c:
    uVar9 = uVar8 >> 1;
  }
  if (uVar9 != 0) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    pbVar10 = *(byte **)(param_1 + 0x10);
    if (pbVar10 == PTR_DAT_043730c0) {
      FUN_0029175c((undefined8 *)(param_1 + 0x10),puVar6);
      iVar3 = *(int *)(param_2 + 0x18);
      goto joined_r0x00721b14;
    }
    if (pbVar10 != pbVar7) {
      uVar9 = *(ulong *)(pbVar7 + 8);
      pbVar2 = *(byte **)(pbVar7 + 0x10);
      if ((uVar8 & 1) == 0) {
        pbVar2 = pbVar7 + 1;
        uVar9 = uVar8 >> 1;
      }
      FUN_00291910(pbVar10,pbVar2,uVar9);
    }
  }
  iVar3 = *(int *)(param_2 + 0x18);
joined_r0x00721b14:
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x18) = iVar3;
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  return;
}


