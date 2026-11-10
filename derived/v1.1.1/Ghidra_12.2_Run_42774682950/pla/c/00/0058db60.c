/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058db60; name: FUN_0058db60
 */


undefined4
FUN_0058db60(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_50 [4];
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    lVar7 = *(long *)(param_1 + 0x58);
    if (lVar7 == 0) {
      FUN_00594e20(*(undefined8 *)(param_1 + 0x38));
      lVar7 = FUN_00594e10();
      lVar7 = *(long *)(lVar7 + 0x28);
      *(long *)(param_1 + 0x40) = lVar7;
      if (lVar7 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                     ,0x187,2,"assertion failed: %s","handshaker->interested_parties != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = *(long *)(param_1 + 0x58);
      if (lVar7 != 0) goto LAB_0058dc00;
      lVar7 = FUN_00594e10();
      lVar7 = *(long *)(lVar7 + 0xc0);
      puVar6 = &LAB_0058de80;
    }
    else {
LAB_0058dc00:
      puVar6 = &LAB_0058dec0;
    }
    lVar7 = FUN_00590b40(param_1,lVar7,*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         param_1 + 0x10,puVar6,param_4,param_5,*(undefined8 *)(param_1 + 0x50),
                         *(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x98));
    if (lVar7 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                   ,0x197,2,"Failed to create ALTS handshaker client");
      return 5;
    }
    FUN_002ef750(param_1 + 0x68);
    if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 0058de10 to 0058de37 has its CatchHandler @ 0058de60 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                   ,0x19c,2,"assertion failed: %s","handshaker->client == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(param_1 + 0x88) = lVar7;
    bVar2 = *(char *)(param_1 + 0x90) != '\0';
    if (bVar2) {
                    /* try { // try from 0058dc5c to 0058dc77 has its CatchHandler @ 0058de60 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                   ,0x19f,2,"TSI handshake shutdown");
    }
                    /* try { // try from 0058dca8 to 0058dcaf has its CatchHandler @ 0058de78 */
    FUN_002ef790(param_1 + 0x68);
    if (bVar2) {
      return 0xe;
    }
    *(undefined1 *)(param_1 + 0x32) = 1;
    lVar7 = *(long *)(param_1 + 0x58);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x58);
  }
  if ((lVar7 == 0) && (*(long *)(param_1 + 0x50) == 0)) {
    lVar7 = FUN_00594e10();
    uVar4 = FUN_003ceb00(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(param_1 + 0x88));
    if ((uVar4 & 1) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                   ,0x1a8,2,"assertion failed: %s",
                   "grpc_cq_begin_op(grpc_alts_get_shared_resource_dedicated()->cq, handshaker->client)"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_002f2710(local_50);
    if (*(char *)(param_1 + 0x31) != '\0') goto LAB_0058dd8c;
LAB_0058dcec:
    *(undefined1 *)(param_1 + 0x31) = 1;
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar3 = FUN_00590fe0(*(undefined8 *)(param_1 + 0x88),local_50);
      goto joined_r0x0058dd0c;
    }
    uVar3 = FUN_00590f90();
  }
  else {
    FUN_002f2f40(local_50,param_2,param_3);
    if (*(char *)(param_1 + 0x31) == '\0') goto LAB_0058dcec;
LAB_0058dd8c:
    uVar3 = FUN_00591030(*(undefined8 *)(param_1 + 0x88),local_50);
  }
joined_r0x0058dd0c:
  if ((local_50[0] != (long *)0x0) && (plVar5 = (long *)*local_50[0], plVar5 != (long *)0x0)) {
    plVar8 = plVar5 + 1;
    lVar7 = *plVar5;
    do {
      lVar9 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar5,lVar9);
    }
    if (lVar9 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (*(code *)local_50[0][3])(local_50[0][4]);
    }
  }
  return uVar3;
}


