/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00546680; name: FUN_00546680
 */


void FUN_00546680(long *param_1,undefined8 *param_2,long param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  plStack_78 = (long *)param_2[1];
  local_80 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_68 = param_2[3];
  local_70 = (undefined8 *)param_2[2];
  param_2[2] = 0;
                    /* try { // try from 005466c4 to 005466cf has its CatchHandler @ 00546b8c */
  FUN_00548e30(param_1,&local_80,1);
  puVar7 = local_70;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar5 = PTR_DAT_04374ca0;
  param_1[7] = param_3;
  *param_1 = (long)(puVar5 + 0x10);
  lVar11 = *param_4;
  *param_4 = 0;
  param_1[0xd] = 0;
  param_1[9] = param_5;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[8] = lVar11;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  if (param_5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0x99,2,"assertion failed: %s","helper_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_98 = param_1[3];
  uVar13 = param_2[3];
  local_90 = (long *)param_1[4];
  lVar10 = param_1[5];
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 2;
  do {
    lVar8 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005467d0 to 005467ef has its CatchHandler @ 00546ab0 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar1,lVar8,lVar8 + 1);
  }
  local_a8 = param_1;
  local_a0 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  plVar12 = local_a8;
  if (local_a0 != (long *)0x0) {
    local_a8 = (long *)0x0;
    *local_a0 = (long)(PTR_DAT_04374ca8 + 0x10);
    local_a0[1] = (long)plVar12;
    local_58 = 0;
    FUN_0054853c(&local_58);
  }
                    /* try { // try from 00546834 to 0054684f has its CatchHandler @ 00546b0c */
  FUN_0050c7ec(&local_88,lVar11,uVar13,lVar10,&local_98,&local_a0);
  plVar12 = local_88;
  local_88 = (long *)0x0;
  puVar7 = (undefined8 *)param_1[10];
  param_1[10] = (long)plVar12;
  if (puVar7 == (undefined8 *)0x0) {
    local_88 = (long *)0x0;
    plVar12 = local_a0;
  }
  else {
                    /* try { // try from 0054686c to 0054686f has its CatchHandler @ 00546ac0 */
    (**(code **)*puVar7)();
    plVar6 = local_88;
    local_88 = (long *)0x0;
    plVar12 = local_a0;
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 00546884 to 00546887 has its CatchHandler @ 00546aac */
      (**(code **)*plVar6)();
      plVar12 = local_a0;
    }
  }
  local_a0 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    local_a0 = (long *)0x0;
    (**(code **)*plVar12)(plVar12);
    FUN_002e2ea0(PTR_LAB_04373088,plVar12);
  }
  FUN_00546ca4(&local_a8);
  if (local_90 != (long *)0x0) {
    plVar12 = local_90 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[10] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0x9f,2,"assertion failed: %s","resolver_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_1[7] + 0x10) != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0xa1,1,"resolving_lb=%p: starting name resolution",param_1);
  }
  plVar12 = (long *)param_1[6];
  do {
    lVar11 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar10 = *plVar1;
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 00546934 to 00546953 has its CatchHandler @ 00546a98 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar1,lVar11,lVar11 + 1);
  }
  local_88 = param_1;
  local_b0 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (local_b0 != (long *)0x0) {
    local_88 = (long *)0x0;
    *local_b0 = (long)(PTR_DAT_04374cb0 + 0x10);
    local_b0[1] = (long)param_1;
    local_58 = 0;
    *(undefined1 *)(local_b0 + 2) = 0;
    FUN_00546ca4(&local_58);
  }
                    /* try { // try from 005469a0 to 005469af has its CatchHandler @ 00546ac4 */
  (**(code **)(*plVar12 + 0x18))(plVar12,1,&local_b0);
  plVar1 = local_b0;
  local_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  FUN_00546ca4(&local_88);
                    /* try { // try from 005469f0 to 00546a97 has its CatchHandler @ 00546bfc */
  (**(code **)(*(long *)param_1[10] + 0x18))();
  return;
}


