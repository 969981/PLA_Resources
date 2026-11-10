/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a3a8c; name: FUN_007a3a8c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007a3a8c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0x453);
                    /* try { // try from 007a3aec to 007a3aff has its CatchHandler @ 007a3c64 */
    uVar6 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007a3b00 to 007a3b07 has its CatchHandler @ 007a3c60 */
    FUN_0030f41c(auStack_28,uVar6);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) != 0) goto LAB_007a3b18;
LAB_007a3ab4:
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) == 0) goto LAB_007a3ac0;
LAB_007a3b5c:
    uVar11 = *(ulong *)(pbVar9 + 8);
    pbVar4 = PTR_DAT_043730c0;
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) == 0) goto LAB_007a3ab4;
LAB_007a3b18:
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar7 = FUN_0033aecc();
    }
    else {
      lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar11 = *(ulong *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar2 = uVar10 + 9;
      uVar11 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_002e4094(lVar7,lVar2,uVar11);
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) != 0) goto LAB_007a3b5c;
LAB_007a3ac0:
    uVar11 = uVar10 >> 1;
    pbVar4 = PTR_DAT_043730c0;
  }
  PTR_DAT_043730c0 = pbVar4;
  if (uVar11 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == pbVar4) {
      FUN_0029175c(puVar1,puVar8);
      pbVar9 = *(byte **)(param_2 + 0x18);
      bVar5 = *pbVar9;
      goto joined_r0x007a3bb4;
    }
    if (pbVar12 != pbVar9) {
      uVar11 = *(ulong *)(pbVar9 + 8);
      pbVar3 = *(byte **)(pbVar9 + 0x10);
      if ((uVar10 & 1) == 0) {
        pbVar3 = pbVar9 + 1;
        uVar11 = uVar10 >> 1;
      }
      FUN_00291910(pbVar12,pbVar3,uVar11);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x18);
  bVar5 = *pbVar9;
joined_r0x007a3bb4:
  if ((bVar5 & 1) == 0) {
    uVar10 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar10 = *(ulong *)(pbVar9 + 8);
  }
  if (uVar10 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar12 = (byte *)*puVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar12 = (byte *)*puVar1;
    }
    if (pbVar12 == pbVar4) {
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
  return;
}


