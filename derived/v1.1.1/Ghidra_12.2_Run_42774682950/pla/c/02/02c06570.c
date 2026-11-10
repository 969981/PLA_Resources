/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c06570; name: FUN_02c06570
 */


void FUN_02c06570(long param_1,undefined1 *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  ulong *local_60;
  ulong local_58;
  
  local_a8 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  lVar8 = tpidr_el0;
  lVar11 = *(long *)(lVar8 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar11;
  }
  plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,8,0);
  lVar11 = *(long *)(lVar8 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar11;
  }
  plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  lVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,0xc0,0);
  FUN_03309708();
  *plVar6 = lVar11;
  uStack_88 = 0;
  local_80 = 1;
  local_78 = 0;
  *(undefined1 *)(lVar11 + 0x5d) = 0;
  local_90 = plVar6;
  FUN_0339ee08(&local_70,&local_a8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0);
  FUN_0339e0a4(&local_a8);
  if ((local_70 == (long *)0x0) ||
     (lVar11 = (**(code **)(*local_70 + 0x40))(local_70,&DAT_0436f848), lVar11 == 0)) {
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = (long *)0x0;
    lVar11 = *(long *)(lVar8 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar11;
    }
    plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,8,0);
    lVar11 = *(long *)(lVar8 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    lVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,0xc0,0);
    FUN_03309708();
    *plVar6 = lVar11;
    uStack_88 = 0;
    local_80 = 1;
    local_78 = 0;
    *(undefined1 *)(lVar11 + 0x5d) = 0;
    local_90 = plVar6;
    FUN_033a02b0(&local_68,&local_a8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 &DAT_042b8d58,0);
    if (local_68 == 0) {
joined_r0x02c0680c:
      bVar3 = false;
      lVar11 = local_68;
    }
    else {
      if ((local_60 == (ulong *)0x0) ||
         (uVar10 = FUN_032e225c(local_60,&DAT_042b8d58), (uVar10 & 1) == 0)) {
LAB_02c06814:
        FUN_032e6310(&local_68,3,1);
        local_68 = 0;
        goto joined_r0x02c0680c;
      }
      uVar10 = 0;
      do {
        uVar13 = (uint)uVar10;
        uVar14 = (uint)*local_60;
        if ((uVar14 >> 0x15 & 1) != 0) {
          uVar13 = (uVar14 & 0x1fffff) - (uVar14 >> 1 & 0x55555);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar10 = local_60[(ulong)((uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                   uVar10;
          uVar13 = (uint)uVar10;
        }
        if ((*local_60 & 1) != 0) break;
        uVar13 = (uint)uVar10;
        local_60 = (ulong *)local_60[1];
      } while (local_60 != (ulong *)0x0);
      if ((uVar13 >> 3 & 1) != 0) goto LAB_02c06814;
      bVar3 = true;
      lVar11 = local_68;
    }
    if ((local_58 & 1) != 0) {
      plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar6 = plVar7 + 1;
      do {
        lVar4 = *plVar6;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar1) {
          *(int *)plVar6 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    lVar4 = 0;
    if (bVar3) {
      lVar4 = lVar11;
    }
    FUN_0339e0a4(&local_a8);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 8) != 0)) {
      plVar6 = (long *)(lVar4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)*param_3;
    *param_3 = lVar4;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        lVar11 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    if (param_4 == (long *)0x0) goto joined_r0x02c06ddc;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar11 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar11;
    uVar15 = *(undefined8 *)(lVar11 + 0x230);
    if (param_2 != &DAT_cbf29ce484222645) {
      FUN_02bf9418(&local_a8,uVar15,param_2);
      plVar6 = local_a8;
      local_a8 = (long *)0x0;
      plVar7 = (long *)*param_4;
      *param_4 = (long)plVar6;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar6 = plVar7 + 2;
          do {
            lVar11 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((lVar11 + -1 == 0) && ((**(code **)(*plVar7 + 0x18))(), local_a8 != (long *)0x0)) &&
             (local_a8[1] != 0)) {
            plVar6 = local_a8 + 2;
            do {
              lVar11 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*local_a8 + 0x18))();
            }
          }
        }
        plVar6 = (long *)*param_4;
      }
      if (plVar6 != (long *)0x0) goto joined_r0x02c06ddc;
    }
    lVar11 = *(long *)(lVar8 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar11;
    }
    plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    local_b0 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,0);
    *local_b0 = (long)&PTR_LAB_042c6168;
    local_b0[1] = 0xffffffff;
    local_b0[2] = 1;
    *(undefined2 *)(local_b0 + 3) = 0xf101;
    local_b0[4] = 0;
    local_b0[5] = 0;
    plVar6 = (long *)*param_4;
    *param_4 = (long)local_b0;
    if (plVar6 != (long *)0x0) {
      if (plVar6[1] != 0) {
        plVar7 = plVar6 + 2;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      local_b0 = (long *)*param_4;
    }
    if ((local_b0 != (long *)0x0) && (local_b0[1] != 0)) {
      plVar6 = local_b0 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_02bf8ff0(uVar15,param_2,&local_b0);
    if ((local_b0 == (long *)0x0) || (local_b0[1] == 0)) goto joined_r0x02c06ddc;
    plVar6 = local_b0 + 2;
    do {
      lVar8 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = local_b0;
    } while (cVar2 != '\0');
  }
  else {
    if (*(int *)(lVar11 + 8) < 2) goto joined_r0x02c06ddc;
    puVar12 = &DAT_042b8d58;
    while( true ) {
      uVar13 = (uint)*puVar12;
      if ((uVar13 >> 3 & 1) != 0) break;
      if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
      goto LAB_02c066a8;
    }
    if (puVar12 != (ulong *)0x0) {
      uVar13 = (uVar13 & 7) - (uVar13 >> 1 & 1);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar10 = puVar12[(ulong)((uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_02c06988;
    }
LAB_02c066a8:
    uVar10 = 0;
LAB_02c06988:
    lVar8 = FUN_0339aad4(lVar11,uVar10,0);
    if (lVar8 == 0) {
      puVar12 = &DAT_042b98b0;
      while( true ) {
        uVar13 = (uint)*puVar12;
        if ((uVar13 >> 3 & 1) != 0) break;
        if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
        goto LAB_02c069b8;
      }
      if (puVar12 != (ulong *)0x0) {
        uVar13 = (uVar13 & 7) - (uVar13 >> 1 & 1);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar10 = puVar12[(ulong)((uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        goto LAB_02c06a08;
      }
LAB_02c069b8:
      uVar10 = 0;
LAB_02c06a08:
      lVar8 = FUN_0339aad4(lVar11,uVar10,0);
    }
    puVar12 = &DAT_042c61b0;
    while( true ) {
      uVar13 = (uint)*puVar12;
      if ((uVar13 >> 3 & 1) != 0) break;
      if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
      goto LAB_02c06a34;
    }
    if (puVar12 != (ulong *)0x0) {
      uVar13 = (uVar13 & 7) - (uVar13 >> 1 & 1);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar10 = puVar12[(ulong)((uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_02c06a70;
    }
LAB_02c06a34:
    uVar10 = 0;
LAB_02c06a70:
    plVar6 = (long *)FUN_0339aad4(lVar11,uVar10,0);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
      plVar7 = (long *)(lVar8 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)*param_3;
    *param_3 = lVar8;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar9 = plVar7 + 2;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    if (param_4 == (long *)0x0) goto joined_r0x02c06ddc;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar8 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar8;
    uVar15 = *(undefined8 *)(lVar8 + 0x230);
    if (param_2 != &DAT_cbf29ce484222645) {
      FUN_02bf9418(&local_a8,uVar15,param_2);
      plVar7 = local_a8;
      local_a8 = (long *)0x0;
      plVar9 = (long *)*param_4;
      *param_4 = (long)plVar7;
      if (plVar9 != (long *)0x0) {
        if (plVar9[1] != 0) {
          plVar7 = plVar9 + 2;
          do {
            lVar8 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        if ((local_a8 != (long *)0x0) && (local_a8[1] != 0)) {
          plVar7 = local_a8 + 2;
          do {
            lVar8 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*local_a8 + 0x18))();
          }
        }
        plVar7 = (long *)*param_4;
      }
      if (plVar7 != (long *)0x0) goto joined_r0x02c06ddc;
    }
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)*param_4;
    *param_4 = (long)plVar6;
    if (plVar7 != (long *)0x0) {
      if (plVar7[1] != 0) {
        plVar6 = plVar7 + 2;
        do {
          lVar8 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      plVar6 = (long *)*param_4;
    }
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_b8 = plVar6;
    FUN_02bf8ff0(uVar15,param_2,&local_b8);
    if ((local_b8 == (long *)0x0) || (local_b8[1] == 0)) goto joined_r0x02c06ddc;
    plVar6 = local_b8 + 2;
    do {
      lVar8 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = local_b8;
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x18))();
  }
joined_r0x02c06ddc:
  if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
    plVar6 = local_70 + 2;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  return;
}


