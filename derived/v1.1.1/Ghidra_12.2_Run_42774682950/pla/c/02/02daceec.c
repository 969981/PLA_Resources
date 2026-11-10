/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02daceec; name: FUN_02daceec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02daceec(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined **ppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined ***pppuVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  byte *pbVar36;
  undefined8 *puVar37;
  long lVar38;
  long lVar39;
  long *plVar40;
  long *plVar41;
  long local_168;
  undefined **local_160;
  undefined **local_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long *local_138;
  undefined4 local_130;
  long *local_128;
  long local_120;
  long local_118;
  long local_110;
  long *local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined4 local_a8;
  undefined **local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined *local_70 [2];
  
  lVar32 = *(long *)(param_1 + 0x70);
  local_160 = *(undefined ***)(lVar32 + 0x1e8);
  if (local_160 == (undefined **)0x0) {
    local_160 = *(undefined ***)(lVar32 + 8);
    lVar25 = *(long *)(lVar32 + 0x1b8);
    if (lVar25 != 0) goto LAB_02dacf28;
LAB_02db62e8:
    local_168 = 0;
LAB_02dacf48:
    plVar41 = (long *)(lVar32 + 0x68);
  }
  else {
    lVar25 = *(long *)(lVar32 + 0x1b8);
    if (lVar25 == 0) goto LAB_02db62e8;
LAB_02dacf28:
    lVar29 = lVar32 + 0x1b0;
    lVar32 = *(long *)(param_1 + 0x70);
    local_168 = 0;
    if (*(int *)(lVar25 + 0xc) != 0) {
      local_168 = lVar29;
    }
    if (lVar32 != 0) goto LAB_02dacf48;
    plVar41 = (long *)FUN_00b779ac();
  }
  local_128 = (long *)*plVar41;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x18))();
  }
  local_120 = plVar41[1];
  local_118 = plVar41[2];
  local_110 = plVar41[3];
  local_108 = (long *)plVar41[4];
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x18))();
  }
  puVar13 = PTR_DAT_04379c88;
  local_100 = (undefined4)plVar41[5];
  plVar41 = *(long **)(lVar32 + 0x270);
  plVar26 = *(long **)(lVar32 + 0x278);
  if (plVar41 == plVar26) {
LAB_02db5ca8:
    if ((*(long *)(param_1 + 0x2a8) != 0) &&
       (**(char **)(*(long *)(param_1 + 0x2a8) + 0x60) != '\0')) {
      FUN_00936410(&local_d0,param_1 + 0x2a8);
      uVar21 = FUN_01358d34(param_1 + 0x1b8,1,&local_d0,0,local_160,local_168);
      if (((uVar21 & 1) != 0) && (plVar41 = *(long **)(param_1 + 0x1e0), plVar41 != (long *)0x0)) {
        lVar32 = plVar41[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) {
LAB_02db62f4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar41[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar41 + 0x20))(plVar41);
        }
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_d0 != (undefined **)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
    }
    if ((*(char *)(param_1 + 0x2b0) != '\0') &&
       (lVar32 = **(long **)(param_1 + 0x2b8), lVar32 != (*(long **)(param_1 + 0x2b8))[1])) {
      puVar13 = PTR_DAT_0437ace8 + 0x10;
      do {
        plVar26 = *(long **)(param_1 + 0x2d8);
        local_b0 = (long *)0x0;
        local_a8 = 0;
        plVar41 = plVar26 + 3;
        local_c0 = 0;
        uStack_b8 = 0;
        local_c8 = (undefined8 *)0x0;
        local_d0 = &PTR_LAB_04299e30;
        uVar21 = plVar26[1];
        if (uVar21 < (ulong)plVar26[2]) {
          FUN_02dc0024(plVar41,uVar21,&local_d0);
          plVar26[1] = plVar26[1] + 0x30;
        }
        else {
          lVar25 = (long)(uVar21 - *plVar26) >> 4;
          uVar21 = plVar26[4];
          if (0x7ffffffffffffffe < uVar21) {
            uVar21 = 0x7fffffffffffffff;
          }
          uVar14 = lVar25 * -0x5555555555555555 + 1;
          if (uVar21 < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar29 = plVar26[2] - *plVar26 >> 4;
          uVar31 = lVar29 * 0x5555555555555556;
          if (uVar14 <= uVar31) {
            uVar14 = uVar31;
          }
          if ((ulong)(lVar29 * -0x5555555555555555) < uVar21 >> 1) {
            uVar21 = uVar14;
          }
          if (uVar21 == 0) {
            lVar29 = 0;
          }
          else {
            lVar29 = (**(code **)(*(long *)*plVar41 + 0x10))((long *)*plVar41,uVar21 * 0x30,8);
            if (lVar29 == 0) {
              (**(code **)(*(long *)*plVar41 + 0xb8))();
            }
          }
          puVar37 = (undefined8 *)(lVar29 + lVar25 * 0x10);
          FUN_02dc0024(plVar41,puVar37,&local_d0);
          lVar25 = *plVar26;
          lVar38 = plVar26[1];
          puVar27 = puVar37;
          if (lVar38 == lVar25) {
            lVar38 = lVar25;
          }
          else {
            do {
              lVar39 = *plVar41;
              if (((*PTR_DAT_04379520 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_04379520), puVar28 = PTR_DAT_04379528,
                 iVar19 != 0)) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar28,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
              lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar23 != 0) {
                if (0xf < *(ulong *)(lVar23 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar39;
                *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
              }
              puVar27[-6] = puVar13;
              FUN_00937ea0(puVar27 + -5,lVar38 + -0x28);
              lVar39 = *(long *)(lVar38 + -0x18);
              puVar27[-3] = lVar39;
              if (lVar39 != 0) {
                piVar10 = (int *)(lVar39 + 0x50);
                do {
                  cVar15 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar16) {
                    *piVar10 = *piVar10 + 1;
                    cVar15 = ExclusiveMonitorsStatus();
                  }
                } while (cVar15 != '\0');
              }
              lVar39 = *(long *)(lVar38 + -0x10);
              puVar27[-2] = lVar39;
              if (lVar39 != 0) {
                piVar10 = (int *)(lVar39 + 0x50);
                do {
                  cVar15 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar16) {
                    *piVar10 = *piVar10 + 1;
                    cVar15 = ExclusiveMonitorsStatus();
                  }
                } while (cVar15 != '\0');
              }
              lVar39 = *(long *)(lVar38 + -8);
              puVar27[-1] = lVar39;
              if (lVar39 != 0) {
                lVar39 = *(long *)(lVar39 + 0x58);
                if (*(undefined8 **)(lVar39 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
                if (*(long *)(lVar39 + 0x10) == 0) {
                  uVar22 = (**(code **)**(undefined8 **)(lVar39 + 0x18))();
                  *(undefined8 *)(lVar39 + 0x10) = uVar22;
                }
                piVar10 = (int *)(lVar39 + 0xc);
                do {
                  cVar15 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar16) {
                    *piVar10 = *piVar10 + 1;
                    cVar15 = ExclusiveMonitorsStatus();
                  }
                } while (cVar15 != '\0');
              }
              puVar27 = puVar27 + -6;
              lVar38 = lVar38 + -0x30;
              *puVar27 = &PTR_LAB_04299e30;
              if (lVar23 != 0) {
                *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
              }
            } while (lVar38 != lVar25);
            lVar25 = *plVar26;
            lVar38 = plVar26[1];
          }
          *plVar26 = (long)puVar27;
          plVar26[1] = (long)(puVar37 + 6);
          lVar39 = plVar26[2];
          plVar26[2] = lVar29 + uVar21 * 0x30;
          while (lVar38 != lVar25) {
            lVar38 = lVar38 + -0x30;
            FUN_00936104(lVar38);
          }
          if (lVar25 != 0) {
            plVar41 = (long *)*plVar41;
            uVar21 = (**(code **)(*plVar41 + 0xc0))(plVar41);
            if ((uVar21 & 1) != 0) {
              lVar29 = tpidr_el0;
              if (*(char *)(lVar29 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar29 + 0x38d488) = 1;
                *(undefined8 *)(lVar29 + 0x38d478) = 0;
                *(undefined8 *)(lVar29 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar29 + 0x38d480)) {
                FUN_02bcc824(plVar41,lVar25,lVar39 - lVar25,8);
                goto LAB_02db60ec;
              }
            }
            (**(code **)(*plVar41 + 0x18))(plVar41,lVar25,lVar39 - lVar25,8);
          }
        }
LAB_02db60ec:
        FUN_00936104(&local_d0);
        lVar25 = *(long *)(*(long *)(param_1 + 0x2d8) + 8);
        FUN_0155a0d0(&local_d0,lVar32);
        uVar21 = FUN_00938764(lVar25 + -0x30,1,&local_d0,0,local_160,local_168);
        if (((uVar21 & 1) != 0) && (plVar41 = *(long **)(lVar25 + -8), plVar41 != (long *)0x0)) {
          lVar25 = plVar41[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar25 = plVar41[0xb];
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar25 + 0x18) = 0;
            (**(code **)(*plVar41 + 0x20))(plVar41);
          }
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        if (local_d0 != (undefined **)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        lVar32 = lVar32 + 0x20;
      } while (lVar32 != *(long *)(*(long *)(param_1 + 0x2b8) + 8));
    }
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    return;
  }
  plVar1 = (long *)(param_1 + 0x250);
  plVar2 = (long *)(param_1 + 0x1f0);
  plVar3 = (long *)(param_1 + 0x220);
  plVar4 = (long *)(param_1 + 400);
  plVar5 = (long *)(param_1 + 0x160);
  plVar6 = (long *)(param_1 + 0x130);
  plVar7 = (long *)(param_1 + 0x100);
  plVar8 = (long *)(param_1 + 0xd0);
  plVar9 = (long *)(param_1 + 0xa0);
LAB_02dad07c:
  lVar32 = *plVar41;
  if (lVar32 < 0x40a8a38d6d71a99) {
    if (lVar32 < -0x1d553c030e6b22ae) {
      if (lVar32 != -0x2e32c8025a5f9d0a) {
        if (lVar32 != -0x27f60163a842de0c) goto LAB_02dad06c;
        FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        lVar32 = *(long *)PTR_DAT_04379d38;
        *(long *)PTR_DAT_04379d40 = lVar32;
        local_88 = local_160;
        if (local_160 == (undefined **)0x0) {
          local_88 = *(undefined ***)(lVar32 + 8);
        }
        lVar25 = nn::os::GetCurrentThread();
        plVar33 = (long *)(lVar32 + 0x150);
        do {
          if (*plVar33 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
              while (*plVar33 == 0) {
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar16) {
                  *plVar33 = lVar25;
                  cVar15 = ExclusiveMonitorsStatus();
                }
                if (cVar15 == '\0') goto LAB_02dad7e8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar16) {
            *plVar33 = lVar25;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
LAB_02dad7e8:
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
        }
        else {
          puVar37 = local_150;
          if (puVar27 <= local_150) {
            uVar14 = 0;
            if (puVar27 != (undefined8 *)0x0) {
              uVar14 = (ulong)local_150 / (ulong)puVar27;
            }
            puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
          }
        }
        plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar33 = (long *)0x0;
        if (plVar40 != (long *)0x0) {
          plVar33 = (long *)*plVar40;
        }
        if (plVar33 == (long *)0x0) {
LAB_02dae134:
          if (plVar33 == (long *)0x0) goto LAB_02dae278;
          lVar25 = plVar33[9];
          if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
            piVar10 = (int *)(lVar25 + 0xc);
            iVar19 = *(int *)(lVar25 + 0xc);
            do {
              plVar40 = *(long **)(lVar25 + 0x10);
              if (((*PTR_DAT_04379d20 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                  uVar22 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_04379d20);
              }
              while( true ) {
                if (plVar40 == (long *)0x0) goto LAB_02dae140;
                if (plVar40 == (long *)PTR_DAT_04379d28) break;
                plVar40 = (long *)*plVar40;
              }
              iVar18 = *piVar10;
              if (iVar18 == iVar19) {
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + 1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
                if (cVar15 == '\0') {
                  if (*(long *)(lVar25 + 0x18) != 0) {
                    plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                    pbVar36 = PTR_DAT_04379498;
                    plVar33 = (long *)PTR_DAT_043794a0;
                    goto LAB_02db0b84;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar19 = iVar18;
            } while (iVar18 != 0);
          }
LAB_02dae140:
          plVar40 = (long *)FUN_02dbef58(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
          pbVar36 = PTR_DAT_04379498;
          if (plVar40 != (long *)0x0) {
            lVar25 = plVar40[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar25 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
          local_e8 = (undefined **)0x0;
          local_e0 = (undefined8 *)0x0;
          FUN_0093bcac(&local_e8,&local_d0);
          ppuVar20 = local_d0;
          if (local_d0 != (undefined **)0x0) {
            ppuVar11 = local_d0 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_d0[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          FUN_0093b3f4(plVar33 + 9,&local_e8);
          ppuVar20 = local_e8;
          plVar33 = (long *)PTR_DAT_043794a0;
          if (local_e8 == (undefined **)0x0) goto LAB_02db0b84;
          ppuVar11 = local_e8 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db0b84;
          local_e8[2] = (undefined *)0x0;
          if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar36);
          }
          lVar25 = *plVar33 + 0xd8;
          *(long *)PTR_DAT_043794a8 = *plVar33;
          local_d0 = (undefined **)*ppuVar20;
          pppuVar24 = &local_d0;
LAB_02db0b80:
          FUN_02a44274(lVar25,pppuVar24);
        }
        else {
          if (local_158 == (undefined **)0x0) {
            ppuVar20 = (undefined **)puVar13;
          }
          else {
            ppuVar20 = local_158 + 0xb;
          }
          if (uVar21 < 2) {
            do {
              plVar40 = (long *)puVar13;
              if (plVar33[2] != 0) {
                plVar40 = (long *)(plVar33[2] + 0x58);
              }
              if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
              goto LAB_02dae134;
              plVar33 = (long *)*plVar33;
            } while ((plVar33 != (long *)0x0) &&
                    ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar40 = (long *)puVar13;
              if (plVar33[2] != 0) {
                plVar40 = (long *)(plVar33[2] + 0x58);
              }
              if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
              goto LAB_02dae134;
              plVar33 = (long *)*plVar33;
              if (plVar33 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar33[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02dae278:
          plVar40 = (long *)FUN_02dbef58(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
          plVar33 = (long *)PTR_DAT_043794a0;
          if (plVar40 != (long *)0x0) {
            lVar25 = plVar40[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar25 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          pbVar36 = PTR_DAT_04379498;
          puVar27 = *(undefined8 **)(lVar32 + 0x78);
          plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
          plVar35 = (long *)0x0;
          if (plVar34 != (long *)0x0) {
            plVar35 = (long *)*plVar34;
          }
          if (plVar35 == (long *)0x0) {
LAB_02dae3c4:
            if (plVar35 == (long *)0x0) goto LAB_02db0990;
            (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
            local_80 = (undefined **)0x0;
            uStack_78 = 0;
            FUN_0093bcac(&local_80,&local_e8);
            ppuVar20 = local_e8;
            if (local_e8 != (undefined **)0x0) {
              ppuVar11 = local_e8 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_e8[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_f8 = (undefined8 *)*ppuVar20;
                FUN_02a44274(lVar25 + 0xd8,&local_f8);
              }
            }
            local_d0 = local_88;
            local_c8 = (undefined8 *)0x0;
            local_c0 = 0;
            FUN_0093b3f4(&local_c8,&local_80);
            plVar35[8] = (long)local_d0;
            FUN_0093b3f4(plVar35 + 9,&local_c8);
            puVar27 = local_c8;
            if (local_c8 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_c8 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_c8[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_e8 = (undefined **)*puVar27;
                FUN_02a44274(lVar25 + 0xd8,&local_e8);
              }
            }
            ppuVar20 = local_80;
            if (local_80 != (undefined **)0x0) {
              ppuVar11 = local_80 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_80[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33 + 0xd8;
                *(long *)PTR_DAT_043794a8 = *plVar33;
                local_e8 = (undefined **)*ppuVar20;
                pppuVar24 = &local_e8;
                goto LAB_02db0b80;
              }
            }
          }
          else {
            if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
              do {
                plVar34 = (long *)puVar13;
                if (plVar35[2] != 0) {
                  plVar34 = (long *)(plVar35[2] + 0x58);
                }
                ppuVar20 = (undefined **)puVar13;
                if (local_158 != (undefined **)0x0) {
                  ppuVar20 = local_158 + 0xb;
                }
                if (((undefined *)*plVar34 == *ppuVar20) &&
                   ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dae3c4;
                plVar35 = (long *)*plVar35;
              } while ((plVar35 != (long *)0x0) &&
                      ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
            }
            else {
              do {
                plVar34 = (long *)puVar13;
                if (plVar35[2] != 0) {
                  plVar34 = (long *)(plVar35[2] + 0x58);
                }
                ppuVar20 = (undefined **)puVar13;
                if (local_158 != (undefined **)0x0) {
                  ppuVar20 = local_158 + 0xb;
                }
                if (((undefined *)*plVar34 == *ppuVar20) &&
                   ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dae3c4;
                plVar35 = (long *)*plVar35;
                if (plVar35 == (long *)0x0) break;
                puVar30 = (undefined8 *)plVar35[1];
                if (puVar27 <= puVar30) {
                  uVar21 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar21 = (ulong)puVar30 / (ulong)puVar27;
                  }
                  puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
                }
              } while (puVar30 == puVar37);
            }
LAB_02db0990:
            (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
            local_f8 = (undefined8 *)0x0;
            uStack_f0 = 0;
            FUN_0093bcac(&local_f8,&local_80);
            ppuVar20 = local_80;
            if (local_80 != (undefined **)0x0) {
              ppuVar11 = local_80 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_80[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_70[0] = *ppuVar20;
                FUN_02a44274(lVar25 + 0xd8,local_70);
              }
            }
            local_e8 = local_88;
            local_e0 = (undefined8 *)0x0;
            uStack_d8 = 0;
            FUN_0093b3f4(&local_e0,&local_f8);
            local_d0 = local_158;
            if (local_158 != (undefined **)0x0) {
              (**(code **)(*local_158 + 0x18))();
            }
            local_c8 = local_150;
            local_b0 = local_138;
            local_c0 = uStack_148;
            uStack_b8 = local_140;
            if (local_138 != (long *)0x0) {
              (**(code **)(*local_138 + 0x18))();
            }
            local_a8 = local_130;
            local_a0 = local_e8;
            local_98 = (undefined8 *)0x0;
            uStack_90 = 0;
            FUN_0093b3f4(&local_98,&local_e0);
            FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
            if (local_98 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_98 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_98[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_80 = (undefined **)*local_98;
                FUN_02a44274(lVar25 + 0xd8,&local_80);
              }
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            if (local_d0 != (undefined **)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            puVar27 = local_e0;
            if (local_e0 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_e0 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_e0[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_80 = (undefined **)*puVar27;
                FUN_02a44274(lVar25 + 0xd8,&local_80);
              }
            }
            puVar27 = local_f8;
            if (local_f8 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_f8 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_f8[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33 + 0xd8;
                *(long *)PTR_DAT_043794a8 = *plVar33;
                local_80 = (undefined **)*puVar27;
                pppuVar24 = &local_80;
                goto LAB_02db0b80;
              }
            }
          }
        }
LAB_02db0b84:
        lVar25 = local_168;
        if (*(char *)(lVar32 + 0x16b) != '\0') {
          lVar25 = 0;
        }
        FUN_02a763dc(plVar40,lVar25);
        *(undefined8 *)(lVar32 + 0x150) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
        FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
        if (plVar40 != (long *)0x0) {
          lVar32 = plVar40[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar40[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar40 + 0x20))(plVar40);
          }
        }
        plVar35 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar35 != (long *)0x0) {
          lVar32 = plVar35[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar35 + 0x20))();
          }
        }
        *plVar5 = (long)plVar40;
        lVar32 = 0;
        if (plVar40 != (long *)0x0) {
          local_d0 = (undefined **)0x0;
          local_c8 = (undefined8 *)0x0;
          FUN_008802f0(&local_d0,plVar40 + 0xb);
          do {
            puVar27 = local_c8;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
            if (bVar16) {
              local_c8 = (undefined8 *)0x0;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar36);
          }
          lVar32 = *plVar33;
          *(long *)PTR_DAT_043794a8 = lVar32;
          FUN_02a44e0c(&local_80,lVar32,puVar27);
          ppuVar20 = local_d0;
          local_d0 = (undefined **)0x0;
          if (ppuVar20 != (undefined **)0x0) {
            ppuVar11 = ppuVar20 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              ppuVar20[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_e8 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_e8);
            }
          }
          ppuVar11 = local_80;
          ppuVar20 = local_d0;
          if (local_80 != (undefined **)0x0) {
            local_80 = (undefined **)0x0;
          }
          if (local_d0 != (undefined **)0x0) {
            ppuVar12 = local_d0 + 1;
            do {
              iVar19 = *(int *)ppuVar12;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar16) {
                *(int *)ppuVar12 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_d0[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_e8 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_e8);
            }
          }
          if (ppuVar11 == (undefined **)0x0) {
            *(undefined8 *)(param_1 + 0x168) = 0;
          }
          else {
            ppuVar20 = ppuVar11 + 1;
            *(undefined **)(param_1 + 0x168) = *ppuVar11;
            do {
              iVar19 = *(int *)ppuVar20;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
              if (bVar16) {
                *(int *)ppuVar20 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              ppuVar11[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_d0 = (undefined **)*ppuVar11;
              FUN_02a44274(lVar32 + 0xd8,&local_d0);
            }
          }
          lVar32 = *plVar5;
        }
        if (lVar32 == 0) goto joined_r0x02db3438;
        FUN_02dbc810(&local_d0,plVar5);
        if ((*(long *)(param_1 + 0x170) != 0) || (*(long *)(param_1 + 0x178) != 0)) {
          FUN_02a76df0(local_d0,param_1 + 0x158,1);
        }
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        uVar22 = *(undefined8 *)PTR_DAT_04379d38;
        *(undefined8 *)PTR_DAT_04379d40 = uVar22;
        FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0x160));
        plVar33 = *(long **)(param_1 + 0x180);
        *(undefined8 *)(param_1 + 0x180) = 0;
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))();
          }
        }
        *(undefined ***)(param_1 + 0x180) = local_e8;
        if (local_d0 == (undefined **)0x0) {
LAB_02db2bdc:
          plVar33 = *(long **)(param_1 + 0x180);
        }
        else {
          puVar28 = local_d0[0xb];
          piVar10 = (int *)(puVar28 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db2bdc;
          *(undefined8 *)(puVar28 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
          plVar33 = *(long **)(param_1 + 0x180);
        }
        if (plVar33 == (long *)0x0) goto joined_r0x02db3438;
        lVar32 = plVar33[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            bVar17 = *piVar10 + -1 == 0;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          goto LAB_02db3430;
        }
        goto LAB_02db62f4;
      }
      FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      lVar32 = *(long *)PTR_DAT_04379d38;
      *(long *)PTR_DAT_04379d40 = lVar32;
      local_88 = local_160;
      if (local_160 == (undefined **)0x0) {
        local_88 = *(undefined ***)(lVar32 + 8);
      }
      lVar25 = nn::os::GetCurrentThread();
      plVar33 = (long *)(lVar32 + 0x150);
      do {
        if (*plVar33 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
            while (*plVar33 == 0) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *plVar33 = lVar25;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') goto LAB_02dad768;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar16) {
          *plVar33 = lVar25;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
LAB_02dad768:
      puVar27 = *(undefined8 **)(lVar32 + 0x78);
      uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
      }
      else {
        puVar37 = local_150;
        if (puVar27 <= local_150) {
          uVar14 = 0;
          if (puVar27 != (undefined8 *)0x0) {
            uVar14 = (ulong)local_150 / (ulong)puVar27;
          }
          puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
        }
      }
      plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
      plVar33 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar33 = (long *)*plVar40;
      }
      if (plVar33 == (long *)0x0) {
LAB_02dadc90:
        if (plVar33 == (long *)0x0) goto LAB_02daddd4;
        lVar25 = plVar33[9];
        if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
          piVar10 = (int *)(lVar25 + 0xc);
          iVar19 = *(int *)(lVar25 + 0xc);
          do {
            plVar40 = *(long **)(lVar25 + 0x10);
            if (((*PTR_DAT_04379d20 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379d20);
            }
            while( true ) {
              if (plVar40 == (long *)0x0) goto LAB_02dadc9c;
              if (plVar40 == (long *)PTR_DAT_04379d28) break;
              plVar40 = (long *)*plVar40;
            }
            iVar18 = *piVar10;
            if (iVar18 == iVar19) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') {
                if (*(long *)(lVar25 + 0x18) != 0) {
                  plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                  pbVar36 = PTR_DAT_04379498;
                  plVar33 = (long *)PTR_DAT_043794a0;
                  goto LAB_02db0778;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar18;
          } while (iVar18 != 0);
        }
LAB_02dadc9c:
        plVar40 = (long *)FUN_02dbee10(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        pbVar36 = PTR_DAT_04379498;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
        local_e8 = (undefined **)0x0;
        local_e0 = (undefined8 *)0x0;
        FUN_0093bcac(&local_e8,&local_d0);
        ppuVar20 = local_d0;
        if (local_d0 != (undefined **)0x0) {
          ppuVar11 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar25 + 0xd8,&local_80);
          }
        }
        FUN_0093b3f4(plVar33 + 9,&local_e8);
        ppuVar20 = local_e8;
        plVar33 = (long *)PTR_DAT_043794a0;
        if (local_e8 == (undefined **)0x0) goto LAB_02db0778;
        ppuVar11 = local_e8 + 1;
        do {
          iVar19 = *(int *)ppuVar11;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *(int *)ppuVar11 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db0778;
        local_e8[2] = (undefined *)0x0;
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar25 = *plVar33 + 0xd8;
        *(long *)PTR_DAT_043794a8 = *plVar33;
        local_d0 = (undefined **)*ppuVar20;
        pppuVar24 = &local_d0;
LAB_02db0774:
        FUN_02a44274(lVar25,pppuVar24);
      }
      else {
        if (local_158 == (undefined **)0x0) {
          ppuVar20 = (undefined **)puVar13;
        }
        else {
          ppuVar20 = local_158 + 0xb;
        }
        if (uVar21 < 2) {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02dadc90;
            plVar33 = (long *)*plVar33;
          } while ((plVar33 != (long *)0x0) &&
                  ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
        }
        else {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02dadc90;
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
            puVar30 = (undefined8 *)plVar33[1];
            if (puVar27 <= puVar30) {
              uVar21 = 0;
              if (puVar27 != (undefined8 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar27;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
            }
          } while (puVar30 == puVar37);
        }
LAB_02daddd4:
        plVar40 = (long *)FUN_02dbee10(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        plVar33 = (long *)PTR_DAT_043794a0;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pbVar36 = PTR_DAT_04379498;
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar35 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
          plVar35 = (long *)*plVar34;
        }
        if (plVar35 == (long *)0x0) {
LAB_02dadf20:
          if (plVar35 == (long *)0x0) goto LAB_02db0584;
          (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
          local_80 = (undefined **)0x0;
          uStack_78 = 0;
          FUN_0093bcac(&local_80,&local_e8);
          ppuVar20 = local_e8;
          if (local_e8 != (undefined **)0x0) {
            ppuVar11 = local_e8 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e8[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_f8 = (undefined8 *)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_f8);
            }
          }
          local_d0 = local_88;
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_0093b3f4(&local_c8,&local_80);
          plVar35[8] = (long)local_d0;
          FUN_0093b3f4(plVar35 + 9,&local_c8);
          puVar27 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_c8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_c8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_e8 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_e8);
            }
          }
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_e8 = (undefined **)*ppuVar20;
              pppuVar24 = &local_e8;
              goto LAB_02db0774;
            }
          }
        }
        else {
          if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dadf20;
              plVar35 = (long *)*plVar35;
            } while ((plVar35 != (long *)0x0) &&
                    ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dadf20;
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar35[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02db0584:
          (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_0093bcac(&local_f8,&local_80);
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_70[0] = *ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,local_70);
            }
          }
          local_e8 = local_88;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_0093b3f4(&local_e0,&local_f8);
          local_d0 = local_158;
          if (local_158 != (undefined **)0x0) {
            (**(code **)(*local_158 + 0x18))();
          }
          local_c8 = local_150;
          local_b0 = local_138;
          local_c0 = uStack_148;
          uStack_b8 = local_140;
          if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x18))();
          }
          local_a8 = local_130;
          local_a0 = local_e8;
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          FUN_0093b3f4(&local_98,&local_e0);
          FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
          if (local_98 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_98 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_98[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*local_98;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (undefined **)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          puVar27 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_e0 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e0[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          puVar27 = local_f8;
          if (local_f8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_f8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_f8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_80 = (undefined **)*puVar27;
              pppuVar24 = &local_80;
              goto LAB_02db0774;
            }
          }
        }
      }
LAB_02db0778:
      lVar25 = local_168;
      if (*(char *)(lVar32 + 0x16b) != '\0') {
        lVar25 = 0;
      }
      FUN_02a763dc(plVar40,lVar25);
      *(undefined8 *)(lVar32 + 0x150) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
      FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
      if (plVar40 != (long *)0x0) {
        lVar32 = plVar40[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar40[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar40 + 0x20))(plVar40);
        }
      }
      plVar35 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar35 != (long *)0x0) {
        lVar32 = plVar35[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar35 + 0x20))();
        }
      }
      *plVar6 = (long)plVar40;
      lVar32 = 0;
      if (plVar40 != (long *)0x0) {
        local_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *)0x0;
        FUN_008802f0(&local_d0,plVar40 + 0xb);
        do {
          puVar27 = local_c8;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
          if (bVar16) {
            local_c8 = (undefined8 *)0x0;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar32 = *plVar33;
        *(long *)PTR_DAT_043794a8 = lVar32;
        FUN_02a44e0c(&local_80,lVar32,puVar27);
        ppuVar20 = local_d0;
        local_d0 = (undefined **)0x0;
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar11 = ppuVar20 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar20[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        ppuVar11 = local_80;
        ppuVar20 = local_d0;
        if (local_80 != (undefined **)0x0) {
          local_80 = (undefined **)0x0;
        }
        if (local_d0 != (undefined **)0x0) {
          ppuVar12 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar12;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar16) {
              *(int *)ppuVar12 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        if (ppuVar11 == (undefined **)0x0) {
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
        else {
          ppuVar20 = ppuVar11 + 1;
          *(undefined **)(param_1 + 0x138) = *ppuVar11;
          do {
            iVar19 = *(int *)ppuVar20;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar16) {
              *(int *)ppuVar20 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar11[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_d0 = (undefined **)*ppuVar11;
            FUN_02a44274(lVar32 + 0xd8,&local_d0);
          }
        }
        lVar32 = *plVar6;
      }
      if (lVar32 == 0) goto joined_r0x02db3438;
      FUN_02dbccdc(&local_d0,plVar6);
      if ((*(long *)(param_1 + 0x140) != 0) || (*(long *)(param_1 + 0x148) != 0)) {
        FUN_02a76df0(local_d0,param_1 + 0x128,1);
      }
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      uVar22 = *(undefined8 *)PTR_DAT_04379d38;
      *(undefined8 *)PTR_DAT_04379d40 = uVar22;
      FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0x130));
      plVar33 = *(long **)(param_1 + 0x150);
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (plVar33 != (long *)0x0) {
        lVar32 = plVar33[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar33 + 0x20))();
        }
      }
      *(undefined ***)(param_1 + 0x150) = local_e8;
      if (local_d0 == (undefined **)0x0) {
LAB_02db2ab8:
        plVar33 = *(long **)(param_1 + 0x150);
      }
      else {
        puVar28 = local_d0[0xb];
        piVar10 = (int *)(puVar28 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db2ab8;
        *(undefined8 *)(puVar28 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
        plVar33 = *(long **)(param_1 + 0x150);
      }
      if (plVar33 == (long *)0x0) goto joined_r0x02db3438;
      lVar32 = plVar33[0xb];
      if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
      if (*(long *)(lVar32 + 0x10) == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
        *(undefined8 *)(lVar32 + 0x10) = uVar22;
      }
      piVar10 = (int *)(lVar32 + 0xc);
      do {
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar16) {
          *piVar10 = *piVar10 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      lVar32 = plVar33[0xb];
      piVar10 = (int *)(lVar32 + 0xc);
      do {
        bVar17 = *piVar10 + -1 == 0;
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar16) {
          *piVar10 = *piVar10 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
    }
    else if (lVar32 == -0x1d553c030e6b22ae) {
      FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      lVar32 = *(long *)PTR_DAT_04379d38;
      *(long *)PTR_DAT_04379d40 = lVar32;
      local_88 = local_160;
      if (local_160 == (undefined **)0x0) {
        local_88 = *(undefined ***)(lVar32 + 8);
      }
      lVar25 = nn::os::GetCurrentThread();
      plVar33 = (long *)(lVar32 + 0x150);
      do {
        if (*plVar33 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
            while (*plVar33 == 0) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *plVar33 = lVar25;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') goto LAB_02dad9e8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar16) {
          *plVar33 = lVar25;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
LAB_02dad9e8:
      puVar27 = *(undefined8 **)(lVar32 + 0x78);
      uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
      }
      else {
        puVar37 = local_150;
        if (puVar27 <= local_150) {
          uVar14 = 0;
          if (puVar27 != (undefined8 *)0x0) {
            uVar14 = (ulong)local_150 / (ulong)puVar27;
          }
          puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
        }
      }
      plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
      plVar33 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar33 = (long *)*plVar40;
      }
      if (plVar33 == (long *)0x0) {
LAB_02daf3c4:
        if (plVar33 == (long *)0x0) goto LAB_02daf508;
        lVar25 = plVar33[9];
        if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
          piVar10 = (int *)(lVar25 + 0xc);
          iVar19 = *(int *)(lVar25 + 0xc);
          do {
            plVar40 = *(long **)(lVar25 + 0x10);
            if (((*PTR_DAT_04379d20 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379d20);
            }
            while( true ) {
              if (plVar40 == (long *)0x0) goto LAB_02daf3d0;
              if (plVar40 == (long *)PTR_DAT_04379d28) break;
              plVar40 = (long *)*plVar40;
            }
            iVar18 = *piVar10;
            if (iVar18 == iVar19) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') {
                if (*(long *)(lVar25 + 0x18) != 0) {
                  plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                  pbVar36 = PTR_DAT_04379498;
                  plVar33 = (long *)PTR_DAT_043794a0;
                  goto LAB_02db1bb4;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar18;
          } while (iVar18 != 0);
        }
LAB_02daf3d0:
        plVar40 = (long *)FUN_02dbf220(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        pbVar36 = PTR_DAT_04379498;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
        local_e8 = (undefined **)0x0;
        local_e0 = (undefined8 *)0x0;
        FUN_0093bcac(&local_e8,&local_d0);
        ppuVar20 = local_d0;
        if (local_d0 != (undefined **)0x0) {
          ppuVar11 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar25 + 0xd8,&local_80);
          }
        }
        FUN_0093b3f4(plVar33 + 9,&local_e8);
        ppuVar20 = local_e8;
        plVar33 = (long *)PTR_DAT_043794a0;
        if (local_e8 == (undefined **)0x0) goto LAB_02db1bb4;
        ppuVar11 = local_e8 + 1;
        do {
          iVar19 = *(int *)ppuVar11;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *(int *)ppuVar11 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db1bb4;
        local_e8[2] = (undefined *)0x0;
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar25 = *plVar33 + 0xd8;
        *(long *)PTR_DAT_043794a8 = *plVar33;
        local_d0 = (undefined **)*ppuVar20;
        pppuVar24 = &local_d0;
LAB_02db1bb0:
        FUN_02a44274(lVar25,pppuVar24);
      }
      else {
        if (local_158 == (undefined **)0x0) {
          ppuVar20 = (undefined **)puVar13;
        }
        else {
          ppuVar20 = local_158 + 0xb;
        }
        if (uVar21 < 2) {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02daf3c4;
            plVar33 = (long *)*plVar33;
          } while ((plVar33 != (long *)0x0) &&
                  ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
        }
        else {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02daf3c4;
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
            puVar30 = (undefined8 *)plVar33[1];
            if (puVar27 <= puVar30) {
              uVar21 = 0;
              if (puVar27 != (undefined8 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar27;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
            }
          } while (puVar30 == puVar37);
        }
LAB_02daf508:
        plVar40 = (long *)FUN_02dbf220(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        plVar33 = (long *)PTR_DAT_043794a0;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pbVar36 = PTR_DAT_04379498;
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar35 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
          plVar35 = (long *)*plVar34;
        }
        if (plVar35 == (long *)0x0) {
LAB_02daf654:
          if (plVar35 == (long *)0x0) goto LAB_02db19c0;
          (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
          local_80 = (undefined **)0x0;
          uStack_78 = 0;
          FUN_0093bcac(&local_80,&local_e8);
          ppuVar20 = local_e8;
          if (local_e8 != (undefined **)0x0) {
            ppuVar11 = local_e8 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e8[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_f8 = (undefined8 *)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_f8);
            }
          }
          local_d0 = local_88;
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_0093b3f4(&local_c8,&local_80);
          plVar35[8] = (long)local_d0;
          FUN_0093b3f4(plVar35 + 9,&local_c8);
          puVar27 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_c8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_c8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_e8 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_e8);
            }
          }
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_e8 = (undefined **)*ppuVar20;
              pppuVar24 = &local_e8;
              goto LAB_02db1bb0;
            }
          }
        }
        else {
          if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daf654;
              plVar35 = (long *)*plVar35;
            } while ((plVar35 != (long *)0x0) &&
                    ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daf654;
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar35[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02db19c0:
          (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_0093bcac(&local_f8,&local_80);
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_70[0] = *ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,local_70);
            }
          }
          local_e8 = local_88;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_0093b3f4(&local_e0,&local_f8);
          local_d0 = local_158;
          if (local_158 != (undefined **)0x0) {
            (**(code **)(*local_158 + 0x18))();
          }
          local_c8 = local_150;
          local_b0 = local_138;
          local_c0 = uStack_148;
          uStack_b8 = local_140;
          if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x18))();
          }
          local_a8 = local_130;
          local_a0 = local_e8;
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          FUN_0093b3f4(&local_98,&local_e0);
          FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
          if (local_98 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_98 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_98[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*local_98;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (undefined **)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          puVar27 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_e0 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e0[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          puVar27 = local_f8;
          if (local_f8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_f8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_f8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_80 = (undefined **)*puVar27;
              pppuVar24 = &local_80;
              goto LAB_02db1bb0;
            }
          }
        }
      }
LAB_02db1bb4:
      lVar25 = local_168;
      if (*(char *)(lVar32 + 0x16b) != '\0') {
        lVar25 = 0;
      }
      FUN_02a763dc(plVar40,lVar25);
      *(undefined8 *)(lVar32 + 0x150) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
      FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
      if (plVar40 != (long *)0x0) {
        lVar32 = plVar40[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar40[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar40 + 0x20))(plVar40);
        }
      }
      plVar35 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar35 != (long *)0x0) {
        lVar32 = plVar35[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar35 + 0x20))();
        }
      }
      *plVar3 = (long)plVar40;
      lVar32 = 0;
      if (plVar40 != (long *)0x0) {
        local_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *)0x0;
        FUN_008802f0(&local_d0,plVar40 + 0xb);
        do {
          puVar27 = local_c8;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
          if (bVar16) {
            local_c8 = (undefined8 *)0x0;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar32 = *plVar33;
        *(long *)PTR_DAT_043794a8 = lVar32;
        FUN_02a44e0c(&local_80,lVar32,puVar27);
        ppuVar20 = local_d0;
        local_d0 = (undefined **)0x0;
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar11 = ppuVar20 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar20[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        ppuVar11 = local_80;
        ppuVar20 = local_d0;
        if (local_80 != (undefined **)0x0) {
          local_80 = (undefined **)0x0;
        }
        if (local_d0 != (undefined **)0x0) {
          ppuVar12 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar12;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar16) {
              *(int *)ppuVar12 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        if (ppuVar11 == (undefined **)0x0) {
          *(undefined8 *)(param_1 + 0x228) = 0;
        }
        else {
          ppuVar20 = ppuVar11 + 1;
          *(undefined **)(param_1 + 0x228) = *ppuVar11;
          do {
            iVar19 = *(int *)ppuVar20;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar16) {
              *(int *)ppuVar20 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar11[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_d0 = (undefined **)*ppuVar11;
            FUN_02a44274(lVar32 + 0xd8,&local_d0);
          }
        }
        lVar32 = *plVar3;
      }
      if (lVar32 == 0) goto joined_r0x02db3438;
      FUN_02dbb9c4(&local_d0,plVar3);
      if ((*(long *)(param_1 + 0x230) != 0) || (*(long *)(param_1 + 0x238) != 0)) {
        FUN_02a76df0(local_d0,param_1 + 0x218,1);
      }
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      uVar22 = *(undefined8 *)PTR_DAT_04379d38;
      *(undefined8 *)PTR_DAT_04379d40 = uVar22;
      FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0x220));
      plVar33 = *(long **)(param_1 + 0x240);
      *(undefined8 *)(param_1 + 0x240) = 0;
      if (plVar33 != (long *)0x0) {
        lVar32 = plVar33[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar33 + 0x20))();
        }
      }
      *(undefined ***)(param_1 + 0x240) = local_e8;
      if (local_d0 == (undefined **)0x0) {
LAB_02db306c:
        plVar33 = *(long **)(param_1 + 0x240);
      }
      else {
        puVar28 = local_d0[0xb];
        piVar10 = (int *)(puVar28 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db306c;
        *(undefined8 *)(puVar28 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
        plVar33 = *(long **)(param_1 + 0x240);
      }
      if (plVar33 == (long *)0x0) goto joined_r0x02db3438;
      lVar32 = plVar33[0xb];
      if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
      if (*(long *)(lVar32 + 0x10) == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
        *(undefined8 *)(lVar32 + 0x10) = uVar22;
      }
      piVar10 = (int *)(lVar32 + 0xc);
      do {
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar16) {
          *piVar10 = *piVar10 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      lVar32 = plVar33[0xb];
      piVar10 = (int *)(lVar32 + 0xc);
      do {
        bVar17 = *piVar10 + -1 == 0;
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar16) {
          *piVar10 = *piVar10 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
    }
    else {
      if (lVar32 != -0x9663e01d7c0c7ab) {
        if (lVar32 != -0x5a334c6b1605370) goto LAB_02dad06c;
        FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        lVar32 = *(long *)PTR_DAT_04379d38;
        *(long *)PTR_DAT_04379d40 = lVar32;
        local_88 = local_160;
        if (local_160 == (undefined **)0x0) {
          local_88 = *(undefined ***)(lVar32 + 8);
        }
        lVar25 = nn::os::GetCurrentThread();
        plVar33 = (long *)(lVar32 + 0x150);
        do {
          if (*plVar33 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
              while (*plVar33 == 0) {
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar16) {
                  *plVar33 = lVar25;
                  cVar15 = ExclusiveMonitorsStatus();
                }
                if (cVar15 == '\0') goto LAB_02dad968;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar16) {
            *plVar33 = lVar25;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
LAB_02dad968:
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
        }
        else {
          puVar37 = local_150;
          if (puVar27 <= local_150) {
            uVar14 = 0;
            if (puVar27 != (undefined8 *)0x0) {
              uVar14 = (ulong)local_150 / (ulong)puVar27;
            }
            puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
          }
        }
        plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar33 = (long *)0x0;
        if (plVar40 != (long *)0x0) {
          plVar33 = (long *)*plVar40;
        }
        if (plVar33 == (long *)0x0) {
LAB_02daef20:
          if (plVar33 == (long *)0x0) goto LAB_02daf064;
          lVar25 = plVar33[9];
          if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
            piVar10 = (int *)(lVar25 + 0xc);
            iVar19 = *(int *)(lVar25 + 0xc);
            do {
              plVar40 = *(long **)(lVar25 + 0x10);
              if (((*PTR_DAT_04379d20 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                  uVar22 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_04379d20);
              }
              while( true ) {
                if (plVar40 == (long *)0x0) goto LAB_02daef2c;
                if (plVar40 == (long *)PTR_DAT_04379d28) break;
                plVar40 = (long *)*plVar40;
              }
              iVar18 = *piVar10;
              if (iVar18 == iVar19) {
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + 1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
                if (cVar15 == '\0') {
                  if (*(long *)(lVar25 + 0x18) != 0) {
                    plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                    pbVar36 = PTR_DAT_04379498;
                    plVar33 = (long *)PTR_DAT_043794a0;
                    goto LAB_02db17a8;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar19 = iVar18;
            } while (iVar18 != 0);
          }
LAB_02daef2c:
          plVar40 = (long *)FUN_02dbea04(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
          pbVar36 = PTR_DAT_04379498;
          if (plVar40 != (long *)0x0) {
            lVar25 = plVar40[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar25 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
          local_e8 = (undefined **)0x0;
          local_e0 = (undefined8 *)0x0;
          FUN_0093bcac(&local_e8,&local_d0);
          ppuVar20 = local_d0;
          if (local_d0 != (undefined **)0x0) {
            ppuVar11 = local_d0 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_d0[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          FUN_0093b3f4(plVar33 + 9,&local_e8);
          ppuVar20 = local_e8;
          plVar33 = (long *)PTR_DAT_043794a0;
          if (local_e8 == (undefined **)0x0) goto LAB_02db17a8;
          ppuVar11 = local_e8 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db17a8;
          local_e8[2] = (undefined *)0x0;
          if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar36);
          }
          lVar25 = *plVar33 + 0xd8;
          *(long *)PTR_DAT_043794a8 = *plVar33;
          local_d0 = (undefined **)*ppuVar20;
          pppuVar24 = &local_d0;
LAB_02db17a4:
          FUN_02a44274(lVar25,pppuVar24);
        }
        else {
          if (local_158 == (undefined **)0x0) {
            ppuVar20 = (undefined **)puVar13;
          }
          else {
            ppuVar20 = local_158 + 0xb;
          }
          if (uVar21 < 2) {
            do {
              plVar40 = (long *)puVar13;
              if (plVar33[2] != 0) {
                plVar40 = (long *)(plVar33[2] + 0x58);
              }
              if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
              goto LAB_02daef20;
              plVar33 = (long *)*plVar33;
            } while ((plVar33 != (long *)0x0) &&
                    ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar40 = (long *)puVar13;
              if (plVar33[2] != 0) {
                plVar40 = (long *)(plVar33[2] + 0x58);
              }
              if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
              goto LAB_02daef20;
              plVar33 = (long *)*plVar33;
              if (plVar33 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar33[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02daf064:
          plVar40 = (long *)FUN_02dbea04(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
          plVar33 = (long *)PTR_DAT_043794a0;
          if (plVar40 != (long *)0x0) {
            lVar25 = plVar40[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar25 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          pbVar36 = PTR_DAT_04379498;
          puVar27 = *(undefined8 **)(lVar32 + 0x78);
          plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
          plVar35 = (long *)0x0;
          if (plVar34 != (long *)0x0) {
            plVar35 = (long *)*plVar34;
          }
          if (plVar35 == (long *)0x0) {
LAB_02daf1b0:
            if (plVar35 == (long *)0x0) goto LAB_02db15b4;
            (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
            local_80 = (undefined **)0x0;
            uStack_78 = 0;
            FUN_0093bcac(&local_80,&local_e8);
            ppuVar20 = local_e8;
            if (local_e8 != (undefined **)0x0) {
              ppuVar11 = local_e8 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_e8[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_f8 = (undefined8 *)*ppuVar20;
                FUN_02a44274(lVar25 + 0xd8,&local_f8);
              }
            }
            local_d0 = local_88;
            local_c8 = (undefined8 *)0x0;
            local_c0 = 0;
            FUN_0093b3f4(&local_c8,&local_80);
            plVar35[8] = (long)local_d0;
            FUN_0093b3f4(plVar35 + 9,&local_c8);
            puVar27 = local_c8;
            if (local_c8 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_c8 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_c8[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_e8 = (undefined **)*puVar27;
                FUN_02a44274(lVar25 + 0xd8,&local_e8);
              }
            }
            ppuVar20 = local_80;
            if (local_80 != (undefined **)0x0) {
              ppuVar11 = local_80 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_80[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33 + 0xd8;
                *(long *)PTR_DAT_043794a8 = *plVar33;
                local_e8 = (undefined **)*ppuVar20;
                pppuVar24 = &local_e8;
                goto LAB_02db17a4;
              }
            }
          }
          else {
            if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
              do {
                plVar34 = (long *)puVar13;
                if (plVar35[2] != 0) {
                  plVar34 = (long *)(plVar35[2] + 0x58);
                }
                ppuVar20 = (undefined **)puVar13;
                if (local_158 != (undefined **)0x0) {
                  ppuVar20 = local_158 + 0xb;
                }
                if (((undefined *)*plVar34 == *ppuVar20) &&
                   ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daf1b0;
                plVar35 = (long *)*plVar35;
              } while ((plVar35 != (long *)0x0) &&
                      ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
            }
            else {
              do {
                plVar34 = (long *)puVar13;
                if (plVar35[2] != 0) {
                  plVar34 = (long *)(plVar35[2] + 0x58);
                }
                ppuVar20 = (undefined **)puVar13;
                if (local_158 != (undefined **)0x0) {
                  ppuVar20 = local_158 + 0xb;
                }
                if (((undefined *)*plVar34 == *ppuVar20) &&
                   ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daf1b0;
                plVar35 = (long *)*plVar35;
                if (plVar35 == (long *)0x0) break;
                puVar30 = (undefined8 *)plVar35[1];
                if (puVar27 <= puVar30) {
                  uVar21 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar21 = (ulong)puVar30 / (ulong)puVar27;
                  }
                  puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
                }
              } while (puVar30 == puVar37);
            }
LAB_02db15b4:
            (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
            local_f8 = (undefined8 *)0x0;
            uStack_f0 = 0;
            FUN_0093bcac(&local_f8,&local_80);
            ppuVar20 = local_80;
            if (local_80 != (undefined **)0x0) {
              ppuVar11 = local_80 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_80[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_70[0] = *ppuVar20;
                FUN_02a44274(lVar25 + 0xd8,local_70);
              }
            }
            local_e8 = local_88;
            local_e0 = (undefined8 *)0x0;
            uStack_d8 = 0;
            FUN_0093b3f4(&local_e0,&local_f8);
            local_d0 = local_158;
            if (local_158 != (undefined **)0x0) {
              (**(code **)(*local_158 + 0x18))();
            }
            local_c8 = local_150;
            local_b0 = local_138;
            local_c0 = uStack_148;
            uStack_b8 = local_140;
            if (local_138 != (long *)0x0) {
              (**(code **)(*local_138 + 0x18))();
            }
            local_a8 = local_130;
            local_a0 = local_e8;
            local_98 = (undefined8 *)0x0;
            uStack_90 = 0;
            FUN_0093b3f4(&local_98,&local_e0);
            FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
            if (local_98 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_98 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_98[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_80 = (undefined **)*local_98;
                FUN_02a44274(lVar25 + 0xd8,&local_80);
              }
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            if (local_d0 != (undefined **)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            puVar27 = local_e0;
            if (local_e0 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_e0 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_e0[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_80 = (undefined **)*puVar27;
                FUN_02a44274(lVar25 + 0xd8,&local_80);
              }
            }
            puVar27 = local_f8;
            if (local_f8 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_f8 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_f8[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33 + 0xd8;
                *(long *)PTR_DAT_043794a8 = *plVar33;
                local_80 = (undefined **)*puVar27;
                pppuVar24 = &local_80;
                goto LAB_02db17a4;
              }
            }
          }
        }
LAB_02db17a8:
        lVar25 = local_168;
        if (*(char *)(lVar32 + 0x16b) != '\0') {
          lVar25 = 0;
        }
        FUN_02a763dc(plVar40,lVar25);
        *(undefined8 *)(lVar32 + 0x150) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
        FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
        if (plVar40 != (long *)0x0) {
          lVar32 = plVar40[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar40[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar40 + 0x20))(plVar40);
          }
        }
        plVar35 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar35 != (long *)0x0) {
          lVar32 = plVar35[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar35 + 0x20))();
          }
        }
        *plVar9 = (long)plVar40;
        lVar32 = 0;
        if (plVar40 != (long *)0x0) {
          local_d0 = (undefined **)0x0;
          local_c8 = (undefined8 *)0x0;
          FUN_008802f0(&local_d0,plVar40 + 0xb);
          do {
            puVar27 = local_c8;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
            if (bVar16) {
              local_c8 = (undefined8 *)0x0;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar36);
          }
          lVar32 = *plVar33;
          *(long *)PTR_DAT_043794a8 = lVar32;
          FUN_02a44e0c(&local_80,lVar32,puVar27);
          ppuVar20 = local_d0;
          local_d0 = (undefined **)0x0;
          if (ppuVar20 != (undefined **)0x0) {
            ppuVar11 = ppuVar20 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              ppuVar20[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_e8 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_e8);
            }
          }
          ppuVar11 = local_80;
          ppuVar20 = local_d0;
          if (local_80 != (undefined **)0x0) {
            local_80 = (undefined **)0x0;
          }
          if (local_d0 != (undefined **)0x0) {
            ppuVar12 = local_d0 + 1;
            do {
              iVar19 = *(int *)ppuVar12;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar16) {
                *(int *)ppuVar12 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_d0[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_e8 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_e8);
            }
          }
          if (ppuVar11 == (undefined **)0x0) {
            *(undefined8 *)(param_1 + 0xa8) = 0;
          }
          else {
            ppuVar20 = ppuVar11 + 1;
            *(undefined **)(param_1 + 0xa8) = *ppuVar11;
            do {
              iVar19 = *(int *)ppuVar20;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
              if (bVar16) {
                *(int *)ppuVar20 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              ppuVar11[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_d0 = (undefined **)*ppuVar11;
              FUN_02a44274(lVar32 + 0xd8,&local_d0);
            }
          }
          lVar32 = *plVar9;
        }
        if (lVar32 == 0) goto joined_r0x02db3438;
        FUN_02dbd674(&local_d0,plVar9);
        if ((*(long *)(param_1 + 0xb0) != 0) || (*(long *)(param_1 + 0xb8) != 0)) {
          FUN_02a76df0(local_d0,param_1 + 0x98,1);
        }
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        uVar22 = *(undefined8 *)PTR_DAT_04379d38;
        *(undefined8 *)PTR_DAT_04379d40 = uVar22;
        FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0xa0));
        plVar33 = *(long **)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0xc0) = 0;
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))();
          }
        }
        *(undefined ***)(param_1 + 0xc0) = local_e8;
        if (local_d0 == (undefined **)0x0) {
LAB_02db2f48:
          plVar33 = *(long **)(param_1 + 0xc0);
        }
        else {
          puVar28 = local_d0[0xb];
          piVar10 = (int *)(puVar28 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db2f48;
          *(undefined8 *)(puVar28 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
          plVar33 = *(long **)(param_1 + 0xc0);
        }
        if (plVar33 == (long *)0x0) goto joined_r0x02db3438;
        lVar32 = plVar33[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            bVar17 = *piVar10 + -1 == 0;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          goto LAB_02db3430;
        }
        goto LAB_02db62f4;
      }
      FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      lVar32 = *(long *)PTR_DAT_04379d38;
      *(long *)PTR_DAT_04379d40 = lVar32;
      local_88 = local_160;
      if (local_160 == (undefined **)0x0) {
        local_88 = *(undefined ***)(lVar32 + 8);
      }
      lVar25 = nn::os::GetCurrentThread();
      plVar33 = (long *)(lVar32 + 0x150);
      do {
        if (*plVar33 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
            while (*plVar33 == 0) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *plVar33 = lVar25;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') goto LAB_02dad868;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar16) {
          *plVar33 = lVar25;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
LAB_02dad868:
      puVar27 = *(undefined8 **)(lVar32 + 0x78);
      uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
      }
      else {
        puVar37 = local_150;
        if (puVar27 <= local_150) {
          uVar14 = 0;
          if (puVar27 != (undefined8 *)0x0) {
            uVar14 = (ulong)local_150 / (ulong)puVar27;
          }
          puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
        }
      }
      plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
      plVar33 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar33 = (long *)*plVar40;
      }
      if (plVar33 == (long *)0x0) {
LAB_02dae5d8:
        if (plVar33 == (long *)0x0) goto LAB_02dae71c;
        lVar25 = plVar33[9];
        if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
          piVar10 = (int *)(lVar25 + 0xc);
          iVar19 = *(int *)(lVar25 + 0xc);
          do {
            plVar40 = *(long **)(lVar25 + 0x10);
            if (((*PTR_DAT_04379d20 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379d20);
            }
            while( true ) {
              if (plVar40 == (long *)0x0) goto LAB_02dae5e4;
              if (plVar40 == (long *)PTR_DAT_04379d28) break;
              plVar40 = (long *)*plVar40;
            }
            iVar18 = *piVar10;
            if (iVar18 == iVar19) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') {
                if (*(long *)(lVar25 + 0x18) != 0) {
                  plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                  pbVar36 = PTR_DAT_04379498;
                  plVar33 = (long *)PTR_DAT_043794a0;
                  goto LAB_02db0f90;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar18;
          } while (iVar18 != 0);
        }
LAB_02dae5e4:
        plVar40 = (long *)FUN_02dbeb4c(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        pbVar36 = PTR_DAT_04379498;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
        local_e8 = (undefined **)0x0;
        local_e0 = (undefined8 *)0x0;
        FUN_0093bcac(&local_e8,&local_d0);
        ppuVar20 = local_d0;
        if (local_d0 != (undefined **)0x0) {
          ppuVar11 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar25 + 0xd8,&local_80);
          }
        }
        FUN_0093b3f4(plVar33 + 9,&local_e8);
        ppuVar20 = local_e8;
        plVar33 = (long *)PTR_DAT_043794a0;
        if (local_e8 == (undefined **)0x0) goto LAB_02db0f90;
        ppuVar11 = local_e8 + 1;
        do {
          iVar19 = *(int *)ppuVar11;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *(int *)ppuVar11 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db0f90;
        local_e8[2] = (undefined *)0x0;
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar25 = *plVar33 + 0xd8;
        *(long *)PTR_DAT_043794a8 = *plVar33;
        local_d0 = (undefined **)*ppuVar20;
        pppuVar24 = &local_d0;
LAB_02db0f8c:
        FUN_02a44274(lVar25,pppuVar24);
      }
      else {
        if (local_158 == (undefined **)0x0) {
          ppuVar20 = (undefined **)puVar13;
        }
        else {
          ppuVar20 = local_158 + 0xb;
        }
        if (uVar21 < 2) {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02dae5d8;
            plVar33 = (long *)*plVar33;
          } while ((plVar33 != (long *)0x0) &&
                  ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
        }
        else {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02dae5d8;
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
            puVar30 = (undefined8 *)plVar33[1];
            if (puVar27 <= puVar30) {
              uVar21 = 0;
              if (puVar27 != (undefined8 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar27;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
            }
          } while (puVar30 == puVar37);
        }
LAB_02dae71c:
        plVar40 = (long *)FUN_02dbeb4c(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        plVar33 = (long *)PTR_DAT_043794a0;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pbVar36 = PTR_DAT_04379498;
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar35 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
          plVar35 = (long *)*plVar34;
        }
        if (plVar35 == (long *)0x0) {
LAB_02dae868:
          if (plVar35 == (long *)0x0) goto LAB_02db0d9c;
          (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
          local_80 = (undefined **)0x0;
          uStack_78 = 0;
          FUN_0093bcac(&local_80,&local_e8);
          ppuVar20 = local_e8;
          if (local_e8 != (undefined **)0x0) {
            ppuVar11 = local_e8 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e8[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_f8 = (undefined8 *)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_f8);
            }
          }
          local_d0 = local_88;
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_0093b3f4(&local_c8,&local_80);
          plVar35[8] = (long)local_d0;
          FUN_0093b3f4(plVar35 + 9,&local_c8);
          puVar27 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_c8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_c8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_e8 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_e8);
            }
          }
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_e8 = (undefined **)*ppuVar20;
              pppuVar24 = &local_e8;
              goto LAB_02db0f8c;
            }
          }
        }
        else {
          if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dae868;
              plVar35 = (long *)*plVar35;
            } while ((plVar35 != (long *)0x0) &&
                    ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dae868;
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar35[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02db0d9c:
          (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_0093bcac(&local_f8,&local_80);
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_70[0] = *ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,local_70);
            }
          }
          local_e8 = local_88;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_0093b3f4(&local_e0,&local_f8);
          local_d0 = local_158;
          if (local_158 != (undefined **)0x0) {
            (**(code **)(*local_158 + 0x18))();
          }
          local_c8 = local_150;
          local_b0 = local_138;
          local_c0 = uStack_148;
          uStack_b8 = local_140;
          if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x18))();
          }
          local_a8 = local_130;
          local_a0 = local_e8;
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          FUN_0093b3f4(&local_98,&local_e0);
          FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
          if (local_98 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_98 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_98[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*local_98;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (undefined **)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          puVar27 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_e0 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e0[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          puVar27 = local_f8;
          if (local_f8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_f8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_f8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_80 = (undefined **)*puVar27;
              pppuVar24 = &local_80;
              goto LAB_02db0f8c;
            }
          }
        }
      }
LAB_02db0f90:
      lVar25 = local_168;
      if (*(char *)(lVar32 + 0x16b) != '\0') {
        lVar25 = 0;
      }
      FUN_02a763dc(plVar40,lVar25);
      *(undefined8 *)(lVar32 + 0x150) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
      FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
      if (plVar40 != (long *)0x0) {
        lVar32 = plVar40[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar40[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar40 + 0x20))(plVar40);
        }
      }
      plVar35 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar35 != (long *)0x0) {
        lVar32 = plVar35[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar35 + 0x20))();
        }
      }
      *plVar8 = (long)plVar40;
      lVar32 = 0;
      if (plVar40 != (long *)0x0) {
        local_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *)0x0;
        FUN_008802f0(&local_d0,plVar40 + 0xb);
        do {
          puVar27 = local_c8;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
          if (bVar16) {
            local_c8 = (undefined8 *)0x0;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar32 = *plVar33;
        *(long *)PTR_DAT_043794a8 = lVar32;
        FUN_02a44e0c(&local_80,lVar32,puVar27);
        ppuVar20 = local_d0;
        local_d0 = (undefined **)0x0;
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar11 = ppuVar20 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar20[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        ppuVar11 = local_80;
        ppuVar20 = local_d0;
        if (local_80 != (undefined **)0x0) {
          local_80 = (undefined **)0x0;
        }
        if (local_d0 != (undefined **)0x0) {
          ppuVar12 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar12;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar16) {
              *(int *)ppuVar12 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        if (ppuVar11 == (undefined **)0x0) {
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
        else {
          ppuVar20 = ppuVar11 + 1;
          *(undefined **)(param_1 + 0xd8) = *ppuVar11;
          do {
            iVar19 = *(int *)ppuVar20;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar16) {
              *(int *)ppuVar20 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar11[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_d0 = (undefined **)*ppuVar11;
            FUN_02a44274(lVar32 + 0xd8,&local_d0);
          }
        }
        lVar32 = *plVar8;
      }
      if (lVar32 == 0) goto joined_r0x02db3438;
      FUN_028f2730(&local_d0,plVar8);
      if ((*(long *)(param_1 + 0xe0) != 0) || (*(long *)(param_1 + 0xe8) != 0)) {
        FUN_02a76df0(local_d0,param_1 + 200,1);
      }
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      uVar22 = *(undefined8 *)PTR_DAT_04379d38;
      *(undefined8 *)PTR_DAT_04379d40 = uVar22;
      FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0xd0));
      plVar33 = *(long **)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xf0) = 0;
      if (plVar33 != (long *)0x0) {
        lVar32 = plVar33[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar33 + 0x20))();
        }
      }
      *(undefined ***)(param_1 + 0xf0) = local_e8;
      if (local_d0 == (undefined **)0x0) {
LAB_02db2d00:
        plVar33 = *(long **)(param_1 + 0xf0);
      }
      else {
        puVar28 = local_d0[0xb];
        piVar10 = (int *)(puVar28 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db2d00;
        *(undefined8 *)(puVar28 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
        plVar33 = *(long **)(param_1 + 0xf0);
      }
      if (plVar33 == (long *)0x0) goto joined_r0x02db3438;
      lVar32 = plVar33[0xb];
      if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
      if (*(long *)(lVar32 + 0x10) == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
        *(undefined8 *)(lVar32 + 0x10) = uVar22;
      }
      piVar10 = (int *)(lVar32 + 0xc);
      do {
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar16) {
          *piVar10 = *piVar10 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      lVar32 = plVar33[0xb];
      piVar10 = (int *)(lVar32 + 0xc);
      do {
        bVar17 = *piVar10 + -1 == 0;
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar16) {
          *piVar10 = *piVar10 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
    }
LAB_02db3430:
    if (bVar17) {
      *(undefined8 *)(lVar32 + 0x18) = 0;
      (**(code **)(*plVar33 + 0x20))(plVar33);
    }
  }
  else {
    if (lVar32 < 0x3b4e42bec1dd3ab6) {
      if (lVar32 == 0x40a8a38d6d71a99) {
        FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        lVar32 = *(long *)PTR_DAT_04379d38;
        *(long *)PTR_DAT_04379d40 = lVar32;
        local_88 = local_160;
        if (local_160 == (undefined **)0x0) {
          local_88 = *(undefined ***)(lVar32 + 8);
        }
        lVar25 = nn::os::GetCurrentThread();
        plVar33 = (long *)(lVar32 + 0x150);
        do {
          if (*plVar33 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
              while (*plVar33 == 0) {
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar16) {
                  *plVar33 = lVar25;
                  cVar15 = ExclusiveMonitorsStatus();
                }
                if (cVar15 == '\0') goto LAB_02dadae8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar16) {
            *plVar33 = lVar25;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
LAB_02dadae8:
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
        }
        else {
          puVar37 = local_150;
          if (puVar27 <= local_150) {
            uVar14 = 0;
            if (puVar27 != (undefined8 *)0x0) {
              uVar14 = (ulong)local_150 / (ulong)puVar27;
            }
            puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
          }
        }
        plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar33 = (long *)0x0;
        if (plVar40 != (long *)0x0) {
          plVar33 = (long *)*plVar40;
        }
        if (plVar33 == (long *)0x0) {
LAB_02dafd0c:
          if (plVar33 == (long *)0x0) goto LAB_02dafe50;
          lVar25 = plVar33[9];
          if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
            piVar10 = (int *)(lVar25 + 0xc);
            iVar19 = *(int *)(lVar25 + 0xc);
            do {
              plVar40 = *(long **)(lVar25 + 0x10);
              if (((*PTR_DAT_04379d20 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                  uVar22 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_04379d20);
              }
              while( true ) {
                if (plVar40 == (long *)0x0) goto LAB_02dafd18;
                if (plVar40 == (long *)PTR_DAT_04379d28) break;
                plVar40 = (long *)*plVar40;
              }
              iVar18 = *piVar10;
              if (iVar18 == iVar19) {
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + 1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
                if (cVar15 == '\0') {
                  if (*(long *)(lVar25 + 0x18) != 0) {
                    plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                    pbVar36 = PTR_DAT_04379498;
                    plVar33 = (long *)PTR_DAT_043794a0;
                    goto LAB_02db23cc;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar19 = iVar18;
            } while (iVar18 != 0);
          }
LAB_02dafd18:
          plVar40 = (long *)FUN_02dbfedc(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
          pbVar36 = PTR_DAT_04379498;
          if (plVar40 != (long *)0x0) {
            lVar25 = plVar40[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar25 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
          local_e8 = (undefined **)0x0;
          local_e0 = (undefined8 *)0x0;
          FUN_0093bcac(&local_e8,&local_d0);
          ppuVar20 = local_d0;
          if (local_d0 != (undefined **)0x0) {
            ppuVar11 = local_d0 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_d0[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          FUN_0093b3f4(plVar33 + 9,&local_e8);
          ppuVar20 = local_e8;
          plVar33 = (long *)PTR_DAT_043794a0;
          if (local_e8 == (undefined **)0x0) goto LAB_02db23cc;
          ppuVar11 = local_e8 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db23cc;
          local_e8[2] = (undefined *)0x0;
          if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar36);
          }
          lVar25 = *plVar33 + 0xd8;
          *(long *)PTR_DAT_043794a8 = *plVar33;
          local_d0 = (undefined **)*ppuVar20;
          pppuVar24 = &local_d0;
LAB_02db23c8:
          FUN_02a44274(lVar25,pppuVar24);
        }
        else {
          if (local_158 == (undefined **)0x0) {
            ppuVar20 = (undefined **)puVar13;
          }
          else {
            ppuVar20 = local_158 + 0xb;
          }
          if (uVar21 < 2) {
            do {
              plVar40 = (long *)puVar13;
              if (plVar33[2] != 0) {
                plVar40 = (long *)(plVar33[2] + 0x58);
              }
              if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
              goto LAB_02dafd0c;
              plVar33 = (long *)*plVar33;
            } while ((plVar33 != (long *)0x0) &&
                    ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar40 = (long *)puVar13;
              if (plVar33[2] != 0) {
                plVar40 = (long *)(plVar33[2] + 0x58);
              }
              if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
              goto LAB_02dafd0c;
              plVar33 = (long *)*plVar33;
              if (plVar33 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar33[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02dafe50:
          plVar40 = (long *)FUN_02dbfedc(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
          plVar33 = (long *)PTR_DAT_043794a0;
          if (plVar40 != (long *)0x0) {
            lVar25 = plVar40[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar25 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          pbVar36 = PTR_DAT_04379498;
          puVar27 = *(undefined8 **)(lVar32 + 0x78);
          plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
          plVar35 = (long *)0x0;
          if (plVar34 != (long *)0x0) {
            plVar35 = (long *)*plVar34;
          }
          if (plVar35 == (long *)0x0) {
LAB_02daff9c:
            if (plVar35 == (long *)0x0) goto LAB_02db21d8;
            (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
            local_80 = (undefined **)0x0;
            uStack_78 = 0;
            FUN_0093bcac(&local_80,&local_e8);
            ppuVar20 = local_e8;
            if (local_e8 != (undefined **)0x0) {
              ppuVar11 = local_e8 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_e8[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_f8 = (undefined8 *)*ppuVar20;
                FUN_02a44274(lVar25 + 0xd8,&local_f8);
              }
            }
            local_d0 = local_88;
            local_c8 = (undefined8 *)0x0;
            local_c0 = 0;
            FUN_0093b3f4(&local_c8,&local_80);
            plVar35[8] = (long)local_d0;
            FUN_0093b3f4(plVar35 + 9,&local_c8);
            puVar27 = local_c8;
            if (local_c8 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_c8 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_c8[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_e8 = (undefined **)*puVar27;
                FUN_02a44274(lVar25 + 0xd8,&local_e8);
              }
            }
            ppuVar20 = local_80;
            if (local_80 != (undefined **)0x0) {
              ppuVar11 = local_80 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_80[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33 + 0xd8;
                *(long *)PTR_DAT_043794a8 = *plVar33;
                local_e8 = (undefined **)*ppuVar20;
                pppuVar24 = &local_e8;
                goto LAB_02db23c8;
              }
            }
          }
          else {
            if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
              do {
                plVar34 = (long *)puVar13;
                if (plVar35[2] != 0) {
                  plVar34 = (long *)(plVar35[2] + 0x58);
                }
                ppuVar20 = (undefined **)puVar13;
                if (local_158 != (undefined **)0x0) {
                  ppuVar20 = local_158 + 0xb;
                }
                if (((undefined *)*plVar34 == *ppuVar20) &&
                   ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daff9c;
                plVar35 = (long *)*plVar35;
              } while ((plVar35 != (long *)0x0) &&
                      ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
            }
            else {
              do {
                plVar34 = (long *)puVar13;
                if (plVar35[2] != 0) {
                  plVar34 = (long *)(plVar35[2] + 0x58);
                }
                ppuVar20 = (undefined **)puVar13;
                if (local_158 != (undefined **)0x0) {
                  ppuVar20 = local_158 + 0xb;
                }
                if (((undefined *)*plVar34 == *ppuVar20) &&
                   ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daff9c;
                plVar35 = (long *)*plVar35;
                if (plVar35 == (long *)0x0) break;
                puVar30 = (undefined8 *)plVar35[1];
                if (puVar27 <= puVar30) {
                  uVar21 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar21 = (ulong)puVar30 / (ulong)puVar27;
                  }
                  puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
                }
              } while (puVar30 == puVar37);
            }
LAB_02db21d8:
            (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
            local_f8 = (undefined8 *)0x0;
            uStack_f0 = 0;
            FUN_0093bcac(&local_f8,&local_80);
            ppuVar20 = local_80;
            if (local_80 != (undefined **)0x0) {
              ppuVar11 = local_80 + 1;
              do {
                iVar19 = *(int *)ppuVar11;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar16) {
                  *(int *)ppuVar11 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_80[2] = (undefined *)0x0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_70[0] = *ppuVar20;
                FUN_02a44274(lVar25 + 0xd8,local_70);
              }
            }
            local_e8 = local_88;
            local_e0 = (undefined8 *)0x0;
            uStack_d8 = 0;
            FUN_0093b3f4(&local_e0,&local_f8);
            local_d0 = local_158;
            if (local_158 != (undefined **)0x0) {
              (**(code **)(*local_158 + 0x18))();
            }
            local_c8 = local_150;
            local_b0 = local_138;
            local_c0 = uStack_148;
            uStack_b8 = local_140;
            if (local_138 != (long *)0x0) {
              (**(code **)(*local_138 + 0x18))();
            }
            local_a8 = local_130;
            local_a0 = local_e8;
            local_98 = (undefined8 *)0x0;
            uStack_90 = 0;
            FUN_0093b3f4(&local_98,&local_e0);
            FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
            if (local_98 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_98 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_98[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_80 = (undefined **)*local_98;
                FUN_02a44274(lVar25 + 0xd8,&local_80);
              }
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            if (local_d0 != (undefined **)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            puVar27 = local_e0;
            if (local_e0 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_e0 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_e0[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33;
                *(long *)PTR_DAT_043794a8 = lVar25;
                local_80 = (undefined **)*puVar27;
                FUN_02a44274(lVar25 + 0xd8,&local_80);
              }
            }
            puVar27 = local_f8;
            if (local_f8 != (undefined8 *)0x0) {
              piVar10 = (int *)(local_f8 + 1);
              do {
                iVar19 = *piVar10;
                cVar15 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar16) {
                  *piVar10 = iVar19 + -1;
                  cVar15 = ExclusiveMonitorsStatus();
                }
              } while (cVar15 != '\0');
              if (iVar19 + -1 == 0) {
                local_f8[2] = 0;
                if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar36);
                }
                lVar25 = *plVar33 + 0xd8;
                *(long *)PTR_DAT_043794a8 = *plVar33;
                local_80 = (undefined **)*puVar27;
                pppuVar24 = &local_80;
                goto LAB_02db23c8;
              }
            }
          }
        }
LAB_02db23cc:
        lVar25 = local_168;
        if (*(char *)(lVar32 + 0x16b) != '\0') {
          lVar25 = 0;
        }
        FUN_02a763dc(plVar40,lVar25);
        *(undefined8 *)(lVar32 + 0x150) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
        FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
        if (plVar40 != (long *)0x0) {
          lVar32 = plVar40[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar40[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar40 + 0x20))(plVar40);
          }
        }
        plVar35 = (long *)*plVar1;
        *plVar1 = 0;
        if (plVar35 != (long *)0x0) {
          lVar32 = plVar35[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar35 + 0x20))();
          }
        }
        *plVar1 = (long)plVar40;
        lVar32 = 0;
        if (plVar40 != (long *)0x0) {
          local_d0 = (undefined **)0x0;
          local_c8 = (undefined8 *)0x0;
          FUN_008802f0(&local_d0,plVar40 + 0xb);
          do {
            puVar27 = local_c8;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
            if (bVar16) {
              local_c8 = (undefined8 *)0x0;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar36);
          }
          lVar32 = *plVar33;
          *(long *)PTR_DAT_043794a8 = lVar32;
          FUN_02a44e0c(&local_80,lVar32,puVar27);
          ppuVar20 = local_d0;
          local_d0 = (undefined **)0x0;
          if (ppuVar20 != (undefined **)0x0) {
            ppuVar11 = ppuVar20 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              ppuVar20[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_e8 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_e8);
            }
          }
          ppuVar11 = local_80;
          ppuVar20 = local_d0;
          if (local_80 != (undefined **)0x0) {
            local_80 = (undefined **)0x0;
          }
          if (local_d0 != (undefined **)0x0) {
            ppuVar12 = local_d0 + 1;
            do {
              iVar19 = *(int *)ppuVar12;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar16) {
                *(int *)ppuVar12 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_d0[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_e8 = (undefined **)*ppuVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_e8);
            }
          }
          if (ppuVar11 == (undefined **)0x0) {
            *(undefined8 *)(param_1 + 600) = 0;
          }
          else {
            ppuVar20 = ppuVar11 + 1;
            *(undefined **)(param_1 + 600) = *ppuVar11;
            do {
              iVar19 = *(int *)ppuVar20;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
              if (bVar16) {
                *(int *)ppuVar20 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              ppuVar11[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar32 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar32;
              local_d0 = (undefined **)*ppuVar11;
              FUN_02a44274(lVar32 + 0xd8,&local_d0);
            }
          }
          lVar32 = *plVar1;
        }
        if (lVar32 == 0) goto joined_r0x02db3438;
        FUN_02dbb4f8(&local_d0,plVar1);
        if ((*(long *)(param_1 + 0x260) != 0) || (*(long *)(param_1 + 0x268) != 0)) {
          FUN_02a76df0(local_d0,param_1 + 0x248,1);
        }
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        uVar22 = *(undefined8 *)PTR_DAT_04379d38;
        *(undefined8 *)PTR_DAT_04379d40 = uVar22;
        FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0x250));
        plVar33 = *(long **)(param_1 + 0x270);
        *(undefined8 *)(param_1 + 0x270) = 0;
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))();
          }
        }
        *(undefined ***)(param_1 + 0x270) = local_e8;
        if (local_d0 == (undefined **)0x0) {
LAB_02db32b4:
          plVar33 = *(long **)(param_1 + 0x270);
        }
        else {
          puVar28 = local_d0[0xb];
          piVar10 = (int *)(puVar28 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db32b4;
          *(undefined8 *)(puVar28 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
          plVar33 = *(long **)(param_1 + 0x270);
        }
        if (plVar33 == (long *)0x0) goto joined_r0x02db3438;
        lVar32 = plVar33[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            bVar17 = *piVar10 + -1 == 0;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          goto LAB_02db3430;
        }
        goto LAB_02db62f4;
      }
      if (lVar32 == 0x90466d7675d531d) {
        if ((*(long *)(param_1 + 0x2a8) != 0) &&
           (**(char **)(*(long *)(param_1 + 0x2a8) + 0x60) != '\0')) goto LAB_02dad06c;
        FUN_010c4f0c(&local_d0,&local_128,plVar41 + 4,&DAT_03996322);
        uVar21 = FUN_01358d34(param_1 + 0x1b8,1,&local_d0,0,local_160,local_168);
        if (((uVar21 & 1) != 0) && (plVar33 = *(long **)(param_1 + 0x1e0), plVar33 != (long *)0x0))
        {
          lVar32 = plVar33[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10 + -1;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
joined_r0x02dad54c:
          if (iVar19 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))(plVar33);
          }
        }
joined_r0x02db38e8:
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        ppuVar20 = local_d0;
        if (local_d0 == (undefined **)0x0) goto LAB_02dad06c;
        goto LAB_02dad060;
      }
      if (lVar32 == 0x2e3b6866119b9e2e) {
        FUN_010c4f0c(&local_d0,&local_128,plVar41 + 4,&DAT_03996322);
        uVar21 = FUN_00938764(param_1 + 0x278,1,&local_d0,0,local_160,local_168);
        if (((uVar21 & 1) == 0) || (plVar33 = *(long **)(param_1 + 0x2a0), plVar33 == (long *)0x0))
        goto joined_r0x02db38e8;
        lVar32 = plVar33[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10 + -1;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          goto joined_r0x02dad54c;
        }
        goto LAB_02db62f4;
      }
      goto LAB_02dad06c;
    }
    if (lVar32 == 0x3b4e42bec1dd3ab6) {
      FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      lVar32 = *(long *)PTR_DAT_04379d38;
      *(long *)PTR_DAT_04379d40 = lVar32;
      local_88 = local_160;
      if (local_160 == (undefined **)0x0) {
        local_88 = *(undefined ***)(lVar32 + 8);
      }
      lVar25 = nn::os::GetCurrentThread();
      plVar33 = (long *)(lVar32 + 0x150);
      do {
        if (*plVar33 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
            while (*plVar33 == 0) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *plVar33 = lVar25;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') goto LAB_02dadb68;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar16) {
          *plVar33 = lVar25;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
LAB_02dadb68:
      puVar27 = *(undefined8 **)(lVar32 + 0x78);
      uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
      }
      else {
        puVar37 = local_150;
        if (puVar27 <= local_150) {
          uVar14 = 0;
          if (puVar27 != (undefined8 *)0x0) {
            uVar14 = (ulong)local_150 / (ulong)puVar27;
          }
          puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
        }
      }
      plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
      plVar33 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar33 = (long *)*plVar40;
      }
      if (plVar33 == (long *)0x0) {
LAB_02db01b0:
        if (plVar33 == (long *)0x0) goto LAB_02db02f4;
        lVar25 = plVar33[9];
        if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
          piVar10 = (int *)(lVar25 + 0xc);
          iVar19 = *(int *)(lVar25 + 0xc);
          do {
            plVar40 = *(long **)(lVar25 + 0x10);
            if (((*PTR_DAT_04379d20 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379d20);
            }
            while( true ) {
              if (plVar40 == (long *)0x0) goto LAB_02db01bc;
              if (plVar40 == (long *)PTR_DAT_04379d28) break;
              plVar40 = (long *)*plVar40;
            }
            iVar18 = *piVar10;
            if (iVar18 == iVar19) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') {
                if (*(long *)(lVar25 + 0x18) != 0) {
                  plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                  pbVar36 = PTR_DAT_04379498;
                  plVar33 = (long *)PTR_DAT_043794a0;
                  goto LAB_02db27d8;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar18;
          } while (iVar18 != 0);
        }
LAB_02db01bc:
        plVar40 = (long *)FUN_02dbeca4(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        pbVar36 = PTR_DAT_04379498;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
        local_e8 = (undefined **)0x0;
        local_e0 = (undefined8 *)0x0;
        FUN_0093bcac(&local_e8,&local_d0);
        ppuVar20 = local_d0;
        if (local_d0 != (undefined **)0x0) {
          ppuVar11 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar25 + 0xd8,&local_80);
          }
        }
        FUN_0093b3f4(plVar33 + 9,&local_e8);
        ppuVar20 = local_e8;
        plVar33 = (long *)PTR_DAT_043794a0;
        if (local_e8 == (undefined **)0x0) goto LAB_02db27d8;
        ppuVar11 = local_e8 + 1;
        do {
          iVar19 = *(int *)ppuVar11;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *(int *)ppuVar11 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db27d8;
        local_e8[2] = (undefined *)0x0;
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar25 = *plVar33 + 0xd8;
        *(long *)PTR_DAT_043794a8 = *plVar33;
        local_d0 = (undefined **)*ppuVar20;
        pppuVar24 = &local_d0;
LAB_02db27d4:
        FUN_02a44274(lVar25,pppuVar24);
      }
      else {
        if (local_158 == (undefined **)0x0) {
          ppuVar20 = (undefined **)puVar13;
        }
        else {
          ppuVar20 = local_158 + 0xb;
        }
        if (uVar21 < 2) {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02db01b0;
            plVar33 = (long *)*plVar33;
          } while ((plVar33 != (long *)0x0) &&
                  ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
        }
        else {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02db01b0;
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
            puVar30 = (undefined8 *)plVar33[1];
            if (puVar27 <= puVar30) {
              uVar21 = 0;
              if (puVar27 != (undefined8 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar27;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
            }
          } while (puVar30 == puVar37);
        }
LAB_02db02f4:
        plVar40 = (long *)FUN_02dbeca4(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        plVar33 = (long *)PTR_DAT_043794a0;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pbVar36 = PTR_DAT_04379498;
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar35 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
          plVar35 = (long *)*plVar34;
        }
        if (plVar35 == (long *)0x0) {
LAB_02db0440:
          if (plVar35 == (long *)0x0) goto LAB_02db25e4;
          (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
          local_80 = (undefined **)0x0;
          uStack_78 = 0;
          FUN_0093bcac(&local_80,&local_e8);
          ppuVar20 = local_e8;
          if (local_e8 != (undefined **)0x0) {
            ppuVar11 = local_e8 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e8[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_f8 = (undefined8 *)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_f8);
            }
          }
          local_d0 = local_88;
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_0093b3f4(&local_c8,&local_80);
          plVar35[8] = (long)local_d0;
          FUN_0093b3f4(plVar35 + 9,&local_c8);
          puVar27 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_c8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_c8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_e8 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_e8);
            }
          }
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_e8 = (undefined **)*ppuVar20;
              pppuVar24 = &local_e8;
              goto LAB_02db27d4;
            }
          }
        }
        else {
          if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02db0440;
              plVar35 = (long *)*plVar35;
            } while ((plVar35 != (long *)0x0) &&
                    ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02db0440;
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar35[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02db25e4:
          (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_0093bcac(&local_f8,&local_80);
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_70[0] = *ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,local_70);
            }
          }
          local_e8 = local_88;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_0093b3f4(&local_e0,&local_f8);
          local_d0 = local_158;
          if (local_158 != (undefined **)0x0) {
            (**(code **)(*local_158 + 0x18))();
          }
          local_c8 = local_150;
          local_b0 = local_138;
          local_c0 = uStack_148;
          uStack_b8 = local_140;
          if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x18))();
          }
          local_a8 = local_130;
          local_a0 = local_e8;
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          FUN_0093b3f4(&local_98,&local_e0);
          FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
          if (local_98 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_98 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_98[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*local_98;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (undefined **)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          puVar27 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_e0 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e0[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          puVar27 = local_f8;
          if (local_f8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_f8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_f8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_80 = (undefined **)*puVar27;
              pppuVar24 = &local_80;
              goto LAB_02db27d4;
            }
          }
        }
      }
LAB_02db27d8:
      lVar25 = local_168;
      if (*(char *)(lVar32 + 0x16b) != '\0') {
        lVar25 = 0;
      }
      FUN_02a763dc(plVar40,lVar25);
      *(undefined8 *)(lVar32 + 0x150) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
      FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
      if (plVar40 != (long *)0x0) {
        lVar32 = plVar40[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar40[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar40 + 0x20))(plVar40);
        }
      }
      plVar35 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar35 != (long *)0x0) {
        lVar32 = plVar35[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar35 + 0x20))();
        }
      }
      *plVar7 = (long)plVar40;
      lVar32 = 0;
      if (plVar40 != (long *)0x0) {
        local_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *)0x0;
        FUN_008802f0(&local_d0,plVar40 + 0xb);
        do {
          puVar27 = local_c8;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
          if (bVar16) {
            local_c8 = (undefined8 *)0x0;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar32 = *plVar33;
        *(long *)PTR_DAT_043794a8 = lVar32;
        FUN_02a44e0c(&local_80,lVar32,puVar27);
        ppuVar20 = local_d0;
        local_d0 = (undefined **)0x0;
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar11 = ppuVar20 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar20[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        ppuVar11 = local_80;
        ppuVar20 = local_d0;
        if (local_80 != (undefined **)0x0) {
          local_80 = (undefined **)0x0;
        }
        if (local_d0 != (undefined **)0x0) {
          ppuVar12 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar12;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar16) {
              *(int *)ppuVar12 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        if (ppuVar11 == (undefined **)0x0) {
          *(undefined8 *)(param_1 + 0x108) = 0;
        }
        else {
          ppuVar20 = ppuVar11 + 1;
          *(undefined **)(param_1 + 0x108) = *ppuVar11;
          do {
            iVar19 = *(int *)ppuVar20;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar16) {
              *(int *)ppuVar20 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar11[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_d0 = (undefined **)*ppuVar11;
            FUN_02a44274(lVar32 + 0xd8,&local_d0);
          }
        }
        lVar32 = *plVar7;
      }
      if (lVar32 == 0) goto joined_r0x02db3438;
      FUN_02dbd1a8(&local_d0,plVar7);
      if ((*(long *)(param_1 + 0x110) != 0) || (*(long *)(param_1 + 0x118) != 0)) {
        FUN_02a76df0(local_d0,param_1 + 0xf8,1);
      }
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      uVar22 = *(undefined8 *)PTR_DAT_04379d38;
      *(undefined8 *)PTR_DAT_04379d40 = uVar22;
      FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0x100));
      plVar33 = *(long **)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = 0;
      if (plVar33 != (long *)0x0) {
        lVar32 = plVar33[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar33 + 0x20))();
        }
      }
      *(undefined ***)(param_1 + 0x120) = local_e8;
      if (local_d0 == (undefined **)0x0) {
LAB_02db33d8:
        plVar33 = *(long **)(param_1 + 0x120);
      }
      else {
        puVar28 = local_d0[0xb];
        piVar10 = (int *)(puVar28 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db33d8;
        *(undefined8 *)(puVar28 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
        plVar33 = *(long **)(param_1 + 0x120);
      }
      if (plVar33 != (long *)0x0) {
        lVar32 = plVar33[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            bVar17 = *piVar10 + -1 == 0;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          goto LAB_02db3430;
        }
        goto LAB_02db62f4;
      }
    }
    else if (lVar32 == 0x6277176c3d00fa5e) {
      FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      lVar32 = *(long *)PTR_DAT_04379d38;
      *(long *)PTR_DAT_04379d40 = lVar32;
      local_88 = local_160;
      if (local_160 == (undefined **)0x0) {
        local_88 = *(undefined ***)(lVar32 + 8);
      }
      lVar25 = nn::os::GetCurrentThread();
      plVar33 = (long *)(lVar32 + 0x150);
      do {
        if (*plVar33 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
            while (*plVar33 == 0) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *plVar33 = lVar25;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') goto LAB_02dad8e8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar16) {
          *plVar33 = lVar25;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
LAB_02dad8e8:
      puVar27 = *(undefined8 **)(lVar32 + 0x78);
      uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
      }
      else {
        puVar37 = local_150;
        if (puVar27 <= local_150) {
          uVar14 = 0;
          if (puVar27 != (undefined8 *)0x0) {
            uVar14 = (ulong)local_150 / (ulong)puVar27;
          }
          puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
        }
      }
      plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
      plVar33 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar33 = (long *)*plVar40;
      }
      if (plVar33 == (long *)0x0) {
LAB_02daea7c:
        if (plVar33 == (long *)0x0) goto LAB_02daebc0;
        lVar25 = plVar33[9];
        if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
          piVar10 = (int *)(lVar25 + 0xc);
          iVar19 = *(int *)(lVar25 + 0xc);
          do {
            plVar40 = *(long **)(lVar25 + 0x10);
            if (((*PTR_DAT_04379d20 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379d20);
            }
            while( true ) {
              if (plVar40 == (long *)0x0) goto LAB_02daea88;
              if (plVar40 == (long *)PTR_DAT_04379d28) break;
              plVar40 = (long *)*plVar40;
            }
            iVar18 = *piVar10;
            if (iVar18 == iVar19) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') {
                if (*(long *)(lVar25 + 0x18) != 0) {
                  plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                  pbVar36 = PTR_DAT_04379498;
                  plVar33 = (long *)PTR_DAT_043794a0;
                  goto LAB_02db139c;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar18;
          } while (iVar18 != 0);
        }
LAB_02daea88:
        plVar40 = (long *)FUN_02dbfd94(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        pbVar36 = PTR_DAT_04379498;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
        local_e8 = (undefined **)0x0;
        local_e0 = (undefined8 *)0x0;
        FUN_0093bcac(&local_e8,&local_d0);
        ppuVar20 = local_d0;
        if (local_d0 != (undefined **)0x0) {
          ppuVar11 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar25 + 0xd8,&local_80);
          }
        }
        FUN_0093b3f4(plVar33 + 9,&local_e8);
        ppuVar20 = local_e8;
        plVar33 = (long *)PTR_DAT_043794a0;
        if (local_e8 == (undefined **)0x0) goto LAB_02db139c;
        ppuVar11 = local_e8 + 1;
        do {
          iVar19 = *(int *)ppuVar11;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *(int *)ppuVar11 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db139c;
        local_e8[2] = (undefined *)0x0;
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar25 = *plVar33 + 0xd8;
        *(long *)PTR_DAT_043794a8 = *plVar33;
        local_d0 = (undefined **)*ppuVar20;
        pppuVar24 = &local_d0;
LAB_02db1398:
        FUN_02a44274(lVar25,pppuVar24);
      }
      else {
        if (local_158 == (undefined **)0x0) {
          ppuVar20 = (undefined **)puVar13;
        }
        else {
          ppuVar20 = local_158 + 0xb;
        }
        if (uVar21 < 2) {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02daea7c;
            plVar33 = (long *)*plVar33;
          } while ((plVar33 != (long *)0x0) &&
                  ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
        }
        else {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02daea7c;
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
            puVar30 = (undefined8 *)plVar33[1];
            if (puVar27 <= puVar30) {
              uVar21 = 0;
              if (puVar27 != (undefined8 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar27;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
            }
          } while (puVar30 == puVar37);
        }
LAB_02daebc0:
        plVar40 = (long *)FUN_02dbfd94(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        plVar33 = (long *)PTR_DAT_043794a0;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pbVar36 = PTR_DAT_04379498;
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar35 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
          plVar35 = (long *)*plVar34;
        }
        if (plVar35 == (long *)0x0) {
LAB_02daed0c:
          if (plVar35 == (long *)0x0) goto LAB_02db11a8;
          (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
          local_80 = (undefined **)0x0;
          uStack_78 = 0;
          FUN_0093bcac(&local_80,&local_e8);
          ppuVar20 = local_e8;
          if (local_e8 != (undefined **)0x0) {
            ppuVar11 = local_e8 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e8[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_f8 = (undefined8 *)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_f8);
            }
          }
          local_d0 = local_88;
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_0093b3f4(&local_c8,&local_80);
          plVar35[8] = (long)local_d0;
          FUN_0093b3f4(plVar35 + 9,&local_c8);
          puVar27 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_c8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_c8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_e8 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_e8);
            }
          }
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_e8 = (undefined **)*ppuVar20;
              pppuVar24 = &local_e8;
              goto LAB_02db1398;
            }
          }
        }
        else {
          if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daed0c;
              plVar35 = (long *)*plVar35;
            } while ((plVar35 != (long *)0x0) &&
                    ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02daed0c;
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar35[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02db11a8:
          (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_0093bcac(&local_f8,&local_80);
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_70[0] = *ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,local_70);
            }
          }
          local_e8 = local_88;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_0093b3f4(&local_e0,&local_f8);
          local_d0 = local_158;
          if (local_158 != (undefined **)0x0) {
            (**(code **)(*local_158 + 0x18))();
          }
          local_c8 = local_150;
          local_b0 = local_138;
          local_c0 = uStack_148;
          uStack_b8 = local_140;
          if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x18))();
          }
          local_a8 = local_130;
          local_a0 = local_e8;
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          FUN_0093b3f4(&local_98,&local_e0);
          FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
          if (local_98 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_98 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_98[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*local_98;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (undefined **)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          puVar27 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_e0 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e0[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          puVar27 = local_f8;
          if (local_f8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_f8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_f8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_80 = (undefined **)*puVar27;
              pppuVar24 = &local_80;
              goto LAB_02db1398;
            }
          }
        }
      }
LAB_02db139c:
      lVar25 = local_168;
      if (*(char *)(lVar32 + 0x16b) != '\0') {
        lVar25 = 0;
      }
      FUN_02a763dc(plVar40,lVar25);
      *(undefined8 *)(lVar32 + 0x150) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
      FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
      if (plVar40 != (long *)0x0) {
        lVar32 = plVar40[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar40[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar40 + 0x20))(plVar40);
        }
      }
      plVar35 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar35 != (long *)0x0) {
        lVar32 = plVar35[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar35 + 0x20))();
        }
      }
      *plVar2 = (long)plVar40;
      lVar32 = 0;
      if (plVar40 != (long *)0x0) {
        local_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *)0x0;
        FUN_008802f0(&local_d0,plVar40 + 0xb);
        do {
          puVar27 = local_c8;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
          if (bVar16) {
            local_c8 = (undefined8 *)0x0;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar32 = *plVar33;
        *(long *)PTR_DAT_043794a8 = lVar32;
        FUN_02a44e0c(&local_80,lVar32,puVar27);
        ppuVar20 = local_d0;
        local_d0 = (undefined **)0x0;
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar11 = ppuVar20 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar20[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        ppuVar11 = local_80;
        ppuVar20 = local_d0;
        if (local_80 != (undefined **)0x0) {
          local_80 = (undefined **)0x0;
        }
        if (local_d0 != (undefined **)0x0) {
          ppuVar12 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar12;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar16) {
              *(int *)ppuVar12 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        if (ppuVar11 == (undefined **)0x0) {
          *(undefined8 *)(param_1 + 0x1f8) = 0;
        }
        else {
          ppuVar20 = ppuVar11 + 1;
          *(undefined **)(param_1 + 0x1f8) = *ppuVar11;
          do {
            iVar19 = *(int *)ppuVar20;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar16) {
              *(int *)ppuVar20 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar11[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_d0 = (undefined **)*ppuVar11;
            FUN_02a44274(lVar32 + 0xd8,&local_d0);
          }
        }
        lVar32 = *plVar2;
      }
      if (lVar32 != 0) {
        FUN_02dbbe78(&local_d0,plVar2);
        if ((*(long *)(param_1 + 0x200) != 0) || (*(long *)(param_1 + 0x208) != 0)) {
          FUN_02a76df0(local_d0,param_1 + 0x1e8,1);
        }
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        uVar22 = *(undefined8 *)PTR_DAT_04379d38;
        *(undefined8 *)PTR_DAT_04379d40 = uVar22;
        FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 0x1f0));
        plVar33 = *(long **)(param_1 + 0x210);
        *(undefined8 *)(param_1 + 0x210) = 0;
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))();
          }
        }
        *(undefined ***)(param_1 + 0x210) = local_e8;
        if (local_d0 == (undefined **)0x0) {
LAB_02db2e24:
          plVar33 = *(long **)(param_1 + 0x210);
        }
        else {
          puVar28 = local_d0[0xb];
          piVar10 = (int *)(puVar28 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db2e24;
          *(undefined8 *)(puVar28 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
          plVar33 = *(long **)(param_1 + 0x210);
        }
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar32 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
              *(undefined8 *)(lVar32 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar32 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            lVar32 = plVar33[0xb];
            piVar10 = (int *)(lVar32 + 0xc);
            do {
              bVar17 = *piVar10 + -1 == 0;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            goto LAB_02db3430;
          }
          goto LAB_02db62f4;
        }
      }
    }
    else {
      if (lVar32 != 0x6aab69291bbcf3bb) goto LAB_02dad06c;
      FUN_010c4f0c(&local_158,&local_128,plVar41 + 4,&DAT_03996322);
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      lVar32 = *(long *)PTR_DAT_04379d38;
      *(long *)PTR_DAT_04379d40 = lVar32;
      local_88 = local_160;
      if (local_160 == (undefined **)0x0) {
        local_88 = *(undefined ***)(lVar32 + 8);
      }
      lVar25 = nn::os::GetCurrentThread();
      plVar33 = (long *)(lVar32 + 0x150);
      do {
        if (*plVar33 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x144));
            while (*plVar33 == 0) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *plVar33 = lVar25;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') goto LAB_02dada68;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar16) {
          *plVar33 = lVar25;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
LAB_02dada68:
      puVar27 = *(undefined8 **)(lVar32 + 0x78);
      uVar21 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        puVar37 = (undefined8 *)((long)puVar27 - 1U & (ulong)local_150);
      }
      else {
        puVar37 = local_150;
        if (puVar27 <= local_150) {
          uVar14 = 0;
          if (puVar27 != (undefined8 *)0x0) {
            uVar14 = (ulong)local_150 / (ulong)puVar27;
          }
          puVar37 = (undefined8 *)((long)local_150 - uVar14 * (long)puVar27);
        }
      }
      plVar40 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
      plVar33 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar33 = (long *)*plVar40;
      }
      if (plVar33 == (long *)0x0) {
LAB_02daf868:
        if (plVar33 == (long *)0x0) goto LAB_02daf9ac;
        lVar25 = plVar33[9];
        if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
          piVar10 = (int *)(lVar25 + 0xc);
          iVar19 = *(int *)(lVar25 + 0xc);
          do {
            plVar40 = *(long **)(lVar25 + 0x10);
            if (((*PTR_DAT_04379d20 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar18 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379d20);
            }
            while( true ) {
              if (plVar40 == (long *)0x0) goto LAB_02daf874;
              if (plVar40 == (long *)PTR_DAT_04379d28) break;
              plVar40 = (long *)*plVar40;
            }
            iVar18 = *piVar10;
            if (iVar18 == iVar19) {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
              if (cVar15 == '\0') {
                if (*(long *)(lVar25 + 0x18) != 0) {
                  plVar40 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
                  pbVar36 = PTR_DAT_04379498;
                  plVar33 = (long *)PTR_DAT_043794a0;
                  goto LAB_02db1fc0;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar18;
          } while (iVar18 != 0);
        }
LAB_02daf874:
        plVar40 = (long *)FUN_02dbf0a0(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        pbVar36 = PTR_DAT_04379498;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        (**(code **)(*plVar40 + 0x10))(&local_d0,plVar40);
        local_e8 = (undefined **)0x0;
        local_e0 = (undefined8 *)0x0;
        FUN_0093bcac(&local_e8,&local_d0);
        ppuVar20 = local_d0;
        if (local_d0 != (undefined **)0x0) {
          ppuVar11 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar25 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar25;
            local_80 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar25 + 0xd8,&local_80);
          }
        }
        FUN_0093b3f4(plVar33 + 9,&local_e8);
        ppuVar20 = local_e8;
        plVar33 = (long *)PTR_DAT_043794a0;
        if (local_e8 == (undefined **)0x0) goto LAB_02db1fc0;
        ppuVar11 = local_e8 + 1;
        do {
          iVar19 = *(int *)ppuVar11;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *(int *)ppuVar11 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 != 0) goto LAB_02db1fc0;
        local_e8[2] = (undefined *)0x0;
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar25 = *plVar33 + 0xd8;
        *(long *)PTR_DAT_043794a8 = *plVar33;
        local_d0 = (undefined **)*ppuVar20;
        pppuVar24 = &local_d0;
LAB_02db1fbc:
        FUN_02a44274(lVar25,pppuVar24);
      }
      else {
        if (local_158 == (undefined **)0x0) {
          ppuVar20 = (undefined **)puVar13;
        }
        else {
          ppuVar20 = local_158 + 0xb;
        }
        if (uVar21 < 2) {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02daf868;
            plVar33 = (long *)*plVar33;
          } while ((plVar33 != (long *)0x0) &&
                  ((undefined8 *)(plVar33[1] & (long)puVar27 - 1U) == puVar37));
        }
        else {
          do {
            plVar40 = (long *)puVar13;
            if (plVar33[2] != 0) {
              plVar40 = (long *)(plVar33[2] + 0x58);
            }
            if (((undefined *)*plVar40 == *ppuVar20) && ((undefined **)plVar33[8] == local_88))
            goto LAB_02daf868;
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
            puVar30 = (undefined8 *)plVar33[1];
            if (puVar27 <= puVar30) {
              uVar21 = 0;
              if (puVar27 != (undefined8 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar27;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
            }
          } while (puVar30 == puVar37);
        }
LAB_02daf9ac:
        plVar40 = (long *)FUN_02dbf0a0(*(undefined8 *)(lVar32 + 8),&local_158,&local_88);
        plVar33 = (long *)PTR_DAT_043794a0;
        if (plVar40 != (long *)0x0) {
          lVar25 = plVar40[0xb];
          if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
          if (*(long *)(lVar25 + 0x10) == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
            *(undefined8 *)(lVar25 + 0x10) = uVar22;
          }
          piVar10 = (int *)(lVar25 + 0xc);
          do {
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = *piVar10 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pbVar36 = PTR_DAT_04379498;
        puVar27 = *(undefined8 **)(lVar32 + 0x78);
        plVar34 = *(long **)(*(long *)(lVar32 + 0x70) + (long)puVar37 * 8);
        plVar35 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
          plVar35 = (long *)*plVar34;
        }
        if (plVar35 == (long *)0x0) {
LAB_02dafaf8:
          if (plVar35 == (long *)0x0) goto LAB_02db1dcc;
          (**(code **)(*plVar40 + 0x10))(&local_e8,plVar40);
          local_80 = (undefined **)0x0;
          uStack_78 = 0;
          FUN_0093bcac(&local_80,&local_e8);
          ppuVar20 = local_e8;
          if (local_e8 != (undefined **)0x0) {
            ppuVar11 = local_e8 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e8[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_f8 = (undefined8 *)*ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,&local_f8);
            }
          }
          local_d0 = local_88;
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_0093b3f4(&local_c8,&local_80);
          plVar35[8] = (long)local_d0;
          FUN_0093b3f4(plVar35 + 9,&local_c8);
          puVar27 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_c8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_c8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_e8 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_e8);
            }
          }
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_e8 = (undefined **)*ppuVar20;
              pppuVar24 = &local_e8;
              goto LAB_02db1fbc;
            }
          }
        }
        else {
          if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dafaf8;
              plVar35 = (long *)*plVar35;
            } while ((plVar35 != (long *)0x0) &&
                    ((undefined8 *)(plVar35[1] & (long)puVar27 - 1U) == puVar37));
          }
          else {
            do {
              plVar34 = (long *)puVar13;
              if (plVar35[2] != 0) {
                plVar34 = (long *)(plVar35[2] + 0x58);
              }
              ppuVar20 = (undefined **)puVar13;
              if (local_158 != (undefined **)0x0) {
                ppuVar20 = local_158 + 0xb;
              }
              if (((undefined *)*plVar34 == *ppuVar20) &&
                 ((plVar35[9] == 0 || (*(int *)(plVar35[9] + 0xc) == 0)))) goto LAB_02dafaf8;
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) break;
              puVar30 = (undefined8 *)plVar35[1];
              if (puVar27 <= puVar30) {
                uVar21 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar30 / (ulong)puVar27;
                }
                puVar30 = (undefined8 *)((long)puVar30 - uVar21 * (long)puVar27);
              }
            } while (puVar30 == puVar37);
          }
