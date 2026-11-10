/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01352900; name: FUN_01352900
 */


void FUN_01352900(undefined8 *param_1,long param_2,int param_3,long *param_4,undefined8 *param_5,
                 byte param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int local_130;
  byte local_12c;
  undefined1 local_12b;
  long *local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [104];
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 *puStack_70;
  
  if (*(char *)(param_2 + 0x162) == '\0') {
    uVar11 = *(ulong *)(param_2 + 0x70);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar9 = (ulong)param_3;
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & uVar9;
      }
      else if (uVar9 < uVar11) {
        uVar13 = uVar9;
      }
      else {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar9 / uVar11;
        }
        uVar13 = uVar9 - uVar13 * uVar11;
      }
      plVar14 = *(long **)(*(long *)(param_2 + 0x68) + uVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar14[1] == uVar9) {
              if ((int)plVar14[2] == param_3) goto LAB_013529d4;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar14[1];
            if (uVar12 == uVar9) {
              if ((int)plVar14[2] == param_3) goto LAB_013529d4;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar4 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    FUN_0135b330();
LAB_01352fc4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  goto LAB_01352ec8;
LAB_013529d4:
  lVar18 = plVar14[7];
  puVar6 = (undefined8 *)(*(code *)**(undefined8 **)(lVar18 + 0x50))((undefined8 *)(lVar18 + 0x50));
  if (((*PTR_DAT_0437ef08 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437ef08), iVar5 != 0))
  {
    uVar7 = FUN_01358c54();
    *(undefined8 *)PTR_DAT_0437ef10 = uVar7;
    __cxa_guard_release(PTR_DAT_0437ef08);
  }
  if (puVar6 != (undefined8 *)0x0) {
    param_6 = param_6 & 1;
    do {
      if (puVar6 == (undefined8 *)PTR_DAT_0437ef10) {
        FUN_0135b058(&local_98,lVar18);
        plVar14 = local_98;
        lVar16 = *param_4;
        if (lVar16 == 0) goto LAB_01352a60;
        lVar19 = *(long *)(lVar16 + 0x58);
        if (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar19 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
            *(undefined8 *)(lVar19 + 0x10) = uVar7;
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
LAB_01352a60:
          plVar8 = (long *)plVar14[0x12];
          plVar14[0x12] = lVar16;
          if (plVar8 != (long *)0x0) {
            lVar16 = plVar8[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
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
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar8 + 0x20))();
            }
          }
          FUN_00b0701c(param_1,local_98,*(undefined8 *)(lVar18 + 0x68));
          plVar14 = local_98;
          local_12b = 0;
          local_108 = 0;
          local_128 = (long *)0x0;
          local_120 = 0;
          local_118 = (code *)0x0;
          local_110 = 0;
          local_130 = param_3;
          local_12c = param_6;
          if (local_98 == (long *)0x0) {
            local_128 = local_98;
          }
          else {
            lVar18 = local_98[0xb];
            if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01352fc4;
            if (*(long *)(lVar18 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
              *(undefined8 *)(lVar18 + 0x10) = uVar7;
            }
            plVar8 = local_128;
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            local_128 = plVar14;
            if (plVar8 != (long *)0x0) {
              lVar18 = plVar8[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
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
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar8 + 0x20))();
              }
            }
          }
          pcVar10 = local_118;
          if (local_118 == (code *)0x0) {
            pcVar10 = (code *)param_5[2];
            local_118 = (code *)0x0;
          }
          else {
            local_110 = 0;
            local_108 = 0;
            local_120 = 0;
            local_118 = (code *)0x0;
            (*pcVar10)(auStack_100);
            pcVar10 = (code *)param_5[2];
          }
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(param_5 + 4,auStack_100);
            local_120 = *param_5;
            local_118 = (code *)param_5[1];
            local_110 = param_5[2];
            local_108 = param_5[3];
          }
          lVar18 = nn::os::GetCurrentThread();
          plVar14 = (long *)(param_2 + 0x150);
          do {
            if (*plVar14 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
                while (*plVar14 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar3) {
                    *plVar14 = lVar18;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_01352b98;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar18;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_01352b98:
          lVar18 = *(long *)(param_2 + 0x110);
          puVar6 = (undefined8 *)(param_2 + 0x120);
          if (lVar18 == *(long *)(param_2 + 0x118)) {
            uVar11 = *(ulong *)(param_2 + 0x128);
            lVar18 = lVar18 - *(long *)(param_2 + 0x108) >> 4;
            if (0x7ffffffffffffffe < uVar11) {
              uVar11 = 0x7fffffffffffffff;
            }
            uVar12 = lVar18 * -0x71c71c71c71c71c7 + 1;
            if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar16 = *(long *)(param_2 + 0x118) - *(long *)(param_2 + 0x108) >> 4;
            local_78 = 0;
            uVar9 = lVar16 * 0x1c71c71c71c71c72;
            if (uVar12 <= uVar9) {
              uVar12 = uVar9;
            }
            if ((ulong)(lVar16 * -0x71c71c71c71c71c7) < uVar11 >> 1) {
              uVar11 = uVar12;
            }
            puStack_70 = puVar6;
            if (uVar11 == 0) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,uVar11 * 0x90,0x10);
              if (local_90 == 0) {
                (**(code **)(*(long *)*puVar6 + 0xb8))();
              }
            }
            lVar15 = local_90 + lVar18 * 0x10;
            lVar17 = local_90 + uVar11 * 0x90;
            local_88 = lVar15;
            local_78 = lVar17;
            FUN_009af634(puVar6,lVar15,&local_130);
            lVar18 = lVar15 + 0x90;
            lVar16 = *(long *)(param_2 + 0x108);
            lVar19 = *(long *)(param_2 + 0x110);
            local_80 = lVar18;
            if (lVar19 == lVar16) {
              local_80 = lVar16;
            }
            else {
              do {
                lVar15 = lVar15 + -0x90;
                lVar19 = lVar19 + -0x90;
                FUN_009af634(puVar6,lVar15,lVar19);
              } while (lVar16 != lVar19);
              lVar16 = *(long *)(param_2 + 0x108);
              local_80 = *(long *)(param_2 + 0x110);
            }
            *(long *)(param_2 + 0x108) = lVar15;
            *(long *)(param_2 + 0x110) = lVar18;
            local_78 = *(long *)(param_2 + 0x118);
            *(long *)(param_2 + 0x118) = lVar17;
            local_90 = lVar16;
            local_88 = lVar16;
            FUN_013580ac(&local_90);
            lVar18 = local_90;
            if (local_90 != 0) {
              lVar16 = local_78 - local_90;
              plVar14 = (long *)*puStack_70;
              uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
              if ((uVar11 & 1) != 0) {
                lVar19 = tpidr_el0;
                if (*(char *)(lVar19 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar19 + 0x38d488) = 1;
                  *(undefined8 *)(lVar19 + 0x38d478) = 0;
                  *(undefined8 *)(lVar19 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar19 + 0x38d480)) {
                  FUN_02bcc824(plVar14,lVar18,lVar16,0x10);
                  goto LAB_01352bc0;
                }
              }
              (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar16,0x10);
            }
          }
          else {
            FUN_009af634(puVar6,lVar18,&local_130);
            *(long *)(param_2 + 0x110) = *(long *)(param_2 + 0x110) + 0x90;
          }
LAB_01352bc0:
          *(undefined1 *)(param_2 + 0x160) = 1;
          *(undefined8 *)(param_2 + 0x150) = 0;
          nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
          pcVar10 = local_118;
          if (local_118 == (code *)0x0) {
            local_118 = (code *)0x0;
          }
          else {
            local_110 = 0;
            local_108 = 0;
            local_120 = 0;
            local_118 = (code *)0x0;
            (*pcVar10)(auStack_100);
          }
          if (local_128 != (long *)0x0) {
            lVar18 = local_128[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
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
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_128 + 0x20))();
            }
          }
          if (local_98 == (long *)0x0) {
            return;
          }
          lVar18 = local_98[0xb];
          piVar1 = (int *)(lVar18 + 0xc);
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
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_98 + 0x20))();
            return;
          }
          return;
        }
        goto LAB_01352fc4;
      }
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)0x0);
  }
LAB_01352ec8:
  *param_1 = 0;
  return;
}


