/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f58598; name: FUN_01f58598
 */


void FUN_01f58598(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 *local_108;
  undefined8 *local_f8;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 uStack_c0;
  long *local_b8 [2];
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98 [2];
  undefined1 local_88;
  long *local_78;
  undefined1 *local_70 [2];
  
  puVar5 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  plVar24 = *(long **)(lVar13 + 0x300);
  if (plVar24 == (long *)0x0) {
    return;
  }
  lVar13 = plVar24[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f596d0;
  if (*(long *)(lVar13 + 0x10) == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
    *(undefined8 *)(lVar13 + 0x10) = uVar11;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar14 = (long *)(param_1 + 0xa0);
  if (*plVar14 == 0) {
    local_78 = (long *)0x0;
    goto LAB_01f58634;
  }
  FUN_01934508(&local_78);
  if (local_78 == (long *)0x0) goto LAB_01f58634;
  lVar13 = *(long *)(param_1 + 0x68);
  if (plVar24[0x40] == lVar13) {
    plVar26 = plVar24 + 0x40;
LAB_01f58708:
    lVar25 = plVar26[0x16a];
    lVar18 = lVar25;
    if (lVar25 < 0x22) {
      lVar18 = 0x21;
    }
    *(long *)(param_1 + 0x90) = lVar18 + -0x21;
    if (plVar24[0x40] == lVar13) {
      lVar13 = 0;
LAB_01f58780:
      plVar24[lVar13 * 0x170 + 0x1aa] = lVar18 + -0x21;
    }
    else {
      if (plVar24[0x1b0] == lVar13) {
        lVar13 = 1;
        goto LAB_01f58780;
      }
      if (plVar24[800] == lVar13) {
        lVar13 = 2;
        goto LAB_01f58780;
      }
      if (plVar24[0x490] == lVar13) {
        lVar13 = 3;
        goto LAB_01f58780;
      }
      if (plVar24[0x600] == lVar13) {
        lVar13 = 4;
        goto LAB_01f58780;
      }
    }
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    lVar13 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar13;
    puVar17 = *(uint **)(*(long *)(*(long *)(lVar13 + 0x78) + 0x5b0) + 0x250);
    piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
    uVar19 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    puVar15 = (uint *)((long)piVar1 + uVar19);
    uVar20 = (ulong)*puVar15;
    puVar15 = (uint *)((long)puVar15 + ((long)(char)plVar26[0x16b] & 0xffffffffU) * 4 + uVar20 + 4);
    uVar23 = (ulong)*puVar15;
    piVar1 = (int *)((long)puVar15 + uVar23);
    uVar22 = (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1));
    puVar15 = (uint *)((long)piVar1 + uVar22);
    uVar12 = (ulong)*puVar15;
    uVar16 = (ulong)*(uint *)((long)puVar15 + uVar12);
    lVar13 = uVar16 << 2;
    if (uVar16 != 0) {
      lVar18 = (long)puVar17 +
               uVar23 + ((long)(char)plVar26[0x16b] & 0xffffffffU) * 4 + uVar20 + uVar19 +
               (ulong)*puVar17 + 8;
LAB_01f5884c:
      lVar21 = (long)*(int *)(lVar18 + uVar22 + uVar12) * 1000;
      if ((lVar25 - *(long *)(param_1 + 0x98) <= lVar21) ||
         (lVar21 < *(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x98))) goto LAB_01f58840;
      uVar12 = (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1));
      iVar2 = *(int *)(lVar18 + uVar12 + *(uint *)((long)piVar1 + uVar12));
      iVar10 = *(int *)(param_1 + 0x8c);
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379690), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar13 = *(long *)PTR_DAT_04379698;
      *(long *)PTR_DAT_043796a0 = lVar13;
      plVar26 = *(long **)(*(long *)(lVar13 + 0x50) + 0x30);
      if (plVar26 == (long *)0x0) goto LAB_01f588ec;
      lVar13 = plVar26[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_01f588ec:
        local_120 = 0;
        local_140 = (undefined8 *)CONCAT71(local_140._1_7_,0xe);
        local_130 = 0;
        local_128 = (undefined8 *)0x0;
        local_140 = (undefined8 *)CONCAT44(iVar10 + iVar2,(undefined4)local_140);
        local_138 = (undefined8 *)((ulong)local_138 & 0xffffffff00000000);
        FUN_01468dd0(plVar26,&local_140);
        if (plVar26 == (long *)0x0) goto LAB_01f58930;
        lVar13 = plVar26[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 != 0) goto LAB_01f58930;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar26 + 0x20))(plVar26);
        cVar3 = *(char *)(param_1 + 0x71);
        goto joined_r0x01f59010;
      }
      goto LAB_01f596d0;
    }
