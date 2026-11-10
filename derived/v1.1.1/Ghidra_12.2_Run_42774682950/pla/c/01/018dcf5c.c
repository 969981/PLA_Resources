/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018dcf5c; name: FUN_018dcf5c
 */


int FUN_018dcf5c(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_78;
  long *local_70 [2];
  
  puVar19 = &local_140;
  puVar6 = &local_140;
  if (*(long *)(param_1 + 0x5c0) == 0) {
    bVar7 = *(ulong *)(param_1 + 0x7c0) < 10;
  }
  else {
    bVar7 = false;
  }
  if ((param_2 & 1) == 0) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
    FUN_0286b878(local_70);
    iVar8 = FUN_01b3aed4(param_1,1,0);
    uStack_128 = *(undefined8 *)(param_1 + 8);
    local_110 = (ulong)local_110._4_4_ << 0x20;
    local_130 = 0;
    plVar11 = (long *)(param_1 + 0x7b0);
    local_120 = 0x1fffffffffffffff;
    uStack_118 = 0;
    plVar16 = *(long **)(param_1 + 0x7b8);
    local_138 = &local_140;
    local_140 = &local_140;
    if (plVar16 != plVar11) {
      do {
        local_138 = puVar19;
        FUN_018e3f8c(&local_78,plVar16 + 2);
        puVar6 = local_140;
        puVar19 = local_138;
        if (local_78 != (long *)0x0) {
          FUN_01abe39c(&local_b0);
          puVar15 = (undefined1 *)local_138;
          if (local_138 != &local_140) {
            do {
              if (*(int *)(puVar15 + 0x10) == (int)local_b0) {
                *(int *)(puVar15 + 0x14) = *(int *)(puVar15 + 0x14) + local_b0._4_4_;
                goto joined_r0x018ddac4;
              }
              puVar15 = *(undefined1 **)(puVar15 + 8);
            } while ((undefined8 *)puVar15 != &local_140);
          }
          local_b8 = (int)local_b0;
          iStack_b4 = local_b0._4_4_;
          FUN_018e085c(&local_140,&local_b8);
joined_r0x018ddac4:
          puVar6 = local_140;
          puVar19 = local_138;
          if (local_78 != (long *)0x0) {
            lVar13 = local_78[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
              puVar6 = local_140;
              puVar19 = local_138;
            }
          }
        }
        plVar16 = (long *)plVar16[1];
        local_140 = puVar6;
      } while (plVar16 != plVar11);
      local_138 = puVar19;
      if (puVar19 != &local_140) {
        do {
          local_b8 = CONCAT22((short)*(undefined4 *)((long)puVar19 + 0x14),
                              (short)*(undefined4 *)((long)puVar19 + 0x10));
          local_140 = puVar6;
          iVar9 = FUN_01468b54(local_70[0],&local_b8);
          plVar16 = *(long **)(param_1 + 0x7b8);
          iVar8 = iVar9 + iVar8;
          puVar6 = local_140;
          if (plVar16 != plVar11) {
            FUN_018e3f8c(&local_78,plVar16 + 2);
            puVar6 = local_140;
            if (local_78 == (long *)0x0) goto LAB_018ddb88;
            FUN_01abe39c(&local_b0);
            if ((int)local_b0 == *(int *)((long)puVar19 + 0x10)) {
              if (iVar9 < 1) {
                FUN_01abf1d4(local_78);
              }
              else {
                FUN_01abe3d0(local_78,1);
                iVar9 = iVar9 - local_b0._4_4_;
              }
            }
            puVar6 = local_140;
            if (local_78 == (long *)0x0) goto LAB_018ddb88;
            lVar13 = local_78[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar4 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            do {
              puVar6 = local_140;
              if (iVar4 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_78 + 0x20))();
                puVar6 = local_140;
              }
LAB_018ddb88:
              do {
                do {
                  plVar16 = (long *)plVar16[1];
                  if (plVar16 == plVar11) goto LAB_018ddae0;
                  local_140 = puVar6;
                  FUN_018e3f8c(&local_78,plVar16 + 2);
                  puVar6 = local_140;
                } while (local_78 == (long *)0x0);
                FUN_01abe39c(&local_b0);
                if ((int)local_b0 == *(int *)((long)puVar19 + 0x10)) {
                  if (iVar9 < 1) {
                    FUN_01abf1d4(local_78);
                  }
                  else {
                    FUN_01abe3d0(local_78,1);
                    iVar9 = iVar9 - local_b0._4_4_;
                  }
                }
                puVar6 = local_140;
              } while (local_78 == (long *)0x0);
              lVar13 = local_78[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar4 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            } while( true );
          }
LAB_018ddae0:
          puVar19 = *(undefined8 **)((long)puVar19 + 8);
        } while (puVar19 != &local_140);
      }
    }
    if (*(long *)(param_1 + 0x7c0) != 0) {
      plVar16 = *(long **)(param_1 + 0x7b8);
      lVar13 = *(long *)(param_1 + 0x7b0);
      *(undefined8 *)(*plVar16 + 8) = *(undefined8 *)(lVar13 + 8);
      **(long **)(lVar13 + 8) = *plVar16;
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      if (plVar16 != plVar11) {
        plVar17 = (long *)plVar16[1];
        puVar19 = (undefined8 *)plVar16[2];
        local_140 = puVar6;
        if (puVar19 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar19 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            puVar19[2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar9 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_b0 = (long *)*puVar19;
            FUN_02a44274(lVar13 + 0xd8,&local_b0);
          }
        }
        plVar18 = *(long **)(param_1 + 0x7c8);
        uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        lVar13 = tpidr_el0;
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar13 + 0x38d480)) {
            FUN_02bcc824(plVar18,plVar16,0x20,8);
            puVar6 = local_140;
            goto joined_r0x018dd7bc;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,plVar16,0x20,8);
        puVar6 = local_140;
joined_r0x018dd7bc:
        do {
          if (plVar17 == plVar11) break;
          plVar16 = (long *)plVar17[1];
          puVar19 = (undefined8 *)plVar17[2];
          local_140 = puVar6;
          if (puVar19 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar19 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              puVar19[2] = 0;
              if ((*PTR_DAT_04379498 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
                if (iVar9 != 0) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_b0 = (long *)*puVar19;
              FUN_02a44274(lVar14 + 0xd8,&local_b0);
            }
          }
          plVar18 = *(long **)(param_1 + 0x7c8);
          uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar13 + 0x38d480)) {
              FUN_02bcc824(plVar18,plVar17,0x20,8);
              plVar17 = plVar16;
              puVar6 = local_140;
              goto joined_r0x018dd7bc;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,plVar17,0x20,8);
          plVar17 = plVar16;
          puVar6 = local_140;
        } while( true );
      }
    }
    local_140 = puVar6;
    FUN_018e278c(&local_140);
    if (local_70[0] == (long *)0x0) goto LAB_018dd098;
    lVar13 = local_70[0][0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_018dd098;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*local_70[0] + 0x20))();
    if (0 < iVar8) goto LAB_018dd0a0;
