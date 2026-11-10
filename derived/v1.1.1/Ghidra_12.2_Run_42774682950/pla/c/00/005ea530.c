/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ea530; name: FUN_005ea530
 */


void FUN_005ea530(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  void *__src;
  long *plVar17;
  void *__dest;
  ulong uVar18;
  long *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  
  puVar3 = PTR_DAT_04375158;
  lVar10 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar10 + 0x38) != *(long *)(lVar10 + 0x30)) {
    uVar16 = 0;
    do {
      lVar10 = *(long *)(lVar10 + 0x30);
      puVar13 = (ulong *)(lVar10 + uVar16 * 0x18);
      if (puVar3[0x10] != '\0') {
        if ((*puVar13 & 1) == 0) {
          pbVar9 = (byte *)((long)puVar13 + 1);
        }
        else {
          pbVar9 = *(byte **)(lVar10 + uVar16 * 0x18 + 0x10);
        }
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                     ,0x195,1,"[priority_lb %p] trying priority %d, child %s",param_1,uVar16,pbVar9)
        ;
      }
      plVar12 = (long *)FUN_005e9cc0(param_1 + 0x70,puVar13);
      lVar15 = *plVar12;
      if (lVar15 == 0) {
        if ((param_2 & 1) != 0) {
          plVar17 = *(long **)(param_1 + 0x30);
          plVar14 = (long *)(param_1 + 0x10);
          do {
            lVar15 = *plVar14;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar2) {
              *plVar14 = lVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          lVar7 = *(long *)(param_1 + 8);
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                         "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar7 + 8),
                         (long *)(param_1 + 8),
                         "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                         ,0x19d,lVar15,lVar15 + 1,"QueuePicker");
          }
          local_70 = param_1;
          local_68 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
          if (local_68 != (long *)0x0) {
            local_70 = 0;
            *local_68 = (long)(PTR_DAT_04374cb0 + 0x10);
            local_68[1] = param_1;
            local_a0 = 0;
            *(undefined1 *)(local_68 + 2) = 0;
            FUN_00546ca4(&local_a0);
          }
                    /* try { // try from 005ea804 to 005ea813 has its CatchHandler @ 005ead88 */
          (**(code **)(*plVar17 + 0x18))(plVar17,1,&local_68);
          plVar14 = local_68;
          local_68 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)*plVar14)(plVar14);
            FUN_002e2ea0(PTR_LAB_04373088,plVar14);
          }
          FUN_00546ca4(&local_70);
        }
        plVar14 = (long *)(param_1 + 0x10);
        do {
          lVar15 = *plVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar2) {
            *plVar14 = lVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar7 = *(long *)(param_1 + 8);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                       "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar7 + 8),
                       (long *)(param_1 + 8),
                       "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                       ,0x1a0,lVar15,lVar15 + 1,"ChildPriority");
        }
        local_70 = param_1;
        puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x160);
        if (puVar5 == (undefined8 *)0x0) goto LAB_005eab60;
        local_70 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        uStack_98 = 0;
        if ((*puVar13 & 1) == 0) {
          uStack_98 = puVar13[1];
          local_a0 = *puVar13;
          local_90 = (void *)puVar13[2];
        }
        else {
          lVar10 = lVar10 + uVar16 * 0x18;
          uVar16 = *(ulong *)(lVar10 + 8);
          if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 005eacd4 to 005eacdb has its CatchHandler @ 005eacdc */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __src = *(void **)(lVar10 + 0x10);
          if (uVar16 < 0x17) {
            local_a0 = (ulong)(byte)((int)uVar16 << 1);
            __dest = (void *)((ulong)&local_a0 | 1);
            if (uVar16 != 0) goto LAB_005eaa88;
          }
          else {
            uVar18 = uVar16 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar18);
            local_a0 = uVar18 | 1;
            uStack_98 = uVar16;
            local_90 = __dest;
LAB_005eaa88:
            memcpy(__dest,__src,uVar16);
          }
          *(undefined1 *)((long)__dest + uVar16) = 0;
        }
        *puVar5 = &PTR_LAB_0418e918;
        puVar5[1] = 0;
        puVar5[2] = 1;
        puVar5[3] = param_1;
        puVar5[6] = local_90;
        puVar5[7] = 0;
        puVar5[5] = uStack_98;
        puVar5[4] = local_a0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        *(undefined4 *)(puVar5 + 8) = 1;
        puVar5[9] = 0;
        *(undefined1 *)(puVar5 + 0x1a) = 0;
        *(undefined1 *)(puVar5 + 0x2b) = 0;
        if (puVar3[0x10] != '\0') {
          if ((*(byte *)(puVar5 + 4) & 1) == 0) {
            lVar10 = (long)puVar5 + 0x21;
          }
          else {
            lVar10 = puVar5[6];
          }
                    /* try { // try from 005eacac to 005eaccf has its CatchHandler @ 005eadbc */
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                       ,0x1ea,1,"[priority_lb %p] creating child %s (%p)",param_1,lVar10,puVar5);
        }
        *(undefined2 *)(puVar5 + 0x26) = 0;
        puVar5[0x23] = &LAB_005ebf68;
        puVar5[0x27] = 
        "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
        ;
        *(undefined4 *)(puVar5 + 0x28) = 0x1ee;
        puVar5[0x12] = &LAB_005ec0cc;
        puVar5[0x13] = puVar5;
        puVar5[0x29] = 0;
        *(undefined4 *)(puVar5 + 0x2a) = 0;
        puVar5[0x14] = 0;
        *(undefined2 *)(puVar5 + 0x15) = 0;
        puVar5[0x18] = 0;
        *(undefined4 *)(puVar5 + 0x19) = 0;
        puVar5[0x16] = 
        "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
        ;
        *(undefined4 *)(puVar5 + 0x17) = 0x1f0;
        puVar5[0x24] = puVar5;
        puVar5[0x25] = 0;
                    /* try { // try from 005eab40 to 005eab47 has its CatchHandler @ 005eadbc */
        FUN_005ec230(puVar5);
        if ((local_a0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_90);
        }