LAB_02db1dcc:
          (**(code **)(*plVar40 + 0x10))(&local_80,plVar40);
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_0093bcac(&local_f8,&local_80);
          ppuVar20 = local_80;
          if (local_80 != (undefined **)0x0) {
            ppuVar11 = local_80 + 1;
            do {
              iVar19 = *(int *)ppuVar11;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar16) {
                *(int *)ppuVar11 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_80[2] = (undefined *)0x0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_70[0] = *ppuVar20;
              FUN_02a44274(lVar25 + 0xd8,local_70);
            }
          }
          local_e8 = local_88;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_0093b3f4(&local_e0,&local_f8);
          local_d0 = local_158;
          if (local_158 != (undefined **)0x0) {
            (**(code **)(*local_158 + 0x18))();
          }
          local_c8 = local_150;
          local_b0 = local_138;
          local_c0 = uStack_148;
          uStack_b8 = local_140;
          if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x18))();
          }
          local_a8 = local_130;
          local_a0 = local_e8;
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          FUN_0093b3f4(&local_98,&local_e0);
          FUN_02dbe6b0((long *)(lVar32 + 0x70),&local_d0);
          if (local_98 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_98 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_98[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*local_98;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (undefined **)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          puVar27 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_e0 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_e0[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_80 = (undefined **)*puVar27;
              FUN_02a44274(lVar25 + 0xd8,&local_80);
            }
          }
          puVar27 = local_f8;
          if (local_f8 != (undefined8 *)0x0) {
            piVar10 = (int *)(local_f8 + 1);
            do {
              iVar19 = *piVar10;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = iVar19 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (iVar19 + -1 == 0) {
              local_f8[2] = 0;
              if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar36);
              }
              lVar25 = *plVar33 + 0xd8;
              *(long *)PTR_DAT_043794a8 = *plVar33;
              local_80 = (undefined **)*puVar27;
              pppuVar24 = &local_80;
              goto LAB_02db1fbc;
            }
          }
        }
      }
