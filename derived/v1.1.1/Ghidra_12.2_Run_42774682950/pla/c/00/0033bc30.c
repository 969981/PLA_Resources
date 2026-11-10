/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033bc30; name: FUN_0033bc30
 */


char * FUN_0033bc30(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (param_1 == 0) {
    return "unknown";
  }
  if (param_1 == 2) {
    return "proto2";
  }
  if (param_1 == 3) {
    return "proto3";
  }
  FUN_0030f640(auStack_40,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
               ,0xe5);
                    /* try { // try from 0033bca0 to 0033bcb3 has its CatchHandler @ 0033bcd8 */
  uVar1 = FUN_0030f3ac(auStack_40,"can\'t reach here.");
                    /* try { // try from 0033bcb4 to 0033bcbb has its CatchHandler @ 0033bcd4 */
  FUN_0030f41c(auStack_48,uVar1);
  FUN_0030f658(auStack_40);
  return (char *)0x0;
}


