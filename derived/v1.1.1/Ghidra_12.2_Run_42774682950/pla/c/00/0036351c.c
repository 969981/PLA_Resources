/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036351c; name: FUN_0036351c
 */


void FUN_0036351c(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (param_4 == 0x12) {
    param_3 = param_3 << 1 ^ (long)param_3 >> 0x3f;
  }
  else {
    if (param_4 == 0x10) {
      FUN_0030d7b0(param_5);
      return;
    }
    if (param_4 != 3) {
      FUN_0030f640(auStack_40,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                   ,0x1c34);
                    /* try { // try from 00363558 to 00363573 has its CatchHandler @ 003635bc */
      uVar1 = FUN_0030f3ac(auStack_40,"Invalid wire type for CPPTYPE_INT64: ");
      uVar1 = FUN_0030f52c(uVar1,param_4);
                    /* try { // try from 00363574 to 0036357b has its CatchHandler @ 003635b8 */
      FUN_0030f41c(auStack_48,uVar1);
      FUN_0030f658(auStack_40);
      return;
    }
  }
  FUN_0030d5b0(param_5,param_2,param_3);
  return;
}


