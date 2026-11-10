/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121be68; name: FUN_0121be68
 */


void FUN_0121be68(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  short sVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ushort uVar20;
  long lVar21;
  undefined1 *puVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint uVar26;
  undefined8 uVar27;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar11 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar13 = PTR_DAT_04379568;
  puVar12 = PTR_DAT_04379560;
  lVar21 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar21;
  plVar23 = *(long **)(lVar21 + 0x248);
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0121c580;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar12;
  *(long *)puVar13 = lVar21;
  plVar24 = *(long **)(lVar21 + 0x240);
  if (plVar24 != (long *)0x0) {
    lVar21 = plVar24[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_0121c580:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379678), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar21 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar21;
  plVar16 = *(long **)(lVar21 + 0xd0);
  if (plVar16 != (long *)0x0) {
    plVar25 = plVar16 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar9) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar25 = (long *)plVar16[0xb];
  if (plVar25 != (long *)0x0) {
    plVar2 = plVar25 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar2 = plVar16 + 10;
  do {
    iVar14 = (int)*plVar2 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *(int *)plVar2 = iVar14;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar16 + 0x10))();
    iVar14 = param_2[1];
    if (*param_2 == 0) goto LAB_0121bfc8;
LAB_0121c0ec:
    if (iVar14 == 0) {
      bVar4 = *(byte *)((long)plVar23 + 0x4a9);
      uVar26 = (uint)bVar4;
      if (*(short *)((long)param_2 + 0xe) != 1) {
        if (*(short *)((long)param_2 + 0xe) != 0) {
          uVar15 = *(undefined8 *)(param_1 + 8);
          uVar26 = 0;
          do {
            uVar27 = *(undefined8 *)(param_1 + 0x1660);
            uVar18 = (**(code **)(*plVar25 + 0x58))(plVar25,(short)param_2[2]);
            FUN_02c653d0(uVar27,uVar18);
            local_80 = *(long **)(param_1 + 0x1660);
            if (local_80 != (long *)0x0) {
              plVar16 = local_80 + 10;
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar9) {
                  *(int *)plVar16 = (int)*plVar16 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            FUN_010e1280(plVar24,&local_80,uVar15,bVar4,
                         (uint)*(ushort *)((long)param_2 + 10) + uVar26 * 6);
            if (local_80 != (long *)0x0) {
              plVar16 = local_80 + 10;
              do {
                iVar14 = (int)*plVar16 + -1;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar9) {
                  *(int *)plVar16 = iVar14;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*local_80 + 0x10))();
              }
            }
            (**(code **)(*plVar25 + 0x38))(plVar25,(short)param_2[2]);
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(ushort *)((long)param_2 + 0xe));
        }
        goto LAB_0121c004;
      }
      uVar7 = *(undefined2 *)((long)param_2 + 10);
      uVar20 = *(ushort *)(param_2 + 2);
LAB_0121c000:
      FUN_0121c9c8(param_1,uVar26,uVar7,uVar20);
    }
    else if (*(short *)((long)param_2 + 0xe) == 1) {
      if (*(ushort *)((long)param_2 + 10) < (ushort)*(byte *)(plVar25 + 0x11)) {
        (**(code **)(*plVar25 + 0x40))(plVar25,(char)param_2[2]);
      }
      else {
        uVar18 = *(undefined8 *)(param_1 + 0x1660);
        uVar15 = (**(code **)(*plVar25 + 0x58))(plVar25,(short)param_2[2]);
        FUN_02c653d0(uVar18,uVar15);
        (**(code **)(*plVar25 + 0x38))(plVar25,(short)param_2[2]);
        (**(code **)(*plVar25 + 0x28))(plVar25,*(undefined8 *)(param_1 + 0x1660));
      }
    }
    else if ((*(short *)((long)param_2 + 0xe) != 0) &&
            (bVar4 = *(byte *)(plVar25 + 0x11), (ushort)bVar4 <= *(ushort *)((long)param_2 + 10))) {
      uVar26 = 0;
      do {
        (**(code **)(*plVar25 + 0x40))(plVar25,(char)param_2[2],bVar4);
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ushort *)((long)param_2 + 0xe));
    }
LAB_0121c004:
    FUN_0121cd4c(param_1);
