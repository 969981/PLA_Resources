/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa8380; name: FUN_02aa8380
 */


undefined8 FUN_02aa8380(long param_1)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  code *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [100];
  undefined4 local_6c;
  undefined8 local_68;
  
  plVar18 = (long *)(param_1 + 0x90);
  if (*plVar18 == 0) {
    lVar13 = FUN_02a9e788(&local_f0,*(undefined8 *)(param_1 + 8),&DAT_043ef568);
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x50);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar14 = (long *)*plVar18;
    *plVar18 = 0;
    if (plVar14 != (long *)0x0) {
      plVar19 = plVar14 + 10;
      do {
        iVar11 = (int)*plVar19 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *(int *)plVar19 = iVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    *plVar18 = lVar13;
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x80) + 0x1f0);
  if (plVar14 != (long *)0x0) {
    plVar19 = plVar14 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puVar10 = PTR_DAT_0437a570;
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  plVar19 = (long *)PTR_DAT_0437a578;
  if (plVar14[0x19] != 0) {
    plVar19 = (long *)(plVar14[0x19] + 0x88);
  }
  lVar13 = *plVar19;
  if ((*(char *)(param_1 + 0x99) == '\0') || (lVar13 != 0)) {
    FUN_02b3bbf8(*(undefined8 *)(param_1 + 0x88),plVar18,*(undefined1 *)(param_1 + 0x98));
    puVar9 = PTR_DAT_043794b8;
    lVar24 = *(long *)(*(long *)(param_1 + 0x80) + 0x1a8);
    if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
LAB_02aa8488:
      plVar18 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar24 + 0xc);
      iVar11 = *(int *)(lVar24 + 0xc);
      do {
        puVar20 = *(undefined8 **)(lVar24 + 0x10);
        if (((*PTR_DAT_043794b0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar12 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
              uVar17 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar17;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar9 = PTR_DAT_043794c8;
          __cxa_guard_release(PTR_DAT_043794b0);
        }
        if (puVar20 == (undefined8 *)0x0) goto LAB_02aa8488;
        while (puVar20 != (undefined8 *)puVar9) {
          puVar20 = (undefined8 *)*puVar20;
          plVar18 = (long *)0x0;
          if (puVar20 == (undefined8 *)0x0) goto LAB_02aa848c;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar11 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            plVar18 = (long *)0x0;
            if (*(long *)(lVar24 + 0x18) != 0) {
              plVar18 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar18 = (long *)0x0;
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_02aa848c:
    plVar19 = *(long **)(*(long *)(param_1 + 0x88) + 0x128);
    if (plVar19 != (long *)0x0) {
      plVar22 = plVar19 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar13 == 0) {
        plVar18 = *(long **)(param_1 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar10 = PTR_DAT_04379528;
          if (iVar11 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar18;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        lVar13 = (**(code **)(*plVar18 + 0x10))(plVar18,0x210,0x10);
        if (lVar13 == 0) {
          (**(code **)(*plVar18 + 0xb8))(plVar18);
                    /* WARNING: Subroutine does not return */
          FUN_02a4c1e4(0,0x8008808a);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02a4c1e4(lVar13,0x8008808a);
      }
      local_f0 = (code *)plVar19[0x11];
      if (local_f0 != (code *)0x0) {
        pcVar2 = local_f0 + 0x50;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar8) {
            *(int *)pcVar2 = *(int *)pcVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      puVar20 = (undefined8 *)PTR_DAT_0437a578;
      if (plVar14[0x19] != 0) {
        puVar20 = (undefined8 *)(plVar14[0x19] + 0x88);
      }
      plVar21 = (long *)*puVar20;
      if (plVar21 == (long *)0x0) {
        FUN_02b645c8(0,&local_f0,0,0xffff);
        FUN_02b64be8(0);
      }
      else {
        plVar15 = plVar21 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_02b645c8(plVar21,&local_f0,0,0xffff);
        FUN_02b64be8(plVar21);
        do {
          iVar11 = (int)*plVar15 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *(int *)plVar15 = iVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      if (local_f0 != (code *)0x0) {
        pcVar2 = local_f0 + 0x50;
        do {
          iVar11 = *(int *)pcVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar8) {
            *(int *)pcVar2 = iVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 + -1 == 0) {
          (**(code **)(*(long *)local_f0 + 0x10))();
        }
      }
      do {
        iVar11 = (int)*plVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = iVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    lVar13 = *(long *)(param_1 + 0x88);
    lVar24 = *(long *)(lVar13 + 0xb8);
    if ((0 < (int)((ulong)(*(long *)(lVar24 + 0x278) - *(long *)(lVar24 + 0x270)) >> 5)) &&
       (lVar23 = (long)*(int *)(lVar13 + 0x168), *(int *)(param_1 + 0xa0) < *(int *)(lVar13 + 0x168)
       )) {
      plVar19 = plVar14 + 10;
      do {
        lVar23 = lVar23 + -1;
        plVar22 = *(long **)(*(long *)(lVar13 + 0xe8) + lVar23 * 8);
        if (plVar22 != (long *)0x0) {
          plVar21 = plVar22 + 10;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *(int *)plVar21 = (int)*plVar21 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plVar21 = (long *)FUN_02aa9abc(plVar18,*(undefined8 *)(param_1 + 8));
        if (plVar22 != (long *)0x0) {
          plVar15 = plVar22 + 10;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plVar15 = (long *)plVar21[0x40];
        plVar21[0x40] = (long)plVar22;
        if (plVar15 != (long *)0x0) {
          plVar4 = plVar15 + 10;
          do {
            iVar11 = (int)*plVar4 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(int *)plVar4 = iVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
        }
        *(undefined4 *)(plVar21 + 0x3f) = 4;
        *(int *)(plVar21 + 0x41) = (int)lVar23;
        if (plVar14 != (long *)0x0) {
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar8) {
              *(int *)plVar19 = (int)*plVar19 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plVar15 = (long *)plVar21[0x3e];
        plVar21[0x3e] = (long)plVar14;
        if (plVar15 != (long *)0x0) {
          plVar4 = plVar15 + 10;
          do {
            iVar11 = (int)*plVar4 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(int *)plVar4 = iVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
        }
        (**(code **)(*plVar21 + 0xf0))(plVar21);
        plVar21 = (long *)plVar14[0x19];
        if (plVar21 != (long *)0x0) {
          plVar15 = plVar21 + 10;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar5 = (long *)plVar22[0x13];
          for (plVar4 = (long *)plVar22[0x12]; plVar4 != plVar5; plVar4 = plVar4 + 1) {
            lVar13 = *plVar4;
            lVar24 = plVar21[0x11];
            if (lVar24 != 0) {
              piVar1 = (int *)(lVar24 + 0x50);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = *piVar1 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            plVar16 = *(long **)(lVar13 + 0xe8);
            *(long *)(lVar13 + 0xe8) = lVar24;
            if (plVar16 != (long *)0x0) {
              plVar3 = plVar16 + 10;
              do {
                iVar11 = (int)*plVar3 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*plVar16 + 0x10))();
              }
            }
          }
          do {
            iVar11 = (int)*plVar15 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *(int *)plVar15 = iVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        puVar6 = *(undefined8 **)(param_1 + 0x138);
        for (puVar20 = *(undefined8 **)(param_1 + 0x130); puVar20 != puVar6;
            puVar20 = puVar20 + 0x10) {
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = (code *)0x0;
          local_e8 = (code *)0x0;
          if ((code *)puVar20[2] != (code *)0x0) {
            (*(code *)puVar20[2])(puVar20 + 4,auStack_d0);
            local_f0 = (code *)*puVar20;
            local_e8 = (code *)puVar20[1];
            local_e0 = puVar20[2];
            uStack_d8 = puVar20[3];
          }
          local_68 = *(undefined8 *)(param_1 + 0x88);
          local_6c = (int)lVar23;
          (*local_f0)(auStack_d0,&local_68,&local_6c);
          pcVar2 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = (code *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar2)(auStack_d0);
          }
        }
        if (plVar22 != (long *)0x0) {
          plVar21 = plVar22 + 10;
          do {
            iVar11 = (int)*plVar21 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *(int *)plVar21 = iVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        lVar13 = *(long *)(param_1 + 0x88);
      } while (*(int *)(param_1 + 0xa0) < lVar23);
      lVar24 = *(long *)(lVar13 + 0xb8);
    }
    if (0 < (int)((ulong)(*(long *)(lVar24 + 0x2d0) - *(long *)(lVar24 + 0x2c8)) >> 5)) {
      plVar19 = (long *)FUN_02aa9ca4(plVar18,*(undefined8 *)(param_1 + 8));
      lVar13 = *(long *)(*(long *)(param_1 + 0x88) + 0x120);
      if (lVar13 != 0) {
        piVar1 = (int *)(lVar13 + 0x50);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar22 = (long *)plVar19[0x40];
      plVar19[0x40] = lVar13;
      if (plVar22 != (long *)0x0) {
        plVar21 = plVar22 + 10;
        do {
          iVar11 = (int)*plVar21 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *(int *)plVar21 = iVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar22 + 0x10))();
        }
      }
      *(undefined4 *)(plVar19 + 0x3f) = 2;
      if (plVar14 != (long *)0x0) {
        plVar22 = plVar14 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar8) {
            *(int *)plVar22 = (int)*plVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar22 = (long *)plVar19[0x3e];
      plVar19[0x3e] = (long)plVar14;
      if (plVar22 != (long *)0x0) {
        plVar21 = plVar22 + 10;
        do {
          iVar11 = (int)*plVar21 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *(int *)plVar21 = iVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar22 + 0x10))();
        }
      }
      (**(code **)(*plVar19 + 0xf0))(plVar19);
    }
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 == 1) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
        uVar17 = 1;
        goto joined_r0x02aa8b8c;
      }
    }
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
joined_r0x02aa8b8c:
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(int *)plVar18 = iVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  return uVar17;
}


