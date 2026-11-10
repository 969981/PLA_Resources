/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f390bc; name: FUN_01f390bc
 */


void FUN_01f390bc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  uint *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined1 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *local_158;
  long local_150;
  long *local_140;
  code *local_138;
  undefined1 *local_130;
  long *local_128;
  long *local_120;
  long lStack_118;
  undefined1 local_110;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 *local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  long *local_80 [2];
  long *local_70 [2];
  
  FUN_01f3abd8(*param_2);
  plVar22 = (long *)*param_1;
  FUN_0095e898(plVar22 + 0xe,param_2 + 0xf);
  *(undefined4 *)((long)plVar22 + 0x18c) = *(undefined4 *)(param_2 + 0x11);
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  lVar27 = plVar22[0xe];
  if ((lVar27 == 0) || (*(int *)(lVar27 + 0xc) == 0)) {
LAB_01f39110:
    FUN_01f3e5b8(plVar22,1);
    FUN_01f3ecbc(plVar22,1);
    plVar24 = plVar22 + 0xa8;
    local_140._0_4_ = 2;
    FUN_01f3f3bc(plVar24,&local_140);
    local_140._0_4_ = 4;
    FUN_01f3f3bc(plVar24,&local_140);
    local_140._0_4_ = 7;
    FUN_01f3f3bc(plVar24,&local_140);
    local_140._0_4_ = 8;
    FUN_01f3f3bc(plVar24,&local_140);
    local_140 = (long *)CONCAT44(local_140._4_4_,0x15);
    FUN_01f3f3bc(plVar24,&local_140);
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379690), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar27 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar27;
    plVar24 = *(long **)(*(long *)(lVar27 + 0x50) + 0x30);
    if (plVar24 != (long *)0x0) {
      lVar25 = plVar24[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) {
LAB_01f39a9c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar25 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_01f3f410(&local_140,plVar24);
    FUN_019a4d1c(plVar22 + 0x2d,&local_140);
    plVar23 = local_140;
    if (local_140 != (long *)0x0) {
      plVar29 = local_140 + 1;
      do {
        iVar11 = (int)*plVar29 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *(int *)plVar29 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        local_140[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_80[0] = (long *)*plVar23;
        FUN_02a44274(lVar25 + 0xd8,local_80);
      }
    }
    if (plVar24 != (long *)0x0) {
      lVar25 = plVar24[0xb];
      piVar1 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
    }
    local_140 = (long *)plVar22[1];
    local_b8 = (long *)CONCAT71(local_b8._1_7_,1);
    FUN_01f3f4f0(local_80,lVar27,local_140,&local_140,&local_b8);
    local_110 = 0x21;
    local_140 = (long *)&LAB_01f4a908;
    local_138 = FUN_01f4a980;
    local_130 = &LAB_01f4a984;
    local_128 = (long *)&LAB_01f4a998;
    local_120 = plVar22;
    lStack_118 = lVar27;
    FUN_0286b3dc(lVar27,0x21,&local_140);
    pcVar14 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_128 = (long *)0x0;
      local_140 = (long *)0x0;
      local_138 = (code *)0x0;
      (*pcVar14)(&local_120);
    }
    FUN_01f4a9ac(plVar22 + 0x2f,local_80);
    plVar24 = local_80[0];
    if (local_80[0] != (long *)0x0) {
      plVar23 = local_80[0] + 1;
      do {
        iVar11 = (int)*plVar23 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        local_80[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b8 = (long *)*plVar24;
        FUN_02a44274(lVar27 + 0xd8,&local_b8);
      }
    }
    puVar10 = PTR_DAT_043796e8;
    puVar9 = PTR_DAT_043796e0;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    lVar27 = plVar22[0xe];
    if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
      piVar1 = (int *)(lVar27 + 0xc);
      iVar11 = *(int *)(lVar27 + 0xc);
      do {
        plVar24 = *(long **)(lVar27 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar13;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01f39388;
          if (plVar24 == (long *)puVar10) break;
          plVar24 = (long *)*plVar24;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar27 = *(long *)(lVar27 + 0x18);
            if (lVar27 != 0) {
              plVar24 = (long *)PTR_DAT_04379c88;
              if (*(long *)(lVar27 + 0x1c8) != 0) {
                plVar24 = (long *)(*(long *)(lVar27 + 0x1c8) + 0x58);
              }
              lVar25 = *plVar24;
              if (lVar25 < -0x1c4411fb859ba796) {
                if (lVar25 == -0x1c4414fb859bacaf) {
                  lVar25 = 10;
                  goto LAB_01f3ab38;
                }
                if (lVar25 == -0x1c4412fb859ba949) {
                  lVar25 = 8;
                  goto LAB_01f3ab38;
                }
              }
              else {
                if (lVar25 == -0x1c4411fb859ba796) {
                  lVar25 = 0xb;
                }
                else {
                  if (lVar25 != -0x1c4410fb859ba5e3) goto LAB_01f3ab50;
                  lVar25 = 6;
                }
LAB_01f3ab38:
                FUN_00db0d34((&PTR_s_capture_wild_field_041edae0)[lVar25 * 2],1);
              }
LAB_01f3ab50:
              lVar25 = *(long *)(lVar27 + 8);
              piVar1 = (int *)(lVar25 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar25 + 0x18) = 0;
                (**(code **)(*(long *)(lVar27 + -0x50) + 0x20))((long *)(lVar27 + -0x50));
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01f39388:
    *(undefined1 *)((long)plVar22 + 0x189) = 1;
    return;
  }
  piVar1 = (int *)(lVar27 + 0xc);
  iVar11 = *(int *)(lVar27 + 0xc);
  while( true ) {
    plVar24 = *(long **)(lVar27 + 0x10);
    if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar13;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar24 == (long *)0x0) goto LAB_01f39110;
      if (plVar24 == (long *)puVar8) break;
      plVar24 = (long *)*plVar24;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar11) break;
    ClearExclusiveLocal();
LAB_01f394d0:
    iVar11 = iVar12;
    if (iVar12 == 0) goto LAB_01f39110;
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar4) {
    *piVar1 = iVar11 + 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_01f394d0;
  lVar27 = *(long *)(lVar27 + 0x18);
  if (lVar27 == 0) goto LAB_01f39110;
  plVar23 = (long *)(lVar27 + -0x50);
  FUN_0199c4cc(&local_140,plVar23);
  plVar24 = plVar22 + 0x10;
  FUN_01f49bc8(plVar24,&local_140);
  if (local_140 != (long *)0x0) {
    plVar29 = local_140 + 1;
    do {
      iVar11 = (int)*plVar29 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar4) {
        *(int *)plVar29 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_a0 = (undefined8 *)*local_140;
      FUN_02a44274(lVar25 + 0xd8,&local_a0);
    }
  }
  local_140 = (long *)0x0;
  local_138 = (code *)0x0;
  FUN_0194aae0(&local_140,lVar27 + 0x138);
  FUN_0194b220(plVar22 + 0x14,&local_140);
  plVar29 = local_140;
  if (local_140 != (long *)0x0) {
    plVar20 = local_140 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_a0 = (undefined8 *)*plVar29;
      FUN_02a44274(lVar25 + 0xd8,&local_a0);
    }
  }
  plVar29 = *(long **)(lVar27 + 0x48);
  if (plVar29 != (long *)0x0) {
    lVar25 = plVar29[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01f39a9c;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar29 + 0x10))(&local_140,plVar29);
  local_a0 = (undefined8 *)0x0;
  lStack_98 = 0;
  FUN_00d07698(&local_a0,&local_140);
  plVar20 = local_140;
  if (local_140 != (long *)0x0) {
    plVar2 = local_140 + 1;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_80[0] = (long *)*plVar20;
      FUN_02a44274(lVar25 + 0xd8,local_80);
    }
  }
  FUN_00d07998(plVar22 + 0x12,&local_a0);
  puVar6 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_140 = (long *)*puVar6;
      FUN_02a44274(lVar25 + 0xd8,&local_140);
    }
  }
  lVar25 = plVar29[0xb];
  piVar1 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))(plVar29);
    if (plVar22 == (long *)0x0) goto LAB_01f39760;
