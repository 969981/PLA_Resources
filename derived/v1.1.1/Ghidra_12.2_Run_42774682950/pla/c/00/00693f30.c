/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00693f30; name: FUN_00693f30
 */


void FUN_00693f30(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x123f);
                    /* try { // try from 00693f9c to 00693faf has its CatchHandler @ 006940d8 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00693fb0 to 00693fb7 has its CatchHandler @ 006940d4 */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(auStack_60);
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) == 0) goto LAB_00693f5c;
LAB_00693fcc:
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) == 0) {
      lVar9 = FUN_0033aecc((ulong *)(param_1 + 8));
    }
    else {
      lVar9 = (uVar8 & 0xfffffffffffffffe) + 8;
    }
    uVar8 = *(ulong *)(uVar7 + 0x10);
    lVar1 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar1 = uVar7 + 9;
      uVar8 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_002e4094(lVar9,lVar1,uVar8);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) != 0) goto LAB_00693fcc;
LAB_00693f5c:
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if (iVar2 == 1) {
    uVar3 = *(undefined1 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 1) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        if ((puVar5 == (ulong *)0x0) && (lVar9 = *(long *)(param_1 + 0x10), lVar9 != 0)) {
          FUN_00602294(lVar9);
          FUN_002e2ea0(PTR_LAB_04373088,lVar9);
        }
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    *(undefined1 *)(param_1 + 0x10) = uVar3;
    return;
  }
  if (iVar2 != 2) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 2;
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = FUN_00602b5c(puVar5);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    if (*(int *)(param_2 + 0x1c) != 2) {
      puVar6 = PTR_DAT_043737a8;
      goto LAB_0069409c;
    }
  }
  puVar6 = *(undefined **)(param_2 + 0x10);
LAB_0069409c:
  FUN_006028cc(uVar4,puVar6);
  return;
}


