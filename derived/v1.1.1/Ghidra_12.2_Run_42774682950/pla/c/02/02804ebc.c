/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02804ebc; name: FUN_02804ebc
 */


void FUN_02804ebc(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  char *pcStack_98;
  size_t local_90;
  long *local_88;
  undefined8 local_78;
  
  if (3 < param_2) {
    return;
  }
  plVar18 = *(long **)(param_1 + 0x2c8);
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379690), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar12 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar12;
  lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0x50) + 0x2d10) + 8);
  if (lVar12 == 0) {
    plVar19 = (long *)0x0;
  }
  else {
    plVar20 = *(long **)(lVar12 + 0x18);
    if (plVar20 != (long *)0x0) {
      lVar12 = plVar20[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar19 = (long *)plVar20[0xd];
    if (plVar19 != (long *)0x0) {
      plVar15 = plVar19 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar12 = plVar20[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  lVar12 = param_1 + 0x180;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  *(uint *)(param_1 + (ulong)param_2 * 4 + 0x5b4) = param_3;
  local_a0 = (undefined1 *)0xe2a06d3a0634e918;
  pcStack_98 = "grid_panel";
  local_90 = 10;
  local_88 = (long *)0x0;
  lVar11 = FUN_00d2ec48(lVar12,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  puVar22 = &DAT_cbf29ce484222645;
  if (lVar11 != 0) {
    snprintf((char *)&local_e8,0x40,"button_%02d",param_2);
    local_a0 = &DAT_cbf29ce484222645;
    if ((byte)local_e8 != 0) {
      local_a0 = &DAT_cbf29ce484222645;
      pbVar13 = (byte *)((ulong)&local_e8 | 1);
      bVar4 = (byte)local_e8;
      do {
        local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar4 != 0);
    }
    local_90 = 0x3f;
    local_88 = (long *)0x0;
    local_78 = 0;
    local_a8 = 0;
    pcStack_98 = (char *)&local_e8;
    FUN_0280e56c(lVar11,&local_a0,&local_78,&local_a8);
    if (0 < local_a8._4_4_) {
      iVar9 = local_78._4_4_;
      do {
        if (0 < (int)local_a8) {
          lVar16 = *(long *)(lVar11 + 0x468);
          iVar17 = (int)local_78;
          iVar3 = iVar9;
          piVar2 = (int *)(lVar16 + 0xc);
          if (*(int *)(lVar16 + 0x1c) != 0) {
            iVar17 = iVar9;
            iVar3 = (int)local_78;
            piVar2 = (int *)(lVar16 + 0x10);
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0x40) + 0x20) +
                   (ulong)(uint)(iVar17 + *piVar2 * iVar3) * 0x28;
          *(ulong *)(lVar16 + 0x20) = *(ulong *)(lVar16 + 0x20) | 1;
          iVar17 = (int)local_78;
          while (iVar17 = iVar17 + 1, iVar17 < (int)local_a8 + (int)local_78) {
            lVar16 = *(long *)(lVar11 + 0x468);
            iVar3 = iVar17;
            iVar7 = iVar9;
            piVar2 = (int *)(lVar16 + 0xc);
            if (*(int *)(lVar16 + 0x1c) != 0) {
              iVar3 = iVar9;
              iVar7 = iVar17;
              piVar2 = (int *)(lVar16 + 0x10);
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0x40) + 0x20) +
                     (ulong)(uint)(iVar3 + *piVar2 * iVar7) * 0x28;
            *(ulong *)(lVar16 + 0x20) = *(ulong *)(lVar16 + 0x20) | 1;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_78._4_4_ + local_a8._4_4_);
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_90 = strlen((char *)&local_e8);
  local_a0 = &DAT_cbf29ce484222645;
  if ((byte)local_e8 != 0) {
    local_a0 = &DAT_cbf29ce484222645;
    pbVar13 = (byte *)((ulong)&local_e8 | 1);
    bVar4 = (byte)local_e8;
    do {
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar4 != 0);
  }
  local_88 = (long *)0x0;
  pcStack_98 = (char *)&local_e8;
  plVar20 = (long *)FUN_00d2e944(lVar12,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((plVar20 != (long *)0x0) && (*(char *)((long)plVar20 + 0xa3) != '\x01')) {
    *(undefined1 *)((long)plVar20 + 0xa3) = 1;
    (**(code **)(*plVar20 + 0xa0))(plVar20,1);
  }
  snprintf((char *)&local_e8,0x40,"anime_L_menu_%02d_switch_icon",param_2);
  local_90 = strlen((char *)&local_e8);
  local_a0 = &DAT_cbf29ce484222645;
  if ((byte)local_e8 != 0) {
    uVar21 = (ulong)(uint)(byte)local_e8;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar13 = (byte *)((ulong)&local_e8 | 1);
    do {
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ uVar21) * 0x100000001b3);
      bVar4 = *pbVar13;
      uVar21 = (ulong)bVar4;
      pbVar13 = pbVar13 + 1;
    } while (bVar4 != 0);
  }
  local_88 = (long *)0x0;
  bVar4 = (byte)local_e8;
  pcStack_98 = (char *)&local_e8;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_a0);
    bVar4 = (byte)local_e8;
  }
  local_90 = strlen((char *)&local_e8);
  if (bVar4 != 0) {
    pbVar13 = (byte *)((ulong)&local_e8 | 1);
    do {
      uVar21 = (ulong)bVar4;
      bVar4 = *pbVar13;
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ uVar21) * 0x100000001b3);
      pbVar13 = pbVar13 + 1;
    } while (bVar4 != 0);
  }
  local_88 = (long *)0x0;
  local_a0 = puVar22;
  pcStack_98 = (char *)&local_e8;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = (float)FUN_0283b914(*(long *)(param_1 + 0x2c8),&local_a0);
  }
  if ((float)param_3 <= fVar23) {
    FUN_00d2e2f0(lVar12,&local_e8);
  }
  if ((param_2 == 0) || (2 < param_2 - 1)) goto LAB_0280546c;
  uVar10 = 0x3f800000;
  if (param_2 != 2) {
    uVar10 = 0;
  }
  local_a0 = (undefined1 *)0xb10d7d44b20caece;
  pcStack_98 = "anime_switch_menu";
  local_90 = 0x11;
  local_88 = (long *)0x0;
  uVar24 = 0x40000000;
  if (param_2 != 1) {
    uVar24 = uVar10;
  }
  lVar12 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_a0);
    lVar12 = *(long *)(param_1 + 0x2c8);
  }
  local_a0 = (undefined1 *)0xb10d7d44b20caece;
  pcStack_98 = "anime_switch_menu";
  local_90 = 0x11;
  local_88 = (long *)0x0;
  if (lVar12 == 0) goto LAB_0280546c;
  plVar20 = *(long **)(lVar12 + 0x1a0);
  lVar11 = *(long *)(lVar12 + 0x1a8);
  if ((lVar11 == 0) || (*plVar20 == -0x4ef282bb4df35132)) {
    plVar15 = plVar20;
  }
  else {
    lVar16 = lVar11 * 0x30;
    plVar14 = plVar20;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) goto LAB_02805450;
      plVar1 = plVar14 + 6;
      plVar15 = plVar14 + 6;
      plVar14 = plVar14 + 6;
    } while (*plVar1 != -0x4ef282bb4df35132);
  }
  plVar20 = plVar20 + lVar11 * 6;
  if (plVar15 == plVar20) {
    plVar14 = (long *)0x0;
    if (plVar15 != plVar20) goto LAB_028053d0;
LAB_02805450:
    if (lVar12 == 0) goto LAB_0280546c;
    FUN_0283b1e8(lVar12,&local_a0);
  }
  else {
    plVar14 = plVar15 + 4;
    if (plVar15 == plVar20) goto LAB_02805450;
LAB_028053d0:
    uVar21 = (ulong)*(uint *)(plVar14 + 1);
    if (((*(uint *)(*plVar14 + 0x278) <= *(uint *)(plVar14 + 1)) ||
        (lVar11 = *(long *)(*plVar14 + 600), *(char *)(lVar11 + uVar21 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar11 + uVar21 * 0x48 + 0xb) == '\0')) goto LAB_02805450;
    plVar20 = (long *)(lVar11 + uVar21 * 0x48 + 0x10);
    lVar12 = *plVar20;
    if ((lVar12 != 0) && (*(char *)(lVar11 + uVar21 * 0x48 + 9) == '\0')) {
      fVar23 = *(float *)(lVar12 + 0x20);
      uVar8 = FUN_00227728();
      uVar21 = FUN_00227744(*plVar20);
      if (((float)uVar8 <= fVar23) && ((uVar21 & 1) == 0)) {
        lVar12 = *(long *)(param_1 + 0x2c8);
        goto LAB_02805450;
      }
    }
  }
  FUN_0283b748(uVar24,*(undefined8 *)(param_1 + 0x2c8),&local_a0);
LAB_0280546c:
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      iVar9 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 10;
    do {
      iVar9 = (int)*plVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  return;
}


