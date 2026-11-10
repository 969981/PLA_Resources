/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00363678; name: FUN_00363678
 */


void FUN_00363678(void)

{
  undefined8 uVar1;
  int in_w3;
  undefined8 in_x4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (in_w3 == 6) {
    FUN_0030d7b0(in_x4);
    return;
  }
  if (in_w3 == 4) {
    FUN_0030d5b0(in_x4);
    return;
  }
  FUN_0030f640(auStack_40,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
               ,0x1c58);
                    /* try { // try from 003636cc to 003636e7 has its CatchHandler @ 00363708 */
  uVar1 = FUN_0030f3ac(auStack_40,"Invalid wire type for CPPTYPE_UINT64: ");
  uVar1 = FUN_0030f52c(uVar1,in_w3);
                    /* try { // try from 003636e8 to 003636ef has its CatchHandler @ 00363704 */
  FUN_0030f41c(auStack_48,uVar1);
  FUN_0030f658(auStack_40);
  return;
}


