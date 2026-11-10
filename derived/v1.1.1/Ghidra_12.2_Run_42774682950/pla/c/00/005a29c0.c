/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a29c0; name: FUN_005a29c0
 */


undefined8
FUN_005a29c0(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,ulong param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)*param_4;
  *param_4 = 0;
  param_3 = *param_5 + param_3;
  *param_5 = param_3;
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else if (param_6 < 5) {
    uVar4 = 0;
    while( true ) {
      plVar2 = (long *)plVar3[2];
      plVar1 = param_4;
      if (*plVar3 <= param_3) {
        FUN_00599e40(param_1,param_2,plVar3 + 1,param_6,"finish_write_cb");
        uVar4 = 1;
        plVar1 = (long *)(param_1 + 0x1240);
      }
      plVar3[2] = *plVar1;
      *plVar1 = (long)plVar3;
      if (plVar2 == (long *)0x0) break;
      param_3 = *param_5;
      plVar3 = plVar2;
    }
  }
  else {
    uVar4 = 0;
    while( true ) {
      plVar2 = (long *)plVar3[2];
      plVar1 = param_4;
      if (*plVar3 <= param_3) {
        uVar4 = FUN_002f03c0(param_6,
                             "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                             ,0x93);
        FUN_00599e40(param_1,param_2,plVar3 + 1,uVar4,"finish_write_cb");
        uVar4 = 1;
        plVar1 = (long *)(param_1 + 0x1240);
      }
      plVar3[2] = *plVar1;
      *plVar1 = (long)plVar3;
      if (plVar2 == (long *)0x0) break;
      param_3 = *param_5;
      plVar3 = plVar2;
    }
  }
  if (4 < param_6) {
    FUN_002f0430(param_6,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc",
                 0x99);
  }
  return uVar4;
}


