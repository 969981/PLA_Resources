/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a8e18; name: FUN_007a8e18
 */


void FUN_007a8e18(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0xa35);
                    /* try { // try from 007a8e94 to 007a8ea7 has its CatchHandler @ 007a902c */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007a8ea8 to 007a8eaf has its CatchHandler @ 007a9028 */
    FUN_0030f41c(auStack_68,uVar2);
    FUN_0030f658(auStack_60);
    uVar5 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) == 0) {
      lVar7 = FUN_0033aecc((ulong *)(param_1 + 8));
    }
    else {
      lVar7 = (uVar6 & 0xfffffffffffffffe) + 8;
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    lVar1 = *(long *)(uVar5 + 0x18);
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      lVar1 = uVar5 + 9;
      uVar6 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    FUN_002e4094(lVar7,lVar1,uVar6);
  }
  FUN_007b2a9c(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x34) == 2) {
    if (*(int *)(param_1 + 0x34) == 2) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      if (*(int *)(param_1 + 0x34) == 3) {
        uVar5 = *(ulong *)(param_1 + 8);
        puVar3 = (ulong *)(uVar5 & 0xfffffffffffffffe);
        if ((uVar5 & 1) != 0) {
          puVar3 = (ulong *)*puVar3;
        }
        if (puVar3 == (ulong *)0x0) {
          FUN_007b2068(*(undefined8 *)(param_1 + 0x28));
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 2;
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      uVar2 = FUN_007af694(puVar3);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      if (*(int *)(param_2 + 0x34) != 2) {
        FUN_007a7eec(uVar2,PTR_DAT_04376e98);
        return;
      }
    }
    FUN_007a7eec(uVar2,*(undefined8 *)(param_2 + 0x28));
    return;
  }
  if (*(int *)(param_2 + 0x34) != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 2) {
    uVar5 = *(ulong *)(param_1 + 8);
    puVar3 = (ulong *)(uVar5 & 0xfffffffffffffffe);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    if ((puVar3 == (ulong *)0x0) && (lVar7 = *(long *)(param_1 + 0x28), lVar7 != 0)) {
      FUN_007a7908(lVar7);
      FUN_002e2ea0(PTR_LAB_04373088,lVar7);
    }
LAB_007a8f94:
    *(undefined4 *)(param_1 + 0x34) = 3;
    puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    uVar2 = FUN_007afe84(puVar3);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    if (*(int *)(param_2 + 0x34) != 3) {
      puVar4 = PTR_DAT_04377018;
      goto LAB_007a8fdc;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 3) goto LAB_007a8f94;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  puVar4 = *(undefined **)(param_2 + 0x28);
LAB_007a8fdc:
  FUN_007a80a8(uVar2,puVar4);
  return;
}