LAB_018dd230:
    if (bVar7 || (param_2 & 1) != 0) goto LAB_018dd144;
    if ((*PTR_DAT_04379690 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379690);
      if (iVar9 != 0) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
    }
    *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
    FUN_0286b878(&local_b0);
    puVar15 = (undefined1 *)local_140;
    local_140._4_4_ = 0;
    local_138._0_4_ = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = local_120 & 0xffffffff00000000;
    local_140._0_4_ = CONCAT31(SUB83(puVar15,1),0xb);
    FUN_01468dd0(local_b0,&local_140);
    if (local_b0 == (long *)0x0) goto LAB_018dd144;
    lVar13 = local_b0[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_018dd144;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    plVar11 = local_b0;
  }
  else {
    plVar16 = *(long **)(param_1 + 0x7b8);
    plVar11 = (long *)(param_1 + 0x7b0);
    if (plVar16 != plVar11) {
      FUN_018e3f8c(&local_b0,plVar16 + 2);
      if (local_b0 != (long *)0x0) {
        FUN_01abe39c(&local_140);
        FUN_01b3ad4c(param_1,(undefined4)local_140,local_140._4_4_);
        FUN_01abe3d0(local_b0,1);
        if (local_b0 != (long *)0x0) {
          lVar13 = local_b0[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar8 = *piVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto joined_r0x018dd000;
          } while( true );
        }
      }
      while (plVar16 = (long *)plVar16[1], plVar16 != plVar11) {
        FUN_018e3f8c(&local_b0,plVar16 + 2);
        if (local_b0 != (long *)0x0) {
          FUN_01abe39c(&local_140);
          FUN_01b3ad4c(param_1,(undefined4)local_140,local_140._4_4_);
          FUN_01abe3d0(local_b0,1);
          if (local_b0 != (long *)0x0) {
            lVar13 = local_b0[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar8 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
joined_r0x018dd000:
            if (iVar8 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_b0 + 0x20))();
            }
          }
        }
      }
    }
    if (*(long *)(param_1 + 0x7c0) != 0) {
      plVar16 = *(long **)(param_1 + 0x7b8);
      lVar13 = *(long *)(param_1 + 0x7b0);
      *(undefined8 *)(*plVar16 + 8) = *(undefined8 *)(lVar13 + 8);
      **(long **)(lVar13 + 8) = *plVar16;
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      if (plVar16 != plVar11) {
        plVar17 = (long *)plVar16[1];
        puVar6 = (undefined8 *)plVar16[2];
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar6 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar6[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_140._0_4_ = (undefined4)*puVar6;
            local_140._4_4_ = (undefined4)((ulong)*puVar6 >> 0x20);
            FUN_02a44274(lVar13 + 0xd8,&local_140);
          }
        }
        plVar18 = *(long **)(param_1 + 0x7c8);
        uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar12 & 1) == 0) {
LAB_018dd39c:
          (**(code **)(*plVar18 + 0x18))(plVar18,plVar16,0x20,8);
          plVar16 = (long *)PTR_DAT_043794a0;
        }
        else {
          lVar13 = tpidr_el0;
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_018dd39c;
          FUN_02bcc824(plVar18,plVar16,0x20,8);
          plVar16 = (long *)PTR_DAT_043794a0;
        }
        PTR_DAT_043794a0 = (undefined *)plVar16;
        if (plVar17 != plVar11) {
          lVar13 = tpidr_el0;
          do {
            plVar18 = (long *)plVar17[1];
            puVar6 = (undefined8 *)plVar17[2];
            if (puVar6 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar6 + 1);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                puVar6[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar16,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *plVar16;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_140._0_4_ = (undefined4)*puVar6;
                local_140._4_4_ = (undefined4)((ulong)*puVar6 >> 0x20);
                FUN_02a44274(lVar14 + 0xd8,&local_140);
              }
            }
            plVar20 = *(long **)(param_1 + 0x7c8);
            uVar12 = (**(code **)(*plVar20 + 0xc0))(plVar20);
            if ((uVar12 & 1) == 0) {
LAB_018dd47c:
              (**(code **)(*plVar20 + 0x18))(plVar20,plVar17,0x20,8);
            }
            else {
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_018dd47c;
              FUN_02bcc824(plVar20,plVar17,0x20,8);
            }
            plVar17 = plVar18;
          } while (plVar18 != plVar11);
        }
      }
    }
    iVar8 = FUN_01b3aed4(param_1,0,0);
