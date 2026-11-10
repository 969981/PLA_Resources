/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c2828; name: FUN_019c2828
 */


undefined1
FUN_019c2828(long *param_1,undefined8 param_2,ulong param_3,undefined1 *param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined4 uVar18;
  ushort *puVar19;
  ulong *puVar20;
  long lVar21;
  long *plVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 uVar28;
  long *plVar29;
  long *local_f8;
  ulong local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if (*param_1 == 0) {
    return 0;
  }
  FUN_00ca554c(&local_f8);
  if (local_f8 == (long *)0x0) {
    return 0;
  }
  lVar13 = FUN_018b3dd0(local_f8,param_2);
  puVar15 = *(uint **)(*(long *)(lVar13 + 8) + 0x250);
  piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar15 = puVar2 + 1;
  uVar16 = (ulong)*puVar2;
  if (uVar16 != 0) {
    puVar2 = puVar15 + uVar16;
    lVar13 = tpidr_el0;
    do {
      piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar19 = (ushort *)((long)piVar1 - (long)*piVar1);
      if ((*puVar19 < 5) || ((ulong)puVar19[2] == 0)) {
        lVar21 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[2]);
        lVar21 = (long)puVar3 + (ulong)*puVar3;
      }
      bVar4 = *(byte *)(lVar21 + 4);
      puVar24 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar24 = &DAT_cbf29ce484222645;
        pbVar23 = (byte *)(lVar21 + 5);
        do {
          puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar4 != 0);
      }
      if (puVar24 == param_4) {
        if ((*puVar19 < 0xd) || ((ulong)puVar19[6] == 0)) {
          local_f0[0] = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[6]);
          local_f0[0] = (long)puVar3 + (ulong)*puVar3;
        }
        FUN_019c95e0(&local_88,param_5,local_f0);
        (**(code **)(*local_88 + 0x18))(local_f0);
        plVar29 = local_88;
        bVar6 = (char)local_f0[0] != '\0';
        if (bVar6) {
          param_6[1] = local_c8;
          *param_6 = local_d0;
          *param_7 = param_4;
          local_f0[0] = local_f0[0] & 0xffffffffffffff00;
        }
        local_88 = (long *)0x0;
        if (plVar29 != (long *)0x0) {
          FUN_02bcbe58(local_f0,0);
          (**(code **)(*plVar29 + 8))(plVar29);
          uVar11 = local_70;
          uVar14 = local_78;
          plVar22 = local_80;
          uVar16 = (**(code **)(*local_80 + 0xc0))(local_80);
          if ((uVar16 & 1) == 0) {
LAB_019c2a70:
            (**(code **)(*plVar22 + 0x18))(plVar22,plVar29,uVar14,uVar11);
          }
          else {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_019c2a70;
            FUN_02bcc824(plVar22,plVar29,uVar14,uVar11);
          }
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar12 = *(int *)(lVar13 + 0x38d480) + -1;
          *(int *)(lVar13 + 0x38d480) = iVar12;
          if (iVar12 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar13 + 0x38d484) = 0;
            if (!bVar6) goto LAB_019c295c;
            goto LAB_019c2b24;
          }
        }
        if (bVar6) goto LAB_019c2b24;
      }