LAB_0121c00c:
    puVar22 = *(undefined1 **)(param_1 + 0x1650);
  }
  else {
    iVar14 = param_2[1];
    if (*param_2 != 0) goto LAB_0121c0ec;
LAB_0121bfc8:
    if (iVar14 != 0) {
      if ((short)param_2[3] != 1) goto LAB_0121c048;
      if (*(short *)((long)param_2 + 0xe) == 1) {
        uVar20 = *(ushort *)((long)param_2 + 10);
        if (uVar20 < *(byte *)(plVar25 + 0x11)) {
          uVar26 = *(uint *)(param_1 + 0x1674);
          uVar7 = (undefined2)param_2[2];
          goto LAB_0121c000;
        }
        plVar16 = *(long **)(param_1 + 0x1660);
        if (plVar16 != (long *)0x0) {
          plVar2 = plVar16 + 10;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if ((*(uint *)(param_1 + 0x1674) < 0x20) && (*(ushort *)(param_2 + 2) < 0x1e)) {
          (**(code **)(*plVar16 + 0x28))
                    (plVar16,plVar24 + (ulong)*(uint *)(param_1 + 0x1674) * 0x546 +
                                       (ulong)*(ushort *)(param_2 + 2) * 0x2d + 0xd);
        }
        if (plVar16 != (long *)0x0) {
          plVar2 = plVar16 + 10;
          do {
            iVar14 = (int)*plVar2 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = iVar14;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        iVar14 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x1660) + 0x98));
        if (iVar14 == 0) goto LAB_0121c048;
        FUN_02c63970(*(undefined8 *)(param_1 + 0x1660));
        uVar17 = (**(code **)(*plVar25 + 0x28))(plVar25,*(undefined8 *)(param_1 + 0x1660));
        if ((uVar17 & 1) != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x1674);
          iVar14 = param_2[2];
          local_70 = *(long **)(param_1 + 0x1660);
          if (local_70 != (long *)0x0) {
            plVar16 = local_70 + 10;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar9) {
                *(int *)plVar16 = (int)*plVar16 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          FUN_010e2508(plVar24,uVar3,(short)iVar14,&local_70);
          if (local_70 != (long *)0x0) {
            plVar16 = local_70 + 10;
            do {
              iVar14 = (int)*plVar16 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar9) {
                *(int *)plVar16 = iVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*local_70 + 0x10))();
            }
          }
        }
      }
      else if (*(short *)((long)param_2 + 0xe) != 0) {
        uVar26 = 0;
        do {
          uVar17 = (ulong)*(ushort *)(param_2 + 2) + (ulong)uVar26 * 6;
          plVar16 = *(long **)(param_1 + 0x1660);
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 10;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if ((uint)uVar17 < 0x1e && *(uint *)(param_1 + 0x1674) < 0x20) {
            (**(code **)(*plVar16 + 0x28))
                      (plVar16,plVar24 + (ulong)*(uint *)(param_1 + 0x1674) * 0x546 +
                                         uVar17 * 0x2d + 0xd);
          }
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 10;
            do {
              iVar14 = (int)*plVar2 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(int *)plVar2 = iVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          iVar14 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x1660) + 0x98));
          if (iVar14 != 0) {
            if (uVar26 + *(ushort *)((long)param_2 + 10) < (uint)*(byte *)(plVar25 + 0x11))
            goto LAB_0121c048;
            FUN_02c63970(*(undefined8 *)(param_1 + 0x1660));
            uVar19 = (**(code **)(*plVar25 + 0x28))(plVar25,*(undefined8 *)(param_1 + 0x1660));
            if ((uVar19 & 1) != 0) {
              uVar3 = *(undefined4 *)(param_1 + 0x1674);
              local_78 = *(long **)(param_1 + 0x1660);
              if (local_78 != (long *)0x0) {
                plVar16 = local_78 + 10;
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar9) {
                    *(int *)plVar16 = (int)*plVar16 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              FUN_010e2508(plVar24,uVar3,uVar17 & 0xffffffff,&local_78);
              if (local_78 != (long *)0x0) {
                plVar16 = local_78 + 10;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar9) {
                    *(int *)plVar16 = iVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (iVar14 == 0) {
                  (**(code **)(*local_78 + 0x10))();
                }
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(ushort *)((long)param_2 + 0xe));
      }
      goto LAB_0121c004;
    }
    iVar14 = param_2[3];
    uVar5 = *(undefined1 *)((long)plVar23 + 0x4a9);
    sVar6 = *(short *)((long)param_2 + 0xe);
    uVar3 = *(undefined4 *)(param_1 + 0x1674);
    iVar10 = param_2[2];
    uVar7 = *(undefined2 *)((long)param_2 + 10);
    if (((short)iVar14 != 1) || (sVar6 != 1)) {
      local_68 = *(long **)(param_1 + 0x1660);
      if (local_68 != (long *)0x0) {
        plVar16 = local_68 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_010e1c00(plVar24,uVar3,(short)iVar10,uVar5,uVar7,(short)iVar14,sVar6,&local_68,
                   *(undefined8 *)(param_1 + 8));
      if (local_68 != (long *)0x0) {
        plVar16 = local_68 + 10;
        do {
          iVar14 = (int)*plVar16 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*local_68 + 0x10))();
          puVar22 = *(undefined1 **)(param_1 + 0x1650);
          goto joined_r0x0121c180;
        }
      }
      goto LAB_0121c00c;
    }
    FUN_010e1418(plVar24);
    puVar22 = *(undefined1 **)(param_1 + 0x1650);
  }
joined_r0x0121c180:
  if ((puVar22 != (undefined1 *)0x0) &&
     (((*param_2 == 1 && ((short)param_2[2] == 0)) ||
      ((param_2[1] == 1 && (*(short *)((long)param_2 + 10) == 0)))))) {
    *puVar22 = 1;
  }
  FUN_0121795c(param_1,param_2[1],*(undefined2 *)((long)param_2 + 10),0);
LAB_0121c048:
  if (plVar25 != (long *)0x0) {
    plVar16 = plVar25 + 10;
    do {
      iVar14 = (int)*plVar16 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = iVar14;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar21 = plVar24[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  return;
}


