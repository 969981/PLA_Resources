/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8ca28; name: FUN_01f8ca28
 */


void FUN_01f8ca28(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  long *extraout_x9;
  undefined1 *puVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  undefined1 *local_148;
  long *local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_110;
  undefined8 *local_108 [2];
  long *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  puVar21 = (undefined1 *)*param_2;
  plVar16 = (long *)param_2[2];
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01f8d60c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01f8f894(&local_80,param_2 + 5);
  puVar7 = PTR_DAT_043796e8;
  lVar17 = param_2[3];
  if ((lVar17 == 0) || (*(int *)(lVar17 + 0xc) == 0)) {
LAB_01f8cab0:
    if (local_80 != (long *)0x0) {
LAB_01f8cab8:
      plVar19 = local_80;
      plVar18 = local_80 + 1;
      do {
        iVar8 = (int)*plVar18 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *(int *)plVar18 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_f0 = (undefined8 *)*plVar19;
        FUN_02a44274(lVar17 + 0xd8,&local_f0);
      }
    }
LAB_01f8cb10:
    if (plVar16 != (long *)0x0) {
      lVar17 = plVar16[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
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
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    return;
  }
  piVar1 = (int *)(lVar17 + 0xc);
  iVar8 = *(int *)(lVar17 + 0xc);
  while( true ) {
    plVar18 = *(long **)(lVar17 + 0x10);
    if (((*PTR_DAT_043796e0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar7 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043796e0);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_01f8cab0;
      if (plVar18 == (long *)puVar7) break;
      plVar18 = (long *)*plVar18;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar8) break;
    ClearExclusiveLocal();
LAB_01f8cbc4:
    iVar8 = iVar9;
    if (iVar9 == 0) goto LAB_01f8cab0;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar3) {
    *piVar1 = iVar8 + 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_01f8cbc4;
  lVar17 = *(long *)(lVar17 + 0x18);
  plVar18 = (long *)(lVar17 + -0x50);
  if (lVar17 == 0) goto LAB_01f8cab0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = (undefined1 *)0x0;
  FUN_008802f0(&local_f0,*(long *)(lVar17 + 0x58) + 0x58);
  local_150 = (long *)0x0;
  local_148 = (undefined1 *)0x0;
  FUN_00ca524c(&local_150,&local_f0);
  puVar5 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0 + 1);
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
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_70[0] = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,local_70);
    }
  }
  if (local_150 != (long *)0x0) {
    FUN_00ca554c(&local_88);
    plVar19 = local_150;
    if (local_150 == (long *)0x0) goto LAB_01f8cca8;
    plVar14 = local_150 + 1;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 != 0) goto LAB_01f8cca8;
    local_150[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_f0 = (undefined8 *)*plVar19;
    FUN_02a44274(lVar11 + 0xd8,&local_f0);
    if (local_88 != (long *)0x0) goto LAB_01f8ccb0;
    goto LAB_01f8ce5c;
  }
  local_88 = (long *)0x0;
LAB_01f8cca8:
  if (local_88 == (long *)0x0) goto LAB_01f8ce5c;
LAB_01f8ccb0:
  plVar19 = local_88;
  local_f0 = (undefined8 *)0x0;
  local_e8 = (undefined1 *)0x0;
  local_e0 = local_88[0x58];
  local_d8 = local_88[0x59];
  lStack_d0 = local_88[0x5a];
  local_c8 = local_88[0x5b];
  uStack_c0 = 0;
  local_b8 = local_88[0x5d];
  local_b0 = local_88[0x5e];
  lStack_a8 = local_88[0x5f];
  local_a0 = local_88[0x60];
  uStack_98 = 0;
  local_90 = (undefined4)local_88[0x62];
  FUN_018bbce8(&local_f0,local_88[0x57]);
  for (plVar19 = (long *)plVar19[0x5c]; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    FUN_01f8fb04(&local_f0,plVar19 + 2);
  }
  if ((puVar21 != &DAT_cbf29ce484222645) && (local_e8 != (undefined1 *)0x0)) {
    uVar12 = (long)local_e8 - ((ulong)local_e8 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(local_e8 + -1) & (ulong)puVar21);
    }
    else {
      puVar13 = puVar21;
      if (local_e8 <= puVar21) {
        uVar4 = 0;
        if (local_e8 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar21 / (ulong)local_e8;
        }
        puVar13 = puVar21 + -(uVar4 * (long)local_e8);
      }
    }
    if (((long *)local_f0[(long)puVar13] != (long *)0x0) &&
       (plVar19 = *(long **)local_f0[(long)puVar13], plVar19 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar19[1] == puVar21) {
            if ((undefined1 *)plVar19[2] == puVar21) goto LAB_01f8ce28;
          }
          else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(local_e8 + -1)) != puVar13) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar19[1];
          if (puVar15 != puVar21) {
            if (local_e8 <= puVar15) {
              uVar12 = 0;
              if (local_e8 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar15 / (ulong)local_e8;
              }
              puVar15 = puVar15 + -(uVar12 * (long)local_e8);
            }
            if (puVar15 == puVar13) goto LAB_01f8cdd8;
            break;
          }
          if ((undefined1 *)plVar19[2] == puVar21) goto LAB_01f8ce28;
