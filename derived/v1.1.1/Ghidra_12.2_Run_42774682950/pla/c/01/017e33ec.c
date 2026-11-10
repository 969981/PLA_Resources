/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e33ec; name: FUN_017e33ec
 */


/* WARNING: Removing unreachable block (ram,0x017e3740) */
/* WARNING: Removing unreachable block (ram,0x017e3744) */
/* WARNING: Removing unreachable block (ram,0x017e374c) */
/* WARNING: Removing unreachable block (ram,0x017e3754) */
/* WARNING: Removing unreachable block (ram,0x017e3758) */

void FUN_017e33ec(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  long lVar19;
  long *local_140;
  long *local_138;
  undefined1 local_130;
  char local_120;
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x88) == 0) {
    local_70 = (long *)0x0;
  }
  else {
    FUN_017e9e98(&local_70);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  if (lVar11 == 0) {
LAB_017e34f4:
    plVar7 = (long *)0x0;
  }
  else {
    plVar16 = *(long **)(lVar11 + 0xd0);
    plVar7 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        plVar16 = (long *)plVar16[0xb];
      }
      else {
        plVar16 = (long *)plVar16[0xb];
      }
      if (plVar16 == (long *)0x0) goto LAB_017e34f4;
      plVar9 = plVar16 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = (long *)(**(code **)(*plVar16 + 0x50))(plVar16,param_3);
      if (plVar7 != (long *)0x0) {
        plVar15 = plVar7 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      do {
        iVar5 = (int)*plVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  lVar11 = local_70[0x23];
  local_78 = (long *)FUN_017ea00c(lVar11);
  if (local_78 != (long *)0x0) {
    lVar19 = local_78[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_017e3e44;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar11 = FUN_017ea4e4(&local_140,lVar11);
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_017e3e44;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar16 = local_78;
  plVar9 = (long *)local_78[0xd];
  local_78[0xd] = 0;
  if (plVar9 != (long *)0x0) {
    lVar19 = plVar9[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  plVar16[0xd] = lVar11;
  *(int *)(local_78 + 0xf) = param_3;
  local_120 = '\0';
  local_138 = (long *)0x0;
  local_130 = 0;
  if (plVar7 == (long *)0x0) {
    local_140 = (long *)0x0;
  }
  else {
    plVar16 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_140 = plVar7;
  }
  plVar16 = (long *)local_78[0xd];
  if (plVar16 != (long *)0x0) {
    lVar11 = plVar16[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_017e3e44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
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
  if (local_138 != (long *)0x0) {
    lVar11 = local_138[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      lVar11 = *local_138;
      local_138 = plVar16;
      (**(code **)(lVar11 + 0x20))();
      plVar16 = local_138;
    }
  }
  local_138 = plVar16;
  local_130 = 0;
  lVar11 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_2 + 400);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x184));
        while (*plVar16 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_017e3628;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_017e3628:
  plVar16 = local_78;
  FUN_017e3e5c(local_78 + 0x10,&local_140);
  *(undefined4 *)((long)plVar16 + 0x7c) = 0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar11 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar11;
  uVar12 = *(ulong *)(lVar11 + 0x60);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else if (uVar12 < 0x4e9fd5f8e749f8e4) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0x4e9fd5f8e749f8e3 / uVar12;
      }
      uVar14 = 0x4e9fd5f8e749f8e3 - uVar14 * uVar12;
    }
    else {
      uVar14 = 0x4e9fd5f8e749f8e3;
    }
    plVar16 = *(long **)(*(long *)(lVar11 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar16[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e38ec;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) goto LAB_017e3d30;
          plVar16 = (long *)*plVar16;
          uVar18 = 0;
        } while (plVar16 != (long *)0x0);
        goto LAB_017e3a28;
      }
      do {
        uVar13 = plVar16[1];
        if (uVar13 == 0x4e9fd5f8e749f8e3) {
          if (plVar16[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e38ec;
        }
        else {
          if (uVar12 <= uVar13) {
            uVar4 = 0;
            if (uVar12 != 0) {
              uVar4 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar4 * uVar12;
          }
          if (uVar13 != uVar14) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_017e3d30:
  uVar18 = 0;
  goto LAB_017e3a28;
LAB_017e38ec:
  plVar16 = (long *)plVar16[3];
  if (plVar16 == (long *)0x0) goto LAB_017e3d30;
  plVar9 = plVar16 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *(int *)plVar9 = (int)*plVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar12 = plVar16[0x14];
  if (uVar12 == 0) {
    uVar18 = 0;
  }
  else {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0x97079ff0f02b8513;
    }
    else if (uVar12 < 0x97079ff0f02b8514) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0x97079ff0f02b8513 / uVar12;
      }
      uVar14 = 0x97079ff0f02b8513 - uVar14 * uVar12;
    }
    else {
      uVar14 = 0x97079ff0f02b8513;
    }
    plVar15 = *(long **)(plVar16[0x13] + uVar14 * 8);
    if (plVar15 == (long *)0x0) {
      uVar18 = 0;
    }
    else {
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        uVar18 = 0;
      }
      else if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0x97079ff0f02b8513) {
            if (plVar15[2] == -0x68f8600f0fd47aed) goto LAB_017e3a10;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) {
            uVar18 = 0;
            break;
          }
          plVar15 = (long *)*plVar15;
          uVar18 = 0;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0x97079ff0f02b8513) {
            if (plVar15[2] == -0x68f8600f0fd47aed) goto LAB_017e3a10;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar4 * uVar12;
            }
            if (uVar13 != uVar14) {
              uVar18 = 0;
              goto LAB_017e3a14;
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        uVar18 = 0;
      }
    }
  }
  goto LAB_017e3a14;
LAB_017e3a64:
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == param_2 + 0xb8) goto LAB_017e3b08;
  goto LAB_017e3a70;
LAB_017e3a10:
  uVar18 = (undefined4)plVar15[6];
LAB_017e3a14:
  do {
    iVar5 = (int)*plVar9 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *(int *)plVar9 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_017e3a28:
  if (*(int *)(param_2 + 0x1c0) < 1) {
    lVar11 = *(long *)(param_2 + 0xc0);
    if (lVar11 != param_2 + 0xb8) {
LAB_017e3a70:
      if ((*(int *)(*(long *)(lVar11 + 0x10) + 0x7c) == 0) ||
         (*(int *)(*(long *)(lVar11 + 0x10) + 0x78) != param_3)) goto LAB_017e3a64;
      FUN_017e62ec(&local_68);
      puVar17 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        iVar5 = *(int *)((long)local_68 + 0xc);
        if (local_68 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_68 + 1);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            local_68[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_58 = *puVar17;
            FUN_02a44274(lVar11 + 0xd8,&local_58);
          }
        }
        if (iVar5 == 0) goto LAB_017e3b0c;
        goto LAB_017e3a34;
      }
      goto LAB_017e3b0c;
    }
LAB_017e3b08:
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
LAB_017e3b0c:
    FUN_017e2bb4(param_2,&local_140);
    uVar10 = 1;
    plVar16 = local_78;
  }
  else {
LAB_017e3a34:
    plVar16 = local_78;
    *(undefined4 *)((long)local_78 + 0x74) = uVar18;
    FUN_017e3e5c(local_78 + 0x10,&local_140);
    uVar10 = 0;
  }
  *(undefined4 *)((long)plVar16 + 0x7c) = uVar10;
  puVar17 = (undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_2 + 0x1c0) = uVar18;
  plVar16 = (long *)(**(code **)(*(long *)*puVar17 + 0x10))((long *)*puVar17,0x18,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*(long *)*puVar17 + 0xb8))();
  }
  *plVar16 = 0;
  FUN_017eb490(puVar17,plVar16 + 2,&local_78);
  plVar16[1] = param_2 + 0xb8;
  lVar11 = *(long *)(param_2 + 0xb8);
  *plVar16 = lVar11;
  *(long **)(lVar11 + 8) = plVar16;
  *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
  *(long **)(param_2 + 0xb8) = plVar16;
  *(undefined8 *)(param_2 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x184));
  (**(code **)(*(long *)local_78[0xd] + 0x10))(&local_68);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_017e80a4(param_1,&local_68);
  puVar17 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar17;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  if (local_120 != '\0') {
    local_120 = '\0';
  }
  if (local_138 != (long *)0x0) {
    lVar11 = local_138[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  if (local_140 != (long *)0x0) {
    plVar16 = local_140 + 10;
    do {
      iVar5 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  if (local_78 != (long *)0x0) {
    lVar11 = local_78[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar16 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar11 = local_70[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


