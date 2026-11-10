/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005471bc; name: FUN_005471bc
 */


void FUN_005471bc(long param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [168];
  undefined8 local_f0;
  undefined8 local_e8 [19];
  undefined8 *local_50;
  undefined8 uStack_48;
  
  local_e8[0] = 0;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
                    /* try { // try from 005471e4 to 00547247 has its CatchHandler @ 0054738c */
  FUN_0050d35c(local_e8,param_3);
  puVar3 = local_50;
  uVar7 = *param_2;
  if (local_50 != (undefined8 *)0x0) {
    lVar4 = local_50[1];
    plVar5 = local_50 + 2;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),local_50 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 00547340 to 00547367 has its CatchHandler @ 0054738c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar3)(puVar3);
      FUN_002e2ea0(PTR_LAB_04373088,puVar3);
    }
  }
  *param_2 = 0;
  uStack_48 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_3 + 0xa8) = 0;
  local_50 = (undefined8 *)uVar7;
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* try { // try from 00547270 to 0054727b has its CatchHandler @ 0054736c */
    FUN_005473a0(&local_f0,param_1);
    uVar7 = local_f0;
    local_f0 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 00547298 to 0054729b has its CatchHandler @ 00547368 */
      (**(code **)*puVar3)();
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0') {
                    /* try { // try from 005472f8 to 00547317 has its CatchHandler @ 0054738c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0xef,1,"resolving_lb=%p: Updating child policy %p",param_1,
                 *(undefined8 *)(param_1 + 0x70));
  }
  plVar5 = *(long **)(param_1 + 0x70);
  FUN_005490f0(auStack_198,local_e8);
                    /* try { // try from 005472c0 to 005472cb has its CatchHandler @ 00547370 */
  (**(code **)(*plVar5 + 0x20))(plVar5,auStack_198);
  FUN_00547658(auStack_198);
  FUN_00547658(local_e8);
  return;
}