LAB_005eab60:
        puVar6 = (undefined8 *)*plVar12;
        *plVar12 = (long)puVar5;
        if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 005eab74 to 005eab77 has its CatchHandler @ 005eadb8 */
          (**(code **)*puVar6)();
        }
        FUN_00546ca4(&local_70);
        lVar7 = *plVar12;
        lVar10 = FUN_005eaf20(*(long *)(param_1 + 0x48) + 0x18,puVar13);
        local_78 = 0;
        lVar15 = *(long *)(lVar10 + 0x38);
        if (lVar15 != 0) {
          plVar12 = (long *)(lVar15 + 0x10);
          do {
            lVar8 = *plVar12;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar2) {
              *plVar12 = lVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          lVar11 = *(long *)(lVar15 + 8);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),(long *)(lVar15 + 8),
                         lVar8,lVar8 + 1);
          }
        }
        local_78 = *(undefined8 *)(lVar10 + 0x38);
                    /* try { // try from 005eabf8 to 005eac03 has its CatchHandler @ 005eaed4 */
        FUN_005ea0a4(lVar7,&local_78);
        FUN_00532768(&local_78);
        return;
      }
      if (*(char *)(lVar15 + 0xd0) != '\0') {
        if (puVar3[0x10] != '\0') {
          if ((*(byte *)(lVar15 + 0x20) & 1) == 0) {
            lVar7 = lVar15 + 0x21;
          }
          else {
            lVar7 = *(long *)(lVar15 + 0x30);
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                       ,0x2a5,1,"[priority_lb %p] child %s (%p): reactivating",
                       *(undefined8 *)(lVar15 + 0x18),lVar7,lVar15);
        }
        *(undefined1 *)(lVar15 + 0xd0) = 0;
        FUN_002f5c80(lVar15 + 0x50);
        lVar15 = *plVar12;
      }
      if ((*(uint *)(lVar15 + 0x40) | 2) == 2) {
        FUN_005ebb88(param_1,uVar16);
        return;
      }
      if (*(char *)(lVar15 + 0x158) != '\0') {
        if (puVar3[0x10] != '\0') {
          if ((*puVar13 & 1) == 0) {
            pbVar9 = (byte *)((long)puVar13 + 1);
          }
          else {
            pbVar9 = *(byte **)(lVar10 + uVar16 * 0x18 + 0x10);
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                       ,0x1b0,1,
                       "[priority_lb %p] priority %d, child %s: child still attempting to connect, will wait"
                       ,param_1,uVar16,pbVar9);
        }
        if ((param_2 & 1) == 0) {
          return;
        }
        plVar14 = *(long **)(param_1 + 0x30);
        plVar12 = (long *)(param_1 + 0x10);
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar15 = *(long *)(param_1 + 8);
        if ((lVar15 != 0) && (*(char *)(lVar15 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                       "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar15 + 8),
                       (long *)(param_1 + 8),
                       "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                       ,0x1b8,lVar10,lVar10 + 1,"QueuePicker");
        }
        local_70 = param_1;
        local_80 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
        if (local_80 != (long *)0x0) {
          local_70 = 0;
          *local_80 = (long)(PTR_DAT_04374cb0 + 0x10);
          local_80[1] = param_1;
          local_a0 = 0;
          *(undefined1 *)(local_80 + 2) = 0;
          FUN_00546ca4(&local_a0);
        }
                    /* try { // try from 005ea9e0 to 005ea9ef has its CatchHandler @ 005ead74 */
        (**(code **)(*plVar14 + 0x18))(plVar14,1,&local_80);
        plVar12 = local_80;
        local_80 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)*plVar12)(plVar12);
          FUN_002e2ea0(PTR_LAB_04373088,plVar12);
        }
        FUN_00546ca4(&local_70);
        return;
      }
      lVar10 = *(long *)(param_1 + 0x48);
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < (ulong)((*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 3) *
                             -0x5555555555555555));
  }
  if (puVar3[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x1c0,1,
                 "[priority_lb %p] no priority reachable, putting channel in TRANSIENT_FAILURE",
                 param_1);
  }
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_002f2c60(&local_a0,"no ready priority");
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                       ,0x1c8,&local_a0,0,0);
  lVar10 = FUN_002f0d20(uVar4,3,0xe);
  plVar12 = *(long **)(param_1 + 0x30);
  local_a8 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (local_a8 != (long *)0x0) {
    *local_a8 = (long)(PTR_DAT_04374b68 + 0x10);
    local_a8[1] = lVar10;
  }
                    /* try { // try from 005ea5ec to 005ea5fb has its CatchHandler @ 005eaee8 */
  (**(code **)(*plVar12 + 0x18))(plVar12,3,&local_a8);
  plVar12 = local_a8;
  local_a8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)*plVar12)(plVar12);
    FUN_002e2ea0(PTR_LAB_04373088,plVar12);
  }
  return;
}


