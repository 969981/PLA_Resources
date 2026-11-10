/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f3b5c; name: FUN_005f3b5c
 */


void FUN_005f3b5c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *local_88 [4];
  long local_68;
  
  if (param_1[0x43] != 0) {
    lVar11 = param_1[3];
    puVar7 = *(undefined8 **)(lVar11 + 0x38);
    if (puVar7 != param_1) {
      if (*(undefined8 **)(lVar11 + 0x40) != param_1) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                     ,0x160,2,"assertion failed: %s",
                     "p->latest_pending_subchannel_list_.get() == this");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(char *)(param_1 + 0x42) != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                     ,0x161,2,"assertion failed: %s","!shutting_down()");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (PTR_DAT_04375168[0x10] == '\0') {
        *(undefined8 **)(lVar11 + 0x38) = *(undefined8 **)(lVar11 + 0x40);
        *(undefined8 *)(lVar11 + 0x40) = 0;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)puVar7[5] >> 1;
        }
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                     ,0x167,1,
                     "[RR %p] phasing out subchannel list %p (size %lu) in favor of %p (size %lu)",
                     lVar11,puVar7,uVar8,param_1,(ulong)param_1[5] >> 1);
        puVar7 = *(undefined8 **)(lVar11 + 0x38);
        *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(lVar11 + 0x40) = 0;
      }
      if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 005f3bc8 to 005f3bcf has its CatchHandler @ 005f4074 */
        (**(code **)*puVar7)(puVar7);
      }
    }
  }
  lVar11 = param_1[3];
  if (*(undefined8 **)(lVar11 + 0x38) != param_1) {
    return;
  }
  if (param_1[0x43] == 0) {
    if (param_1[0x44] != 0) {
      plVar12 = *(long **)(lVar11 + 0x30);
      plVar5 = (long *)(lVar11 + 0x10);
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar10 = *(long *)(lVar11 + 8);
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar10 + 8),
                     (long *)(lVar11 + 8),
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                     ,0x14a,lVar9,lVar9 + 1,"QueuePicker");
      }
      local_68 = lVar11;
      plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (plVar5 != (long *)0x0) {
        local_68 = 0;
        *plVar5 = (long)(PTR_DAT_04374cb0 + 0x10);
        plVar5[1] = lVar11;
        local_88[0] = (long *)0x0;
        *(undefined1 *)(plVar5 + 2) = 0;
        FUN_00546ca4(local_88);
      }
                    /* try { // try from 005f3e1c to 005f3e2b has its CatchHandler @ 005f4000 */
      local_88[0] = plVar5;
      (**(code **)(*plVar12 + 0x18))(plVar12,1,local_88);
      plVar5 = local_88[0];
      local_88[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)*plVar5)(plVar5);
        FUN_002e2ea0(PTR_LAB_04373088,plVar5);
      }
      FUN_00546ca4(&local_68);
      return;
    }
    if (param_1[0x45] != (ulong)param_1[5] >> 1) {
      return;
    }
    FUN_002f2c60(local_88,"connections to all backends failing");
    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                         ,0x14f,local_88,0,0);
    lVar9 = FUN_002f0d20(uVar6,3,0xe);
    plVar5 = *(long **)(lVar11 + 0x30);
    local_88[0] = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (local_88[0] != (long *)0x0) {
      *local_88[0] = (long)(PTR_DAT_04374b68 + 0x10);
      local_88[0][1] = lVar9;
    }
                    /* try { // try from 005f3ee4 to 005f3ef3 has its CatchHandler @ 005f3fec */
    (**(code **)(*plVar5 + 0x18))(plVar5,3,local_88);
  }
  else {
    plVar12 = *(long **)(lVar11 + 0x30);
    plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x70);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)&PTR_FUN_0418f118;
      plVar5[1] = lVar11;
      plVar5[3] = 0;
      uVar8 = param_1[5];
      if (1 < uVar8) {
        uVar13 = 0;
        do {
          puVar7 = param_1 + 6;
          if ((uVar8 & 1) != 0) {
            puVar7 = (undefined8 *)param_1[6];
          }
          if (*(int *)((long)puVar7 + uVar13 * 0x30 + 0x24) == 2) {
            plVar14 = (long *)puVar7[uVar13 * 6 + 2];
            plVar1 = plVar14 + 2;
            do {
              lVar11 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar9 = plVar14[1];
            if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005f3cb0 to 005f3cc3 has its CatchHandler @ 005f4078 */
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                           "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar14 + 1,lVar11,
                           lVar11 + 1);
            }
                    /* try { // try from 005f3cc8 to 005f3cd3 has its CatchHandler @ 005f408c */
            local_88[0] = plVar14;
            FUN_005f4610(plVar5 + 3,local_88);
            FUN_0052f160(local_88);
            uVar8 = param_1[5];
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar8 >> 1);
      }
                    /* try { // try from 005f3ce4 to 005f3ce7 has its CatchHandler @ 005f4040 */
      iVar4 = rand();
      uVar13 = (ulong)plVar5[3] >> 1;
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = (ulong)(long)iVar4 / uVar13;
      }
      lVar11 = (long)iVar4 - uVar8 * uVar13;
      plVar5[2] = lVar11;
      if (PTR_DAT_04375168[0x10] != '\0') {
                    /* try { // try from 005f3f70 to 005f3f97 has its CatchHandler @ 005f4040 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                     ,199,1,
                     "[RR %p picker %p] created picker from subchannel_list=%p with %lu READY subchannels; last_picked_index_=%lu"
                     ,plVar5[1],plVar5,param_1,uVar13,lVar11);
      }
    }
                    /* try { // try from 005f3d1c to 005f3d2b has its CatchHandler @ 005f4044 */
    local_88[0] = plVar5;
    (**(code **)(*plVar12 + 0x18))(plVar12,2,local_88);
  }
  plVar5 = local_88[0];
  local_88[0] = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)*plVar5)(plVar5);
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  return;
}


