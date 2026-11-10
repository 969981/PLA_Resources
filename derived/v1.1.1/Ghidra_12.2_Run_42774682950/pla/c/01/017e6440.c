/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e6440; name: FUN_017e6440
 */


void FUN_017e6440(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379690), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar15 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar15;
    plVar17 = *(long **)(*(long *)(lVar15 + 0x50) + 0x30);
    if (plVar17 != (long *)0x0) {
      lVar15 = plVar17[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_017e6840;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar15 = FUN_01467f18(plVar17[0x99],"ItemChangeView");
    if (lVar15 == 0) {
LAB_017e6840:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar16 = plVar17[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    if ((*(int *)(lVar15 + 0x5ac) == 1) && (*(long *)(lVar15 + 0x630) != *(long *)(lVar15 + 0x638)))
    {
      iVar11 = *(int *)(*(long *)(lVar15 + 0x630) + (ulong)*(uint *)(lVar15 + 0x6fc) * 8);
      lVar15 = nn::os::GetCurrentThread();
      plVar17 = (long *)(param_1 + 400);
      do {
        if (*plVar17 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x184));
            while (*plVar17 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *plVar17 = lVar15;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_017e657c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar15;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_017e657c:
      puVar9 = PTR_LAB_04379590;
      puVar8 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_04379498;
      for (lVar15 = *(long *)(param_1 + 0xc0); lVar15 != param_1 + 0xb8;
          lVar15 = *(long *)(lVar15 + 8)) {
        if (*(int *)(*(long *)(lVar15 + 0x10) + 0x78) == iVar11) {
          local_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          FUN_009ab200(&local_70,*(long *)(*(long *)(lVar15 + 0x10) + 0x68) + 0x340);
          puVar6 = local_70;
          if (local_70 != (undefined8 *)0x0) {
            if (*(int *)((long)local_70 + 0xc) != 0) {
              piVar1 = (int *)((long)local_70 + 0xc);
              iVar12 = *(int *)((long)local_70 + 0xc);
              while (uVar14 = FUN_009b4090(puVar6[2]), (uVar14 & 1) != 0) {
                iVar3 = *piVar1;
                if (iVar3 == iVar12) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar16 = puVar6[3];
                    plVar17 = (long *)0x0;
                    puVar6 = local_70;
                    if (lVar16 != 0) {
                      plVar17 = (long *)(lVar16 + -0x50);
                    }
                    goto joined_r0x017e66c4;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar12 = iVar3;
                if (iVar3 == 0) break;
              }
            }
            plVar17 = (long *)0x0;
            puVar6 = local_70;
joined_r0x017e66c4:
            local_70 = puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar6 + 1);
              do {
                iVar12 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 + -1 == 0) {
                puVar6[2] = 0;
                if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                  FUN_00100250(puVar9,puVar8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar7);
                }
                lVar16 = *(long *)puVar8;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_58 = *puVar6;
                FUN_02a44274(lVar16 + 0xd8,&local_58);
              }
            }
            if (plVar17 != (long *)0x0) {
              uVar13 = *(undefined8 *)(param_1 + 0xf8);
              (**(code **)(*plVar17 + 0x10))(&local_70,plVar17);
              local_80 = (long *)0x0;
              uStack_78 = 0;
              FUN_017dc294(&local_80,&local_70);
              puVar6 = local_70;
              if (local_70 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_70 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar12 + -1 == 0) {
                  local_70[2] = 0;
                  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                    FUN_00100250(puVar9,puVar8,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar7);
                  }
                  lVar16 = *(long *)puVar8;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_58 = *puVar6;
                  FUN_02a44274(lVar16 + 0xd8,&local_58);
                }
              }
              FUN_017d98f8(uVar13,&local_80);
              plVar10 = local_80;
              if (local_80 != (long *)0x0) {
                plVar2 = local_80 + 1;
                do {
                  iVar12 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar12;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar12 == 0) {
                  local_80[2] = 0;
                  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                    FUN_00100250(puVar9,puVar8,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar7);
                  }
                  lVar16 = *(long *)puVar8;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70 = (undefined8 *)*plVar10;
                  FUN_02a44274(lVar16 + 0xd8,&local_70);
                }
              }
              lVar16 = plVar17[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*plVar17 + 0x20))(plVar17);
              }
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 400) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x184));
    }
  }
  return;
}


