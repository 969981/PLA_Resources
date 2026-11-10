/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd8b48; name: FUN_00cd8b48
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00cd8b48(long *param_1,undefined8 param_2,long *param_3,int param_4,byte param_5,
                 uint param_6)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  if (*param_3 == 0) {
    lVar13 = *param_1;
  }
  else {
    FUN_00b911c4(&local_88,*param_3);
    plVar17 = local_88;
    if ((local_88 != (long *)0x0) && (((param_5 ^ 1) & 1) == 0)) {
      lVar13 = nn::os::GetCurrentThread();
      plVar18 = plVar17 + 0x165;
      do {
        if (*plVar18 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0xb1c));
            while (*plVar18 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar8) {
                *plVar18 = lVar13;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00cd8c84;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar8) {
          *plVar18 = lVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00cd8c84:
      if (*(char *)((long)plVar17 + 0xb11) != '\0') {
        plVar17[0x165] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0xb1c));
        lVar13 = plVar17[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 + -1 != 0) {
          return;
        }
        *(undefined8 *)(lVar13 + 0x18) = 0;
        pcVar15 = *(code **)(*plVar17 + 0x20);
        goto LAB_00cd8c14;
      }
      *(undefined1 *)((long)plVar17 + 0xb11) = 1;
      plVar17[0x165] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0xb1c));
    }
    if (plVar17 != (long *)0x0) {
      lVar13 = plVar17[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    lVar13 = *param_1;
  }
  if (lVar13 != 0) {
    FUN_00c42600(&local_88);
    if (local_88 != (long *)0x0) {
      FUN_019f7be4(local_88,(param_5 ^ 1) & 1,0x40);
      lVar13 = local_88[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))(local_88);
      }
    }
  }
  FUN_00be5694(&local_70,param_2);
  if (local_70 == (long *)0x0) {
    return;
  }
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_00ae8374(&local_88,local_70 + 0x44);
  plVar17 = local_88;
  puVar10 = PTR_DAT_04379e80;
  puVar9 = PTR_DAT_04379e78;
  if (local_88 == (long *)0x0) {
LAB_00cd8bbc:
    lVar13 = *param_3;
  }
  else {
    if (*(int *)((long)local_88 + 0xc) != 0) {
      piVar1 = (int *)((long)local_88 + 0xc);
      iVar12 = *(int *)((long)local_88 + 0xc);
      do {
        plVar18 = (long *)plVar17[2];
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          uVar14 = FUN_0095a420();
          *(undefined8 *)puVar10 = uVar14;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_00cd8dbc;
          if (plVar18 == (long *)puVar10) break;
          plVar18 = (long *)*plVar18;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            lVar13 = plVar17[3];
            plVar17 = (long *)0x0;
            plVar18 = local_88;
            if (lVar13 != 0) {
              plVar17 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x00cd8de0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00cd8dbc:
    plVar17 = (long *)0x0;
    plVar18 = local_88;
joined_r0x00cd8de0:
    local_88 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar2 = plVar18 + 1;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        plVar18[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *plVar18;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar17 == (long *)0x0) goto LAB_00cd8bbc;
    uVar5 = *(uint *)((long)plVar17 + 0x214);
    uVar3 = uVar5 | param_6;
    if ((param_5 & 1) == 0) {
      uVar3 = uVar5 & (param_6 ^ 0xffffffff);
    }
    bVar8 = (uVar5 != 0) != (uVar3 != 0);
    if ((((uVar3 == uVar5) || (((param_5 ^ 1 ^ uVar3 != 0) & 1) == 0)) ||
        (iVar12 = *(int *)((long)plVar17 + 0x21c), iVar12 == 0)) ||
       (*(int *)((long)plVar17 + 0x224) == param_4)) {
      if (!bVar8) goto LAB_00cd8e80;
LAB_00cd8f7c:
      if (param_4 < 1) {
        *(undefined8 *)((long)plVar17 + 0x21c) = 0;
        *(undefined4 *)((long)plVar17 + 0x224) = 0;
        uVar6 = *(undefined4 *)((long)plVar17 + 0x22c);
        *(undefined4 *)(plVar17 + 0x45) = uVar6;
        if (uVar3 == 0) {
          *(undefined4 *)(plVar17 + 0x45) = uVar6;
          FUN_01bdb280(uVar6,plVar17);
          if ((int)plVar17[0x42] != 0) {
            *(undefined4 *)(plVar17 + 0x42) = 0;
            goto LAB_00cd904c;
          }
        }
        else {
          *(undefined4 *)(plVar17 + 0x45) = 0;
          FUN_01bdb280(0,plVar17);
          if (*(uint *)(plVar17 + 0x42) != uVar3) {
            *(uint *)(plVar17 + 0x42) = uVar3;
LAB_00cd904c:
            FUN_01bdb4e8(plVar17);
          }
        }
      }
      else {
        if (uVar3 == 0) {
          if ((int)plVar17[0x42] != 0) {
            *(undefined4 *)(plVar17 + 0x42) = 0;
            FUN_01bdb4e8(plVar17);
          }
          iVar11 = 1;
          iVar12 = *(int *)((long)plVar17 + 0x21c);
        }
        else {
          iVar11 = 2;
          iVar12 = *(int *)((long)plVar17 + 0x21c);
        }
        if (iVar12 == 0) {
          *(int *)((long)plVar17 + 0x21c) = iVar11;
          *(undefined4 *)(plVar17 + 0x44) = 0;
          *(int *)((long)plVar17 + 0x224) = param_4;
          if (iVar11 == 1) {
            *(undefined4 *)(plVar17 + 0x45) = 0;
          }
          else {
            *(undefined4 *)(plVar17 + 0x45) = *(undefined4 *)((long)plVar17 + 0x22c);
          }
        }
        else if (iVar12 == iVar11) {
          if ((param_4 < *(int *)((long)plVar17 + 0x224)) &&
             (*(int *)((long)plVar17 + 0x224) = param_4, param_4 < (int)plVar17[0x44])) {
            *(int *)(plVar17 + 0x44) = param_4;
          }
        }
        else {
          *(int *)((long)plVar17 + 0x21c) = iVar11;
          *(undefined4 *)(plVar17 + 0x44) = 0;
          *(int *)((long)plVar17 + 0x224) = param_4;
        }
      }
      *(uint *)((long)plVar17 + 0x214) = uVar3;
    }
    else {
      if ((param_5 & 1) == 0) {
        if (!bVar8 && ((param_5 ^ 1) & iVar12 == 1) == 0) goto LAB_00cd8e80;
        goto LAB_00cd8f7c;
      }
      if (bVar8 || iVar12 == 2) goto LAB_00cd8f7c;
LAB_00cd8e80:
      *(uint *)((long)plVar17 + 0x214) = uVar3;
      if ((*(uint *)(plVar17 + 0x42) != uVar3) && (*(int *)((long)plVar17 + 0x21c) == 0)) {
        *(uint *)(plVar17 + 0x42) = uVar3;
      }
    }
    lVar13 = plVar17[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 != 0) goto LAB_00cd8bbc;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
    lVar13 = *param_3;
  }
  plVar18 = local_88;
  plVar17 = local_70;
  if (lVar13 != 0) {
    FUN_00b911c4(&local_88);
    plVar2 = local_88;
    plVar18 = (long *)0x0;
    plVar17 = local_70;
    if (local_88 != (long *)0x0) {
      plVar17 = local_88 + 0xac;
      *(byte *)(local_88 + 0x152) = param_5 & 1;
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_0095aa3c(&local_88,plVar17);
      plVar17 = local_88;
      puVar10 = PTR_DAT_043794d8;
      puVar9 = PTR_DAT_043794d0;
      local_78 = (long *)plVar2[0xae];
      if (local_88 != (long *)0x0) {
        if (*(int *)((long)local_88 + 0xc) != 0) {
          piVar1 = (int *)((long)local_88 + 0xc);
          iVar12 = *(int *)((long)local_88 + 0xc);
          do {
            plVar18 = (long *)plVar17[2];
            plVar16 = local_78;
            if (((*puVar9 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(puVar9), plVar16 = local_78, iVar11 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar10 = uVar14;
              __cxa_guard_release(puVar9);
              plVar16 = local_78;
            }
            while( true ) {
              local_78 = plVar16;
              if (plVar18 == (long *)0x0) goto LAB_00cd91f8;
              if (plVar18 == (long *)puVar10) break;
              plVar18 = (long *)*plVar18;
            }
            iVar11 = *piVar1;
            if (iVar11 == iVar12) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar12 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') {
                lVar13 = plVar17[3];
                if (lVar13 != 0) {
                  plVar17 = (long *)(lVar13 + -8);
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  plVar17 = local_88;
                  goto joined_r0x00cd91f0;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar11;
          } while (iVar11 != 0);
        }
LAB_00cd91f8:
        plVar16 = (long *)0x0;
        plVar17 = local_88;
joined_r0x00cd91f0:
        local_88 = plVar17;
        if (plVar17 != (long *)0x0) {
          plVar18 = plVar17 + 1;
          do {
            iVar12 = (int)*plVar18 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar8) {
              *(int *)plVar18 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            plVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *plVar17;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar16 != (long *)0x0) {
          uVar4 = plVar16[1] | 1;
          if ((param_5 & 1) == 0) {
            uVar4 = plVar16[1] & 0xfffffffffffffffe;
          }
          plVar16[1] = uVar4;
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      lVar13 = plVar2[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar18 = local_88;
      plVar17 = local_70;
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar2 + 0x20))(plVar2);
        plVar18 = local_88;
        plVar17 = local_70;
      }
    }
  }
  local_88 = plVar18;
  if (plVar17 == (long *)0x0) {
    return;
  }
  lVar13 = plVar17[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar12 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar12 + -1 != 0) {
    return;
  }
  *(undefined8 *)(lVar13 + 0x18) = 0;
  pcVar15 = *(code **)(*plVar17 + 0x20);
LAB_00cd8c14:
  (*pcVar15)(plVar17);
  return;
}


