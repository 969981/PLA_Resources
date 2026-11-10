/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059a470; name: FUN_0059a470
 */


void FUN_0059a470(long param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char *local_48;
  undefined8 local_40;
  undefined1 auStack_28 [8];
  
  pcVar1 = param_2;
  if ((char *)0x4 < param_2) {
    pcVar1 = (char *)FUN_002f03c0(param_2,
                                  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                  ,0x222);
  }
  if (((*(char *)(param_1 + 0xcf0) == '\0') && (uVar2 = FUN_003d7f40(pcVar1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_002f12e0(pcVar1,7,auStack_28), (uVar2 & 1) == 0)) {
    pcVar1 = (char *)FUN_002f0d20(pcVar1,3,0xe);
  }
  local_48 = pcVar1;
  local_40 = param_1;
  FUN_005a4d70(param_1 + 0xa8,&LAB_0059e8b0,&local_48);
  if (pcVar1 < (char *)0x5) {
    if (&DAT_00000004 < param_2) goto LAB_0059a598;
LAB_0059a510:
    FUN_00596ab0(param_1,param_2);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  else {
    FUN_002f0430(pcVar1,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x984);
    if (param_2 <= &DAT_00000004) goto LAB_0059a510;
LAB_0059a598:
    uVar3 = FUN_002f03c0(param_2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x223);
    FUN_00596ab0(param_1,uVar3);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    goto joined_r0x0059a754;
  }
  uVar2 = FUN_003d7f40(param_2);
  if ((uVar2 & 1) == 0) {
    param_2 = (char *)FUN_002f0d20(param_2,3,0xe);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar4 = *(long *)(param_1 + 0x1320);
    if (lVar4 == 0) {
      FUN_002f2c60(&local_48,"Delayed close due to in-progress write");
      lVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x22d,&local_48,0,0);
      *(long *)(param_1 + 0x1320) = lVar4;
    }
    uVar3 = FUN_002f13f0(lVar4,param_2);
    *(undefined8 *)(param_1 + 0x1320) = uVar3;
    return;
  }
  if (param_2 == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x233,2,"assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = param_2;
  if ((char *)0x4 < param_2) {
    pcVar1 = (char *)FUN_002f03c0(param_2,
                                  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                  ,0x234);
  }
  *(char **)(param_1 + 0x48) = pcVar1;
  if (PTR_DAT_04374f08[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xb6c,1,"transport %p set connectivity_state=%d",param_1,4);
  }
  FUN_003d3c24(param_1 + 0x330,4,"close_transport");
  if (*(char *)(param_1 + 0xf50) != '\0') {
    FUN_002f5c80(param_1 + 0xf18);
  }
  if (*(char *)(param_1 + 0x13d0) != '\0') {
    FUN_002f5c80(param_1 + 0x13d8);
  }
  if (*(int *)(param_1 + 0x15b4) == 1) {
    FUN_002f5c80(param_1 + 0x1530);
    lVar4 = 0x1568;
LAB_0059a6d8:
    FUN_002f5c80(param_1 + lVar4);
  }
  else if (*(int *)(param_1 + 0x15b4) == 0) {
    lVar4 = 0x1530;
    goto LAB_0059a6d8;
  }
  uVar2 = FUN_005ac320(param_1,&local_48);
  while ((uVar2 & 1) != 0) {
    FUN_003c9ce0(*(undefined8 *)(local_48 + 0x10),"chttp2_writing:close");
    uVar2 = FUN_005ac320(param_1,&local_48);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x24f,2,"assertion failed: %s","t->write_state == GRPC_CHTTP2_WRITE_STATE_IDLE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar1 = param_2;
  if ((char *)0x4 < param_2) {
    pcVar1 = (char *)FUN_002f03c0(param_2,
                                  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                  ,0x250);
  }
  FUN_00308310(uVar3,pcVar1);
  lVar4 = *(long *)(param_1 + 0x38);
joined_r0x0059a754:
  if (lVar4 != 0) {
    local_48 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    uVar2 = (ulong)local_40 >> 0x20;
    local_40 = CONCAT44((int)uVar2,0x253);
    FUN_002f019c(&local_48,lVar4,4);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((char *)0x4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,599);
  }
  return;
}


