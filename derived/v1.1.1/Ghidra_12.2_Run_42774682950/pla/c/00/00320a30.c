/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320a30; name: FUN_00320a30
 */


char * FUN_00320a30(float param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  float fVar4;
  char *local_60 [6];
  undefined1 auStack_28 [8];
  
  if (param_1 == INFINITY) {
    builtin_strncpy(param_2,"inf",4);
  }
  else if (param_1 == -INFINITY) {
    builtin_strncpy(param_2,"-inf",5);
  }
  else if ((uint)ABS(param_1) < 0x7f800001) {
    iVar1 = snprintf(param_2,0x18,"%.*g",(double)param_1,6);
    if (0x16 < iVar1 - 1U) {
      FUN_0030f640(local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x56d);
                    /* try { // try from 00320af8 to 00320b0b has its CatchHandler @ 00320bf0 */
      uVar2 = FUN_0030f3ac(local_60,
                           "CHECK failed: snprintf_result > 0 && snprintf_result < kFloatToBufferSize: "
                          );
                    /* try { // try from 00320b0c to 00320b13 has its CatchHandler @ 00320bec */
      FUN_0030f41c(auStack_28,uVar2);
      FUN_0030f658(local_60);
    }
    piVar3 = __errno_location();
    *piVar3 = 0;
    fVar4 = strtof(param_2,local_60);
    if (((((*param_2 == '\0') || (*local_60[0] != '\0')) ||
         (piVar3 = __errno_location(), fVar4 != param_1)) || (*piVar3 != 0)) &&
       (iVar1 = snprintf(param_2,0x18,"%.*g",(double)param_1,9), 0x16 < iVar1 - 1U)) {
      FUN_0030f640(local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x575);
                    /* try { // try from 00320b84 to 00320b97 has its CatchHandler @ 00320be8 */
      uVar2 = FUN_0030f3ac(local_60,
                           "CHECK failed: snprintf_result > 0 && snprintf_result < kFloatToBufferSize: "
                          );
                    /* try { // try from 00320b98 to 00320b9f has its CatchHandler @ 00320be4 */
      FUN_0030f41c(auStack_28,uVar2);
      FUN_0030f658(local_60);
    }
    FUN_00320c10(param_2);
  }
  else {
    builtin_strncpy(param_2,"nan",4);
  }
  return param_2;
}