LAB_019c295c:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  lVar13 = FUN_018b4864(local_f8,param_2);
  puVar15 = *(uint **)(*(long *)(lVar13 + 8) + 0x250);
  piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar15 = puVar2 + 1;
  uVar16 = (ulong)*puVar2;
  if (uVar16 != 0) {
    puVar2 = puVar15 + uVar16;
    do {
      piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar19 = (ushort *)((long)piVar1 - (long)*piVar1);
      if ((*puVar19 < 5) || ((ulong)puVar19[2] == 0)) {
        lVar13 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[2]);
        lVar13 = (long)puVar3 + (ulong)*puVar3;
      }
      bVar4 = *(byte *)(lVar13 + 4);
      puVar24 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar24 = &DAT_cbf29ce484222645;
        pbVar23 = (byte *)(lVar13 + 5);
        do {
          puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar4 != 0);
      }
      if (puVar24 == param_4) {
        if ((*puVar19 < 0xd) || ((ulong)puVar19[6] == 0)) {
          local_f0[0] = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[6]);
          local_f0[0] = (long)puVar3 + (ulong)*puVar3;
        }
        FUN_019c95e0(&local_88,param_5,local_f0);
        (**(code **)(*local_88 + 0x18))(local_f0);
        plVar29 = local_88;
        bVar6 = (char)local_f0[0] != '\0';
        if (bVar6) {
          param_6[1] = local_c8;
          *param_6 = local_d0;
          *param_7 = param_4;
          local_f0[0] = local_f0[0] & 0xffffffffffffff00;
        }
        local_88 = (long *)0x0;
        if (plVar29 != (long *)0x0) {
          FUN_02bcbe58(local_f0,0);
          (**(code **)(*plVar29 + 8))();
          uVar11 = local_70;
          uVar14 = local_78;
          plVar22 = local_80;
          uVar16 = (**(code **)(*local_80 + 0xc0))();
          if ((uVar16 & 1) == 0) {
LAB_019c3430:
            (**(code **)(*plVar22 + 0x18))(plVar22,plVar29,uVar14,uVar11);
          }
          else {
            lVar13 = tpidr_el0;
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_019c3430;
            FUN_02bcc824(plVar22,plVar29,uVar14,uVar11);
          }
          lVar13 = tpidr_el0;
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar12 = *(int *)(lVar13 + 0x38d480) + -1;
          *(int *)(lVar13 + 0x38d480) = iVar12;
          if (iVar12 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar13 + 0x38d484) = 0;
          }
        }
        if (bVar6) goto LAB_019c2b24;
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  lVar13 = FUN_018b6754(local_f8,param_2);
  puVar15 = *(uint **)(*(long *)(lVar13 + 8) + 0x250);
  piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar15 = puVar2 + 1;
  uVar16 = (ulong)*puVar2;
  if (uVar16 != 0) {
    puVar2 = puVar15 + uVar16;
    lVar13 = tpidr_el0;
    do {
      piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar19 = (ushort *)((long)piVar1 - (long)*piVar1);
      if ((*puVar19 < 5) || ((ulong)puVar19[2] == 0)) {
        lVar21 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[2]);
        lVar21 = (long)puVar3 + (ulong)*puVar3;
      }
      bVar4 = *(byte *)(lVar21 + 4);
      puVar24 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar24 = &DAT_cbf29ce484222645;
        pbVar23 = (byte *)(lVar21 + 5);
        do {
          puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar4 != 0);
      }
      if (puVar24 == param_4) {
        if ((*puVar19 < 9) || ((ulong)puVar19[4] == 0)) {
          local_f0[0] = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[4]);
          local_f0[0] = (long)puVar3 + (ulong)*puVar3;
        }
        FUN_019c95e0(&local_88,param_5,local_f0);
        (**(code **)(*local_88 + 0x18))(local_f0);
        plVar29 = local_88;
        bVar6 = (char)local_f0[0] != '\0';
        if (bVar6) {
          param_6[1] = local_c8;
          *param_6 = local_d0;
          *param_7 = param_4;
          local_f0[0] = local_f0[0] & 0xffffffffffffff00;
        }
        local_88 = (long *)0x0;
        if (plVar29 != (long *)0x0) {
          FUN_02bcbe58(local_f0,0);
          (**(code **)(*plVar29 + 8))(plVar29);
          uVar11 = local_70;
          uVar14 = local_78;
          plVar22 = local_80;
          uVar16 = (**(code **)(*local_80 + 0xc0))(local_80);
          if ((uVar16 & 1) == 0) {
LAB_019c2df8:
            (**(code **)(*plVar22 + 0x18))(plVar22,plVar29,uVar14,uVar11);
          }
          else {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_019c2df8;
            FUN_02bcc824(plVar22,plVar29,uVar14,uVar11);
          }
          lVar21 = tpidr_el0;
          if (*(char *)(lVar21 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar21 + 0x38d488) = 1;
            *(undefined8 *)(lVar21 + 0x38d478) = 0;
            *(undefined8 *)(lVar21 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar12 = *(int *)(lVar21 + 0x38d480) + -1;
          *(int *)(lVar21 + 0x38d480) = iVar12;
          if (iVar12 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar21 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar21 + 0x38d488) = 1;
              *(undefined8 *)(lVar21 + 0x38d478) = 0;
              *(undefined8 *)(lVar21 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar21 + 0x38d484) = 0;
          }
        }
        if (bVar6) {
          if (param_8 == (undefined4 *)0x0) goto joined_r0x019c2b3c;
          uVar18 = 0x15;
          goto LAB_019c2ec4;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  lVar13 = FUN_018b5e0c(local_f8,param_2);
  puVar15 = *(uint **)(*(long *)(lVar13 + 8) + 0x250);
  piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar15 = puVar2 + 1;
  uVar16 = (ulong)*puVar2;
  if (uVar16 != 0) {
    puVar2 = puVar15 + uVar16;
    lVar13 = tpidr_el0;
    do {
      piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar19 = (ushort *)((long)piVar1 - (long)*piVar1);
      if ((*puVar19 < 5) || ((ulong)puVar19[2] == 0)) {
        lVar21 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[2]);
        lVar21 = (long)puVar3 + (ulong)*puVar3;
      }
      bVar4 = *(byte *)(lVar21 + 4);
      puVar24 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar24 = &DAT_cbf29ce484222645;
        pbVar23 = (byte *)(lVar21 + 5);
        do {
          puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar4 != 0);
      }
      if (puVar24 == param_4) {
        if ((*puVar19 < 9) || ((ulong)puVar19[4] == 0)) {
          local_f0[0] = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar19[4]);
          local_f0[0] = (long)puVar3 + (ulong)*puVar3;
        }
        FUN_019c95e0(&local_88,param_5,local_f0);
        (**(code **)(*local_88 + 0x18))(local_f0);
        plVar29 = local_88;
        bVar6 = (char)local_f0[0] != '\0';
        if (bVar6) {
          param_6[1] = local_c8;
          *param_6 = local_d0;
          *param_7 = param_4;
          local_f0[0] = local_f0[0] & 0xffffffffffffff00;
        }
        local_88 = (long *)0x0;
        if (plVar29 != (long *)0x0) {
          FUN_02bcbe58(local_f0,0);
          (**(code **)(*plVar29 + 8))(plVar29);
          uVar11 = local_70;
          uVar14 = local_78;
          plVar22 = local_80;
          uVar16 = (**(code **)(*local_80 + 0xc0))(local_80);
          if ((uVar16 & 1) == 0) {
LAB_019c304c:
            (**(code **)(*plVar22 + 0x18))(plVar22,plVar29,uVar14,uVar11);
          }
          else {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_019c304c;
            FUN_02bcc824(plVar22,plVar29,uVar14,uVar11);
          }
          lVar21 = tpidr_el0;
          if (*(char *)(lVar21 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar21 + 0x38d488) = 1;
            *(undefined8 *)(lVar21 + 0x38d478) = 0;
            *(undefined8 *)(lVar21 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar12 = *(int *)(lVar21 + 0x38d480) + -1;
          *(int *)(lVar21 + 0x38d480) = iVar12;
          if (iVar12 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar21 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar21 + 0x38d488) = 1;
              *(undefined8 *)(lVar21 + 0x38d478) = 0;
              *(undefined8 *)(lVar21 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar21 + 0x38d484) = 0;
          }
        }
        if (bVar6) {
          if (param_8 != (undefined4 *)0x0) {
            uVar18 = 0x16;
LAB_019c2ec4:
            *param_8 = uVar18;
          }
          goto joined_r0x019c2b3c;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar29 = *(long **)(lVar13 + 200);
  if (plVar29 != (long *)0x0) {
    lVar13 = plVar29[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar8 = PTR_DAT_0437a780;
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar10 = PTR_DAT_0437a790;
  puVar9 = PTR_DAT_0437a788;
  lVar13 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar13;
  lVar13 = *(long *)(*(long *)(lVar13 + 0x78) + 0x70);
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar21 = *(long *)puVar9;
  *(long *)puVar10 = lVar21;
  puVar17 = *(ulong **)(lVar13 + 0x2b0);
  puVar20 = *(ulong **)(lVar13 + 0x2b8);
  if (puVar17 != puVar20) {
    lVar13 = *(long *)(*(long *)(lVar21 + 0x78) + 0x70);
    uVar16 = *(ulong *)(lVar13 + 0x1b0);
    if (uVar16 == 0) {
LAB_019c3acc:
                    /* WARNING: Subroutine does not return */
      FUN_019c8c40();
    }
    lVar13 = *(long *)(lVar13 + 0x1a8);
    uVar25 = uVar16 - 1;
    if ((uVar16 & uVar25) == 0) {
      do {
        uVar16 = *puVar17;
        plVar22 = *(long **)(lVar13 + (uVar16 & uVar25) * 8);
        if (plVar22 == (long *)0x0) goto LAB_019c3acc;
        do {
          while( true ) {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_019c3acc;
            if (plVar22[1] == uVar16) break;
            if ((plVar22[1] & uVar25) != (uVar16 & uVar25)) goto LAB_019c3acc;
          }
        } while (plVar22[2] != uVar16);
        if ((uVar16 == param_3) && ((undefined1 *)plVar22[0x18] == param_4)) goto LAB_019c3844;
        puVar17 = puVar17 + 4;
      } while (puVar17 != puVar20);
    }
    else {
      do {
        uVar25 = *puVar17;
        if (uVar25 < uVar16) {
          plVar22 = *(long **)(lVar13 + uVar25 * 8);
          uVar26 = uVar25;
        }
        else {
          uVar26 = 0;
          if (uVar16 != 0) {
            uVar26 = uVar25 / uVar16;
          }
          uVar26 = uVar25 - uVar26 * uVar16;
          plVar22 = *(long **)(lVar13 + uVar26 * 8);
        }
        if (plVar22 == (long *)0x0) goto LAB_019c3acc;
        do {
          while( true ) {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_019c3acc;
            uVar27 = plVar22[1];
            if (uVar27 == uVar25) break;
            if (uVar16 <= uVar27) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar27 / uVar16;
              }
              uVar27 = uVar27 - uVar7 * uVar16;
            }
            if (uVar27 != uVar26) goto LAB_019c3acc;
          }
        } while (plVar22[2] != uVar25);
        if ((uVar25 == param_3) && ((undefined1 *)plVar22[0x18] == param_4)) goto LAB_019c3844;
        puVar17 = puVar17 + 4;
      } while (puVar17 != puVar20);
    }
  }
  uVar28 = 0;
joined_r0x019c3878:
  if (plVar29 != (long *)0x0) {
    lVar13 = plVar29[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))(plVar29);
    }
  }
  if (local_f8 != (long *)0x0) {
LAB_019c2b40:
    lVar13 = local_f8[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  return uVar28;
LAB_019c2b24:
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 1;
  }
joined_r0x019c2b3c:
  uVar28 = 1;
  if (local_f8 == (long *)0x0) {
    return 1;
  }
  goto LAB_019c2b40;
LAB_019c3844:
  param_6[1] = *(undefined8 *)((long)plVar22 + 0x68);
  *param_6 = *(undefined8 *)((long)plVar22 + 0x60);
  *param_7 = param_4;
  if (param_8 == (undefined4 *)0x0) {
    uVar28 = 1;
  }
  else {
    *param_8 = 0x17;
    uVar28 = 1;
  }
  goto joined_r0x019c3878;
}


