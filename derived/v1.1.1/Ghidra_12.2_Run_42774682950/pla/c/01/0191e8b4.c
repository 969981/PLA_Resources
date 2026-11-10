/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191e8b4; name: FUN_0191e8b4
 */


void FUN_0191e8b4(undefined *param_1)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *local_d0 [4];
  long *local_b0;
  long *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long *local_88;
  undefined *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar18 = 0;
  puVar14 = param_1 + 0x68;
  do {
    local_80 = (&PTR_s_bin_capture_throwable_resource_d_0422f760)[lVar18];
    FUN_009f1b84(local_d0,&local_80);
    uVar7 = FUN_00938764(puVar14,1,local_d0,0,uVar9,0);
    plVar19 = (long *)0x0;
    if (((uVar7 & 1) != 0) && (plVar19 = *(long **)(puVar14 + 0x28), plVar19 != (long *)0x0)) {
      lVar13 = plVar19[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0191ef04;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar8;
    FUN_00b57040(&local_a0,uVar8,plVar19[1]);
    local_90 = (undefined4)lVar18;
    local_88 = local_a0;
    local_98 = param_1;
    if (local_a0 != (long *)0x0) {
      lVar13 = local_a0[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0191ef04;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar20 = (long *)0x0;
    if (local_a0 != (long *)0x0) {
      plVar20 = local_a0 + 0xe;
    }
    if ((*(byte *)((long)plVar19 + 0x7a) & 1) == 0) {
      if ((*(byte *)((long)plVar19 + 0x79) & 1) == 0) {
        lVar13 = nn::os::GetCurrentThread();
        plVar2 = plVar19 + 0x12;
        do {
          if (*plVar2 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x84));
              while (*plVar2 == 0) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_0191ea48;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_0191ea48:
        if ((*(byte *)((long)plVar19 + 0x79) & 1) == 0) {
          uStack_78 = CONCAT44(uStack_8c,local_90);
          local_80 = local_98;
          local_70 = local_88;
          if (local_88 != (long *)0x0) {
            lVar13 = local_88[0xb];
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_0191ef04:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar8;
            }
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar7 = plVar19[0x1b];
          local_68 = plVar20;
          if (uVar7 < (ulong)plVar19[0x1c]) {
            FUN_0192413c(plVar19[0x1d],uVar7,&local_80);
            plVar19[0x1b] = plVar19[0x1b] + 0x90;
          }
          else {
            lVar13 = (long)(uVar7 - plVar19[0x1a]) >> 4;
            uVar7 = plVar19[0x1e];
            if (0x7ffffffffffffffe < uVar7) {
              uVar7 = 0x7fffffffffffffff;
            }
            uVar3 = lVar13 * -0x71c71c71c71c71c7 + 1;
            if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar10 = plVar19[0x1c] - plVar19[0x1a] >> 4;
            uVar12 = lVar10 * 0x1c71c71c71c71c72;
            if (uVar3 <= uVar12) {
              uVar3 = uVar12;
            }
            plVar20 = plVar19 + 0x1d;
            if ((ulong)(lVar10 * -0x71c71c71c71c71c7) < uVar7 >> 1) {
              uVar7 = uVar3;
            }
            if (uVar7 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = (**(code **)(*(long *)*plVar20 + 0x10))((long *)*plVar20,uVar7 * 0x90,0x10);
              if (lVar10 == 0) {
                (**(code **)(*(long *)*plVar20 + 0xb8))();
              }
            }
            lVar17 = lVar10 + lVar13 * 0x10;
            FUN_0192413c(plVar19[0x1d],lVar17,&local_80);
            lVar16 = plVar19[0x1a];
            lVar15 = plVar19[0x1b];
            lVar13 = lVar17 + 0x90;
            if (lVar15 == lVar16) {
              lVar15 = lVar16;
            }
            else {
              do {
                lVar17 = lVar17 + -0x90;
                lVar15 = lVar15 + -0x90;
                FUN_00b57d94(plVar20,lVar17,lVar15);
              } while (lVar16 != lVar15);
              lVar16 = plVar19[0x1a];
              lVar15 = plVar19[0x1b];
            }
            plVar19[0x1a] = lVar17;
            plVar19[0x1b] = lVar13;
            lVar13 = plVar19[0x1c];
            plVar19[0x1c] = lVar10 + uVar7 * 0x90;
            while (lVar10 = lVar15, lVar10 != lVar16) {
              pcVar11 = *(code **)(lVar10 + -0x88);
              lVar15 = lVar10 + -0x90;
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)(lVar10 + -0x80) = 0;
                *(undefined8 *)(lVar10 + -0x78) = 0;
                *(undefined8 *)(lVar10 + -0x90) = 0;
                *(undefined8 *)(lVar10 + -0x88) = 0;
                (*pcVar11)(lVar10 + -0x70);
              }
            }
            if (lVar16 != 0) {
              plVar20 = (long *)*plVar20;
              uVar7 = (**(code **)(*plVar20 + 0xc0))(plVar20);
              if ((uVar7 & 1) != 0) {
                lVar10 = tpidr_el0;
                if (*(char *)(lVar10 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar10 + 0x38d488) = 1;
                  *(undefined8 *)(lVar10 + 0x38d478) = 0;
                  *(undefined8 *)(lVar10 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar10 + 0x38d480)) {
                  FUN_02bcc824(plVar20,lVar16,lVar13 - lVar16,0x10);
                  goto joined_r0x0191ee6c;
                }
              }
              (**(code **)(*plVar20 + 0x18))(plVar20,lVar16,lVar13 - lVar16,0x10);
            }
          }
joined_r0x0191ee6c:
          if (local_70 != (long *)0x0) {
            lVar13 = local_70[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_70 + 0x20))();
            }
          }
        }
        else {
          FUN_01923f88(&local_98,(char)plVar19[0xf]);
        }
        plVar19[0x12] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x84));
      }
      else {
        FUN_01923f88(&local_98,(char)plVar19[0xf]);
      }
    }
    if (local_88 != (long *)0x0) {
      lVar13 = local_88[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    if (local_a0 != (long *)0x0) {
      lVar13 = local_a0[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
    lVar13 = plVar19[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_d0[0] != (long *)0x0) {
      (**(code **)(*local_d0[0] + 0x20))();
    }
    puVar14 = puVar14 + 0x30;
    lVar18 = lVar18 + 1;
    if (puVar14 == param_1 + 0x278) {
      return;
    }
  } while( true );
}


