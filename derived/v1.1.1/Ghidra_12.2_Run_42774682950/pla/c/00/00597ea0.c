/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00597ea0; name: FUN_00597ea0
 */


void FUN_00597ea0(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0x1130) + 0x48))(param_1 + 0x1130);
  if (PTR_DAT_04374f00[0x10] == '\0') {
    iVar1 = *piVar2;
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/bdp_estimator.h",0x35,1,
                 "bdp[%s]:sched acc=%ld est=%ld",*(undefined8 *)(piVar2 + 0xe),
                 *(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar2 + 4));
    iVar1 = *piVar2;
  }
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/bdp_estimator.h",0x38,2,
                 "assertion failed: %s","ping_state_ == PingState::UNSCHEDULED");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *piVar2 = 1;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *(undefined1 **)(param_1 + 0x1298) = &LAB_0059edd0;
  *(long *)(param_1 + 0x12a0) = param_1;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  *(undefined2 *)(param_1 + 0x12b0) = 0;
  *(undefined4 *)(param_1 + 0x12c0) = 0xa42;
  *(undefined8 *)(param_1 + 0x12c8) = 0;
  *(undefined4 *)(param_1 + 0x12d0) = 0;
  *(char **)(param_1 + 0x12b8) =
       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  *(undefined1 **)(param_1 + 0x12e0) = &LAB_0059ee60;
  *(long *)(param_1 + 0x12e8) = param_1;
  *(undefined8 *)(param_1 + 0x12f0) = 0;
  *(undefined2 *)(param_1 + 0x12f8) = 0;
  *(undefined8 *)(param_1 + 0x1310) = 0;
  *(undefined4 *)(param_1 + 0x1318) = 0;
  *(char **)(param_1 + 0x1300) =
       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  *(undefined4 *)(param_1 + 0x1308) = 0xa44;
  FUN_0059ecc0(param_1,param_1 + 0x1290,param_1 + 0x12d8);
  return;
}


