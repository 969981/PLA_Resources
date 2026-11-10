/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018513ac; name: FUN_018513ac
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018513ac(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *******ppppppplVar5;
  long *plVar6;
  long ****pppplVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long *******ppppppplVar16;
  long lVar17;
  long *******ppppppplVar18;
  long *******local_a0;
  long *******local_98;
  long local_90;
  long ******local_88;
  long ******local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long *local_68;
  
  lVar17 = 0;
  do {
    lVar9 = param_1 + lVar17 * 0x20;
    ppppppplVar16 = *(long ********)(lVar9 + 0x70);
    local_88 = ppppppplVar16[3];
    local_80 = ppppppplVar16[4];
    local_70 = 0;
    local_90 = 0;
    uStack_78 = 0;
    ppppppplVar13 = (long *******)ppppppplVar16[1];
    local_a0 = (long *******)&local_a0;
    local_98 = (long *******)&local_a0;
    if (ppppppplVar16 != ppppppplVar13) {
      do {
        pppppplVar14 = ppppppplVar13[2];
        if (pppppplVar14 != (long ******)0x0) {
          ppppplVar15 = pppppplVar14[0xb];
          if (ppppplVar15[3] == (long ****)0x0) goto LAB_01851dfc;
          if (ppppplVar15[2] == (long ****)0x0) {
            pppplVar7 = (long ****)(*(code *)**ppppplVar15[3])();
            ppppplVar15[2] = pppplVar7;
          }
          piVar1 = (int *)((long)ppppplVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_009c69bc(&local_68,pppppplVar14);
        plVar6 = local_68;
        if (local_68 == (long *)0x0) {
LAB_01851590:
          if (pppppplVar14 == (long ******)0x0) goto LAB_018515b0;
LAB_01851594:
          ppppplVar15 = pppppplVar14[0xb];
          piVar1 = (int *)((long)ppppplVar15 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 != 0) goto LAB_018515b0;
          ppppplVar15[3] = (long ****)0x0;
          (*(code *)(*pppppplVar14)[4])(pppppplVar14);
          if (plVar6 != (long *)0x0) goto LAB_018515b4;
LAB_01851aa8:
          for (ppppppplVar18 = (long *******)ppppppplVar13[1]; ppppppplVar16 != ppppppplVar18;
              ppppppplVar18 = (long *******)ppppppplVar18[1]) {
            pppppplVar14 = ppppppplVar18[2];
            if (pppppplVar14 != (long ******)0x0) {
              ppppplVar15 = pppppplVar14[0xb];
              if (ppppplVar15[3] == (long ****)0x0) goto LAB_01851dfc;
              if (ppppplVar15[2] == (long ****)0x0) {
                pppplVar7 = (long ****)(*(code *)**ppppplVar15[3])();
                ppppplVar15[2] = pppplVar7;
              }
              piVar1 = (int *)((long)ppppplVar15 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_009c69bc(&local_68,pppppplVar14);
            plVar6 = local_68;
            if (local_68 != (long *)0x0) {
              lVar10 = local_68[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))(local_68);
              }
            }
            if (pppppplVar14 != (long ******)0x0) {
              ppppplVar15 = pppppplVar14[0xb];
              piVar1 = (int *)((long)ppppplVar15 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                ppppplVar15[3] = (long ****)0x0;
                (*(code *)(*pppppplVar14)[4])();
              }
            }
            if (plVar6 != (long *)0x0) {
              bVar4 = true;
              ppppppplVar11 = ppppppplVar18;
              ppppppplVar5 = local_a0;
              goto joined_r0x01851dc8;
            }
          }
          bVar4 = false;
          ppppppplVar11 = ppppppplVar16;
          ppppppplVar5 = local_a0;
joined_r0x01851dc8:
          local_a0 = ppppppplVar5;
          if (ppppppplVar13 != ppppppplVar11) {
            local_a0 = (long *******)*ppppppplVar18;
            if (&local_a0 != (long ********)ppppppplVar16) {
              lVar10 = 1;
              if (local_a0 != ppppppplVar13) {
                ppppppplVar12 = ppppppplVar13;
                do {
                  ppppppplVar12 = (long *******)ppppppplVar12[1];
                  lVar10 = lVar10 + 1;
                } while (ppppppplVar12 != local_a0);
              }
              ppppppplVar16[2] = (long ******)((long)ppppppplVar16[2] - lVar10);
              local_90 = local_90 + lVar10;
            }
            (*ppppppplVar13)[1] = (long *****)local_a0[1];
            *local_a0[1] = (long *****)*ppppppplVar13;
            ppppppplVar5[1] = (long ******)ppppppplVar13;
            *ppppppplVar13 = (long ******)ppppppplVar5;
            local_a0[1] = (long ******)&local_a0;
          }
          ppppppplVar13 = ppppppplVar18;
          if (bVar4) goto LAB_018515b8;
        }
        else {
          lVar10 = local_68[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 != 0) goto LAB_01851590;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))(local_68);
          if (pppppplVar14 != (long ******)0x0) goto LAB_01851594;
LAB_018515b0:
          if (plVar6 == (long *)0x0) goto LAB_01851aa8;
LAB_018515b4:
          ppppppplVar11 = ppppppplVar13;
LAB_018515b8:
          ppppppplVar13 = (long *******)ppppppplVar11[1];
        }
        ppppppplVar11 = local_98;
      } while (ppppppplVar16 != ppppppplVar13);
      if (local_90 != 0) {
        (*local_98)[1] = (long *****)local_a0[1];
        *local_a0[1] = (long *****)*local_98;
        local_90 = 0;
        if ((long ********)local_98 != &local_a0) {
          ppppppplVar13 = (long *******)local_98[1];
          pppppplVar14 = local_98[2];
          if (pppppplVar14 != (long ******)0x0) {
            ppppplVar15 = pppppplVar14[0xb];
            piVar1 = (int *)((long)ppppplVar15 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              ppppplVar15[3] = (long ****)0x0;
              (*(code *)(*pppppplVar14)[4])();
            }
          }
          pppppplVar14 = local_88;
          uVar8 = (*(code *)(*local_88)[0x18])(local_88);
          lVar10 = tpidr_el0;
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar10 + 0x38d480)) {
              FUN_02bcc824(pppppplVar14,ppppppplVar11,0x18,8);
              goto joined_r0x01851a34;
            }
          }
          (*(code *)(*pppppplVar14)[3])(pppppplVar14,ppppppplVar11,0x18,8);
joined_r0x01851a34:
          do {
            if ((long ********)ppppppplVar13 == &local_a0) break;
            ppppppplVar16 = (long *******)ppppppplVar13[1];
            pppppplVar14 = ppppppplVar13[2];
            if (pppppplVar14 != (long ******)0x0) {
              ppppplVar15 = pppppplVar14[0xb];
              piVar1 = (int *)((long)ppppplVar15 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                ppppplVar15[3] = (long ****)0x0;
                (*(code *)(*pppppplVar14)[4])();
              }
            }
            pppppplVar14 = local_88;
            uVar8 = (*(code *)(*local_88)[0x18])(local_88);
            if ((uVar8 & 1) != 0) {
              if (*(char *)(lVar10 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar10 + 0x38d488) = 1;
                *(undefined8 *)(lVar10 + 0x38d478) = 0;
                *(undefined8 *)(lVar10 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar10 + 0x38d480)) {
                FUN_02bcc824(pppppplVar14,ppppppplVar13,0x18,8);
                ppppppplVar13 = ppppppplVar16;
                goto joined_r0x01851a34;
              }
            }
            (*(code *)(*pppppplVar14)[3])(pppppplVar14,ppppppplVar13,0x18,8);
            ppppppplVar13 = ppppppplVar16;
          } while( true );
        }
      }
    }
    ppppppplVar16 = *(long ********)(lVar9 + 0x170);
    local_88 = ppppppplVar16[3];
    local_80 = ppppppplVar16[4];
    local_70 = 0;
    local_90 = 0;
    uStack_78 = 0;
    ppppppplVar13 = (long *******)ppppppplVar16[1];
    local_a0 = (long *******)&local_a0;
    local_98 = (long *******)&local_a0;
    if (ppppppplVar16 != ppppppplVar13) {
      do {
        pppppplVar14 = ppppppplVar13[2];
        if (pppppplVar14 != (long ******)0x0) {
          ppppplVar15 = pppppplVar14[0xb];
          if (ppppplVar15[3] == (long ****)0x0) {
LAB_01851dfc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (ppppplVar15[2] == (long ****)0x0) {
            pppplVar7 = (long ****)(*(code *)**ppppplVar15[3])();
            ppppplVar15[2] = pppplVar7;
          }
          piVar1 = (int *)((long)ppppplVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_009c69bc(&local_68,pppppplVar14);
        plVar6 = local_68;
        if (local_68 == (long *)0x0) {
LAB_018514b4:
          if (pppppplVar14 == (long ******)0x0) goto LAB_018514d4;
LAB_018514b8:
          ppppplVar15 = pppppplVar14[0xb];
          piVar1 = (int *)((long)ppppplVar15 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 != 0) goto LAB_018514d4;
          ppppplVar15[3] = (long ****)0x0;
          (*(code *)(*pppppplVar14)[4])(pppppplVar14);
          if (plVar6 != (long *)0x0) goto LAB_018514d8;
LAB_018518e4:
          for (ppppppplVar18 = (long *******)ppppppplVar13[1]; ppppppplVar16 != ppppppplVar18;
              ppppppplVar18 = (long *******)ppppppplVar18[1]) {
            pppppplVar14 = ppppppplVar18[2];
            if (pppppplVar14 != (long ******)0x0) {
              ppppplVar15 = pppppplVar14[0xb];
              if (ppppplVar15[3] == (long ****)0x0) goto LAB_01851dfc;
              if (ppppplVar15[2] == (long ****)0x0) {
                pppplVar7 = (long ****)(*(code *)**ppppplVar15[3])();
                ppppplVar15[2] = pppplVar7;
              }
              piVar1 = (int *)((long)ppppplVar15 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_009c69bc(&local_68,pppppplVar14);
            plVar6 = local_68;
            if (local_68 != (long *)0x0) {
              lVar9 = local_68[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))(local_68);
              }
            }
            if (pppppplVar14 != (long ******)0x0) {
              ppppplVar15 = pppppplVar14[0xb];
              piVar1 = (int *)((long)ppppplVar15 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                ppppplVar15[3] = (long ****)0x0;
                (*(code *)(*pppppplVar14)[4])(pppppplVar14);
              }
            }
            if (plVar6 != (long *)0x0) {
              bVar4 = true;
              ppppppplVar11 = ppppppplVar18;
              ppppppplVar5 = local_a0;
              goto joined_r0x01851df4;
            }
          }
          bVar4 = false;
          ppppppplVar11 = ppppppplVar16;
          ppppppplVar5 = local_a0;
joined_r0x01851df4:
          local_a0 = ppppppplVar5;
          if (ppppppplVar13 != ppppppplVar11) {
            local_a0 = (long *******)*ppppppplVar18;
            if (&local_a0 != (long ********)ppppppplVar16) {
              lVar9 = 1;
              if (local_a0 != ppppppplVar13) {
                ppppppplVar12 = ppppppplVar13;
                do {
                  ppppppplVar12 = (long *******)ppppppplVar12[1];
                  lVar9 = lVar9 + 1;
                } while (ppppppplVar12 != local_a0);
              }
              ppppppplVar16[2] = (long ******)((long)ppppppplVar16[2] - lVar9);
              local_90 = local_90 + lVar9;
            }
            (*ppppppplVar13)[1] = (long *****)local_a0[1];
            *local_a0[1] = (long *****)*ppppppplVar13;
            ppppppplVar5[1] = (long ******)ppppppplVar13;
            *ppppppplVar13 = (long ******)ppppppplVar5;
            local_a0[1] = (long ******)&local_a0;
          }
          ppppppplVar13 = ppppppplVar18;
          if (bVar4) goto LAB_018514dc;
        }
        else {
          lVar9 = local_68[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 != 0) goto LAB_018514b4;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))(local_68);
          if (pppppplVar14 != (long ******)0x0) goto LAB_018514b8;
LAB_018514d4:
          if (plVar6 == (long *)0x0) goto LAB_018518e4;
LAB_018514d8:
          ppppppplVar11 = ppppppplVar13;
LAB_018514dc:
          ppppppplVar13 = (long *******)ppppppplVar11[1];
        }
        ppppppplVar11 = local_98;
      } while (ppppppplVar16 != ppppppplVar13);
      if (local_90 != 0) {
        (*local_98)[1] = (long *****)local_a0[1];
        *local_a0[1] = (long *****)*local_98;
        local_90 = 0;
        if ((long ********)local_98 != &local_a0) {
          ppppppplVar13 = (long *******)local_98[1];
          pppppplVar14 = local_98[2];
          if (pppppplVar14 != (long ******)0x0) {
            ppppplVar15 = pppppplVar14[0xb];
            piVar1 = (int *)((long)ppppplVar15 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              ppppplVar15[3] = (long ****)0x0;
              (*(code *)(*pppppplVar14)[4])();
            }
          }
          pppppplVar14 = local_88;
          uVar8 = (*(code *)(*local_88)[0x18])(local_88);
          if ((uVar8 & 1) != 0) {
            lVar9 = tpidr_el0;
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar9 + 0x38d480)) {
              FUN_02bcc824(pppppplVar14,ppppppplVar11,0x18,8);
              goto joined_r0x01851a6c;
            }
          }
          (*(code *)(*pppppplVar14)[3])(pppppplVar14,ppppppplVar11,0x18,8);
joined_r0x01851a6c:
          do {
            if ((long ********)ppppppplVar13 == &local_a0) break;
            ppppppplVar16 = (long *******)ppppppplVar13[1];
            pppppplVar14 = ppppppplVar13[2];
            if (pppppplVar14 != (long ******)0x0) {
              ppppplVar15 = pppppplVar14[0xb];
              piVar1 = (int *)((long)ppppplVar15 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                ppppplVar15[3] = (long ****)0x0;
                (*(code *)(*pppppplVar14)[4])();
              }
            }
            pppppplVar14 = local_88;
            uVar8 = (*(code *)(*local_88)[0x18])(local_88);
            if ((uVar8 & 1) != 0) {
              lVar9 = tpidr_el0;
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar9 + 0x38d480)) {
                FUN_02bcc824(pppppplVar14,ppppppplVar13,0x18,8);
                ppppppplVar13 = ppppppplVar16;
                goto joined_r0x01851a6c;
              }
            }
            (*(code *)(*pppppplVar14)[3])(pppppplVar14,ppppppplVar13,0x18,8);
            ppppppplVar13 = ppppppplVar16;
          } while( true );
        }
      }
    }
    lVar17 = lVar17 + 1;
    if (lVar17 == 8) {
      return;
    }
  } while( true );
}


