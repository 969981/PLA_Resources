/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b6ad0; name: FUN_005b6ad0
 */


void FUN_005b6ad0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char *local_30;
  undefined4 local_28;
  
  *param_1 = (long)(PTR_DAT_04374fe0 + 0x10);
  plVar5 = param_1 + 3;
                    /* try { // try from 005b6b04 to 005b6b0b has its CatchHandler @ 005b6c28 */
  FUN_0051c180(*plVar5,param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9],param_1);
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client_stats.cc";
  local_28 = 0x30;
  if (*plVar5 != 0) {
                    /* try { // try from 005b6b28 to 005b6b37 has its CatchHandler @ 005b6c20 */
    FUN_0051a9ac(*plVar5,&local_30,"DropStats");
  }
  param_1[3] = 0;
  FUN_005244dc(param_1 + 0xe,param_1[0xf]);
                    /* try { // try from 005b6b4c to 005b6b4f has its CatchHandler @ 005b6c24 */
  FUN_002ef710(param_1 + 10);
  plVar5 = (long *)*plVar5;
  if (plVar5 != (long *)0x0) {
    lVar4 = plVar5[1];
    plVar1 = plVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 005b6b84 to 005b6ba3 has its CatchHandler @ 005b6c1c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 005b6bf4 to 005b6c1b has its CatchHandler @ 005b6c1c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_002e2ea0(PTR_LAB_04373088,plVar5);
      return;
    }
  }
  return;
}


