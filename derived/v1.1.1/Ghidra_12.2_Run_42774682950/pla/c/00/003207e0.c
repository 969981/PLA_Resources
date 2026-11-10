/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003207e0; name: FUN_003207e0
 */


char * FUN_003207e0(double param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  double local_18;
  
  if (param_1 == INFINITY) {
    builtin_strncpy(param_2,"inf",4);
  }
  else if (param_1 == -INFINITY) {
    builtin_strncpy(param_2,"-inf",5);
  }
  else if ((ulong)ABS(param_1) < 0x7ff0000000000001) {
    iVar1 = snprintf(param_2,0x20,"%.*g",param_1,0xf);
    if (0x1e < iVar1 - 1U) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x4f7);
                    /* try { // try from 003208a0 to 003208b3 has its CatchHandler @ 0032096c */
      uVar2 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: snprintf_result > 0 && snprintf_result < kDoubleToBufferSize: "
                          );
                    /* try { // try from 003208b4 to 003208bb has its CatchHandler @ 00320968 */
      FUN_0030f41c(&local_18,uVar2);
      FUN_0030f658(auStack_50);
    }
    local_18 = (double)FUN_00320d20(param_2,0);
    if ((local_18 != param_1) &&
       (iVar1 = snprintf(param_2,0x20,"%.*g",param_1,0x11), 0x1e < iVar1 - 1U)) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x505);
                    /* try { // try from 00320920 to 00320933 has its CatchHandler @ 00320964 */
      uVar2 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: snprintf_result > 0 && snprintf_result < kDoubleToBufferSize: "
                          );
                    /* try { // try from 00320934 to 0032093b has its CatchHandler @ 00320960 */
      FUN_0030f41c(auStack_58,uVar2);
      FUN_0030f658(auStack_50);
    }
    FUN_00320c10(param_2);
  }
  else {
    builtin_strncpy(param_2,"nan",4);
  }
  return param_2;
}


