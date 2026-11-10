/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a80a8; name: FUN_007a80a8
 */


void FUN_007a80a8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0x13d3);
                    /* try { // try from 007a813c to 007a814f has its CatchHandler @ 007a81dc */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 007a8150 to 007a8157 has its CatchHandler @ 007a81d8 */
    FUN_0030f41c(auStack_68,uVar5);
    FUN_0030f658(auStack_60);
    uVar6 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) == 0) {
      lVar3 = FUN_0033aecc(param_1 + 8);
    }
    else {
      lVar3 = (uVar8 & 0xfffffffffffffffe) + 8;
    }
    uVar8 = *(ulong *)(uVar6 + 0x10);
    lVar2 = *(long *)(uVar6 + 0x18);
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      lVar2 = uVar6 + 9;
      uVar8 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    FUN_002e4094(lVar3,lVar2,uVar8);
  }
  if (param_2 != PTR_DAT_04377018) {
    puVar7 = *(undefined **)(param_2 + 0x10);
    if (puVar7 != (undefined *)0x0) {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar3 = FUN_0030c720(puVar4);
        *(long *)(param_1 + 0x10) = lVar3;
        puVar7 = *(undefined **)(param_2 + 0x10);
      }
      puVar1 = PTR_DAT_04373198;
      if (puVar7 != (undefined *)0x0) {
        puVar1 = puVar7;
      }
      FUN_0030c490(lVar3,puVar1);
    }
  }
  return;
}


