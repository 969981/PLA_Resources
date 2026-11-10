/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053c924; name: FUN_0053c924
 */


void FUN_0053c924(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_04374bf0 + 0x10);
  if (PTR_DAT_04374be8[0x10] != '\0') {
                    /* try { // try from 0053caa8 to 0053cac7 has its CatchHandler @ 0053cbbc */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x4e,1,"destroying HealthCheckClient %p",param_1);
  }
  puVar4 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0053c964 to 0053c967 has its CatchHandler @ 0053cbfc */
    (**(code **)*puVar4)();
  }
  plVar6 = (long *)param_1[0xb];
  if (plVar6 != (long *)0x0) {
    lVar5 = plVar6[1];
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 0053c99c to 0053c9bb has its CatchHandler @ 0053cbf8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 0053cb44 to 0053cb6b has its CatchHandler @ 0053cbf8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_002e2ea0(PTR_LAB_04373088,plVar6);
    }
  }
                    /* try { // try from 0053c9d0 to 0053c9d3 has its CatchHandler @ 0053cc00 */
  FUN_002ef710(param_1 + 7);
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = puVar4[1];
    plVar6 = puVar4 + 2;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 0053ca08 to 0053ca27 has its CatchHandler @ 0053cbf4 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar4 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 0053cb6c to 0053cb93 has its CatchHandler @ 0053cbf4 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      puVar4 = (undefined8 *)param_1[4];
      goto joined_r0x0053ca3c;
    }
  }
  puVar4 = (undefined8 *)param_1[4];
joined_r0x0053ca3c:
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = puVar4[1];
    plVar6 = puVar4 + 2;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 0053ca6c to 0053ca8b has its CatchHandler @ 0053cbf0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar4 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 0053cb94 to 0053cbbb has its CatchHandler @ 0053cbf0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      return;
    }
  }
  return;
}


