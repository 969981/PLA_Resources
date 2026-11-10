/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006979e4; name: FUN_006979e4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006979e4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x1731);
                    /* try { // try from 00697a3c to 00697a4f has its CatchHandler @ 00697b2c */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00697a50 to 00697a57 has its CatchHandler @ 00697b28 */
    FUN_0030f41c(auStack_28,uVar5);
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
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0033aecc();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar1);
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
    pbVar10 = *(byte **)(param_1 + 0x10);
    if (pbVar10 == PTR_DAT_043730c0) {
      FUN_0029175c((undefined8 *)(param_1 + 0x10),puVar7);
    }
    else if (pbVar10 != pbVar8) {
      uVar9 = *(ulong *)(pbVar8 + 8);
      pbVar3 = *(byte **)(pbVar8 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar3 = pbVar8 + 1;
        uVar9 = (ulong)(bVar4 >> 1);
      }
      FUN_00291910(pbVar10,pbVar3,uVar9);
    }
  }
  return;
}


