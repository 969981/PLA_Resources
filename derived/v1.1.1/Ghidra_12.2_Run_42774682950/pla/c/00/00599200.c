/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00599200; name: FUN_00599200
 */


void FUN_00599200(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *local_30;
  undefined4 local_28;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x15c0);
  if (lVar6 == 0) goto LAB_00599250;
  if (*(char *)(*(long *)(param_1 + 8) + 0xcf0) == '\0') {
    if (*(char *)(param_1 + 0x206) == '\0') goto LAB_0059923c;
LAB_0059922c:
    plVar7 = (long *)(lVar6 + 0x48);
  }
  else {
    if (*(char *)(param_1 + 0x205) != '\0') goto LAB_0059922c;
LAB_0059923c:
    plVar7 = (long *)(lVar6 + 0x50);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00599250:
  if ((*(char *)(param_1 + 0x200) == '\0') || (*(char *)(param_1 + 0x201) == '\0')) {
    if (*(int *)(param_1 + 200) != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x299,2,"assertion failed: %s","(write_closed && read_closed) || id == 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
                    /* try { // try from 00599270 to 005993a7 has its CatchHandler @ 00599678 */
    if ((*(int *)(param_1 + 200) != 0) &&
       (lVar6 = FUN_005a4a80(*(long *)(param_1 + 8) + 0xa8), lVar6 != 0)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x29b,2,"assertion failed: %s",
                   "grpc_chttp2_stream_map_find(&t->stream_map, id) == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  FUN_00305020(param_1 + 0x7e8);
  FUN_00305020(param_1 + 0x6a8);
  if (*(int *)(param_1 + 0xb30) != 0) {
    FUN_00305020(param_1 + 0xb60);
  }
  if (*(int *)(param_1 + 0xb34) != 1) {
    FUN_00305020(param_1 + 0xc90);
  }
  FUN_005acb00(*(undefined8 *)(param_1 + 8),param_1);
  FUN_005acdc0(*(undefined8 *)(param_1 + 8),param_1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (*(char *)(param_1 + 0xc1) == '\0') {
      if (*(char *)(param_1 + 0xc2) == '\0') {
        if (*(char *)(param_1 + 0xc3) == '\0') {
          if (*(char *)(param_1 + 0xc4) == '\0') {
            if (*(long *)(param_1 + 0xd8) != 0) {
                    /* try { // try from 00599528 to 00599667 has its CatchHandler @ 00599678 */
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2b3,2,"assertion failed: %s",
                           "send_initial_metadata_finished == nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)(param_1 + 0xf8) != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2b4,2,"assertion failed: %s","fetching_send_message == nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)(param_1 + 0xf0) != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2b5,2,"assertion failed: %s",
                           "send_trailing_metadata_finished == nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)(param_1 + 0x198) != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2b6,2,"assertion failed: %s","recv_initial_metadata_ready == nullptr")
              ;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)(param_1 + 0x1b0) != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2b7,2,"assertion failed: %s","recv_message_ready == nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)(param_1 + 0x1c0) != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2b8,2,"assertion failed: %s",
                           "recv_trailing_metadata_finished == nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            FUN_00305020(param_1 + 0x9e8);
            if (4 < *(ulong *)(param_1 + 0x208)) {
              FUN_002f0430(*(ulong *)(param_1 + 0x208),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2ba);
            }
            if (4 < *(ulong *)(param_1 + 0x210)) {
              FUN_002f0430(*(ulong *)(param_1 + 0x210),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,699);
            }
            if (4 < *(ulong *)(param_1 + 0x958)) {
              FUN_002f0430(*(ulong *)(param_1 + 0x958),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,700);
            }
            (*(code *)**(undefined8 **)(param_1 + 0x9b8))(param_1 + 0x9b8);
            lVar6 = *(long *)(param_1 + 8);
            if (*(long *)(lVar6 + 0x28) != 0) {
                    /* try { // try from 005993c4 to 00599433 has its CatchHandler @ 00599678 */
              FUN_00307b20(*(long *)(lVar6 + 0x28),0x3c00);
              lVar6 = *(long *)(param_1 + 8);
            }
            lVar8 = *(long *)(lVar6 + 8);
            plVar7 = (long *)(lVar6 + 0x10);
            do {
              lVar9 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",199,1,
                           "%s:%p %s:%d unref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),
                           (long *)(lVar6 + 8),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x2c4,lVar9,lVar9 + -1,"stream");
            }
            if (lVar9 < 1) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xcb,2,
                           "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (lVar9 == 1) {
              FUN_0059669c(lVar6);
              FUN_002e2ea0(PTR_LAB_04373088,lVar6);
            }
            local_30 = 
            "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
            ;
            local_28 = 0x2c5;
                    /* try { // try from 00599474 to 0059947f has its CatchHandler @ 00599670 */
            FUN_002f019c(&local_30,*(undefined8 *)(param_1 + 0x68),0);
            FUN_005a38c4(param_1 + 0x980);
                    /* try { // try from 0059948c to 00599497 has its CatchHandler @ 00599674 */
            FUN_003de350(param_1 + 0x5c0);
            FUN_003de350(param_1 + 0x380);
            puVar4 = *(undefined8 **)(param_1 + 0xf8);
            *(undefined8 *)(param_1 + 0xf8) = 0;
            if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 005994ac to 005994af has its CatchHandler @ 0059966c */
              (**(code **)*puVar4)();
            }
            return;
          }
          uVar5 = 4;
        }
        else {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  pcVar1 = "server";
  if (*(char *)(*(long *)(param_1 + 8) + 0xcf0) != '\0') {
    pcVar1 = "client";
  }
                    /* try { // try from 00599508 to 00599527 has its CatchHandler @ 00599668 */
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x2ad,2,"%s stream %d still included in list %d",pcVar1,
               *(undefined4 *)(param_1 + 200),uVar5);
                    /* WARNING: Subroutine does not return */
  abort();
}


