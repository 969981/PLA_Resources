/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b6f38; name: FUN_005b6f38
 */


void FUN_005b6f38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  char *local_40;
  undefined4 local_38;
  
  *param_1 = (long)(PTR_DAT_04374fe8 + 0x10);
  plVar5 = param_1 + 3;
                    /* try { // try from 005b6f74 to 005b6f7f has its CatchHandler @ 005b7150 */
  FUN_0051cd40(*plVar5,param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9],
               param_1 + 10,param_1);
  local_40 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client_stats.cc";
  local_38 = 0x4f;
  if (*plVar5 != 0) {
                    /* try { // try from 005b6f9c to 005b6fab has its CatchHandler @ 005b7148 */
    FUN_0051a9ac(*plVar5,&local_40,"LocalityStats");
  }
  param_1[3] = 0;
  FUN_0051f7a0(param_1 + 0x13,param_1[0x14]);
                    /* try { // try from 005b6fc0 to 005b6fc3 has its CatchHandler @ 005b714c */
  FUN_002ef710(param_1 + 0xf);
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != (undefined8 *)0x0) {
    lVar4 = puVar6[1];
    plVar1 = puVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 005b6ff8 to 005b7017 has its CatchHandler @ 005b7144 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 005b70f0 to 005b7117 has its CatchHandler @ 005b7144 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      plVar5 = (long *)*plVar5;
      goto joined_r0x005b702c;
    }
  }
  plVar5 = (long *)*plVar5;
joined_r0x005b702c:
  if (plVar5 != (long *)0x0) {
    lVar4 = plVar5[1];
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 005b705c to 005b707b has its CatchHandler @ 005b7140 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar5 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 005b7118 to 005b713f has its CatchHandler @ 005b7140 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_002e2ea0(PTR_LAB_04373088,plVar5);
    }
  }
  return;
}


