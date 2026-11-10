/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ea0a4; name: FUN_005ea0a4
 */


/* WARNING: Removing unreachable block (ram,0x005ea120) */
/* WARNING: Removing unreachable block (ram,0x005ea124) */
/* WARNING: Removing unreachable block (ram,0x005ea12c) */
/* WARNING: Removing unreachable block (ram,0x005ea134) */
/* WARNING: Removing unreachable block (ram,0x005ea138) */

void FUN_005ea0a4(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_198 [168];
  ulong local_f0;
  long *plStack_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  
  puVar4 = PTR_DAT_04375158;
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x68) == '\0') {
    if (PTR_DAT_04375158[0x10] == '\0') {
      lVar8 = *(long *)(param_1 + 0x38);
    }
    else {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        lVar8 = param_1 + 0x21;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x30);
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                   ,0x210,1,"[priority_lb %p] child %s (%p): start update",*(long *)(param_1 + 0x18)
                   ,lVar8,param_1);
      lVar8 = *(long *)(param_1 + 0x38);
    }
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      local_d8 = *(undefined8 *)(lVar8 + 0x40);
      local_e0 = (undefined8 *)0x0;
      local_f0 = *(ulong *)(lVar8 + 0x18);
      plStack_e8 = *(long **)(lVar8 + 0x20);
      if (plStack_e8 != (long *)0x0) {
        plVar11 = plStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11 = (long *)(param_1 + 0x10);
      do {
        lVar8 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar10 = *(long *)(param_1 + 8);
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 005ea18c to 005ea1c3 has its CatchHandler @ 005ea478 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar10 + 8),
                     (long *)(param_1 + 8),
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                     ,0x22c,lVar8,lVar8 + 1,"Helper");
      }
      puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
      puVar6 = local_e0;
      lVar8 = param_1;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_0418e830;
        puVar5[1] = param_1;
        lVar8 = 0;
      }
      if (local_e0 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*local_e0;
        local_e0 = puVar5;
        (*(code *)*puVar9)(puVar6);
        FUN_002e2ea0(PTR_LAB_04373088,puVar6);
        puVar5 = local_e0;
      }
      local_e0 = puVar5;
      FUN_005eb030(lVar8);
      local_48 = puVar4;
                    /* try { // try from 005ea220 to 005ea22b has its CatchHandler @ 005ea49c */
      lVar8 = FUN_005d745c(&local_f0,&local_48);
      if (puVar4[0x10] != '\0') {
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          lVar10 = param_1 + 0x21;
        }
        else {
          lVar10 = *(long *)(param_1 + 0x30);
        }
                    /* try { // try from 005ea444 to 005ea467 has its CatchHandler @ 005ea46c */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                     ,0x231,1,"[priority_lb %p] child %s (%p): created new child policy handler %p",
                     *(undefined8 *)(param_1 + 0x18),lVar10,param_1,lVar8);
      }
                    /* try { // try from 005ea244 to 005ea247 has its CatchHandler @ 005ea480 */
      FUN_002fe0c0(*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28));
      puVar6 = local_e0;
      local_e0 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      }
      if (plStack_e8 != (long *)0x0) {
        plVar11 = plStack_e8 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar6 = *(undefined8 **)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = lVar8;
      if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 005ea2c0 to 005ea2c3 has its CatchHandler @ 005ea47c */
        (**(code **)*puVar6)();
      }
    }
    local_f0 = 0;
    local_58 = *param_2;
    lVar8 = *(long *)(param_1 + 0x18);
    local_50 = 0;
    *param_2 = 0;
                    /* try { // try from 005ea2e0 to 005ea337 has its CatchHandler @ 005ea51c */
    puVar7 = (ulong *)FUN_005d2f6c(lVar8 + 0x50,param_1 + 0x20);
    if (puVar7 != &local_f0) {
      puVar1 = puVar7 + 1;
      if ((*puVar7 & 1) != 0) {
        puVar1 = (ulong *)puVar7[1];
      }
      FUN_0050d74c(&local_f0,puVar1,((long)((*puVar7 >> 1) * 0x90) >> 4) * -0x71c71c71c71c71c7);
    }
    local_50 = FUN_002e45d0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
    if (puVar4[0x10] != '\0') {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        lVar8 = param_1 + 0x21;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x30);
      }
                    /* try { // try from 005ea404 to 005ea423 has its CatchHandler @ 005ea51c */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                   ,0x21e,1,"[priority_lb %p] child %s (%p): updating child policy handler %p",
                   *(undefined8 *)(param_1 + 0x18),lVar8,param_1,*(undefined8 *)(param_1 + 0x38));
    }
    plVar11 = *(long **)(param_1 + 0x38);
    FUN_005490f0(auStack_198,&local_f0);
                    /* try { // try from 005ea35c to 005ea367 has its CatchHandler @ 005ea50c */
    (**(code **)(*plVar11 + 0x20))(plVar11,auStack_198);
    FUN_00547658(auStack_198);
    FUN_00547658(&local_f0);
  }
  return;
}


