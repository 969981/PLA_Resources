/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02833858; name: FUN_02833858
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02833858(long *param_1,long *param_2,long *param_3,undefined8 *param_4,long param_5)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  size_t sVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  uint *puVar18;
  ushort uVar19;
  byte *pbVar20;
  ushort *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  long *plVar25;
  undefined1 *puVar26;
  long *local_a0;
  long *local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long *local_68;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02834cac;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar12 = (**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (lVar12 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_02830ec0(lVar12,param_2);
  *(long **)(lVar12 + 8) = param_2;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(undefined8 *)(lVar12 + 0x18) = 0x98;
  *(undefined8 *)(lVar12 + 0x20) = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  *param_1 = lVar12;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar18 = *(uint **)(*(long *)(param_5 + 8) + 0x250);
  local_90 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  piVar1 = (int *)((long)puVar18 + (ulong)*puVar18);
  local_80 = 0x1fffffffffffffff;
  uStack_78 = 0;
  puVar21 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar19 = *puVar21;
  plStack_88 = param_3;
  if (uVar19 < 7) goto LAB_02833c58;
  uVar22 = (ulong)puVar21[3];
  lVar11 = -(long)*piVar1;
  if (((uVar22 != 0) &&
      (puVar18 = (uint *)((long)piVar1 + uVar22),
      puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
     (*puVar18 != 0)) {
    puVar24 = puVar18 + 1;
    do {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02834cac;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
      if (plVar13 == (long *)0x0) goto LAB_02834cb0;
      plVar13[0xb] = 0;
      plVar13[0xe] = 0;
      plVar13[0xf] = 0;
      plVar13[0xc] = 0;
      plVar13[0xd] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar25 = plVar13 + 10;
      *plVar25 = 0;
      FUN_028352d0();
      plVar13[9] = (long)&PTR_LAB_0426e878;
      *plVar13 = (long)&PTR_LAB_0426e838;
      plVar13[1] = (long)param_3;
      plVar13[0xf] = 0;
      plVar13[2] = (long)plVar13;
      plVar13[3] = 0x80;
      plVar13[4] = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar7) {
          *(int *)plVar25 = (int)*plVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar3 = (int *)((long)puVar24 + (ulong)*puVar24);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar22);
        lVar11 = (long)puVar4 + (ulong)*puVar4;
      }
      sVar14 = strlen((char *)(lVar11 + 4));
      bVar5 = *(byte *)(lVar11 + 4);
      puVar23 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar23 = &DAT_cbf29ce484222645;
        pbVar20 = (byte *)(lVar11 + 5);
        do {
          puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar5 != 0);
      }
      plVar13[0xd] = sVar14;
      plVar15 = (long *)plVar13[0xe];
      plVar13[0xe] = 0;
      plVar13[0xb] = (long)puVar23;
      plVar13[0xc] = lVar11 + 4;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      plVar13[0xf] = (long)puVar24 + (ulong)*puVar24;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar7) {
          *(int *)plVar25 = (int)*plVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_68 = plVar13;
      FUN_02834ec8(&local_a0,&local_68);
      if (local_68 != (long *)0x0) {
        plVar15 = local_68 + 10;
        do {
          iVar10 = (int)*plVar15 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *(int *)plVar15 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      do {
        iVar10 = (int)*plVar25 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar7) {
          *(int *)plVar25 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar18 + 1 + *puVar18);
    lVar11 = -(long)*piVar1;
    uVar19 = *(ushort *)((long)piVar1 - (long)*piVar1);
  }
  if (uVar19 < 0xd) {
LAB_02834300:
    if (10 < uVar19) goto LAB_02833c18;
LAB_02834950:
    if (uVar19 < 9) goto LAB_02833c58;
  }
  else {
    uVar22 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0xc);
    if (((uVar22 != 0) &&
        (puVar18 = (uint *)((long)piVar1 + uVar22),
        puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
       (*puVar18 != 0)) {
      puVar24 = puVar18 + 1;
      do {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0))
        {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02834cac;
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
        if (plVar13 == (long *)0x0) goto LAB_02834cb0;
        plVar13[0xb] = 0;
        plVar13[0xe] = 0;
        plVar13[0xf] = 0;
        plVar13[0xc] = 0;
        plVar13[0xd] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[2] = 0;
        plVar13[3] = 0;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar25 = plVar13 + 10;
        *plVar25 = 0;
        FUN_028352d0();
        plVar13[9] = (long)&PTR_LAB_0426e9c8;
        *plVar13 = (long)&PTR_LAB_0426e988;
        plVar13[1] = (long)param_3;
        plVar13[0xf] = 0;
        plVar13[2] = (long)plVar13;
        plVar13[3] = 0x80;
        plVar13[4] = 8;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)((long)puVar24 + (ulong)*puVar24);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar3 + uVar22);
          lVar11 = (long)puVar4 + (ulong)*puVar4;
        }
        sVar14 = strlen((char *)(lVar11 + 4));
        bVar5 = *(byte *)(lVar11 + 4);
        puVar23 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar23 = &DAT_cbf29ce484222645;
          pbVar20 = (byte *)(lVar11 + 5);
          do {
            puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar5 != 0);
        }
        plVar13[0xd] = sVar14;
        plVar15 = (long *)plVar13[0xe];
        plVar13[0xe] = 0;
        plVar13[0xb] = (long)puVar23;
        plVar13[0xc] = lVar11 + 4;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))();
        }
        plVar13[0xf] = (long)puVar24 + (ulong)*puVar24;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_68 = plVar13;
        FUN_02834ec8(&local_a0,&local_68);
        if (local_68 != (long *)0x0) {
          plVar15 = local_68 + 10;
          do {
            iVar10 = (int)*plVar15 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *(int *)plVar15 = iVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        do {
          iVar10 = (int)*plVar25 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar18 + 1 + *puVar18);
      lVar11 = -(long)*piVar1;
      uVar19 = *(ushort *)((long)piVar1 - (long)*piVar1);
      goto LAB_02834300;
    }
LAB_02833c18:
    uVar22 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 10);
    if (((uVar22 != 0) &&
        (puVar18 = (uint *)((long)piVar1 + uVar22),
        puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
       (*puVar18 != 0)) {
      puVar24 = puVar18 + 1;
      do {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0))
        {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02834cac;
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x88,8);
        if (plVar13 == (long *)0x0) goto LAB_02834d60;
        plVar13[0xf] = 0;
        plVar13[0x10] = 0;
        plVar13[0xd] = 0;
        plVar13[0xe] = 0;
        plVar13[0xb] = 0;
        plVar13[0xc] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[2] = 0;
        plVar13[3] = 0;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar25 = plVar13 + 10;
        *plVar25 = 0;
        FUN_028352d0();
        plVar13[9] = (long)&PTR_LAB_0426eb18;
        plVar13[0xf] = 0;
        plVar13[0x10] = 0;
        plVar13[4] = 8;
        *plVar13 = (long)&PTR_LAB_0426ead8;
        plVar13[1] = (long)param_3;
        plVar13[2] = (long)plVar13;
        plVar13[3] = 0x88;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)((long)puVar24 + (ulong)*puVar24);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar3 + uVar22);
          lVar11 = (long)puVar4 + (ulong)*puVar4;
        }
        sVar14 = strlen((char *)(lVar11 + 4));
        bVar5 = *(byte *)(lVar11 + 4);
        puVar23 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar23 = &DAT_cbf29ce484222645;
          pbVar20 = (byte *)(lVar11 + 5);
          do {
            puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar5 != 0);
        }
        plVar13[0xd] = sVar14;
        plVar15 = (long *)plVar13[0xe];
        plVar13[0xe] = 0;
        plVar13[0xb] = (long)puVar23;
        plVar13[0xc] = lVar11 + 4;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))();
        }
        plVar13[0xf] = (long)puVar24 + (ulong)*puVar24;
        plVar13[0x10] = (long)&local_a0;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_68 = plVar13;
        FUN_02834ec8(&local_a0,&local_68);
        if (local_68 != (long *)0x0) {
          plVar15 = local_68 + 10;
          do {
            iVar10 = (int)*plVar15 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *(int *)plVar15 = iVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        do {
          iVar10 = (int)*plVar25 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar18 + 1 + *puVar18);
      lVar11 = -(long)*piVar1;
      uVar19 = *(ushort *)((long)piVar1 - (long)*piVar1);
      goto LAB_02834950;
    }
  }
  uVar22 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 8);
  if (((uVar22 != 0) &&
      (puVar18 = (uint *)((long)piVar1 + uVar22),
      puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
     (*puVar18 != 0)) {
    puVar24 = puVar18 + 1;
    do {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02834cac;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x88,8);
      if (plVar13 == (long *)0x0) goto LAB_02834d60;
      plVar13[0xf] = 0;
      plVar13[0x10] = 0;
      plVar13[0xd] = 0;
      plVar13[0xe] = 0;
      plVar13[0xb] = 0;
      plVar13[0xc] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar25 = plVar13 + 10;
      *plVar25 = 0;
      FUN_028352d0();
      plVar13[9] = (long)&PTR_LAB_0426ea38;
      plVar13[0xf] = 0;
      plVar13[0x10] = 0;
      plVar13[4] = 8;
      *plVar13 = (long)&PTR_LAB_0426e9f8;
      plVar13[1] = (long)param_3;
      plVar13[2] = (long)plVar13;
      plVar13[3] = 0x88;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar7) {
          *(int *)plVar25 = (int)*plVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar3 = (int *)((long)puVar24 + (ulong)*puVar24);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar22);
        lVar11 = (long)puVar4 + (ulong)*puVar4;
      }
      sVar14 = strlen((char *)(lVar11 + 4));
      bVar5 = *(byte *)(lVar11 + 4);
      puVar23 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar23 = &DAT_cbf29ce484222645;
        pbVar20 = (byte *)(lVar11 + 5);
        do {
          puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar5 != 0);
      }
      plVar13[0xd] = sVar14;
      plVar15 = (long *)plVar13[0xe];
      plVar13[0xe] = 0;
      plVar13[0xb] = (long)puVar23;
      plVar13[0xc] = lVar11 + 4;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      plVar13[0xf] = (long)puVar24 + (ulong)*puVar24;
      plVar13[0x10] = (long)&local_a0;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar7) {
          *(int *)plVar25 = (int)*plVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_68 = plVar13;
      FUN_02834ec8(&local_a0,&local_68);
      if (local_68 != (long *)0x0) {
        plVar15 = local_68 + 10;
        do {
          iVar10 = (int)*plVar15 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *(int *)plVar15 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      do {
        iVar10 = (int)*plVar25 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar7) {
          *(int *)plVar25 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar18 + 1 + *puVar18);
    lVar11 = -(long)*piVar1;
    uVar19 = *(ushort *)((long)piVar1 - (long)*piVar1);
  }
  if (0xe < uVar19) {
    uVar22 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0xe);
    if (((uVar22 != 0) &&
        (puVar18 = (uint *)((long)piVar1 + uVar22),
        puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
       (*puVar18 != 0)) {
      puVar24 = puVar18 + 1;
      do {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0))
        {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02834cac;
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
        if (plVar13 == (long *)0x0) goto LAB_02834cb0;
        plVar13[0xb] = 0;
        plVar13[0xe] = 0;
        plVar13[0xf] = 0;
        plVar13[0xc] = 0;
        plVar13[0xd] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[2] = 0;
        plVar13[3] = 0;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar25 = plVar13 + 10;
        *plVar25 = 0;
        FUN_028352d0();
        plVar13[9] = (long)&PTR_LAB_0426e958;
        *plVar13 = (long)&PTR_LAB_0426e918;
        plVar13[1] = (long)param_3;
        plVar13[0xf] = 0;
        plVar13[2] = (long)plVar13;
        plVar13[3] = 0x80;
        plVar13[4] = 8;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)((long)puVar24 + (ulong)*puVar24);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar3 + uVar22);
          lVar11 = (long)puVar4 + (ulong)*puVar4;
        }
        sVar14 = strlen((char *)(lVar11 + 4));
        bVar5 = *(byte *)(lVar11 + 4);
        puVar23 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar23 = &DAT_cbf29ce484222645;
          pbVar20 = (byte *)(lVar11 + 5);
          do {
            puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar5 != 0);
        }
        plVar13[0xd] = sVar14;
        plVar15 = (long *)plVar13[0xe];
        plVar13[0xe] = 0;
        plVar13[0xb] = (long)puVar23;
        plVar13[0xc] = lVar11 + 4;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))();
        }
        plVar13[0xf] = (long)puVar24 + (ulong)*puVar24;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_68 = plVar13;
        FUN_02834ec8(&local_a0,&local_68);
        if (local_68 != (long *)0x0) {
          plVar15 = local_68 + 10;
          do {
            iVar10 = (int)*plVar15 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *(int *)plVar15 = iVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        do {
          iVar10 = (int)*plVar25 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar18 + 1 + *puVar18);
      lVar11 = -(long)*piVar1;
      uVar19 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0x10 < uVar19) {
      puVar23 = &DAT_cbf29ce484222645;
      uVar22 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x10);
      if ((uVar22 != 0) &&
         (puVar18 = (uint *)((long)piVar1 + uVar22),
         piVar3 = (int *)((long)puVar18 + (ulong)*puVar18), piVar3 != (int *)0x0)) {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0))
        {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02834cac:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
        if (plVar13 == (long *)0x0) {
LAB_02834cb0:
          (**(code **)(*param_3 + 0xb8))(param_3);
LAB_02834cc4:
          _DAT_00000078 = 0;
          _DAT_00000070 = 0;
          _DAT_00000068 = 0;
          _DAT_00000060 = 0;
          _DAT_00000058 = 0;
          _DAT_00000050 = 0;
          _DAT_00000048 = 0;
          _DAT_00000040 = 0;
          _DAT_00000038 = 0;
          _DAT_00000030 = 0;
          _DAT_00000028 = 0;
          _DAT_00000020 = 0;
          _DAT_00000018 = 0;
          _DAT_00000010 = 0;
          _DAT_00000008 = 0;
          uRam0000000000000000 = 0;
          FUN_028352d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar13[0xb] = 0;
        plVar13[0xe] = 0;
        plVar13[0xf] = 0;
        plVar13[0xc] = 0;
        plVar13[0xd] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[2] = 0;
        plVar13[3] = 0;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar25 = plVar13 + 10;
        *plVar25 = 0;
        FUN_028352d0();
        plVar13[0xf] = 0;
        *plVar13 = (long)&PTR_LAB_0426ea68;
        plVar13[1] = (long)param_3;
        plVar13[9] = (long)&PTR_LAB_0426eaa8;
        plVar13[2] = (long)plVar13;
        plVar13[3] = 0x80;
        plVar13[4] = 8;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar18 = (uint *)((long)piVar3 + uVar22);
          lVar11 = (long)puVar18 + (ulong)*puVar18;
        }
        sVar14 = strlen((char *)(lVar11 + 4));
        bVar5 = *(byte *)(lVar11 + 4);
        if (bVar5 != 0) {
          pbVar20 = (byte *)(lVar11 + 5);
          do {
            puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar5 != 0);
        }
        plVar13[0xd] = sVar14;
        plVar15 = (long *)plVar13[0xe];
        plVar13[0xe] = 0;
        plVar13[0xb] = (long)puVar23;
        plVar13[0xc] = lVar11 + 4;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))();
        }
        plVar13[0xf] = (long)piVar3;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_68 = plVar13;
        FUN_02834ec8(&local_a0,&local_68);
        if (local_68 != (long *)0x0) {
          plVar15 = local_68 + 10;
          do {
            iVar10 = (int)*plVar15 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *(int *)plVar15 = iVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        do {
          iVar10 = (int)*plVar25 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
LAB_02833c58:
  if ((((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar22 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar22 != 0)) &&
      (puVar18 = (uint *)((long)piVar1 + uVar22),
      puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
     (*puVar18 != 0)) {
    puVar24 = puVar18 + 1;
    do {
      plVar25 = local_98;
      plVar13 = local_a0;
      if (local_a0 != local_98) {
        do {
          puVar23 = *(undefined1 **)(*plVar13 + 0x58);
          plVar15 = *(long **)(*plVar13 + 0x70);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
          piVar1 = (int *)((long)puVar24 + (ulong)*puVar24);
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
            lVar11 = 0;
          }
          else {
            uVar22 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
            lVar11 = 0;
            if (uVar22 != 0) {
              puVar4 = (uint *)((long)piVar1 + uVar22);
              lVar11 = (long)puVar4 + (ulong)*puVar4;
            }
          }
          bVar5 = *(byte *)(lVar11 + 4);
          puVar26 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            pbVar20 = (byte *)(lVar11 + 5);
            do {
              puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar5 != 0);
          }
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
          if (puVar23 == puVar26) goto LAB_02833d54;
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar25);
        plVar13 = plVar25;
LAB_02833d54:
        if (plVar13 != local_98) {
          plVar13 = (long *)*plVar13;
          plVar25 = *(long **)(*param_1 + 0x58);
          if (plVar25 == (long *)0x0) {
            (**(code **)(*plVar13 + 0x28))(plVar13,param_2,0);
          }
          else {
            lVar11 = plVar25[0xb];
            if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
              *(undefined8 *)(lVar11 + 0x10) = uVar16;
            }
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            (**(code **)(*plVar13 + 0x28))(plVar13,param_2,plVar25);
            lVar11 = plVar25[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar10 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar25 + 0x20))(plVar25);
            }
          }
        }
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar18 + 1 + *puVar18);
  }
  lVar11 = *param_1;
  plVar13 = (long *)*param_4;
  if (plVar13 != (long *)0x0) {
    plVar25 = plVar13 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar16 = *(undefined8 *)(lVar11 + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar25 = plVar13 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_68 = plVar13;
  FUN_02832120(uVar16,&local_68,0);
  if (local_68 != (long *)0x0) {
    plVar25 = local_68 + 10;
    do {
      iVar10 = (int)*plVar25 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *(int *)plVar25 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  plVar25 = local_a0;
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      plVar25 = local_a0;
    }
  }
  if (plVar25 != (long *)0x0) {
    plVar13 = plVar25;
    plVar15 = local_98;
    plVar8 = plStack_88;
    while (local_a0 = plVar13, plStack_88 = plVar8, plVar15 != plVar25) {
      plVar15 = plVar15 + -1;
      plVar17 = (long *)*plVar15;
      if (plVar17 != (long *)0x0) {
        plVar2 = plVar17 + 10;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar17 + 0x10))();
          plVar13 = local_a0;
          plVar8 = plStack_88;
        }
      }
    }
    lVar11 = local_90 - (long)plVar13;
    local_98 = plVar25;
    uVar22 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar22 & 1) != 0) {
      lVar12 = tpidr_el0;
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar12 + 0x38d480)) {
        FUN_02bcc824(plVar8,plVar13,lVar11,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar13,lVar11,8);
  }
  return;
LAB_02834d60:
  (**(code **)(*param_3 + 0xb8))(param_3);
  _DAT_00000080 = 0;
  goto LAB_02834cc4;
}


