/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ffc0c; name: FUN_005ffc0c
 */


/* WARNING: Removing unreachable block (ram,0x00600040) */
/* WARNING: Removing unreachable block (ram,0x0060004c) */
/* WARNING: Removing unreachable block (ram,0x0060001c) */
/* WARNING: Removing unreachable block (ram,0x00600028) */
/* WARNING: Type propagation algorithm not settling */

void FUN_005ffc0c(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  size_t __n;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long *local_a8;
  ulong local_a0;
  undefined8 *******local_98;
  undefined8 ******appppppuStack_90 [2];
  undefined8 *****local_80;
  ulong local_78;
  undefined8 *******local_70;
  undefined8 ******ppppppuStack_68;
  
  puVar4 = PTR_DAT_04375180;
  if (PTR_DAT_04375180[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                 ,0x135,1,
                 "[weighted_target_lb %p] scanning children to determine connectivity state",param_1
                );
  }
  local_78 = 0;
  plVar19 = *(long **)(param_1 + 0x48);
  if (plVar19 == (long *)(param_1 + 0x50)) {
LAB_00600050:
    uVar14 = 3;
    uVar15 = 3;
    cVar2 = puVar4[0x10];
  }
  else {
    do {
      lVar16 = *(long *)(param_1 + 0x38);
      lVar22 = plVar19[7];
      lVar5 = FUN_005ffafc(lVar16 + 0x18,plVar19 + 4);
      if (lVar16 + 0x20 != lVar5) {
        if (puVar4[0x10] == '\0') {
          uVar15 = *(uint *)(lVar22 + 0x50);
        }
        else {
          if ((*(byte *)(plVar19 + 4) & 1) == 0) {
            lVar5 = (long)plVar19 + 0x21;
          }
          else {
            lVar5 = plVar19[6];
          }
                    /* try { // try from 005fff40 to 005fff43 has its CatchHandler @ 00600440 */
          uVar6 = FUN_003d3430(*(undefined4 *)(lVar22 + 0x50));
          uVar1 = *(undefined4 *)(lVar22 + 0x38);
          lVar16 = *(long *)(lVar22 + 0x48);
          if (lVar16 != 0) {
            plVar19 = (long *)(lVar16 + 0x10);
            do {
              lVar7 = *plVar19;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar3) {
                *plVar19 = lVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar9 = *(long *)(lVar16 + 8);
            if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005fff88 to 005fffa7 has its CatchHandler @ 00600418 */
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                           "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),(long *)(lVar16 + 8),
                           lVar7,lVar7 + 1);
            }
          }
          uVar21 = *(undefined8 *)(lVar22 + 0x48);
                    /* try { // try from 005fffac to 005fffd7 has its CatchHandler @ 00600428 */
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                       ,0x14d,1,"[weighted_target_lb %p]   child=%s state=%s weight=%d picker=%p",
                       param_1,lVar5,uVar6,uVar1,uVar21);
          FUN_006009a4(uVar21);
          uVar15 = *(uint *)(lVar22 + 0x50);
        }
        if (3 < uVar15) {
                    /* try { // try from 005fffec to 0060000b has its CatchHandler @ 006003f8 */
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                       ,0x166,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
          abort();
        }
                    /* WARNING: Could not recover jumptable at 0x005ffcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_005ffcc8 + (ulong)(byte)(&DAT_03a3cbbc)[uVar15] * 4))();
        return;
      }
      plVar8 = (long *)plVar19[1];
      if ((long *)plVar19[1] == (long *)0x0) {
        plVar8 = plVar19 + 2;
        plVar10 = (long *)*plVar8;
        if ((long *)*plVar10 != plVar19) {
          do {
            lVar5 = *plVar8;
            plVar8 = (long *)(lVar5 + 0x10);
            plVar10 = (long *)*plVar8;
          } while (*plVar10 != lVar5);
        }
      }
      else {
        do {
          plVar10 = plVar8;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar19 = plVar10;
    } while (plVar10 != (long *)(param_1 + 0x50));
    if (local_78 < 2) goto LAB_00600050;
    uVar14 = 2;
    uVar15 = 2;
    cVar2 = puVar4[0x10];
  }
  if (cVar2 != '\0') {
                    /* try { // try from 006003c8 to 006003f3 has its CatchHandler @ 00600408 */
    uVar6 = FUN_003d3430(uVar14);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                 ,0x175,1,"[weighted_target_lb %p] connectivity changed to %s",param_1,uVar6);
    uVar15 = uVar14;
  }
  if (uVar15 < 2) {
    plVar19 = (long *)(param_1 + 0x10);
    do {
      lVar5 = *plVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar16 = *(long *)(param_1 + 8);
    if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
                    /* try { // try from 00600094 to 006000cb has its CatchHandler @ 00600450 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar16 + 8),(long *)(param_1 + 8)
                   ,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                   ,0x180,lVar5,lVar5 + 1,"QueuePicker");
    }
    local_80 = (undefined8 *****)param_1;
    plVar19 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar19 != (long *)0x0) {
      local_80 = (undefined8 *****)0x0;
      *plVar19 = (long)(PTR_DAT_04374cb0 + 0x10);
      plVar19[1] = param_1;
      local_a0 = 0;
      *(undefined1 *)(plVar19 + 2) = 0;
      FUN_00546ca4(&local_a0);
    }
    FUN_00546ca4(appppppuStack_90 + 2);
  }
  else if (uVar15 == 2) {
    plVar19 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar20 = local_78;
    if (plVar19 != (long *)0x0) {
      local_a0 = 0;
      if ((local_78 & 1) == 0) {
        uVar18 = local_78 >> 1;
        if (uVar18 != 0) {
          pppppppuVar11 = &local_70;
          ppppppuVar12 = appppppuStack_90;
          do {
            *(undefined4 *)(ppppppuVar12 + -1) = *(undefined4 *)pppppppuVar11;
            ppppppuVar13 = pppppppuVar11[1];
            *ppppppuVar12 = (undefined8 *****)0x0;
            uVar18 = uVar18 - 1;
            pppppppuVar11[1] = (undefined8 ******)0x0;
            *ppppppuVar12 = ppppppuVar13;
            pppppppuVar11 = pppppppuVar11 + 2;
            ppppppuVar12 = ppppppuVar12 + 2;
          } while (uVar18 != 0);
        }
        local_a0 = uVar20 & 0xfffffffffffffffe;
        *plVar19 = (long)&PTR_LAB_0418f728;
        plVar19[1] = 0;
        uVar20 = uVar20 >> 1;
        if (uVar20 == 0) {
          plVar19[1] = local_a0;
          __n = 0;
        }
        else {
          pppppppuVar11 = &local_98;
          plVar8 = plVar19 + 3;
          uVar18 = uVar20;
          do {
            uVar1 = *(undefined4 *)pppppppuVar11;
            *plVar8 = 0;
            *(undefined4 *)(plVar8 + -1) = uVar1;
            uVar18 = uVar18 - 1;
            *plVar8 = (long)pppppppuVar11[1];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11 = pppppppuVar11 + 2;
            plVar8 = plVar8 + 2;
          } while (uVar18 != 0);
          plVar19[1] = local_a0;
          ppppppuVar12 = appppppuStack_90 + uVar20 * 2 + -2;
          uVar18 = uVar20;
          do {
            uVar18 = uVar18 - 1;
            FUN_006009a4(*ppppppuVar12);
            ppppppuVar12 = ppppppuVar12 + -2;
          } while (uVar18 != 0);
          __n = uVar20 << 4;
        }
      }
      else {
        appppppuStack_90[0] = ppppppuStack_68;
        local_98 = local_70;
        local_78 = 0;
        *plVar19 = (long)&PTR_LAB_0418f728;
        plVar19[1] = 0;
        __n = 0;
        plVar19[1] = uVar20 | 1;
        plVar19[3] = (long)ppppppuStack_68;
        plVar19[2] = (long)local_70;
        local_a0 = 0;
      }
      memset(&local_98,0xab,__n);
    }
  }
  else {
                    /* try { // try from 006001b8 to 006001e3 has its CatchHandler @ 00600460 */
    FUN_002f2c60(&local_a0,"weighted_target: all children report state TRANSIENT_FAILURE");
    lVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                         ,0x185,&local_a0,0,0);
    plVar19 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (plVar19 != (long *)0x0) {
      *plVar19 = (long)(PTR_DAT_04374b68 + 0x10);
      plVar19[1] = lVar5;
    }
  }
                    /* try { // try from 006002d4 to 006002df has its CatchHandler @ 00600480 */
  local_a8 = plVar19;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),uVar15,&local_a8);
  plVar19 = local_a8;
  local_a8 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    (**(code **)*plVar19)(plVar19);
    FUN_002e2ea0(PTR_LAB_04373088,plVar19);
  }
  uVar20 = local_78;
  if ((local_78 & 1) == 0) {
    pppppppuVar11 = &local_70;
  }
  else {
    pppppppuVar11 = local_70;
    if (local_70 == (undefined8 *******)0x0) {
      local_70 = (undefined8 *******)0x0;
      goto LAB_00600378;
    }
  }
  if (local_78 >> 1 != 0) {
    uVar18 = local_78 >> 1;
    pppppppuVar17 = pppppppuVar11 + uVar18 * 2 + -1;
    do {
      uVar18 = uVar18 - 1;
      FUN_006009a4(*pppppppuVar17);
      pppppppuVar17 = pppppppuVar17 + -2;
    } while (uVar18 != 0);
  }
  memset(pppppppuVar11,0xab,(uVar20 >> 1) << 4);
  if ((local_78 & 1) == 0) {
    return;
  }
LAB_00600378:
  FUN_002e2ea0(PTR_LAB_04373088,local_70);
  return;
}


