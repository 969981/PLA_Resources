/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e0584; name: FUN_002e0584
 */


void FUN_002e0584(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  *param_1 = (long)(PTR_DAT_04373780 + 0x10);
  uVar5 = param_1[1];
  puVar6 = (ulong *)(uVar5 & 0xfffffffffffffffe);
  if ((uVar5 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (puVar6 != (ulong *)0x0) {
                    /* try { // try from 002e05b8 to 002e05cf has its CatchHandler @ 002e0708 */
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/common/value.pb.cc"
                 ,0x2c7);
                    /* try { // try from 002e05d0 to 002e05e3 has its CatchHandler @ 002e06ec */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 002e05e4 to 002e05eb has its CatchHandler @ 002e06e8 */
    FUN_0030f41c(auStack_68,uVar2);
    FUN_0030f658(auStack_60);
    uVar5 = param_1[1];
  }
  if ((((uVar5 & 1) != 0) && (plVar7 = (long *)(uVar5 & 0xfffffffffffffffe), *plVar7 == 0)) &&
     (plVar7 != (long *)0x0)) {
    if ((*(byte *)(plVar7 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar7[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar7);
  }
  puVar1 = PTR_LAB_04373088;
  puVar3 = (uint *)param_1[4];
  if ((puVar3 == (uint *)0x0) || (param_1[2] != 0)) {
    lVar4 = param_1[2];
    param_1[4] = 0;
  }
  else {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar3 = puVar3 + 2;
      lVar4 = *(long *)puVar3;
      if (lVar4 != 0) goto LAB_002e06a0;
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        while( true ) {
          puVar3 = puVar3 + 2;
          lVar4 = *(long *)puVar3;
          if (lVar4 == 0) break;
LAB_002e06a0:
          FUN_002ded3c(lVar4);
          FUN_002e2ea0(puVar1,lVar4);
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_002e06c0;
        }
      }
LAB_002e06c0:
      puVar3 = (uint *)param_1[4];
    }
    FUN_002ee710(puVar3);
    lVar4 = param_1[2];
    param_1[4] = 0;
  }
  if (lVar4 != 0) {
                    /* try { // try from 002e0654 to 002e0657 has its CatchHandler @ 002e06e4 */
    FUN_0032ce8c();
  }
  return;
}


