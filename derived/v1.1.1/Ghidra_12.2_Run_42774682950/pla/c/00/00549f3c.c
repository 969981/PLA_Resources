/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00549f3c; name: FUN_00549f3c
 */


void FUN_00549f3c(undefined8 *param_1,long *param_2,char *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *local_120;
  undefined8 uStack_118;
  char *local_f0;
  size_t local_e8;
  char *local_c0;
  undefined8 uStack_b8;
  byte local_90 [8];
  ulong local_88;
  ulong local_80;
  long local_78;
  long *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  
  plVar10 = param_2 + 1;
  plVar1 = param_2 + 2;
  do {
    lVar8 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar9 = *plVar10;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar9 + 8),plVar10,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                 ,0x102,lVar8,lVar8 + 1,"Helper");
  }
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  puVar4 = PTR_DAT_04374cd8;
  if (plVar6 == (long *)0x0) {
    lVar8 = *plVar10;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 0054a02c to 0054a04f has its CatchHandler @ 0054a300 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar10,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 0054a2cc to 0054a2f3 has its CatchHandler @ 0054a300 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)(*param_2 + 8))(param_2);
      FUN_002e2ea0(PTR_LAB_04373088,param_2);
      local_78 = param_2[3];
      local_70 = (long *)param_2[4];
    }
    else {
      local_78 = param_2[3];
      local_70 = (long *)param_2[4];
    }
  }
  else {
    plVar6[2] = 0;
    *plVar6 = (long)(puVar4 + 0x10);
    plVar6[1] = (long)param_2;
    local_78 = param_2[3];
    local_70 = (long *)param_2[4];
  }
  if (local_70 != (long *)0x0) {
    plVar10 = local_70 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* try { // try from 0054a08c to 0054a09f has its CatchHandler @ 0054a334 */
  local_68 = plVar6;
  uStack_60 = param_4;
  (**(code **)(*param_2 + 0x48))(&local_58,param_2,param_3,&local_78);
  plVar10 = local_68;
  local_68 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)*plVar10)(plVar10);
    FUN_002e2ea0(PTR_LAB_04373088,plVar10);
  }
  if (local_70 != (long *)0x0) {
    plVar10 = local_70 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 == (undefined8 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                 ,0x10b,2,"could not create LB policy \"%s\"",param_3);
    puVar5 = local_58;
    *param_1 = 0;
    local_58 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0054a250 to 0054a253 has its CatchHandler @ 0054a2fc */
      (**(code **)*puVar5)();
    }
  }
  else {
    plVar6[2] = (long)local_58;
    if (*(char *)(param_2[7] + 0x10) != '\0') {
                    /* try { // try from 0054a258 to 0054a27b has its CatchHandler @ 0054a3a4 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                   ,0x110,1,"[child_policy_handler %p] created new LB policy \"%s\" (%p)",param_2,
                   param_3);
    }
    plVar10 = (long *)param_2[6];
    local_c0 = "Created new LB policy \"";
    uStack_b8 = 0x17;
    local_f0 = param_3;
    if (param_3 == (char *)0x0) {
      local_e8 = 0;
    }
    else {
      local_e8 = strlen(param_3);
      if ((long)local_e8 < 0) {
                    /* try { // try from 0054a144 to 0054a163 has its CatchHandler @ 0054a2f8 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
    }
    local_120 = &DAT_039042e1;
    uStack_118 = 1;
                    /* try { // try from 0054a17c to 0054a18f has its CatchHandler @ 0054a330 */
    FUN_002ecfd0(local_90,&local_c0,&local_f0,&local_120);
    if ((local_90[0] & 1) == 0) {
      local_88 = (ulong)(local_90[0] >> 1);
      uVar7 = (ulong)local_90 | 1;
    }
    else {
      if ((long)local_88 < 0) {
                    /* try { // try from 0054a2ac to 0054a2cb has its CatchHandler @ 0054a2f4 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      uVar7 = local_80;
    }
                    /* try { // try from 0054a1bc to 0054a1c7 has its CatchHandler @ 0054a304 */
    (**(code **)(*plVar10 + 0x28))(plVar10,0,uVar7,local_88);
    if ((local_90[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
                    /* try { // try from 0054a1ec to 0054a237 has its CatchHandler @ 0054a3a4 */
    FUN_002fe0c0(local_58[5],param_2[5]);
    *param_1 = local_58;
  }
  return;
}


