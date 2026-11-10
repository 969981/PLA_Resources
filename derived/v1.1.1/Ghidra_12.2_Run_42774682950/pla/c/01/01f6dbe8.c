/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f6dbe8; name: FUN_01f6dbe8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f6dbe8(long param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *local_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  FUN_017e9e98(&local_f8);
  if (local_f8 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    plVar15 = (long *)0x0;
    local_100 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_100);
    if (local_100 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
         (uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar14 == 0)) {
        uVar11 = 0;
        if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f6de5c;
LAB_01f6de08:
        plVar15 = (long *)0x0;
        local_108 = (long *)0x0;
      }
      else {
        uVar11 = *(undefined8 *)((long)param_3 + uVar14);
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f6de08;
LAB_01f6de5c:
        FUN_009acf14(&local_108);
        if (local_108 == (long *)0x0) {
          plVar15 = (long *)0x0;
        }
        else {
          local_f0 = (long *)0x0;
          local_e8 = (code *)0x0;
          FUN_00b645bc(&local_f0,local_108 + 0xd);
          plVar15 = local_f0;
          puVar7 = PTR_DAT_0437a0f0;
          if (local_f0 == (long *)0x0) {
            plVar15 = (long *)0x0;
          }
          else {
            if (*(int *)((long)local_f0 + 0xc) != 0) {
              piVar1 = (int *)((long)local_f0 + 0xc);
              iVar10 = *(int *)((long)local_f0 + 0xc);
              do {
                plVar16 = (long *)plVar15[2];
                if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar9 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                    uVar12 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a0e8);
                }
                plVar5 = (long *)0x0;
                plVar6 = local_f0;
                if (plVar16 == (long *)0x0) goto joined_r0x01f6dfe4;
                while (plVar16 != (long *)puVar7) {
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) {
                    plVar5 = (long *)0x0;
                    goto joined_r0x01f6dfe4;
                  }
                }
                iVar9 = *piVar1;
                if (iVar9 == iVar10) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar10 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar13 = plVar15[3];
                    plVar5 = (long *)0x0;
                    if (lVar13 != 0) {
                      plVar5 = (long *)(lVar13 + -0x50);
                    }
                    goto joined_r0x01f6dfe4;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar10 = iVar9;
              } while (iVar9 != 0);
            }
            plVar5 = (long *)0x0;
            plVar6 = local_f0;
joined_r0x01f6dfe4:
            local_f0 = plVar6;
            if (plVar6 != (long *)0x0) {
              plVar15 = plVar6 + 1;
              do {
                iVar10 = (int)*plVar15 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar4) {
                  *(int *)plVar15 = iVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 == 0) {
                plVar6[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_1b0 = (long *)*plVar6;
                FUN_02a44274(lVar13 + 0xd8,&local_1b0);
              }
            }
            if (plVar5 == (long *)0x0) {
              plVar15 = (long *)0x0;
            }
            else {
              uVar14 = FUN_01845504(plVar5,uVar11);
              if ((uVar14 & 1) == 0) {
                local_1b0 = (long *)0x0;
                plVar15 = (long *)*param_4;
                if (plVar15 == (long *)0x0) {
                  if (((*PTR_DAT_04379520 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528,
                     iVar10 != 0)) {
                    FUN_008a62a4(PTR_DAT_04379528);
                    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379520);
                  }
                  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                  if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = param_2;
                  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
                  plVar15 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,0x10);
                  if (plVar15 == (long *)0x0) {
                    (**(code **)(*param_2 + 0xb8))(param_2);
                  }
                  FUN_01cc5980(plVar15,param_3,param_2);
                  plVar15[1] = (long)param_2;
                  plVar15[2] = (long)plVar15;
                  plVar15[3] = 0x140;
                  plVar15[4] = 0x10;
                  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
                  if (plVar15 != (long *)0x0) {
                    lVar13 = plVar15[0xb];
                    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f6e334;
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
                  plVar16 = local_1b0;
                  local_1b0 = (long *)0x0;
                  if (plVar16 != (long *)0x0) {
                    lVar13 = plVar16[0xb];
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
                      (**(code **)(*plVar16 + 0x20))();
                    }
                  }
                }
                else {
                  lVar13 = plVar15[0xb];
                  if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f6e334;
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
                  if (local_1b0 != (long *)0x0) {
                    lVar13 = local_1b0[0xb];
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
                      lVar13 = *local_1b0;
                      local_1b0 = plVar15;
                      (**(code **)(lVar13 + 0x20))();
                      plVar15 = local_1b0;
                    }
                  }
                }
                local_1b0 = plVar15;
                if ((char)local_1b0[0x16] == '\0') {
                  plVar15 = (long *)0x0;
                }
                else {
                  local_190 = 0;
                  local_188 = (code *)0x0;
                  local_180 = 0;
                  uStack_178 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_f0 = (long *)0x0;
                  local_e8 = (code *)0x0;
                  FUN_00bdc73c(&local_110,local_108[0xf],0xc,&local_1b0,&local_f0,1);
                  pcVar8 = local_e8;
                  if (local_e8 != (code *)0x0) {
                    local_e0 = 0;
                    uStack_d8 = 0;
                    local_f0 = (long *)0x0;
                    local_e8 = (code *)0x0;
                    (*pcVar8)(auStack_d0);
                  }
                  plVar15 = local_110;
                  pcVar8 = local_188;
                  local_110 = (long *)0x0;
                  bVar4 = local_188 != (code *)0x0;
                  local_188 = (code *)0x0;
                  if (bVar4) {
                    local_180 = 0;
                    uStack_178 = 0;
                    local_190 = 0;
                    local_188 = (code *)0x0;
                    (*pcVar8)(auStack_170);
                  }
                }
                if (local_1b0 != (long *)0x0) {
                  lVar13 = local_1b0[0xb];
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
                    (**(code **)(*local_1b0 + 0x20))();
                  }
                }
              }
              else {
                if (*(ushort *)((long)param_3 - (long)*param_3) < 0xd) {
                  local_f0 = (long *)0x0;
                }
                else {
                  uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[6];
                  local_f0 = (long *)0x0;
                  if (uVar14 != 0) {
                    puVar2 = (uint *)((long)param_3 + uVar14);
                    local_f0 = (long *)((long)puVar2 + (ulong)*puVar2);
                  }
                }
                FUN_019c95e0(&local_1b0,*(undefined8 *)(param_1 + 8),&local_f0);
                (**(code **)(*local_1b0 + 0x18))(&local_f0);
                if ((char)local_f0 == '\0') {
                  FUN_01847304(plVar5,uVar11);
                  if ((char)local_f0 != '\0') goto LAB_01f6e394;
                }
                else {
LAB_01f6e394:
                  local_f0 = (long *)((ulong)local_f0 & 0xffffffffffffff00);
                }
                plVar15 = local_1b0;
                local_1b0 = (long *)0x0;
                if (plVar15 != (long *)0x0) {
                  FUN_02bcbe58(&local_f0,0);
                  (**(code **)(*plVar15 + 8))(plVar15);
                  uVar14 = (**(code **)(*local_1a8 + 0xc0))(local_1a8);
                  lVar13 = tpidr_el0;
                  if ((uVar14 & 1) == 0) {
LAB_01f6e4c0:
                    (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar15,uStack_1a0,local_198);
                  }
                  else {
                    if (*(char *)(lVar13 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar13 + 0x38d488) = 1;
                      *(undefined8 *)(lVar13 + 0x38d478) = 0;
                      *(undefined8 *)(lVar13 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_01f6e4c0;
                    FUN_02bcc824(local_1a8,plVar15,uStack_1a0,local_198);
                  }
                  if (*(char *)(lVar13 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar13 + 0x38d488) = 1;
                    *(undefined8 *)(lVar13 + 0x38d478) = 0;
                    *(undefined8 *)(lVar13 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
                  *(int *)(lVar13 + 0x38d480) = iVar10;
                  if (iVar10 == 0) {
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
                plVar15 = (long *)0x0;
              }
              lVar13 = plVar5[0xb];
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
                (**(code **)(*plVar5 + 0x20))(plVar5);
              }
            }
          }
          if (local_108 != (long *)0x0) {
            lVar13 = local_108[0xb];
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
              (**(code **)(*local_108 + 0x20))();
            }
          }
        }
      }
      if (local_100 != (long *)0x0) {
        lVar13 = local_100[0xb];
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
          (**(code **)(*local_100 + 0x20))();
        }
      }
    }
  }
  if (local_f8 != (long *)0x0) {
    lVar13 = *(long *)((long)local_f8 + 0x58);
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
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar13 = *(long *)((long)plVar15 + 0x58);
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
    uVar11 = *(undefined8 *)(param_1 + 0x98);
    lVar13 = *(long *)((long)plVar15 + 0x58);
    local_f0 = plVar15;
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
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
      FUN_01cbc9e0(uVar11,&local_f0,0);
      if (local_f0 != (long *)0x0) {
        lVar13 = local_f0[0xb];
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
          (**(code **)(*local_f0 + 0x20))();
        }
      }
      lVar13 = *(long *)((long)plVar15 + 0x58);
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
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar13 = *(long *)((long)plVar15 + 0x58);
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
        (**(code **)(*plVar15 + 0x20))(plVar15);
        return;
      }
      return;
    }
  }
LAB_01f6e334:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


