/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002aace8; name: FUN_002aace8
 */


void FUN_002aace8(long param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/auth/v1/auth.pb.cc"
                 ,0xd55);
                    /* try { // try from 002aad9c to 002aadaf has its CatchHandler @ 002aaec4 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 002aadb0 to 002aadb7 has its CatchHandler @ 002aaec0 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) == 0) goto LAB_002aad10;
LAB_002aadc8:
    uVar8 = uVar8 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0033aecc();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar3 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar3 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar3,uVar1);
    iVar4 = *(int *)(param_2 + 0x1c);
    pbVar2 = PTR_DAT_043730c0;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) != 0) goto LAB_002aadc8;
LAB_002aad10:
    iVar4 = *(int *)(param_2 + 0x1c);
    pbVar2 = PTR_DAT_043730c0;
  }
  PTR_DAT_043730c0 = pbVar2;
  if (iVar4 == 1) {
    pbVar10 = *(byte **)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 1) {
      FUN_002b2e20(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *(undefined **)(param_1 + 0x10) = PTR_DAT_043730c0;
    }
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    pbVar9 = *(byte **)(param_1 + 0x10);
    if (pbVar9 == PTR_DAT_043730c0) goto LAB_002aae5c;
  }
  else {
    if (iVar4 != 2) {
      return;
    }
    pbVar10 = *(byte **)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar8 = *(ulong *)(param_1 + 8);
    }
    else {
      FUN_002b2e20(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      *(byte **)(param_1 + 0x10) = pbVar2;
      uVar8 = *(ulong *)(param_1 + 8);
    }
    puVar7 = (ulong *)(uVar8 & 0xfffffffffffffffe);
    if ((uVar8 & 1) == 0) {
      pbVar9 = *(byte **)(param_1 + 0x10);
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar9 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar9 == pbVar2) {
LAB_002aae5c:
      FUN_0029175c(param_1 + 0x10,puVar7,pbVar10);
      return;
    }
  }
  if (pbVar9 != pbVar10) {
    uVar8 = *(ulong *)(pbVar10 + 8);
    pbVar2 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar2 = pbVar10 + 1;
      uVar8 = (ulong)(*pbVar10 >> 1);
    }
    FUN_00291910(pbVar9,pbVar2,uVar8);
  }
  return;
}


