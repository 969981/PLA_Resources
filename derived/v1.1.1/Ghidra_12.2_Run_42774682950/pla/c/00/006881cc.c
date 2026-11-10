/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006881cc; name: FUN_006881cc
 */


void FUN_006881cc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/gamesync.pb.cc"
                 ,0xe39);
                    /* try { // try from 00688248 to 0068825b has its CatchHandler @ 006882fc */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0068825c to 00688263 has its CatchHandler @ 006882f8 */
    FUN_0030f41c(auStack_68,uVar3);
    FUN_0030f658(auStack_60);
    uVar6 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) == 0) {
      lVar4 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar4 = (uVar7 & 0xfffffffffffffffe) + 8;
    }
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar2 = *(long *)(uVar6 + 0x18);
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      lVar2 = uVar6 + 9;
      uVar7 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    FUN_002e4094(lVar4,lVar2,uVar7);
  }
  FUN_0068c86c(param_1 + 0x10,param_2 + 0x10);
  if ((param_2 != PTR_DAT_04375bf8) &&
     (puVar8 = *(undefined **)(param_2 + 0x28), puVar8 != (undefined *)0x0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar4 = FUN_00602b5c(puVar5);
      *(long *)(param_1 + 0x28) = lVar4;
      puVar8 = *(undefined **)(param_2 + 0x28);
    }
    puVar1 = PTR_DAT_043737a8;
    if (puVar8 != (undefined *)0x0) {
      puVar1 = puVar8;
    }
    FUN_006028cc(lVar4,puVar1);
  }
  return;
}


