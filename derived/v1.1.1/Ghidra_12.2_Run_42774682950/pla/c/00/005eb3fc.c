/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005eb3fc; name: FUN_005eb3fc
 */


void FUN_005eb3fc(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *local_68;
  
  puVar8 = PTR_DAT_04375158;
  if (PTR_DAT_04375158[0x10] != '\0') {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar20 = param_1 + 0x21;
    }
    else {
      lVar20 = *(long *)(param_1 + 0x30);
    }
    uVar12 = FUN_003d3430(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x24d,1,"[priority_lb %p] child %s (%p): state update: %s, picker %p",uVar14,
                 lVar20,param_1,uVar12,*param_3);
  }
  *(uint *)(param_1 + 0x40) = param_2;
  puVar11 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (puVar11 != (undefined8 *)0x0) {
    uVar14 = *param_3;
    *param_3 = 0;
    *puVar11 = &PTR_LAB_0418e888;
    puVar11[1] = 0;
    puVar11[2] = 1;
    puVar11[3] = uVar14;
  }
  plVar1 = (long *)(param_1 + 0x48);
                    /* try { // try from 005eb470 to 005eb47b has its CatchHandler @ 005eb934 */
  FUN_005ebab0(plVar1,puVar11);
  FUN_005eb948(0);
  if (((param_2 | 1) == 3) && (*(char *)(param_1 + 0x158) != '\0')) {
    if (puVar8[0x10] != '\0') {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        lVar20 = param_1 + 0x21;
      }
      else {
        lVar20 = *(long *)(param_1 + 0x30);
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                   ,0x26f,1,"[priority_lb %p] child %s (%p): cancelling failover timer",
                   *(undefined8 *)(param_1 + 0x18),lVar20,param_1);
    }
    FUN_002f5c80(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  lVar20 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar20 + 0x90) == param_1) {
    if (puVar8[0x10] == '\0') {
      uVar22 = *(uint *)(param_1 + 0x40);
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                   ,0x147,1,
                   "[priority_lb %p] state update for current child from before config update",
                   lVar20);
      uVar22 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar22 | 2) == 2) {
      plVar21 = *(long **)(lVar20 + 0x30);
      local_68 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
      if (local_68 != (undefined8 *)0x0) {
        lVar20 = *plVar1;
        if (lVar20 != 0) {
          plVar2 = (long *)(lVar20 + 0x10);
          do {
            lVar13 = *plVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          lVar16 = *(long *)(lVar20 + 8);
          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar16 + 8),(long *)(lVar20 + 8),
                         lVar13,lVar13 + 1);
          }
        }
        lVar20 = *plVar1;
        *local_68 = &PTR_FUN_0418e8d8;
        local_68[1] = lVar20;
      }
                    /* try { // try from 005eb584 to 005eb593 has its CatchHandler @ 005eb8fc */
      (**(code **)(*plVar21 + 0x18))(plVar21,uVar22,&local_68);
      goto LAB_005eb594;
    }
    bVar9 = true;
    *(undefined8 *)(lVar20 + 0x90) = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar20 + 0x48) + 0x30);
    lVar16 = *(long *)(*(long *)(lVar20 + 0x48) + 0x38) - lVar13;
    if (lVar16 == 0) {
      uVar23 = 0xffffffff;
      uVar22 = 0xffffffff;
      cVar6 = puVar8[0x10];
    }
    else {
      bVar9 = (*(byte *)(param_1 + 0x20) & 1) != 0;
      pbVar19 = *(byte **)(param_1 + 0x30);
      __n = (ulong)(*(byte *)(param_1 + 0x20) >> 1);
      if (bVar9) {
        __n = *(size_t *)(param_1 + 0x28);
      }
      if (!bVar9) {
        pbVar19 = (byte *)(param_1 + 0x21);
      }
      uVar24 = (lVar16 >> 3) * -0x5555555555555555;
      uVar23 = 0;
      if (__n == 0) {
        do {
          pbVar19 = (byte *)(lVar13 + uVar23 * 0x18);
          bVar7 = *pbVar19;
          uVar15 = (ulong)(bVar7 >> 1);
          if ((bVar7 & 1) != 0) {
            uVar15 = *(ulong *)(pbVar19 + 8);
          }
          if (uVar15 == 0) goto LAB_005eb6ac;
          uVar23 = (ulong)((int)uVar23 + 1);
        } while (uVar23 < uVar24);
      }
      else {
        do {
          pbVar17 = (byte *)(lVar13 + uVar23 * 0x18);
          bVar7 = *pbVar17;
          uVar15 = (ulong)(bVar7 >> 1);
          sVar3 = uVar15;
          if ((bVar7 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar17 + 8);
          }
          if (sVar3 == __n) {
            if ((bVar7 & 1) == 0) {
              pbVar18 = pbVar19;
              while (pbVar17 = pbVar17 + 1, *pbVar17 == *pbVar18) {
                uVar15 = uVar15 - 1;
                pbVar18 = pbVar18 + 1;
                if (uVar15 == 0) goto LAB_005eb6ac;
              }
            }
            else {
              iVar10 = memcmp(*(void **)(lVar13 + uVar23 * 0x18 + 0x10),pbVar19,__n);
              if (iVar10 == 0) goto LAB_005eb6ac;
            }
          }
          uVar23 = (ulong)((int)uVar23 + 1);
        } while (uVar23 < uVar24);
      }
      uVar23 = 0xffffffff;
LAB_005eb6ac:
      uVar22 = (uint)uVar23;
      cVar6 = puVar8[0x10];
    }
    if (cVar6 != '\0') {
      uVar22 = (uint)uVar23;
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        lVar13 = param_1 + 0x21;
      }
      else {
        lVar13 = *(long *)(param_1 + 0x30);
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                   ,0x160,1,"[priority_lb %p] state update for priority %d, child %s",lVar20,uVar23,
                   lVar13);
    }
    if (uVar22 == 0xffffffff) {
      return;
    }
    uVar4 = *(uint *)(lVar20 + 0x88);
    if (uVar4 < uVar22) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x40);
    if (uVar5 != 3) {
      if (uVar22 < uVar4) {
        if ((uVar5 | 2) == 2) {
          FUN_005ebb88(lVar20,uVar22);
          return;
        }
        return;
      }
      plVar21 = *(long **)(lVar20 + 0x30);
      local_68 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
      if (local_68 != (undefined8 *)0x0) {
        lVar20 = *plVar1;
        if (lVar20 != 0) {
          plVar2 = (long *)(lVar20 + 0x10);
          do {
            lVar13 = *plVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          lVar16 = *(long *)(lVar20 + 8);
          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar16 + 8),(long *)(lVar20 + 8),
                         lVar13,lVar13 + 1);
          }
        }
        lVar20 = *plVar1;
        *local_68 = &PTR_FUN_0418e8d8;
        local_68[1] = lVar20;
      }
                    /* try { // try from 005eb794 to 005eb7a3 has its CatchHandler @ 005eb8e8 */
      (**(code **)(*plVar21 + 0x18))(plVar21,uVar5,&local_68);
LAB_005eb594:
      puVar11 = local_68;
      local_68 = (undefined8 *)0x0;
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar11)(puVar11);
      FUN_002e2ea0(PTR_LAB_04373088,puVar11);
      return;
    }
    bVar9 = uVar22 == uVar4;
  }
  FUN_005ea530(lVar20,bVar9);
  return;
}