LAB_01f8cdd8:
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_01f8ce30;
LAB_01f8ce28:
  if (local_80 != (long *)0x0) {
    FUN_01dacb8c(&local_150);
    plVar19 = local_150;
    if (local_150 != (long *)0x0) {
      if (local_80 == (long *)0x0) {
        local_150 = (long *)0x0;
      }
      else {
        FUN_01dacb8c(&local_150);
      }
      plVar14 = local_150;
      FUN_0199bf58(local_108,plVar18);
      local_110 = plVar16;
      if (plVar16 != (long *)0x0) {
        lVar11 = plVar16[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01f8d60c;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_01f88a80(&local_f8,plVar14,puVar21,local_108,&local_110);
      puVar5 = local_108[0];
      if (local_110 != (long *)0x0) {
        lVar11 = local_110[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_110 + 0x20))();
          puVar5 = local_108[0];
        }
      }
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
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
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_150 = (long *)*puVar5;
          FUN_02a44274(lVar11 + 0xd8,&local_150);
        }
      }
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      if (local_f8 != (long *)0x0) {
        if (local_e8 == (undefined1 *)0x0) {
LAB_01f8d1d8:
          FUN_01f8fec0();
          plVar14 = extraout_x9;
        }
        else {
          uVar12 = (long)local_e8 - ((ulong)local_e8 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar12 < 2) {
            local_168 = (undefined1 *)((ulong)(local_e8 + -1) & (ulong)puVar21);
          }
          else {
            local_168 = puVar21;
            if (local_e8 <= puVar21) {
              uVar4 = 0;
              if (local_e8 != (undefined1 *)0x0) {
                uVar4 = (ulong)puVar21 / (ulong)local_e8;
              }
              local_168 = puVar21 + -(uVar4 * (long)local_e8);
            }
          }
          if (((long *)local_f0[(long)local_168] == (long *)0x0) ||
             (plVar14 = *(long **)local_f0[(long)local_168], plVar14 == (long *)0x0))
          goto LAB_01f8d1d8;
          if (uVar12 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == puVar21) {
                if ((undefined1 *)plVar14[2] == puVar21) goto LAB_01f8d1dc;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(local_e8 + -1)) != local_168)
              break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
            goto LAB_01f8d1d8;
          }
          while( true ) {
            puVar13 = (undefined1 *)plVar14[1];
            if (puVar13 != puVar21) {
              if (local_e8 <= puVar13) {
                uVar12 = 0;
                if (local_e8 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar13 / (ulong)local_e8;
                }
                puVar13 = puVar13 + -(uVar12 * (long)local_e8);
              }
              if (puVar13 == local_168) goto LAB_01f8d0d8;
              goto LAB_01f8d1d8;
            }
            if ((undefined1 *)plVar14[2] == puVar21) break;
LAB_01f8d0d8:
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_01f8d1d8;
          }
        }
