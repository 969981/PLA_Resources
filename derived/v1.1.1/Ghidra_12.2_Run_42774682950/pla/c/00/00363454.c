/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00363454; name: FUN_00363454
 */


void FUN_00363454(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (param_4 == 0x11) {
    FUN_0030d5b0(param_5,param_2,param_3 << 1 ^ param_3 >> 0x1f);
    return;
  }
  if (param_4 == 0xf) {
    FUN_0030d6ac(param_5);
    return;
  }
  if (param_4 == 5) {
    FUN_0030d5b0(param_5,param_2,(long)param_3);
    return;
  }
  FUN_0030f640(auStack_40,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
               ,0x1c1d);
                    /* try { // try from 003634cc to 003634e7 has its CatchHandler @ 00363508 */
  uVar1 = FUN_0030f3ac(auStack_40,"Invalid wire type for CPPTYPE_INT32: ");
  uVar1 = FUN_0030f52c(uVar1,param_4);
                    /* try { // try from 003634e8 to 003634ef has its CatchHandler @ 00363504 */
  FUN_0030f41c(auStack_48,uVar1);
  FUN_0030f658(auStack_40);
  return;
}


