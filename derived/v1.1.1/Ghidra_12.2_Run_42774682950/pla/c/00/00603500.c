/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603500; name: FUN_00603500
 */


void FUN_00603500(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  *param_1 = (long)(PTR_DAT_04375208 + 0x10);
  uVar3 = param_1[1];
  puVar4 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if (puVar4 != (ulong *)0x0) {
                    /* try { // try from 00603530 to 00603547 has its CatchHandler @ 00603624 */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/field_mask.pb.cc"
                 ,0x7a);
                    /* try { // try from 00603548 to 0060355b has its CatchHandler @ 00603608 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 0060355c to 00603563 has its CatchHandler @ 00603604 */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
    uVar3 = param_1[1];
  }
  if ((((uVar3 & 1) != 0) && (plVar5 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar5 == 0)) &&
     (plVar5 != (long *)0x0)) {
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    if (lVar2 != plVar5[2]) {
                    /* try { // try from 0060359c to 006035a3 has its CatchHandler @ 006035f0 */
      FUN_0030cac0(plVar6);
      lVar2 = *plVar6;
    }
    if (lVar2 != 0) {
      plVar5[2] = lVar2;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  FUN_0032b6e4(param_1 + 2);
  return;
}