LAB_01f58930:
    cVar3 = *(char *)(param_1 + 0x71);
joined_r0x01f59010:
    if (cVar3 == '\0') {
      if (*(long *)(param_1 + 0x90) <= *(long *)(param_1 + 0x98)) {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        local_d8 = (long *)0x0;
        uStack_d0 = 0;
        FUN_01933b30(&local_d8,plVar14);
        local_c8 = (long *)0x0;
        uStack_c0 = 0;
        FUN_01933da0(&local_c8,param_1 + 0xb0);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        plVar26 = *(long **)(lVar13 + 0x300);
        if (plVar26 != (long *)0x0) {
          lVar13 = plVar26[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f596d0;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_0168485c(local_b8,plVar26);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        plVar27 = *(long **)(lVar13 + 0x228);
        if (plVar27 != (long *)0x0) {
          lVar13 = plVar27[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f596d0;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_140 = (undefined8 *)0x0;
        local_138 = (undefined8 *)0x0;
        FUN_008802f0(&local_140,plVar27 + 0xb);
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_01685098(&local_a8,&local_140);
        puVar8 = local_140;
        if (local_140 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_140 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_140[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        plVar28 = *(long **)(lVar13 + 0x298);
        if (plVar28 == (long *)0x0) {
          FUN_0168493c(local_98,0);
          local_88 = 0;
        }
        else {
          lVar13 = plVar28[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f596d0;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_0168493c(local_98,plVar28);
          local_88 = 0;
          lVar13 = plVar28[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar28 + 0x20))(plVar28);
          }
        }
        if (plVar27 != (long *)0x0) {
          lVar13 = plVar27[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar27 + 0x20))(plVar27);
          }
        }
        if (plVar26 != (long *)0x0) {
          lVar13 = plVar26[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar26 + 0x20))(plVar26);
          }
        }
        FUN_0192d1e0(&local_140,&local_d8);
        local_70[0] = &DAT_cbf29ce484222645;
        FUN_019310cc(&local_140,local_70);
        puVar8 = local_f8;
        local_140 = (undefined8 *)(PTR_DAT_04380730 + 0x10);
        if (local_f8 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_f8 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_f8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        puVar8 = local_108;
        if (local_108 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_108 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_108[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        puVar8 = local_118;
        if (local_118 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_118 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_118[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        puVar8 = local_128;
        if (local_128 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_128 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_128[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        puVar8 = local_138;
        if (local_138 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_138 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_138[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        plVar26 = local_98[0];
        if (local_98[0] != (long *)0x0) {
          plVar27 = local_98[0] + 1;
          do {
            iVar10 = (int)*plVar27 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar4) {
              *(int *)plVar27 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_98[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar26;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar26 = local_a8;
        if (local_a8 != (long *)0x0) {
          plVar27 = local_a8 + 1;
          do {
            iVar10 = (int)*plVar27 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar4) {
              *(int *)plVar27 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_a8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar26;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar26 = local_b8[0];
        if (local_b8[0] != (long *)0x0) {
          plVar27 = local_b8[0] + 1;
          do {
            iVar10 = (int)*plVar27 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar4) {
              *(int *)plVar27 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_b8[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar26;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar26 = local_c8;
        if (local_c8 != (long *)0x0) {
          plVar27 = local_c8 + 1;
          do {
            iVar10 = (int)*plVar27 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar4) {
              *(int *)plVar27 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_c8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar26;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar26 = local_d8;
        if (local_d8 != (long *)0x0) {
          plVar27 = local_d8 + 1;
          do {
            iVar10 = (int)*plVar27 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar4) {
              *(int *)plVar27 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_d8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar26;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        if (*(char *)(param_1 + 0x71) != '\0') goto LAB_01f58938;
      }
    }
    else {
LAB_01f58938:
      if (*(long *)(param_1 + 0x90) < 1) {
        *(undefined1 *)(param_1 + 0x71) = 0;
        local_d8 = (long *)0x0;
        uStack_d0 = 0;
        FUN_01933b30(&local_d8,plVar14);
        local_c8 = (long *)0x0;
        uStack_c0 = 0;
        FUN_01933da0(&local_c8,param_1 + 0xb0);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        plVar14 = *(long **)(lVar13 + 0x300);
        if (plVar14 != (long *)0x0) {
          lVar13 = plVar14[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f596d0;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_0168485c(local_b8,plVar14);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        plVar26 = *(long **)(lVar13 + 0x228);
        if (plVar26 != (long *)0x0) {
          lVar13 = plVar26[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f596d0;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_140 = (undefined8 *)0x0;
        local_138 = (undefined8 *)0x0;
        FUN_008802f0(&local_140,plVar26 + 0xb);
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_01685098(&local_a8,&local_140);
        puVar8 = local_140;
        if (local_140 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_140 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_140[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        plVar27 = *(long **)(lVar13 + 0x298);
        if (plVar27 == (long *)0x0) {
          FUN_0168493c(local_98,0);
          local_88 = 0;
        }
        else {
          lVar13 = plVar27[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01f596d0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_0168493c(local_98,plVar27);
          local_88 = 0;
          lVar13 = plVar27[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar27 + 0x20))(plVar27);
          }
        }
        if (plVar26 != (long *)0x0) {
          lVar13 = plVar26[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar26 + 0x20))(plVar26);
          }
        }
        if (plVar14 != (long *)0x0) {
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        FUN_0192d1e0(&local_140,&local_d8);
        local_70[0] = &DAT_cbf29ce484222645;
        FUN_01930d68(&local_140,local_70);
        local_140 = (undefined8 *)(PTR_DAT_04380730 + 0x10);
        if (local_f8 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_f8 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_f8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*local_f8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        if (local_108 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_108 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_108[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*local_108;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        if (local_118 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_118 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_118[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*local_118;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        puVar8 = local_128;
        if (local_128 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_128 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_128[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        puVar8 = local_138;
        if (local_138 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_138 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_138[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_70[0] = (undefined1 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_70);
          }
        }
        if (local_98[0] != (long *)0x0) {
          plVar14 = local_98[0] + 1;
          do {
            iVar10 = (int)*plVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_98[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*local_98[0];
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar14 = local_a8;
        if (local_a8 != (long *)0x0) {
          plVar26 = local_a8 + 1;
          do {
            iVar10 = (int)*plVar26 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar4) {
              *(int *)plVar26 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_a8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        if (local_b8[0] != (long *)0x0) {
          plVar14 = local_b8[0] + 1;
          do {
            iVar10 = (int)*plVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_b8[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*local_b8[0];
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar14 = local_c8;
        if (local_c8 != (long *)0x0) {
          plVar26 = local_c8 + 1;
          do {
            iVar10 = (int)*plVar26 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar4) {
              *(int *)plVar26 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_c8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar14 = local_d8;
        if (local_d8 != (long *)0x0) {
          plVar26 = local_d8 + 1;
          do {
            iVar10 = (int)*plVar26 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar4) {
              *(int *)plVar26 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_d8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
      }
    }
  }
  else {
    if (plVar24[0x1b0] == lVar13) {
      plVar26 = plVar24 + 0x1b0;
      goto LAB_01f58708;
    }
    if (plVar24[800] == lVar13) {
      plVar26 = plVar24 + 800;
      goto LAB_01f58708;
    }
    if (plVar24[0x490] == lVar13) {
      plVar26 = plVar24 + 0x490;
      goto LAB_01f58708;
    }
    if (plVar24[0x600] == lVar13) {
      plVar26 = plVar24 + 0x600;
      goto LAB_01f58708;
    }
  }
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
LAB_01f58634:
  lVar13 = plVar24[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  return;
LAB_01f58840:
  lVar18 = lVar18 + 4;
  lVar13 = lVar13 + -4;
  if (lVar13 == 0) goto LAB_01f58930;
  goto LAB_01f5884c;
}


