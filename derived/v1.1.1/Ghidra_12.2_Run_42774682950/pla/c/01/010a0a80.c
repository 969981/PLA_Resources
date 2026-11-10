/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a0a80; name: FUN_010a0a80
 */


int FUN_010a0a80(void)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long *local_c8;
  undefined8 uStack_c0;
  long *local_a8;
  long *local_98;
  long local_90;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar16 = *(long **)(lVar15 + 0xc0);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_010a1420:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_e8 = plVar16[0x18];
  local_68 = local_e8 + plVar16[0x19] * 8;
  FUN_010a2440(&local_98,&local_e8,&local_68);
  if (local_98 != (long *)(plVar16[0x18] + plVar16[0x19] * 8)) {
    plVar19 = (long *)*local_98;
    puVar13 = (undefined8 *)(**(code **)plVar19[10])(plVar19 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_010a0b70:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_010a109c;
      lVar15 = plVar19[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010a1420;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar18 = plVar19;
      } while (cVar4 != '\0');
LAB_010a0bb4:
      if (plVar18 == (long *)0x0) goto LAB_010a115c;
      if (plVar18[0x1a] == 0) {
        local_98 = (long *)0x0;
        local_90 = 0;
LAB_010a0bd8:
        local_c8 = (long *)0x0;
        uStack_c0 = 0;
      }
      else {
        local_98 = (long *)0x0;
        local_90 = 0;
        FUN_019d08dc(&local_98,plVar18[0x1a] + 0x1c0);
        plVar19 = local_98;
        puVar9 = PTR_DAT_0437c670;
        puVar8 = PTR_DAT_0437c668;
        puVar7 = PTR_DAT_043794d8;
        puVar6 = PTR_DAT_043794d0;
        if (local_98 == (long *)0x0) goto LAB_010a0bd8;
        if (*(int *)((long)local_98 + 0xc) == 0) {
LAB_010a1490:
          plVar19 = (long *)0x0;
          plVar20 = local_98;
        }
        else {
          piVar1 = (int *)((long)local_98 + 0xc);
          iVar10 = *(int *)((long)local_98 + 0xc);
          while( true ) {
            plVar20 = (long *)plVar19[2];
            if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar12;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar20 == (long *)0x0) goto LAB_010a1490;
              if (plVar20 == (long *)puVar9) break;
              plVar20 = (long *)*plVar20;
            }
            iVar11 = *piVar1;
            if (iVar11 == iVar10) break;
            ClearExclusiveLocal();
LAB_010a1258:
            iVar10 = iVar11;
            if (iVar11 == 0) goto LAB_010a1490;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_010a1258;
          lVar15 = plVar19[3];
          plVar19 = (long *)0x0;
          plVar20 = local_98;
          if (lVar15 != 0) {
            plVar19 = (long *)(lVar15 + -0x50);
          }
        }
        local_98 = plVar20;
        if (plVar20 != (long *)0x0) {
          plVar2 = plVar20 + 1;
          do {
            iVar10 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            plVar20[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_e8 = *plVar20;
            FUN_02a44274(lVar15 + 0xd8,&local_e8);
          }
        }
        if (plVar19 == (long *)0x0) goto LAB_010a0bd8;
        plVar20 = (long *)plVar19[0xe];
        if (plVar20 == (long *)0x0) {
          local_c8 = (long *)0x0;
          uStack_c0 = 0;
        }
        else {
          lVar15 = plVar20[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010a1420;
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar12;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_0199edc8(&local_98,plVar20);
          if ((local_98 == (long *)0x0) || (uVar14 = FUN_02a43a8c(), (uVar14 & 1) != 0)) {
            local_c8 = (long *)0x0;
            uStack_c0 = 0;
            plVar2 = local_98;
          }
          else {
            local_c8 = (long *)0x0;
            uStack_c0 = 0;
            FUN_010a2140(&local_c8,&local_98);
            plVar2 = local_98;
          }
          local_98 = plVar2;
          if (plVar2 != (long *)0x0) {
            plVar3 = plVar2 + 1;
            do {
              iVar10 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 == 0) {
              plVar2[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_e8 = *plVar2;
              FUN_02a44274(lVar15 + 0xd8,&local_e8);
            }
          }
          lVar15 = plVar20[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
        }
        lVar15 = plVar19[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
      lVar15 = plVar18[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
        goto joined_r0x010a1048;
      }
      if (plVar16 != (long *)0x0) goto LAB_010a0bfc;
      goto LAB_010a0c18;
    }
  }
LAB_010a115c:
  local_c8 = (long *)0x0;
  uStack_c0 = 0;
joined_r0x010a1048:
  if (plVar16 == (long *)0x0) {
LAB_010a0c18:
    if (local_c8 == (long *)0x0) goto LAB_010a0c20;
LAB_010a106c:
    plVar16 = local_c8;
    puVar9 = PTR_DAT_043796f8;
    puVar8 = PTR_DAT_043796f0;
    puVar7 = PTR_DAT_043794d8;
    puVar6 = PTR_DAT_043794d0;
    if (*(int *)((long)local_c8 + 0xc) != 0) {
      piVar1 = (int *)((long)local_c8 + 0xc);
      iVar10 = *(int *)((long)local_c8 + 0xc);
      do {
        plVar19 = (long *)plVar16[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_010a1660;
          if (plVar19 == (long *)puVar9) break;
          plVar19 = (long *)*plVar19;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar15 = plVar16[3];
            plVar16 = (long *)0x0;
            plVar19 = local_c8;
            if (lVar15 != 0) {
              plVar16 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x010a1590;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_010a1660:
    plVar16 = (long *)0x0;
    plVar19 = local_c8;
joined_r0x010a1590:
    local_c8 = plVar19;
    if (plVar19 != (long *)0x0) {
      plVar18 = plVar19 + 1;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        plVar19[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_98 = (long *)*plVar19;
        FUN_02a44274(lVar15 + 0xd8,&local_98);
      }
    }
    if (plVar16 == (long *)0x0) goto LAB_010a0c20;
    puVar17 = (undefined1 *)FUN_01f26800(plVar16);
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  else {
LAB_010a0bfc:
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 != 0) goto LAB_010a0c18;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
    if (local_c8 != (long *)0x0) goto LAB_010a106c;
LAB_010a0c20:
    puVar17 = &DAT_cbf29ce484222645;
  }
  puVar6 = PTR_DAT_0437b1a0;
  if (((*PTR_DAT_0437b1a0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  puVar8 = PTR_DAT_0437b1b0;
  puVar7 = PTR_DAT_0437b1a8;
  uVar12 = *(undefined8 *)PTR_DAT_0437b1a8;
  local_e8 = -0x4fa62281df3d3ce9;
  pcStack_e0 = "script/place_name.dat";
  local_d8 = 0x15;
  local_d0 = (long *)0x0;
  *(undefined8 *)PTR_DAT_0437b1b0 = uVar12;
  FUN_010c4b50(&local_c8,&local_e8,10);
  FUN_010cabcc(&local_98,uVar12,&local_c8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_90 != 0) {
    plVar16 = *(long **)(local_90 + 0x270);
    if (plVar16 != *(long **)(local_90 + 0x278)) {
      iVar10 = 0;
      do {
        puVar13 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          puVar13 = (undefined8 *)(*plVar16 + 0x58);
        }
        if ((undefined1 *)*puVar13 == puVar17) {
          lVar15 = 0;
          goto LAB_010a0ff8;
        }
        plVar16 = plVar16 + 1;
        iVar10 = iVar10 + 1;
      } while (*(long **)(local_90 + 0x278) != plVar16);
    }
  }
  FUN_010a17b8(&local_98);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  local_e8 = 0x2659d072b3686ad8;
  pcStack_e0 = "common/place_name_spe.dat";
  local_d8 = 0x19;
  local_d0 = (long *)0x0;
  FUN_010c4b50(&local_c8,&local_e8,10);
  FUN_010cabcc(&local_98,uVar12,&local_c8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_90 != 0) {
    plVar16 = *(long **)(local_90 + 0x270);
    if (plVar16 != *(long **)(local_90 + 0x278)) {
      iVar10 = 0;
      lVar15 = 1;
      do {
        puVar13 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          puVar13 = (undefined8 *)(*plVar16 + 0x58);
        }
        if ((undefined1 *)*puVar13 == puVar17) goto LAB_010a0ff8;
        plVar16 = plVar16 + 1;
        iVar10 = iVar10 + 1;
      } while (*(long **)(local_90 + 0x278) != plVar16);
    }
  }
  FUN_010a17b8(&local_98);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  local_e8 = -0x191c5c90ead51506;
  pcStack_e0 = "common/place_name_out.dat";
  local_d8 = 0x19;
  local_d0 = (long *)0x0;
  FUN_010c4b50(&local_c8,&local_e8,10);
  FUN_010cabcc(&local_98,uVar12,&local_c8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_90 != 0) {
    plVar16 = *(long **)(local_90 + 0x270);
    if (plVar16 != *(long **)(local_90 + 0x278)) {
      iVar10 = 0;
      lVar15 = 2;
      do {
        puVar13 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          puVar13 = (undefined8 *)(*plVar16 + 0x58);
        }
        if ((undefined1 *)*puVar13 == puVar17) goto LAB_010a0ff8;
        plVar16 = plVar16 + 1;
        iVar10 = iVar10 + 1;
      } while (*(long **)(local_90 + 0x278) != plVar16);
    }
  }
  FUN_010a17b8(&local_98);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  local_e8 = -0x1ae76a5c7852fa4b;
  pcStack_e0 = "common/place_name_per.dat";
  local_d8 = 0x19;
  local_d0 = (long *)0x0;
  FUN_010c4b50(&local_c8,&local_e8,10);
  FUN_010cabcc(&local_98,uVar12,&local_c8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_90 != 0) {
    plVar16 = *(long **)(local_90 + 0x270);
    if (plVar16 != *(long **)(local_90 + 0x278)) {
      iVar10 = 0;
      lVar15 = 3;
      do {
        puVar13 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          puVar13 = (undefined8 *)(*plVar16 + 0x58);
        }
        if ((undefined1 *)*puVar13 == puVar17) goto LAB_010a0ff8;
        plVar16 = plVar16 + 1;
        iVar10 = iVar10 + 1;
      } while (*(long **)(local_90 + 0x278) != plVar16);
    }
  }
  iVar10 = 4;
LAB_010a1008:
  FUN_010a17b8(&local_98);
  return iVar10;
LAB_010a109c:
  puVar13 = (undefined8 *)*puVar13;
  plVar18 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_010a0bb4;
  goto LAB_010a0b70;
LAB_010a0ff8:
  iVar10 = (&DAT_03889750)[lVar15] + iVar10;
  goto LAB_010a1008;
}


