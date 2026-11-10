/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007201b4; name: FUN_007201b4
 */


void FUN_007201b4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0x12b7);
                    /* try { // try from 007201f8 to 0072020b has its CatchHandler @ 00720324 */
    uVar6 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0072020c to 00720213 has its CatchHandler @ 00720320 */
    FUN_0030f41c(auStack_28,uVar6);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar7 = FUN_0033aecc();
    }
    else {
      lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar2 = uVar10 + 9;
      uVar1 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_002e4094(lVar7,lVar2,uVar1);
  }
  FUN_0032ba34(param_1 + 0x10,param_2 + 0x10);
  FUN_0032ba34(param_1 + 0x28,param_2 + 0x28);
  pbVar9 = *(byte **)(param_2 + 0x40);
  bVar4 = *pbVar9;
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 != 0) goto LAB_00720294;
  }
  else if (*(long *)(pbVar9 + 8) != 0) {
LAB_00720294:
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar8 = (ulong *)*puVar8;
    }
    pbVar11 = *(byte **)(param_1 + 0x40);
    if (pbVar11 == PTR_DAT_043730c0) {
      FUN_0029175c((undefined8 *)(param_1 + 0x40),puVar8);
      cVar5 = *(char *)(param_2 + 0x48);
      goto joined_r0x007202e0;
    }
    if (pbVar11 != pbVar9) {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar3 = *(byte **)(pbVar9 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar3 = pbVar9 + 1;
        uVar10 = (ulong)(bVar4 >> 1);
      }
      FUN_00291910(pbVar11,pbVar3,uVar10);
    }
  }
  cVar5 = *(char *)(param_2 + 0x48);
joined_r0x007202e0:
  if (cVar5 != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}


