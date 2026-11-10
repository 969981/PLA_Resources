/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033ee54; name: FUN_0033ee54
 */


void FUN_0033ee54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (*(long *)(param_1 + 0x198) == *(long *)(param_1 + 0x1a0)) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x359);
                    /* try { // try from 0033eea0 to 0033eeb3 has its CatchHandler @ 0033ef00 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: !checkpoints_.empty(): ");
                    /* try { // try from 0033eeb4 to 0033eebb has its CatchHandler @ 0033eefc */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
    lVar2 = *(long *)(param_1 + 0x1a0) + -0x20;
    *(long *)(param_1 + 0x1a0) = lVar2;
    if (*(long *)(param_1 + 0x198) == lVar2) goto LAB_0033eed8;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x1a0) + -0x20;
    *(long *)(param_1 + 0x1a0) = lVar2;
    if (*(long *)(param_1 + 0x198) == lVar2) {
LAB_0033eed8:
      *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1e0);
      return;
    }
  }
  return;
}