LAB_02db1fc0:
      lVar25 = local_168;
      if (*(char *)(lVar32 + 0x16b) != '\0') {
        lVar25 = 0;
      }
      FUN_02a763dc(plVar40,lVar25);
      *(undefined8 *)(lVar32 + 0x150) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x144));
      FUN_02a8f764(*(undefined8 *)(lVar32 + 0x158),plVar40,0);
      if (plVar40 != (long *)0x0) {
        lVar32 = plVar40[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_02db62f4;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar22;
        }
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = *piVar10 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        lVar32 = plVar40[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar40 + 0x20))(plVar40);
        }
      }
      plVar35 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar35 != (long *)0x0) {
        lVar32 = plVar35[0xb];
        piVar10 = (int *)(lVar32 + 0xc);
        do {
          iVar19 = *piVar10;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar16) {
            *piVar10 = iVar19 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar35 + 0x20))();
        }
      }
      *plVar4 = (long)plVar40;
      lVar32 = 0;
      if (plVar40 != (long *)0x0) {
        local_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *)0x0;
        FUN_008802f0(&local_d0,plVar40 + 0xb);
        do {
          puVar27 = local_c8;
          cVar15 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_c8,0x10);
          if (bVar16) {
            local_c8 = (undefined8 *)0x0;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar36);
        }
        lVar32 = *plVar33;
        *(long *)PTR_DAT_043794a8 = lVar32;
        FUN_02a44e0c(&local_80,lVar32,puVar27);
        ppuVar20 = local_d0;
        local_d0 = (undefined **)0x0;
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar11 = ppuVar20 + 1;
          do {
            iVar19 = *(int *)ppuVar11;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar16) {
              *(int *)ppuVar11 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar20[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        ppuVar11 = local_80;
        ppuVar20 = local_d0;
        if (local_80 != (undefined **)0x0) {
          local_80 = (undefined **)0x0;
        }
        if (local_d0 != (undefined **)0x0) {
          ppuVar12 = local_d0 + 1;
          do {
            iVar19 = *(int *)ppuVar12;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar16) {
              *(int *)ppuVar12 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            local_d0[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_e8 = (undefined **)*ppuVar20;
            FUN_02a44274(lVar32 + 0xd8,&local_e8);
          }
        }
        if (ppuVar11 == (undefined **)0x0) {
          *(undefined8 *)(param_1 + 0x198) = 0;
        }
        else {
          ppuVar20 = ppuVar11 + 1;
          *(undefined **)(param_1 + 0x198) = *ppuVar11;
          do {
            iVar19 = *(int *)ppuVar20;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar16) {
              *(int *)ppuVar20 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            ppuVar11[2] = (undefined *)0x0;
            if (((*pbVar36 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar36), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar33,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar36);
            }
            lVar32 = *plVar33;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_d0 = (undefined **)*ppuVar11;
            FUN_02a44274(lVar32 + 0xd8,&local_d0);
          }
        }
        lVar32 = *plVar4;
      }
      if (lVar32 != 0) {
        FUN_02dbc344(&local_d0,plVar4);
        if ((*(long *)(param_1 + 0x1a0) != 0) || (*(long *)(param_1 + 0x1a8) != 0)) {
          FUN_02a76df0(local_d0,param_1 + 0x188,1);
        }
        if (((*PTR_DAT_04379d30 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        uVar22 = *(undefined8 *)PTR_DAT_04379d38;
        *(undefined8 *)PTR_DAT_04379d40 = uVar22;
        FUN_00939b4c(&local_e8,uVar22,*(undefined8 *)(param_1 + 400));
        plVar33 = *(long **)(param_1 + 0x1b0);
        *(undefined8 *)(param_1 + 0x1b0) = 0;
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          piVar10 = (int *)(lVar32 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))();
          }
        }
        *(undefined ***)(param_1 + 0x1b0) = local_e8;
        if (local_d0 == (undefined **)0x0) {
LAB_02db3190:
          plVar33 = *(long **)(param_1 + 0x1b0);
        }
        else {
          puVar28 = local_d0[0xb];
          piVar10 = (int *)(puVar28 + 0xc);
          do {
            iVar19 = *piVar10;
            cVar15 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar16) {
              *piVar10 = iVar19 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar19 + -1 != 0) goto LAB_02db3190;
          *(undefined8 *)(puVar28 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
          plVar33 = *(long **)(param_1 + 0x1b0);
        }
        if (plVar33 != (long *)0x0) {
          lVar32 = plVar33[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar32 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
              *(undefined8 *)(lVar32 + 0x10) = uVar22;
            }
            piVar10 = (int *)(lVar32 + 0xc);
            do {
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            lVar32 = plVar33[0xb];
            piVar10 = (int *)(lVar32 + 0xc);
            do {
              bVar17 = *piVar10 + -1 == 0;
              cVar15 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar16) {
                *piVar10 = *piVar10 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            goto LAB_02db3430;
          }
          goto LAB_02db62f4;
        }
      }
    }
  }
joined_r0x02db3438:
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  ppuVar20 = local_158;
  if (local_158 != (undefined **)0x0) {
LAB_02dad060:
    (**(code **)(*ppuVar20 + 0x20))();
  }
LAB_02dad06c:
  plVar41 = plVar41 + 8;
  if (plVar41 == plVar26) goto LAB_02db5ca8;
  goto LAB_02dad07c;
}


