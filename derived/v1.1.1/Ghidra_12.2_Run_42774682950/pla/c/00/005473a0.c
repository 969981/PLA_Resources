/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005473a0; name: FUN_005473a0
 */


/* WARNING: Removing unreachable block (ram,0x005473ec) */
/* WARNING: Removing unreachable block (ram,0x005473f0) */
/* WARNING: Removing unreachable block (ram,0x005473f8) */
/* WARNING: Removing unreachable block (ram,0x00547400) */
/* WARNING: Removing unreachable block (ram,0x00547404) */

void FUN_005473a0(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_68;
  undefined8 local_60;
  long *plStack_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_48 = 0;
  local_50 = (undefined8 *)0x0;
  local_60 = *(undefined8 *)(param_2 + 0x18);
  plStack_58 = *(long **)(param_2 + 0x20);
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar4 = (long *)(param_2 + 0x10);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar6 = *(long *)(param_2 + 8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 00547454 to 0054746f has its CatchHandler @ 005475c4 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(param_2 + 8),lVar5,
                 lVar5 + 1);
  }
  local_68 = param_2;
  plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (plVar4 != (long *)0x0) {
    local_68 = 0;
    *plVar4 = (long)(PTR_DAT_04374cb8 + 0x10);
    plVar4[1] = param_2;
    local_38 = 0;
    FUN_0054853c(&local_38);
  }
  plVar3 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_50;
    local_50 = plVar4;
    (*(code *)*puVar7)(plVar3);
    FUN_002e2ea0(PTR_LAB_04373088,plVar3);
    plVar4 = local_50;
  }
  local_50 = plVar4;
  FUN_00546ca4(&local_68);
                    /* try { // try from 005474e8 to 005474f3 has its CatchHandler @ 005475e8 */
  local_48 = param_3;
  lVar5 = FUN_005488d4(&local_60,(long *)(param_2 + 0x38));
  *param_1 = lVar5;
  if (*(char *)(*(long *)(param_2 + 0x38) + 0x10) != '\0') {
                    /* try { // try from 0054758c to 005475af has its CatchHandler @ 005475b4 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0x101,1,"resolving_lb=%p: created new LB policy %p",param_2,lVar5);
  }
                    /* try { // try from 00547510 to 00547513 has its CatchHandler @ 005475c8 */
  FUN_002fe0c0(*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(param_2 + 0x28));
  plVar4 = local_50;
  local_50 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)*plVar4)(plVar4);
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  }
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