LAB_01f39a1c:
    lVar25 = plVar22[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01f39a9c;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_019aa28c(lVar27 + 0x1a0,plVar22);
    lVar25 = plVar22[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  else {
    if (plVar22 != (long *)0x0) goto LAB_01f39a1c;
LAB_01f39760:
    FUN_019aa28c(lVar27 + 0x1a0,0);
  }
  local_140 = (long *)0x0;
  lVar25 = FUN_00957dc4(&local_a0,plVar22[1],&local_140);
  *(ulong *)(lVar25 + 0x1e0) = *(ulong *)(lVar25 + 0x1e0) | 8;
  if (lVar25 != 0) {
    lVar26 = *(long *)(lVar25 + 0x58);
    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01f39a9c;
    if (*(long *)(lVar26 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
      *(undefined8 *)(lVar26 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar29 = (long *)plVar22[0xd];
  plVar22[0xd] = 0;
  if (plVar29 != (long *)0x0) {
    lVar26 = plVar29[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))();
    }
  }
  plVar22[0xd] = lVar25;
  pcVar14 = *(code **)(lVar25 + 0x3a8);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar25 + 0x3b0) = 0;
    *(undefined8 *)(lVar25 + 0x3b8) = 0;
    *(undefined8 *)(lVar25 + 0x3a0) = 0;
    *(undefined8 *)(lVar25 + 0x3a8) = 0;
    (*pcVar14)(lVar25 + 0x3c0);
  }
  *(undefined1 **)(lVar25 + 0x3c8) = &LAB_01f3e034;
  *(undefined1 **)(lVar25 + 0x3a0) = &LAB_01f49ec8;
  *(undefined1 **)(lVar25 + 0x3a8) = &LAB_01f49ee4;
  *(long **)(lVar25 + 0x3c0) = plVar22;
  *(undefined8 *)(lVar25 + 0x3d0) = 0;
  *(undefined1 **)(lVar25 + 0x3b0) = &LAB_01f49ee8;
  *(undefined1 **)(lVar25 + 0x3b8) = &LAB_01f49efc;
  lVar26 = plVar22[0xd];
  lVar25 = nn::os::GetCurrentThread();
  plVar29 = (long *)(lVar26 + 0x208);
  do {
    if (*plVar29 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x1fc));
        while (*plVar29 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar4) {
            *plVar29 = lVar25;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01f39890;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar4) {
      *plVar29 = lVar25;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01f39890:
  lVar15 = param_2[4];
  lVar25 = lVar15;
  if (*(long *)(lVar15 + 0x1d0) != 0) {
    lVar25 = *(long *)(lVar15 + 0x1d0);
  }
  if (*(long *)(lVar15 + 0x1d8) != 0) {
    lVar15 = *(long *)(lVar15 + 0x1d8);
  }
  if (lVar25 == lVar15) goto LAB_01f39a9c;
  FUN_02a70230(lVar26);
  *(undefined8 *)(lVar26 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x1fc));
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar25 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar25;
  plVar29 = *(long **)(lVar25 + 0x228);
  if (plVar29 != (long *)0x0) {
    lVar25 = plVar29[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01f39a9c;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar17 = (undefined1 *)((long *)plVar29[0x37])[1];
  if (puVar17 != (undefined1 *)0x0) {
    uVar18 = (long)puVar17 - ((ulong)puVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      puVar19 = (undefined1 *)((ulong)(puVar17 + -1) & 0x9e119725620a772);
    }
    else if (&DAT_9e119725620a772 < puVar17) {
      puVar19 = &DAT_9e119725620a772;
    }
    else {
      uVar5 = 0;
      if (puVar17 != (undefined1 *)0x0) {
        uVar5 = 0x9e119725620a772 / (ulong)puVar17;
      }
      puVar19 = &DAT_9e119725620a772 + -(uVar5 * (long)puVar17);
    }
    plVar20 = *(long **)(*(long *)plVar29[0x37] + (long)puVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if ((undefined1 *)plVar20[1] == &DAT_9e119725620a772) {
            if ((undefined1 *)plVar20[2] == &DAT_9e119725620a772) goto LAB_01f39b40;
          }
          else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar17 + -1)) != puVar19) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          puVar21 = (undefined1 *)plVar20[1];
          if (puVar21 != &DAT_9e119725620a772) {
            if (puVar17 <= puVar21) {
              uVar18 = 0;
              if (puVar17 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar21 / (ulong)puVar17;
              }
              puVar21 = puVar21 + -(uVar18 * (long)puVar17);
            }
            if (puVar21 == puVar19) goto LAB_01f399e4;
            break;
          }
          if ((undefined1 *)plVar20[2] == &DAT_9e119725620a772) goto LAB_01f39b40;
LAB_01f399e4:
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01f39b48:
  if (plVar29 == (long *)0x0) {
LAB_01f39b68:
    lVar25 = *plVar24;
  }
  else {
    lVar25 = plVar29[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01f39b68;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))(plVar29);
    lVar25 = *plVar24;
  }
  if ((lVar25 != 0) && (FUN_0161aee4(&local_140), local_140 != (long *)0x0)) {
    FUN_01f78120(local_140,5,&DAT_cbf29ce484222645);
    FUN_01f78120(local_140,6,&DAT_cbf29ce484222645);
    if (local_140 != (long *)0x0) {
      lVar25 = local_140[0xb];
      piVar1 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_140 + 0x20))();
      }
    }
  }
  local_140 = (long *)0x0;
  local_138 = (code *)0x0;
  FUN_008802f0(&local_140,*(long *)(lVar27 + 0x58) + 0x58);
  local_a0 = (undefined8 *)0x0;
  lStack_98 = 0;
  FUN_00ca524c(&local_a0,&local_140);
  plVar24 = local_140;
  if (local_140 != (long *)0x0) {
    plVar29 = local_140 + 1;
    do {
      iVar11 = (int)*plVar29 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar4) {
        *(int *)plVar29 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_80[0] = (long *)*plVar24;
      FUN_02a44274(lVar25 + 0xd8,local_80);
    }
  }
  if (local_a0 != (undefined8 *)0x0) {
    FUN_00ca554c(&local_140);
    puVar6 = local_a0;
    if (local_140 != (long *)0x0) {
      lVar25 = FUN_018b832c(local_140,&DAT_cbf29ce484222645);
      puVar16 = *(uint **)(*(long *)(lVar25 + 8) + 0x250);
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar16 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      *(undefined4 *)((long)plVar22 + 0x28c) = *(undefined4 *)((long)puVar16 + (ulong)*puVar16);
      puVar6 = local_a0;
      if (local_140 != (long *)0x0) {
        lVar25 = local_140[0xb];
        piVar1 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_140 + 0x20))();
          puVar6 = local_a0;
        }
      }
    }
    local_a0 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        puVar6[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_140 = (long *)*puVar6;
        FUN_02a44274(lVar25 + 0xd8,&local_140);
      }
    }
  }
  FUN_0199c220(&local_140,plVar23);
  plVar24 = local_140;
  puVar8 = PTR_DAT_0437a0f0;
  puVar7 = PTR_DAT_0437a0e8;
  if (local_140 != (long *)0x0) {
    if (*(int *)((long)local_140 + 0xc) == 0) {
LAB_01f3a5e0:
      local_158 = (long *)0x0;
      plVar24 = local_140;
    }
    else {
      piVar1 = (int *)((long)local_140 + 0xc);
      iVar11 = *(int *)((long)local_140 + 0xc);
      while( true ) {
        plVar29 = (long *)plVar24[2];
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
          if (plVar29 != (long *)0x0) goto LAB_01f3a4b8;
          goto LAB_01f3a5e0;
        }
        while( true ) {
          if (plVar29 == (long *)0x0) goto LAB_01f3a5e0;
LAB_01f3a4b8:
          if (plVar29 == (long *)puVar8) break;
          plVar29 = (long *)*plVar29;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) break;
        ClearExclusiveLocal();
LAB_01f3a4a0:
        iVar11 = iVar12;
        if (iVar12 == 0) goto LAB_01f3a5e0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01f3a4a0;
      lVar25 = plVar24[3];
      local_158 = (long *)0x0;
      plVar24 = local_140;
      if (lVar25 != 0) {
        local_158 = (long *)(lVar25 + -0x50);
      }
    }
    local_140 = plVar24;
    if (plVar24 != (long *)0x0) {
      plVar29 = plVar24 + 1;
      do {
        iVar11 = (int)*plVar29 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *(int *)plVar29 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        plVar24[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_a0 = (undefined8 *)*plVar24;
        FUN_02a44274(lVar25 + 0xd8,&local_a0);
      }
    }
    if (local_158 != (long *)0x0) {
      plVar24 = plVar22 + 0x88;
      local_150 = 0;
      do {
        lVar25 = plVar22[1];
        if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar11 != 0)) {
          local_140 = (long *)FUN_00938550();
          puVar7 = PTR_DAT_0437a7d0;
          FUN_00b0fde8(PTR_DAT_0437a7d0,&local_140);
          FUN_00100250(PTR_LAB_0437a8d8,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a7c0);
        }
        plVar20 = *(long **)PTR_DAT_0437a7d0;
        plVar29 = (long *)PTR_DAT_04379c88;
        if (plVar20 != (long *)0x0) {
          plVar29 = plVar20 + 0xb;
        }
        local_a0 = (undefined8 *)*plVar29;
        plVar29 = (long *)PTR_PTR_04379d00;
        if (plVar20 != (long *)0x0) {
          plVar29 = plVar20 + 0xc;
        }
        lStack_98 = *plVar29;
        if (plVar20 == (long *)0x0) {
          local_90 = 0;
        }
        else {
          local_90 = plVar20[0xd];
          local_88 = (long *)0x0;
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
        local_88 = plVar20;
        FUN_01845684(&local_140,local_158,lVar25,&local_a0);
        plVar29 = (long *)*plVar24;
        *plVar24 = 0;
        if (plVar29 != (long *)0x0) {
          lVar25 = plVar29[0xb];
          piVar1 = (int *)(lVar25 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar25 + 0x18) = 0;
            (**(code **)(*plVar29 + 0x20))();
          }
        }
        plVar29 = local_140;
        local_140 = (long *)0x0;
        *plVar24 = (long)plVar29;
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_130 = (undefined1 *)0x0;
        local_128 = (long *)0x0;
        local_140 = (long *)0x0;
        local_138 = (code *)0x0;
        snprintf((char *)&local_140,0x1f,"MiniGame:%d",(int)local_150);
        FUN_01091310(&local_a8,&local_140);
        plVar29 = local_a8;
        lVar25 = *plVar24;
        if (local_a8 == (long *)0x0) {
          lVar26 = *(long *)PTR_DAT_04379c88;
LAB_01f3a9b0:
          lVar15 = *(long *)PTR_PTR_04379d00;
          if (local_a8 != (long *)0x0) goto LAB_01f3a75c;
LAB_01f3a9c0:
          lVar28 = 0;
        }
        else {
          lVar26 = local_a8[0xb];
          if (local_a8 == (long *)0x0) goto LAB_01f3a9b0;
          lVar15 = local_a8[0xc];
          if (local_a8 == (long *)0x0) goto LAB_01f3a9c0;
LAB_01f3a75c:
          lVar28 = local_a8[0xd];
          (**(code **)(*local_a8 + 0x18))(local_a8);
        }
        *(long *)(lVar25 + 0x230) = lVar26;
        *(long *)(lVar25 + 0x238) = lVar15;
        *(long *)(lVar25 + 0x240) = lVar28;
        if (plVar29 != (long *)0x0) {
          (**(code **)(*plVar29 + 0x18))(plVar29);
        }
        plVar20 = *(long **)(lVar25 + 0x248);
        *(long **)(lVar25 + 0x248) = plVar29;
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x20))();
        }
        if (plVar29 != (long *)0x0) {
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
        local_80[0] = (long *)((ulong)local_80[0] & 0xffffffffffffff00);
        plVar29 = (long *)FUN_009d7124(*plVar24,*(undefined8 *)(*plVar24 + 8),local_80);
        *(undefined1 *)(plVar29 + 0x65) = 0;
        (**(code **)(*plVar29 + 0x10))(local_80);
        local_b8 = (long *)0x0;
        uStack_b0 = 0;
        FUN_01a0b7c0(&local_b8,local_80);
        plVar29 = local_80[0];
        if (local_80[0] != (long *)0x0) {
          plVar20 = local_80[0] + 1;
          do {
            iVar11 = (int)*plVar20 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *(int *)plVar20 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            local_80[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_70[0] = (long *)*plVar29;
            FUN_02a44274(lVar25 + 0xd8,local_70);
          }
        }
        FUN_01913c74(plVar22 + local_150 * 2 + 0x8d,&local_b8);
        plVar29 = local_b8;
        if (local_b8 != (long *)0x0) {
          plVar20 = local_b8 + 1;
          do {
            iVar11 = (int)*plVar20 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *(int *)plVar20 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            local_b8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80[0] = (long *)*plVar29;
            FUN_02a44274(lVar25 + 0xd8,local_80);
          }
        }
        local_150 = local_150 + 1;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar22 + 0x8d);
      lVar25 = local_158[0xb];
      piVar1 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_158 + 0x20))();
      }
    }
  }
  local_80[0] = plVar22;
  FUN_01f3e538(&local_140,plVar22[1],local_80);
  plVar24 = (long *)plVar22[0x2b];
  plVar22[0x2b] = 0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))();
  }
  plVar24 = (long *)0x0;
  if (local_140 != (long *)0x0) {
    plVar24 = local_140 + 0xd;
  }
  plVar22[0x2b] = (long)plVar24;
  if (plVar22[0x14] == 0) {
    local_80[0] = (long *)0x0;
  }
  else {
    FUN_01ed9c88(local_80);
    if (local_80[0] != (long *)0x0) {
      local_140 = (long *)0x68446d9ae0e8ff99;
      local_138 = (code *)0x396c7e8;
      local_130 = (undefined1 *)0x17;
      local_128 = (long *)0x0;
      FUN_01ed81a8(&local_b8,local_80[0],&local_140);
      plVar24 = (long *)plVar22[0x2c];
      plVar22[0x2c] = 0;
      if (plVar24 != (long *)0x0) {
        lVar25 = plVar24[0xb];
        piVar1 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))();
        }
      }
      plVar24 = local_b8;
      local_b8 = (long *)0x0;
      plVar22[0x2c] = (long)plVar24;
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (local_80[0] != (long *)0x0) {
        lVar25 = local_80[0][0xb];
        piVar1 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
    }
  }
  FUN_0199c048(&local_140,plVar23);
  if (local_140 == (long *)0x0) {
    local_b8 = (long *)0x0;
  }
  else {
    FUN_00ccf754(&local_b8);
    plVar24 = local_140;
    if (local_140 != (long *)0x0) {
      plVar29 = local_140 + 1;
      do {
        iVar11 = (int)*plVar29 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *(int *)plVar29 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        local_140[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_80[0] = (long *)*plVar24;
        FUN_02a44274(lVar25 + 0xd8,local_80);
      }
    }
  }
  if (local_b8 != (long *)0x0) {
    FUN_019bbbdc(&local_140);
    if (local_140 == (long *)0x0) {
      local_70[0] = (long *)0x0;
      plVar24 = local_70[0];
    }
    else {
      FUN_00ccf8c8(local_70);
      plVar29 = local_140;
      plVar24 = local_70[0];
      if (local_140 != (long *)0x0) {
        plVar20 = local_140 + 1;
        do {
          iVar11 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_140[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_80[0] = (long *)*plVar29;
          FUN_02a44274(lVar25 + 0xd8,local_80);
          plVar24 = local_70[0];
        }
      }
    }
    local_70[0] = plVar24;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x40))(plVar24,4);
      *(undefined4 *)(plVar24 + 0x3d) = 4;
      if (local_70[0] != (long *)0x0) {
        lVar25 = local_70[0][0xb];
        piVar1 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
    }
    if (local_b8 != (long *)0x0) {
      lVar25 = local_b8[0xb];
      piVar1 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
  }
  if (plVar22[0x12] == 0) {
    local_b8 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_b8);
    if (local_b8 != (long *)0x0) {
      local_140 = (long *)0x0;
      local_138 = (code *)0x0;
      FUN_01b00b94(&local_140,local_b8 + 0xdd);
      if (local_140 == (long *)0x0) {
        local_70[0] = (long *)0x0;
      }
      else {
        FUN_009bd2d4(local_70);
        plVar24 = local_140;
        if (local_140 != (long *)0x0) {
          plVar29 = local_140 + 1;
          do {
            iVar11 = (int)*plVar29 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar4) {
              *(int *)plVar29 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            local_140[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80[0] = (long *)*plVar24;
            FUN_02a44274(lVar25 + 0xd8,local_80);
          }
        }
      }
      if (local_70[0] != (long *)0x0) {
        local_70[0][0x56] = local_70[0][0x56] | 8;
        lVar25 = local_70[0][0xb];
        piVar1 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
      if (local_b8 != (long *)0x0) {
        lVar25 = local_b8[0xb];
        piVar1 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_b8 + 0x20))();
        }
      }
    }
  }
  lVar27 = *(long *)(lVar27 + 8);
  piVar1 = (int *)(lVar27 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  goto LAB_01f39110;
LAB_01f39b40:
  *(undefined1 *)(plVar20 + 3) = 1;
  goto LAB_01f39b48;
}