LAB_018dd098:
    if (iVar8 < 1) goto LAB_018dd230;
LAB_018dd0a0:
    if ((*PTR_DAT_04379c28 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28);
      if (iVar9 != 0) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
    }
    local_a0 = 0x17;
    local_98 = (long *)0x0;
    local_b0 = (long *)&DAT_c4362e0f8400af43;
    pcStack_a8 = "PLAY_SE_HA_SYS_GET_ITEM";
    uVar10 = *(undefined8 *)PTR_DAT_04379c30;
    local_d0 = 0;
    uStack_c8 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar10;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0;
    local_138._0_4_ = 0;
    local_138._4_4_ = 0;
    FUN_02913338(uVar10,&local_b0,&local_140,0,0,0);
    pcVar5 = (code *)CONCAT44(local_138._4_4_,(undefined4)local_138);
    if (pcVar5 != (code *)0x0) {
      local_130 = 0;
      uStack_128 = 0;
      local_140._0_4_ = 0;
      local_140._4_4_ = 0;
      local_138._0_4_ = 0;
      local_138._4_4_ = 0;
      (*pcVar5)(&local_120);
    }
    plVar11 = local_98;
    if (local_98 == (long *)0x0) goto LAB_018dd144;
  }
  (**(code **)(*plVar11 + 0x20))();
LAB_018dd144:
  return iVar8 + *(int *)(param_1 + 0x5c0);
}


