/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030be58; name: FUN_0030be58
 */


void FUN_0030be58(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04373a00 + 0x10);
  uVar3 = param_1[1];
  puVar4 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if (puVar4 != (ulong *)0x0) {
                    /* try { // try from 0030be88 to 0030be9f has its CatchHandler @ 0030bf6c */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/duration.pb.cc"
                 ,0x7e);
                    /* try { // try from 0030bea0 to 0030beb3 has its CatchHandler @ 0030bf58 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 0030beb4 to 0030bebb has its CatchHandler @ 0030bf54 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar3 = param_1[1];
  }
  if ((((uVar3 & 1) != 0) && (plVar5 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar5 == 0)) &&
     (plVar5 != (long *)0x0)) {
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    if (lVar2 != plVar5[2]) {
                    /* try { // try from 0030bef4 to 0030befb has its CatchHandler @ 0030bf40 */
      FUN_0030cac0(plVar6);
      lVar2 = *plVar6;
    }
    if (lVar2 != 0) {
      plVar5[2] = lVar2;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  return;
}


