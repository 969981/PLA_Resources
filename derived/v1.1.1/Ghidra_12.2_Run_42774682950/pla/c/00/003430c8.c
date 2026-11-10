/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003430c8; name: FUN_003430c8
 */


long FUN_003430c8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x4b) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) != 2) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x6c3);
                    /* try { // try from 00343104 to 00343117 has its CatchHandler @ 00343150 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: (field_count()) == (2): ");
                    /* try { // try from 00343118 to 0034311f has its CatchHandler @ 0034314c */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  return *(long *)(param_1 + 0x28) + 0x98;
}


