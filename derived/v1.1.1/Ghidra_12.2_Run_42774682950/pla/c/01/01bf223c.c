/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf223c; name: FUN_01bf223c
 */


void FUN_01bf223c(long param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  code **ppcStack_a8;
  
  iVar8 = FUN_01bedcb0();
  if (iVar8 != 2) {
    param_2 = 1;
  }
  FUN_01a51334(param_1,param_1 + 0xdd0,param_2);
  FUN_01a4f4d4(param_1,param_1 + 0xdb8,1);
  FUN_01a4f4d4(param_1,param_1 + 0xe80,0);
  uVar10 = FUN_01bf2740(param_1);
  if (((uVar10 & 1) != 0) || (uVar10 = FUN_01bf2a08(param_1), (uVar10 & 1) != 0)) {
    FUN_01a4f4d4(param_1,param_1 + 0xfc8,1);
  }
  FUN_01a50850(&local_d0,param_1);
  pcVar5 = local_d0;
  puVar7 = PTR_DAT_0437a408;
  puVar6 = PTR_DAT_0437a400;
  if (local_d0 != (code *)0x0) {
    if (*(int *)(local_d0 + 0xc) != 0) {
      pcVar1 = local_d0 + 0xc;
      iVar8 = *(int *)(local_d0 + 0xc);
      do {
        plVar14 = *(long **)(pcVar5 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar11 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01bf2418;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar9 = *(int *)pcVar1;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(int *)pcVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(pcVar5 + 0x18);
            plVar14 = (long *)0x0;
            pcVar5 = local_d0;
            if (lVar12 != 0) {
              plVar14 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x01bf2368;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01bf2418:
    plVar14 = (long *)0x0;
    pcVar5 = local_d0;
joined_r0x01bf2368:
    local_d0 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      pcVar1 = pcVar5 + 8;
      do {
        iVar8 = *(int *)pcVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(int *)pcVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(pcVar5 + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_f0 = *(undefined8 *)pcVar5;
        FUN_02a44274(lVar12 + 0xd8,&local_f0);
      }
    }
    if (plVar14 != (long *)0x0) {
      FUN_01a50850(&local_d0,param_1);
      pcVar5 = local_d0;
      puVar7 = PTR_DAT_0437a408;
      puVar6 = PTR_DAT_0437a400;
      if (local_d0 != (code *)0x0) {
        if (*(int *)(local_d0 + 0xc) != 0) {
          pcVar1 = local_d0 + 0xc;
          iVar8 = *(int *)(local_d0 + 0xc);
          do {
            plVar15 = *(long **)(pcVar5 + 0x10);
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              uVar11 = FUN_009cdcc0();
              *(undefined8 *)puVar7 = uVar11;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_01bf26f0;
              if (plVar15 == (long *)puVar7) break;
              plVar15 = (long *)*plVar15;
            }
            iVar9 = *(int *)pcVar1;
            if (iVar9 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar4) {
                *(int *)pcVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar12 = *(long *)(pcVar5 + 0x18);
                plVar15 = (long *)0x0;
                pcVar5 = local_d0;
                if (lVar12 != 0) {
                  plVar15 = (long *)(lVar12 + -0x50);
                }
                goto joined_r0x01bf24f8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01bf26f0:
        plVar15 = (long *)0x0;
        pcVar5 = local_d0;
joined_r0x01bf24f8:
        local_d0 = pcVar5;
        if (pcVar5 != (code *)0x0) {
          pcVar1 = pcVar5 + 8;
          do {
            iVar8 = *(int *)pcVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar4) {
              *(int *)pcVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(pcVar5 + 0x10) = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_f0 = *(undefined8 *)pcVar5;
            FUN_02a44274(lVar12 + 0xd8,&local_f0);
          }
        }
        if (plVar15 != (long *)0x0) {
          ppcStack_a8 = &local_d0;
          local_d0 = FUN_01bfbbf0;
          local_c8 = FUN_01bfbd24;
          local_c0 = &LAB_01bfbd28;
          puStack_b8 = &LAB_01bfbd34;
          local_f0 = 0x81ae8d593ebeebdf;
          pcStack_e8 = "upperbody";
          local_e0 = 9;
          uStack_d8 = 0;
          local_b0 = param_1;
          uVar10 = FUN_028dcc5c(plVar15,&local_f0);
          lVar12 = nn::os::GetCurrentThread();
          plVar13 = plVar15 + 0xf;
          do {
            if (*plVar13 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x6c));
                while (*plVar13 == 0) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar4) {
                    *plVar13 = lVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_01bf2604;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_01bf2604:
          if ((ulong)(plVar15[0x15] - plVar15[0x14] >> 5) <= uVar10 >> 0x20) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          plVar13 = *(long **)(plVar15[0x14] + (uVar10 >> 0x20) * 0x20);
          plVar15[0xf] = 0;
          nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x6c));
          local_f0 = (**(code **)(*plVar13 + 0x70))(plVar13);
          uVar10 = (*local_d0)(&local_b0,&local_f0);
          pcVar5 = local_c8;
          if ((uVar10 & 1) != 0) {
            FUN_01bf2cb8(param_1);
            pcVar5 = local_c8;
          }
          local_c8 = pcVar5;
          if (pcVar5 != (code *)0x0) {
            local_c0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            local_d0 = (code *)0x0;
            local_c8 = (code *)0x0;
            (*pcVar5)(&local_b0);
          }
          lVar12 = plVar15[0xb];
          piVar2 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
        }
      }
      lVar12 = plVar14[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  return;
}


