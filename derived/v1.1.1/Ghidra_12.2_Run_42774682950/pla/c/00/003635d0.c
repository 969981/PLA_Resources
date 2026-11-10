/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003635d0; name: FUN_003635d0
 */


void FUN_003635d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (param_4 == 7) {
    FUN_0030d6ac(param_5);
    return;
  }
  if (param_4 == 0xd) {
    FUN_0030d5b0(param_5,param_2,param_3);
    return;
  }
  FUN_0030f640(auStack_40,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
               ,0x1c46);
                    /* try { // try from 00363628 to 00363643 has its CatchHandler @ 00363664 */
  uVar1 = FUN_0030f3ac(auStack_40,"Invalid wire type for CPPTYPE_UINT32: ");
  uVar1 = FUN_0030f52c(uVar1,param_4);
                    /* try { // try from 00363644 to 0036364b has its CatchHandler @ 00363660 */
  FUN_0030f41c(auStack_48,uVar1);
  FUN_0030f658(auStack_40);
  return;
}


