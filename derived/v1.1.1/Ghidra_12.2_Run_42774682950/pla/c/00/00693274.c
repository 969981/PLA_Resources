/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00693274; name: FUN_00693274
 */


void FUN_00693274(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0xd68);
                    /* try { // try from 006932e4 to 006932f7 has its CatchHandler @ 00693490 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006932f8 to 006932ff has its CatchHandler @ 0069348c */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) != 0) goto LAB_00693310;
LAB_0069329c:
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) == 0) goto LAB_0069329c;
LAB_00693310:
    uVar8 = uVar8 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0033aecc();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar2 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar2 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar1);
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00692798(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar4 = FUN_0069cc60(puVar5);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (*(int *)(param_2 + 0x1c) != 1) {
        FUN_00691b24(uVar4,PTR_DAT_04375d98);
        return;
      }
    }
    FUN_00691b24(uVar4,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 == 2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00692798(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar4 = FUN_0069cd40(puVar5);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_00692658(uVar4,PTR_DAT_04375af8);
        return;
      }
    }
    FUN_00692658(uVar4,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 3) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    FUN_00692798(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 3;
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = FUN_0069ccd0(puVar5);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    if (*(int *)(param_2 + 0x1c) != 3) {
      puVar7 = PTR_DAT_04375c98;
      goto LAB_00693434;
    }
  }
  puVar7 = *(undefined **)(param_2 + 0x10);
LAB_00693434:
  FUN_00691f48(uVar4,puVar7);
  return;
}