LAB_01f8d1dc:
        plVar14 = plVar14 + 3;
        lVar11 = 0;
LAB_01f8d200:
        local_150 = (long *)*param_2;
        local_148 = (undefined1 *)param_2[1];
        local_140 = (long *)param_2[2];
        if (local_140 != (long *)0x0) {
          lVar20 = local_140[0xb];
          if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01f8d60c;
          if (*(long *)(lVar20 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
            *(undefined8 *)(lVar20 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_138 = (undefined8 *)0x0;
        uStack_130 = 0;
        FUN_0095e898(&local_138,param_2 + 3);
        local_128 = (undefined8 *)0x0;
        uStack_120 = 0;
        FUN_01f8f894(&local_128,param_2 + 5);
        plVar6 = local_f8;
        puVar5 = local_128;
        local_118 = param_2[7];
        local_148 = (undefined1 *)plVar14[lVar11 + 1];
        if (local_148 != &DAT_cbf29ce484222645) goto code_r0x01f8d288;
        if (local_128 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_128 + 1);
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
            local_128[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_70[0] = *puVar5;
            FUN_02a44274(lVar11 + 0xd8,local_70);
          }
        }
        if (local_138 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_138 + 1);
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
            local_138[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_70[0] = *local_138;
            FUN_02a44274(lVar11 + 0xd8,local_70);
          }
        }
        plVar6 = local_f8;
        if (local_140 != (long *)0x0) {
          lVar11 = local_140[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_140 + 0x20))();
            plVar6 = local_f8;
          }
        }
joined_r0x01f8d54c:
        local_f8 = plVar6;
        if (plVar6 != (long *)0x0) {
          lVar11 = plVar6[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01f8d60c;
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar14 = (long *)*param_3;
        *param_3 = (long)plVar6;
        if (plVar14 != (long *)0x0) {
          lVar11 = plVar14[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))();
          }
        }
        if (local_f8 != (long *)0x0) {
          lVar11 = local_f8[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_f8 + 0x20))();
          }
        }
      }
      lVar11 = plVar19[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))();
      }
    }
  }
LAB_01f8ce30:
  FUN_01f8a768(&local_f0);
  if (local_88 != (long *)0x0) {
    lVar11 = local_88[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
LAB_01f8ce5c:
  lVar17 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 != 0) goto LAB_01f8cab0;
  *(undefined8 *)(lVar17 + 0x18) = 0;
  (**(code **)(*plVar18 + 0x20))(plVar18);
  if (local_80 == (long *)0x0) goto LAB_01f8cb10;
  goto LAB_01f8cab8;
code_r0x01f8d288:
  local_158 = local_f8;
  if (local_f8 == (long *)0x0) {
    FUN_01f8d8d8(&local_150,plVar14,0,&local_158);
  }
  else {
    lVar20 = local_f8[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01f8d60c;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01f8d8d8(&local_150,plVar14,0,&local_158);
    lVar20 = plVar6[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
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
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  plVar6 = local_f8;
  local_160 = local_f8;
  if (local_f8 == (long *)0x0) {
    FUN_01f8d8d8(&local_150,plVar14,1,&local_160);
    puVar5 = local_128;
  }
  else {
    lVar20 = local_f8[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01f8d60c;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01f8d8d8(&local_150,plVar14,1,&local_160);
    lVar20 = plVar6[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = local_128;
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
      puVar5 = local_128;
    }
  }
  local_128 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_70[0] = *puVar5;
      FUN_02a44274(lVar20 + 0xd8,local_70);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_138 + 1);
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
      local_138[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_70[0] = *local_138;
      FUN_02a44274(lVar20 + 0xd8,local_70);
    }
  }
  if (local_140 != (long *)0x0) {
    lVar20 = local_140[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
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
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  lVar11 = lVar11 + 1;
  plVar6 = local_f8;
  if (lVar11 == 3) goto joined_r0x01f8d54c;
  goto LAB_01f8d200;
}


