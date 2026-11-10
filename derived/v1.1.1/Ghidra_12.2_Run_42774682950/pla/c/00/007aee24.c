/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007aee24; name: FUN_007aee24
 */


void FUN_007aee24(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0x1526);
                    /* try { // try from 007aee7c to 007aee8f has its CatchHandler @ 007af02c */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007aee90 to 007aee97 has its CatchHandler @ 007af028 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) != 0) goto LAB_007aeea8;
LAB_007aee4c:
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_007aee58;
LAB_007aeeec:
    if (*(long *)(pbVar8 + 8) != 0) goto LAB_007aeef4;
LAB_007aef3c:
    iVar9 = *(int *)(param_2 + 0x24);
    if (iVar9 != 3) goto LAB_007aef48;
LAB_007aefa0:
    if (*(int *)(param_1 + 0x24) == 3) goto LAB_007aefac;
    FUN_007ae44c(param_1);
    *(undefined4 *)(param_1 + 0x24) = 3;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar5 = FUN_002e17cc(puVar4);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    if (*(int *)(param_2 + 0x24) != 3) goto LAB_007aefe8;
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) == 0) goto LAB_007aee4c;
LAB_007aeea8:
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0033aecc();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar2 = uVar10 + 9;
      uVar1 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar1);
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_007aeeec;
LAB_007aee58:
    if (uVar10 >> 1 == 0) goto LAB_007aef3c;
LAB_007aeef4:
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    pbVar11 = *(byte **)(param_1 + 0x10);
    if (pbVar11 != PTR_DAT_043730c0) {
      if (pbVar11 != pbVar8) {
        uVar1 = *(ulong *)(pbVar8 + 8);
        pbVar3 = *(byte **)(pbVar8 + 0x10);
        if ((uVar10 & 1) == 0) {
          pbVar3 = pbVar8 + 1;
          uVar1 = uVar10 >> 1;
        }
        FUN_00291910(pbVar11,pbVar3,uVar1);
      }
      goto LAB_007aef3c;
    }
    FUN_0029175c((undefined8 *)(param_1 + 0x10),puVar4);
    iVar9 = *(int *)(param_2 + 0x24);
    if (iVar9 == 3) goto LAB_007aefa0;
LAB_007aef48:
    if (iVar9 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 2) {
LAB_007aefac:
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      FUN_007ae44c(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar5 = FUN_002e17cc(puVar4);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      if (*(int *)(param_2 + 0x24) != 2) {
LAB_007aefe8:
        puVar7 = PTR_DAT_04373760;
        goto LAB_007aeff0;
      }
    }
  }
  puVar7 = *(undefined **)(param_2 + 0x18);
LAB_007aeff0:
  FUN_002dffdc(uVar5,puVar7);
  return;
}


