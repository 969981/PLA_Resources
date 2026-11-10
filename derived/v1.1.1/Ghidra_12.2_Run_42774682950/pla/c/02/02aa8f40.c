/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa8f40; name: FUN_02aa8f40
 */


/* WARNING: Removing unreachable block (ram,0x02aa96dc) */

void FUN_02aa8f40(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  undefined1 uVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  undefined8 *puVar36;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0 [12];
  long *local_90 [2];
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  if (*(char *)(param_1 + 0x180) == '\0') {
    lVar29 = *(long *)(param_1 + 0x88);
    if (*(long *)(lVar29 + 0xb8) == 0) {
      return;
    }
    if (*(char *)(*(long *)(lVar29 + 0xb8) + 0x1e1) == '\0') {
      return;
    }
    piVar27 = *(int **)(lVar29 + 0x130);
    if (piVar27 != *(int **)(lVar29 + 0x138)) {
      bVar6 = true;
      do {
        lVar28 = *(long *)(*(long *)(lVar29 + 0xe8) + (long)*piVar27 * 8);
        if (lVar28 == 0) {
LAB_02aa9058:
          bVar7 = 0;
        }
        else {
          for (lVar34 = *(long *)(lVar28 + 0x58); lVar34 != *(long *)(lVar28 + 0x60);
              lVar34 = lVar34 + 0x30) {
            if (*(char *)(*(long *)(lVar34 + 8) + 0x2d8) == '\0') goto LAB_02aa9058;
          }
          bVar7 = 1;
        }
        piVar27 = piVar27 + 3;
        bVar6 = (bool)(bVar6 & bVar7);
      } while (piVar27 != *(int **)(lVar29 + 0x138));
      if (!bVar6) {
        return;
      }
    }
    lVar28 = *(long *)(lVar29 + 0x120);
    if (lVar28 == 0) {
      return;
    }
    for (lVar34 = *(long *)(lVar28 + 0x60); lVar34 != *(long *)(lVar28 + 0x68);
        lVar34 = lVar34 + 0x30) {
      if (*(char *)(*(long *)(lVar34 + 8) + 0x2e0) == '\0') {
        return;
      }
    }
    if (*(long *)(lVar29 + 0x128) != 0) {
      lVar29 = *(long *)(*(long *)(lVar29 + 0x128) + 0x60);
      if (lVar29 == 0) {
        return;
      }
      if (*(char *)(lVar29 + 0x1e1) == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x180) = 1;
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  uVar26 = 1L << ((long)iVar4 & 0x3fU);
  uVar23 = *(ulong *)(param_1 + 0xa8);
  if (((uVar26 & uVar23) != 0) || (*(int *)(*(long *)(param_1 + 0x88) + 0x168) <= iVar4)) {
LAB_02aa8f9c:
    plVar31 = *(long **)(*(long *)(param_1 + 0x80) + 0x1f0);
    if (plVar31 != (long *)0x0) {
      plVar15 = plVar31 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar23 = *(ulong *)(param_1 + 0xa8);
    }
    iVar4 = (int)plVar31[0x2e];
    *(int *)(param_1 + 0xa0) = iVar4;
    if (((1L << ((long)iVar4 & 0x3fU) & uVar23) == 0) &&
       (iVar4 < *(int *)(*(long *)(param_1 + 0x88) + 0x168))) {
      FUN_02b3a924(*(long *)(param_1 + 0x88),1,(long)iVar4,*(undefined8 *)(param_1 + 0x168),
                   *(undefined8 *)(param_1 + 0x170),*(undefined1 *)(param_1 + 0x9a));
      *(undefined1 *)(param_1 + 0x180) = 0;
    }
    plVar15 = plVar31 + 10;
    do {
      iVar4 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02aa9028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar31 + 0x10))(plVar31);
      return;
    }
    return;
  }
  lVar29 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 0xe8) + (long)iVar4 * 8);
  if (*(long *)(lVar29 + 0x90) != *(long *)(lVar29 + 0x98)) {
    uVar23 = uVar26 | uVar23;
    *(ulong *)(param_1 + 0xa8) = uVar23;
    goto LAB_02aa8f9c;
  }
  FUN_02b3bbf8(*(undefined8 *)(param_1 + 0x88),param_1 + 0x90,*(undefined1 *)(param_1 + 0x98));
  lVar29 = *(long *)(param_1 + 0x80);
  plVar31 = *(long **)(lVar29 + 0x1f0);
  if (plVar31 != (long *)0x0) {
    plVar15 = plVar31 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar29 = *(long *)(param_1 + 0x80);
  }
  lVar28 = DAT_043ef5a0;
  puVar13 = PTR_DAT_043794d8;
  puVar12 = PTR_DAT_043794d0;
  puVar11 = PTR_DAT_043794c8;
  puVar10 = PTR_DAT_043794c0;
  puVar9 = PTR_DAT_043794b8;
  puVar8 = PTR_DAT_043794b0;
  lVar29 = *(long *)(lVar29 + 0x1a8);
  if ((lVar29 == 0) || (*(int *)(lVar29 + 0xc) == 0)) {
LAB_02aa9188:
    plVar15 = (long *)0x0;
  }
  else {
    piVar27 = (int *)(lVar29 + 0xc);
    iVar35 = *(int *)(lVar29 + 0xc);
    do {
      puVar36 = *(undefined8 **)(lVar29 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
          if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0)) {
            uVar21 = FUN_0087f8f0();
            *(undefined8 *)puVar13 = uVar21;
            __cxa_guard_release(puVar12);
          }
          *(undefined **)puVar11 = puVar13;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar9 = puVar11;
        __cxa_guard_release(puVar8);
      }
      if (puVar36 == (undefined8 *)0x0) goto LAB_02aa9188;
      while (puVar36 != (undefined8 *)puVar9) {
        puVar36 = (undefined8 *)*puVar36;
        plVar15 = (long *)0x0;
        if (puVar36 == (undefined8 *)0x0) goto LAB_02aa918c;
      }
      iVar14 = *piVar27;
      if (iVar14 == iVar35) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar6) {
          *piVar27 = iVar35 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          plVar15 = (long *)0x0;
          if (*(long *)(lVar29 + 0x18) != 0) {
            plVar15 = (long *)(*(long *)(lVar29 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar15 = (long *)0x0;
      iVar35 = iVar14;
    } while (iVar14 != 0);
  }
LAB_02aa918c:
  local_70[0] = *(long **)(*(long *)(*(long *)(param_1 + 0x88) + 0xe8) + (long)iVar4 * 8);
  if (local_70[0] == (long *)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = local_70[0] + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar18 = local_70[0];
  }
  plVar16 = (long *)FUN_02aa9abc(plVar15,*(undefined8 *)(param_1 + 8));
  if (plVar18 != (long *)0x0) {
    plVar17 = plVar18 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar17 = (long *)plVar16[0x40];
  plVar16[0x40] = (long)plVar18;
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      iVar35 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar35;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *(undefined4 *)(plVar16 + 0x3f) = 4;
  *(int *)(plVar16 + 0x41) = iVar4;
  if (plVar31 != (long *)0x0) {
    plVar18 = plVar31 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar18 = (long *)plVar16[0x3e];
  plVar16[0x3e] = (long)plVar31;
  if (plVar18 != (long *)0x0) {
    plVar17 = plVar18 + 10;
    do {
      iVar35 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar35;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  (**(code **)(*plVar16 + 0xf0))(plVar16);
  iVar35 = *(int *)((long)plVar31 + 0x174);
  if (iVar35 != -1) {
    plVar18 = *(long **)(*(long *)(*(long *)(param_1 + 0x88) + 0xe8) + (long)iVar35 * 8);
    local_78 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar16 = plVar18 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (plVar18 != (long *)0x0) {
        plVar16 = (long *)local_70[0][0x12];
        plVar17 = (long *)local_70[0][0x13];
        if (plVar16 != plVar17) {
          do {
            FUN_02aa65e4(&local_80,*plVar16 + 0x58,iVar4);
            plVar19 = (long *)plVar18[0x12];
            plVar22 = (long *)plVar18[0x13];
            if (plVar19 != plVar22) {
              do {
                FUN_02aa65e4(&local_110,*plVar19 + 0x58,iVar35);
                pcVar2 = (code *)PTR_DAT_04379c88;
                if (local_110 != (code *)0x0) {
                  pcVar2 = local_110 + 0x58;
                }
                lVar29 = *(long *)pcVar2;
                plVar20 = (long *)PTR_DAT_04379c88;
                if (local_80 != (long *)0x0) {
                  plVar20 = local_80 + 0xb;
                }
                lVar34 = *plVar20;
                if (local_110 != (code *)0x0) {
                  (**(code **)(*(long *)local_110 + 0x20))();
                }
                if (lVar29 == lVar34) goto LAB_02aa9358;
                plVar19 = plVar19 + 1;
              } while (plVar22 != plVar19);
              plVar19 = plVar22;
LAB_02aa9358:
              if (plVar19 != (long *)plVar18[0x13]) {
                lVar29 = *plVar19;
                uVar25 = 0;
                if ((*(char *)(lVar29 + 0x228) != '\0') &&
                   (uVar25 = 0, *(char *)(lVar29 + 0x22a) != '\0')) {
                  for (plVar19 = *(long **)(lVar29 + 0x78); plVar19 != *(long **)(lVar29 + 0x80);
                      plVar19 = plVar19 + 1) {
                    lVar34 = *plVar19;
                    if (*(char *)(lVar34 + 0x12d) != '\0') {
                      plVar22 = *(long **)(lVar34 + 0xe0);
                      while (plVar22 != *(long **)(lVar34 + 0xe8)) {
                        lVar30 = *plVar22;
                        plVar22 = plVar22 + 1;
                        if ((~*(uint *)(lVar30 + 200) & 3) == 0) {
                          uVar25 = 1;
                          goto LAB_02aa93d8;
                        }
                      }
                    }
                  }
                  uVar25 = 0;
                }
LAB_02aa93d8:
                *(undefined1 *)(*plVar16 + 0x228) = uVar25;
                plVar19 = (long *)FUN_02aa6448(plVar31,&local_78,iVar35);
                lVar29 = *plVar19;
                if (lVar29 != 0) {
                  lVar34 = nn::os::GetCurrentThread();
                  plVar19 = (long *)(lVar29 + 0xb0);
                  do {
                    lVar30 = *plVar19;
                    lVar24 = *(long *)(lVar29 + 0xb8);
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar6) {
                      *plVar19 = lVar30;
                      *(long *)(lVar29 + 0xb8) = lVar24;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  do {
                    while ((lVar30 != 0 && (lVar34 != lVar30))) {
                      nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0xa4));
                      do {
                        lVar30 = *plVar19;
                        lVar24 = *(long *)(lVar29 + 0xb8);
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar6) {
                          *plVar19 = lVar30;
                          *(long *)(lVar29 + 0xb8) = lVar24;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    while( true ) {
                      if (*plVar19 != lVar30 || *(long *)(lVar29 + 0xb8) != lVar24) break;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                      if (bVar6) {
                        *plVar19 = lVar30;
                        *(long *)(lVar29 + 0xb4) = lVar24 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') {
                        lVar34 = *(long *)(lVar29 + 0x60);
                        lVar30 = *(long *)(lVar29 + 0x68);
                        goto joined_r0x02aa9478;
                      }
                    }
                    ClearExclusiveLocal();
                    lVar30 = *plVar19;
                    lVar24 = *(long *)(lVar29 + 0xb8);
                  } while( true );
                }
              }
            }
LAB_02aa9720:
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            plVar16 = plVar16 + 1;
          } while (plVar16 != plVar17);
          if (local_78 == (long *)0x0) goto LAB_02aa975c;
        }
        plVar18 = local_78 + 10;
        do {
          iVar35 = (int)*plVar18 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *(int *)plVar18 = iVar35;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          plVar18 = (long *)plVar31[0x19];
          goto joined_r0x02aa9760;
        }
      }
    }
  }
LAB_02aa975c:
  plVar18 = (long *)plVar31[0x19];
joined_r0x02aa9760:
  if (plVar18 != (long *)0x0) {
    plVar16 = plVar18 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar19 = (long *)local_70[0][0x13];
    for (plVar17 = (long *)local_70[0][0x12]; plVar17 != plVar19; plVar17 = plVar17 + 1) {
      lVar29 = *plVar17;
      lVar28 = plVar18[0x11];
      if (lVar28 != 0) {
        piVar27 = (int *)(lVar28 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar6) {
            *piVar27 = *piVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar22 = *(long **)(lVar29 + 0xe8);
      *(long *)(lVar29 + 0xe8) = lVar28;
      if (plVar22 != (long *)0x0) {
        plVar20 = plVar22 + 10;
        do {
          iVar35 = (int)*plVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = iVar35;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*plVar22 + 0x10))();
        }
      }
    }
    do {
      iVar35 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar35;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  puVar36 = *(undefined8 **)(param_1 + 0x130);
  puVar3 = *(undefined8 **)(param_1 + 0x138);
  if (puVar36 != puVar3) {
    do {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = (code *)0x0;
      local_108 = (code *)0x0;
      if ((code *)puVar36[2] != (code *)0x0) {
        (*(code *)puVar36[2])(puVar36 + 4,local_f0);
        local_110 = (code *)*puVar36;
        local_108 = (code *)puVar36[1];
        local_100 = puVar36[2];
        uStack_f8 = puVar36[3];
      }
      local_90[0] = *(long **)(param_1 + 0x88);
      local_78 = (long *)CONCAT44(local_78._4_4_,iVar4);
      (*local_110)(local_f0,local_90,&local_78);
      pcVar2 = local_108;
      if (local_108 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = (code *)0x0;
        local_108 = (code *)0x0;
        (*pcVar2)(local_f0);
      }
      puVar36 = puVar36 + 0x10;
    } while (puVar3 != puVar36);
  }
  if (local_70[0] != (long *)0x0) {
    plVar18 = local_70[0] + 10;
    do {
      iVar4 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar29 = plVar15[0xb];
    piVar27 = (int *)(lVar29 + 0xc);
    do {
      iVar4 = *piVar27;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar6) {
        *piVar27 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
    }
  }
  if (plVar31 != (long *)0x0) {
    plVar15 = plVar31 + 10;
    do {
      iVar4 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
    }
  }
  return;
joined_r0x02aa9478:
  if (lVar34 == lVar30) goto LAB_02aa9694;
  FUN_02b3365c(&local_110,*(undefined8 *)(lVar28 + 0x60),lVar34 + 0x50);
  pcVar2 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar1 = local_110 + 0x50;
    do {
      iVar14 = *(int *)pcVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar6) {
        *(int *)pcVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      (**(code **)(*(long *)local_110 + 0x10))(local_110);
    }
    lVar24 = DAT_043ef5a0;
    lVar33 = *plVar16;
    plVar22 = (long *)FUN_02aa6448(plVar31,local_70,iVar4);
    if (*plVar22 == 0) {
LAB_02aa9480:
      local_110 = (code *)((ulong)local_110 & 0xffffffffffffff00);
    }
    else {
      FUN_02b168fc(&local_110,*plVar22,lVar24 + 0x60,lVar33 + 0x58,lVar34 + 8);
      if ((char)local_110 != '\0') {
        FUN_02b3365c(local_90,*(undefined8 *)(lVar28 + 0x60),&local_110);
        plVar22 = local_90[0];
        if (local_90[0] != (long *)0x0) {
          plVar20 = local_90[0] + 10;
          do {
            iVar14 = (int)*plVar20 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *(int *)plVar20 = iVar14;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*local_90[0] + 0x10))(local_90[0]);
          }
          iVar14 = (**(code **)(*(long *)(*(long *)(*(long *)(pcVar2 + 0xd0) + 0x120) + 0x58) + 0x38
                               ))();
          if (iVar14 != 0) {
            iVar32 = 0;
            do {
              plVar20 = (long *)(*(long *)(*(long *)(pcVar2 + 0xd0) + 0x120) + 0x58);
              uVar21 = (**(code **)(*plVar20 + 0x60))(plVar20,iVar32);
              uVar23 = (**(code **)(*(long *)(*(long *)(pcVar2 + 0x60) + 0x58) + 0x48))
                                 ((long *)(*(long *)(pcVar2 + 0x60) + 0x58),local_90,uVar21);
              if ((uVar23 & 1) != 0) {
                plVar20 = (long *)(plVar22[0xc] + 0x58);
                (**(code **)(*plVar20 + 0x20))(plVar20,uVar21,local_90);
              }
              iVar32 = iVar32 + 1;
            } while (iVar14 != iVar32);
          }
          iVar14 = (**(code **)(*(long *)(*(long *)(*(long *)(pcVar2 + 0xd0) + 0x120) + 0x58) + 0x48
                               ))();
          if (iVar14 != 0) {
            iVar32 = 0;
            do {
              plVar20 = (long *)(*(long *)(*(long *)(pcVar2 + 0xd0) + 0x120) + 0x58);
              uVar21 = (**(code **)(*plVar20 + 0x70))(plVar20,iVar32);
              uVar23 = (**(code **)(*(long *)(*(long *)(pcVar2 + 0x60) + 0x58) + 0x58))
                                 ((long *)(*(long *)(pcVar2 + 0x60) + 0x58),local_90,uVar21);
              if ((uVar23 & 1) != 0) {
                plVar20 = (long *)(plVar22[0xc] + 0x58);
                (**(code **)(*plVar20 + 0x30))(plVar20,uVar21,local_90);
              }
              iVar32 = iVar32 + 1;
            } while (iVar14 != iVar32);
          }
        }
        if ((char)local_110 != '\0') {
          if (local_f0[0] != (long *)0x0) {
            (**(code **)(*local_f0[0] + 0x20))();
          }
          goto LAB_02aa9480;
        }
      }
    }
  }
  lVar34 = lVar34 + 0x78;
  goto joined_r0x02aa9478;
LAB_02aa9694:
  do {
    lVar34 = *plVar19;
    lVar30 = *(long *)(lVar29 + 0xb8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar6) {
      *plVar19 = lVar34;
      *(long *)(lVar29 + 0xb8) = lVar30;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02aa96a8:
  lVar24 = *plVar19;
  lVar33 = *(long *)(lVar29 + 0xb8);
  if (lVar24 == lVar34 && lVar33 == lVar30) goto code_r0x02aa96bc;
  ClearExclusiveLocal();
  do {
    do {
      lVar34 = *plVar19;
      if (lVar34 != lVar24 || *(long *)(lVar29 + 0xb8) != lVar33) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02aa96e8;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar24;
        *(long *)(lVar29 + 0xb4) = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02aa96e8:
    lVar24 = lVar34;
    lVar33 = *(long *)(lVar29 + 0xb8);
  } while (!bVar6);
LAB_02aa971c:
  nn::os::SignalLightEvent((LightEventType *)(lVar29 + 0xa4));
  goto LAB_02aa9720;
code_r0x02aa96bc:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar6) {
    *plVar19 = lVar34;
    *(long *)(lVar29 + 0xb4) = lVar30 + -1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_02aa971c;
  goto LAB_02aa96a8;
}


