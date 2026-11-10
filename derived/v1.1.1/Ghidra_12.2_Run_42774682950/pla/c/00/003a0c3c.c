/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a0c3c; name: FUN_003a0c3c
 */


undefined1  [16] FUN_003a0c3c(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  byte local_70 [16];
  undefined8 local_60;
  undefined1 auStack_58 [48];
  byte *local_28;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  auVar6 = thunk_FUN_00320d20(pbVar5,&local_28);
  uVar7 = auVar6._8_8_;
  bVar2 = *local_28;
  pbVar3 = local_28;
  if ((bVar2 | 0x20) == 0x65) {
    bVar2 = local_28[1];
    if ((bVar2 == 0x2d) || (pbVar3 = local_28 + 1, bVar2 == 0x2b)) {
      bVar2 = local_28[2];
      pbVar3 = local_28 + 2;
    }
  }
  local_28 = pbVar3;
  if ((bVar2 | 0x20) == 0x66) {
    local_28 = local_28 + 1;
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (((long)local_28 - (long)pbVar5 != uVar1) || (*pbVar5 == 0x2d)) {
    FUN_0030f640(auStack_58,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/tokenizer.cc"
                 ,0x399);
                    /* try { // try from 003a0d08 to 003a0d17 has its CatchHandler @ 003a0dc8 */
    uVar4 = FUN_0030f3ac(auStack_58,
                         " Tokenizer::ParseFloat() passed text that could not have been tokenized as a float: "
                        );
                    /* try { // try from 003a0d1c to 003a0d27 has its CatchHandler @ 003a0db4 */
    FUN_003201a0(local_70,param_1);
                    /* try { // try from 003a0d28 to 003a0d37 has its CatchHandler @ 003a0d88 */
    uVar4 = FUN_0030f3e8(uVar4,local_70);
                    /* try { // try from 003a0d38 to 003a0d3f has its CatchHandler @ 003a0d78 */
    FUN_0030f41c(auStack_78,uVar4);
    if ((local_70[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_60);
    }
    FUN_0030f658(auStack_58);
  }
  auVar6._8_8_ = uVar7;
  return auVar6;
}


