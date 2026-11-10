/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006984b8; name: FUN_006984b8
 */


void FUN_006984b8(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x15a0);
                    /* try { // try from 0069852c to 0069853f has its CatchHandler @ 006986b0 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00698540 to 00698547 has its CatchHandler @ 006986ac */
    FUN_0030f41c(auStack_68,uVar3);
    FUN_0030f658(auStack_60);
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) == 0) goto LAB_006984e4;
LAB_0069855c:
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) == 0) {
      lVar5 = FUN_0033aecc((ulong *)(param_1 + 8));
    }
    else {
      lVar5 = (uVar8 & 0xfffffffffffffffe) + 8;
    }
    uVar8 = *(ulong *)(uVar7 + 0x10);
    lVar1 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar1 = uVar7 + 9;
      uVar8 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_002e4094(lVar5,lVar1,uVar8);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) != 0) goto LAB_0069855c;
LAB_006984e4:
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      if (*(int *)(param_1 + 0x1c) == 2) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        if (puVar4 == (ulong *)0x0) {
          FUN_0069e168(*(undefined8 *)(param_1 + 0x10));
        }
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0069d42c(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 1) {
        FUN_0069789c(uVar3,PTR_DAT_04375d68);
        return;
      }
    }
    FUN_0069789c(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar2 != 2) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    if (puVar4 == (ulong *)0x0) {
      FUN_0069e0dc(*(undefined8 *)(param_1 + 0x10));
    }
LAB_00698618:
    *(undefined4 *)(param_1 + 0x1c) = 2;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_0069d4ec(puVar4);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_2 + 0x1c) != 2) {
      puVar6 = PTR_DAT_04375c60;
      goto LAB_00698660;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 2) goto LAB_00698618;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  puVar6 = *(undefined **)(param_2 + 0x10);
LAB_00698660:
  FUN_006979e4(uVar3,puVar6);
  return;
}


