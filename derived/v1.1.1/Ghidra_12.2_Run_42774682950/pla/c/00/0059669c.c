/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059669c; name: FUN_0059669c
 */


void FUN_0059669c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  undefined1 auStack_50 [32];
  
  puVar7 = *(undefined8 **)(param_1 + 0x15c0);
  if (puVar7 != (undefined8 *)0x0) {
    lVar6 = puVar7[1];
    plVar1 = puVar7 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 005966ec to 0059673f has its CatchHandler @ 00596a8c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),puVar7 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 00596a30 to 00596a57 has its CatchHandler @ 00596a8c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)*puVar7)(puVar7);
      FUN_002e2ea0(PTR_LAB_04373088,puVar7);
    }
    *(undefined8 *)(param_1 + 0x15c0) = 0;
  }
  FUN_00308320(*(undefined8 *)(param_1 + 0x18));
  FUN_00305020(param_1 + 0xcf8);
  FUN_00305020(param_1 + 0x358);
  FUN_005a4e50(param_1 + 0x480);
                    /* try { // try from 00596740 to 0059676b has its CatchHandler @ 00596a84 */
  FUN_002f2c60(auStack_50,"Transport destroyed");
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0xc0,auStack_50,0,0);
                    /* try { // try from 00596774 to 0059685b has its CatchHandler @ 00596a90 */
  FUN_005acf54(*(undefined8 *)(param_1 + 0x15b8),0,uVar4);
  if (4 < uVar4) {
    FUN_002f0430(uVar4,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xc4);
  }
  *(undefined8 *)(param_1 + 0x15b8) = 0;
  FUN_00305020(param_1 + 0x1f0);
  FUN_005af4b0(param_1 + 0xfd0);
  FUN_005a9cc0(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x58) != 0) {
LAB_005969b8:
                    /* try { // try from 005969b8 to 00596a2f has its CatchHandler @ 00596a90 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xcc,2,"assertion failed: %s","lists[i].head == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    if (*(long *)(param_1 + 0x68) != 0) goto LAB_005969b8;
    if (*(long *)(param_1 + 0x70) == 0) {
      if (*(long *)(param_1 + 0x78) != 0) goto LAB_005969b8;
      if (*(long *)(param_1 + 0x80) == 0) {
        if (*(long *)(param_1 + 0x88) != 0) goto LAB_005969b8;
        if (*(long *)(param_1 + 0x90) == 0) {
          if (*(long *)(param_1 + 0x98) != 0) goto LAB_005969b8;
          if (*(long *)(param_1 + 0xa0) == 0) {
            if (4 < *(ulong *)(param_1 + 0xe28)) {
              FUN_002f0430(*(ulong *)(param_1 + 0xe28),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xd0);
            }
            lVar6 = FUN_005a4c80(param_1 + 0xa8);
            if (lVar6 != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xd2,2,"assertion failed: %s",
                           "grpc_chttp2_stream_map_size(&stream_map) == 0");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            FUN_005a48a0(param_1 + 0xa8);
            FUN_002f4760(*(undefined8 *)(param_1 + 0x30),
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xd6,"chttp2_transport");
                    /* try { // try from 0059685c to 00596893 has its CatchHandler @ 00596a88 */
            FUN_002f2c60(auStack_50,"Transport destroyed");
            uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                 ,0xd9,auStack_50,0,0);
            FUN_00596ab0(param_1,uVar5);
            __ptr = *(void **)(param_1 + 0x1240);
            while (__ptr != (void *)0x0) {
              pvVar8 = *(void **)((long)__ptr + 0x10);
                    /* try { // try from 005968a0 to 005968a3 has its CatchHandler @ 00596a94 */
              free(__ptr);
              *(void **)(param_1 + 0x1240) = pvVar8;
              __ptr = pvVar8;
            }
            (*(code *)**(undefined8 **)(param_1 + 0x1130))(param_1 + 0x1130);
            if (4 < *(ulong *)(param_1 + 0x48)) {
                    /* try { // try from 005968d0 to 005968ef has its CatchHandler @ 00596a90 */
              FUN_002f0430(*(ulong *)(param_1 + 0x48),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xe3);
            }
            free(*(void **)(param_1 + 0xfb8));
            free(*(void **)(param_1 + 0x20));
            puVar7 = *(undefined8 **)(param_1 + 0x15c0);
            if (puVar7 != (undefined8 *)0x0) {
              lVar6 = puVar7[1];
              plVar1 = puVar7 + 2;
              do {
                lVar9 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 00596924 to 00596943 has its CatchHandler @ 00596a80 */
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,
                             1,"%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),puVar7 + 1,lVar9)
                ;
              }
              if (lVar9 < 1) {
                    /* try { // try from 00596a58 to 00596a7f has its CatchHandler @ 00596a80 */
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,
                             2,"assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (lVar9 == 1) {
                (**(code **)*puVar7)(puVar7);
                FUN_002e2ea0(PTR_LAB_04373088,puVar7);
              }
            }
            FUN_003d3670(param_1 + 0x330);
            return;
          }
        }
      }
    }
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0xcd,2,"assertion failed: %s","lists[i].tail == nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


