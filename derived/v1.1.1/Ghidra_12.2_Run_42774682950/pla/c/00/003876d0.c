/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003876d0; name: FUN_003876d0
 */


bool FUN_003876d0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 == 0xffffffff) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x3f7);
                    /* try { // try from 00387704 to 00387717 has its CatchHandler @ 00387754 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (has_bit_index) != (~0u): ");
                    /* try { // try from 00387718 to 0038771f has its CatchHandler @ 00387750 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  return (*(uint *)(param_1 + (ulong)(param_2 >> 5) * 4) & 1 << (ulong)(param_2 & 0x1f)) != 0;
}


