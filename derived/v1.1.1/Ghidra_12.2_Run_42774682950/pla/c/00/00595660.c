/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00595660; name: FUN_00595660
 */


void FUN_00595660(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  char *local_60;
  undefined4 local_58;
  
  plVar1 = param_1 + 3;
  FUN_002ef750(plVar1);
  if (*(char *)((long)param_1 + 0x61) != '\x01') {
                    /* try { // try from 005958a0 to 005958c7 has its CatchHandler @ 00595950 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                 ,0x61,2,"assertion failed: %s","self->connecting_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)((long)param_1 + 0x61) = 0;
  if (param_2 == 0) {
    if ((char)param_1[0xc] == '\0') {
      if (param_1[0xd] == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                     ,0x72,2,"assertion failed: %s","self->endpoint_ != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
                    /* try { // try from 00595844 to 0059584b has its CatchHandler @ 00595950 */
      FUN_00595d18(param_1);
                    /* try { // try from 0059584c to 00595853 has its CatchHandler @ 00595940 */
      FUN_002ef790(plVar1);
      return;
    }
                    /* try { // try from 005956c4 to 005956ef has its CatchHandler @ 00595944 */
    FUN_002f2c60(&local_60,"connector shutdown");
    param_2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                           ,0x65,&local_60,0,0);
  }
  else if (4 < param_2) {
                    /* try { // try from 005956a4 to 005956b7 has its CatchHandler @ 00595950 */
    param_2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                           ,0x67);
  }
  lVar6 = param_1[0xd];
  if (lVar6 != 0) {
    uVar5 = param_2;
    if (4 < param_2) {
                    /* try { // try from 00595708 to 00595783 has its CatchHandler @ 00595950 */
      uVar5 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                           ,0x6a);
    }
    FUN_00308310(lVar6,uVar5);
  }
  puVar9 = (undefined8 *)param_1[10];
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar7 = (undefined8 *)puVar9[2];
  if (puVar7 != (undefined8 *)0x0) {
    lVar6 = puVar7[1];
    plVar2 = puVar7 + 2;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),puVar7 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 005958f0 to 0059593f has its CatchHandler @ 00595950 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (**(code **)*puVar7)(puVar7);
      FUN_002e2ea0(PTR_LAB_04373088,puVar7);
    }
  }
  puVar9[2] = 0;
  lVar6 = param_1[0xb];
  param_1[0xb] = 0;
  local_60 = 
  "external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc";
  local_58 = 0x6f;
                    /* try { // try from 005957b4 to 005957bf has its CatchHandler @ 0059594c */
  FUN_002f019c(&local_60,lVar6,param_2);
                    /* try { // try from 005957c0 to 005957c7 has its CatchHandler @ 00595948 */
  FUN_002ef790(plVar1);
  lVar6 = param_1[1];
  plVar1 = param_1 + 2;
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),param_1 + 1,lVar8);
  }
  if (lVar8 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar8 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
  }
  return;
}


