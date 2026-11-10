/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a9bc4; name: FUN_028a9bc4
 */


void FUN_028a9bc4(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long local_98;
  long local_90;
  long local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_0437a6a8;
  puVar8 = PTR_DAT_0437a6a0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  plVar17 = *(long **)(param_1 + 0x70);
  plVar14 = *(long **)(param_1 + 0x78);
  if ((plVar17 != plVar14) && (*plVar17 != *param_2)) {
    do {
      plVar17 = plVar17 + 6;
      if (plVar14 == plVar17) goto LAB_028a9c38;
    } while (*plVar17 != *param_2);
  }
  if (plVar14 == plVar17) {
LAB_028a9c38:
    lVar23 = *param_3;
    if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
      piVar1 = (int *)(lVar23 + 0xc);
      iVar11 = *(int *)(lVar23 + 0xc);
      do {
        plVar14 = *(long **)(lVar23 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar13;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) {
            return;
          }
          if (plVar14 == (long *)puVar9) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar23 + 0x18) == 0) {
              return;
            }
            plVar14 = (long *)(*(long *)(lVar23 + 0x18) + -8);
            iVar11 = (**(code **)(*plVar14 + 0x40))(plVar14);
            if (iVar11 != 0) {
              uVar19 = 0;
              do {
                local_68 = CONCAT71(local_68._1_7_,1);
                local_68 = CONCAT44(uVar19,(undefined4)local_68);
                plVar17 = (long *)(**(code **)(*plVar14 + 0x50))(plVar14,&local_68);
                local_98 = *plVar17;
                local_90 = plVar17[1];
                local_88 = plVar17[2];
                plVar17 = (long *)plVar17[3];
                local_80 = plVar17;
                if (plVar17 == (long *)0x0) {
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0xa8);
                }
                else {
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0xa8);
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
                uVar19 = uVar19 + 1;
                uVar12 = (**(code **)(*plVar14 + 0x40))(plVar14);
              } while (uVar19 < uVar12);
            }
            iVar11 = (**(code **)(*plVar14 + 0x68))(plVar14);
            if (iVar11 != 0) {
              uVar19 = 0;
              do {
                local_68 = CONCAT71(local_68._1_7_,1);
                local_68 = CONCAT44(uVar19,(undefined4)local_68);
                plVar17 = (long *)(**(code **)(*plVar14 + 0x78))(plVar14,&local_68);
                local_98 = *plVar17;
                local_90 = plVar17[1];
                local_88 = plVar17[2];
                plVar17 = (long *)plVar17[3];
                local_80 = plVar17;
                if (plVar17 == (long *)0x0) {
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0xe0);
                }
                else {
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0xe0);
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
                uVar19 = uVar19 + 1;
                uVar12 = (**(code **)(*plVar14 + 0x68))(plVar14);
              } while (uVar19 < uVar12);
            }
            iVar11 = (**(code **)(*plVar14 + 0x90))(plVar14);
            if (iVar11 != 0) {
              uVar19 = 0;
              do {
                local_68 = CONCAT71(local_68._1_7_,1);
                local_68 = CONCAT44(uVar19,(undefined4)local_68);
                plVar17 = (long *)(**(code **)(*plVar14 + 0xa0))(plVar14,&local_68);
                local_98 = *plVar17;
                local_90 = plVar17[1];
                local_88 = plVar17[2];
                plVar17 = (long *)plVar17[3];
                local_80 = plVar17;
                if (plVar17 == (long *)0x0) {
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0x118);
                }
                else {
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0x118);
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
                uVar19 = uVar19 + 1;
                uVar12 = (**(code **)(*plVar14 + 0x90))(plVar14);
              } while (uVar19 < uVar12);
            }
            iVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
            if (iVar11 != 0) {
              uVar19 = 0;
              do {
                local_68 = CONCAT71(local_68._1_7_,1);
                local_68 = CONCAT44(uVar19,(undefined4)local_68);
                plVar17 = (long *)(**(code **)(*plVar14 + 0xd0))(plVar14,&local_68);
                local_98 = *plVar17;
                local_90 = plVar17[1];
                local_88 = plVar17[2];
                plVar17 = (long *)plVar17[3];
                local_80 = plVar17;
                if (plVar17 == (long *)0x0) {
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0x150);
                }
                else {
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  FUN_028a8de8(param_1,param_3,&local_98,uVar19,param_1 + 0x150);
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
                uVar19 = uVar19 + 1;
                uVar12 = (**(code **)(*plVar14 + 0xc0))(plVar14);
              } while (uVar19 < uVar12);
            }
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            local_98 = *param_2;
            local_90 = param_2[1];
            local_88 = param_2[2];
            local_80 = (long *)0x0;
            plVar17 = (long *)param_2[3];
            if (plVar17 == (long *)0x0) {
            }
            else {
              (**(code **)(*plVar17 + 0x18))(plVar17);
              if (local_80 != (long *)0x0) {
                lVar23 = *local_80;
                local_80 = plVar17;
                (**(code **)(lVar23 + 0x20))();
                plVar17 = local_80;
              }
            }
            local_80 = plVar17;
            FUN_00af8f10(&local_78,param_3);
            lVar23 = *(long *)(param_1 + 0x78);
            puVar2 = (undefined8 *)(param_1 + 0x88);
            if (lVar23 == *(long *)(param_1 + 0x80)) {
              uVar18 = *(ulong *)(param_1 + 0x90);
              lVar23 = lVar23 - *(long *)(param_1 + 0x70) >> 4;
              if (0x7ffffffffffffffe < uVar18) {
                uVar18 = 0x7fffffffffffffff;
              }
              uVar3 = lVar23 * -0x5555555555555555 + 1;
              if (uVar18 < uVar3) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar15 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70) >> 4;
              if ((ulong)(lVar15 * -0x5555555555555555) < uVar18 >> 1) {
                uVar16 = lVar15 * 0x5555555555555556;
                uVar18 = uVar3;
                if (uVar3 <= uVar16) {
                  uVar18 = uVar16;
                }
              }
              if (uVar18 == 0) {
                lVar15 = 0;
              }
              else {
                lVar15 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar18 * 0x30,8);
                if (lVar15 == 0) {
                  (**(code **)(*(long *)*puVar2 + 0xb8))();
                }
              }
              lVar22 = lVar15 + lVar23 * 0x10;
              FUN_028ade48(puVar2,lVar22,&local_98);
              lVar21 = *(long *)(param_1 + 0x70);
              lVar20 = *(long *)(param_1 + 0x78);
              lVar23 = lVar22 + 0x30;
              if (lVar20 == lVar21) {
                lVar20 = lVar21;
              }
              else {
                do {
                  lVar22 = lVar22 + -0x30;
                  lVar20 = lVar20 + -0x30;
                  FUN_028ade48(puVar2,lVar22,lVar20);
                } while (lVar21 != lVar20);
                lVar21 = *(long *)(param_1 + 0x70);
                lVar20 = *(long *)(param_1 + 0x78);
              }
              lVar24 = *(long *)(param_1 + 0x80);
              *(ulong *)(param_1 + 0x80) = lVar15 + uVar18 * 0x30;
              *(long *)(param_1 + 0x70) = lVar22;
              *(long *)(param_1 + 0x78) = lVar23;
              puVar8 = PTR_DAT_043794a8;
              puVar7 = PTR_DAT_043794a0;
              puVar6 = PTR_DAT_04379498;
              if (lVar20 != lVar21) {
                puVar25 = *(undefined8 **)(lVar20 + -0x10);
                while( true ) {
                  if (puVar25 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar25 + 1);
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
                      puVar25[2] = 0;
                      if (((*puVar6 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                        __cxa_guard_release(puVar6);
                      }
                      lVar23 = *(long *)puVar7;
                      *(long *)puVar8 = lVar23;
                      local_68 = *puVar25;
                      FUN_02a44274(lVar23 + 0xd8,&local_68);
                    }
                  }
                  if (*(long **)(lVar20 + -0x18) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar20 + -0x18) + 0x20))();
                  }
                  if (lVar20 + -0x30 == lVar21) break;
                  puVar25 = *(undefined8 **)(lVar20 + -0x40);
                  lVar20 = lVar20 + -0x30;
                }
              }
              puVar25 = local_78;
              if (lVar21 != 0) {
                plVar17 = (long *)*puVar2;
                lVar24 = lVar24 - lVar21;
                uVar18 = (**(code **)(*plVar17 + 0xc0))(plVar17);
                if ((uVar18 & 1) != 0) {
                  lVar23 = tpidr_el0;
                  if (*(char *)(lVar23 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar23 + 0x38d488) = 1;
                    *(undefined8 *)(lVar23 + 0x38d478) = 0;
                    *(undefined8 *)(lVar23 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar23 + 0x38d480)) {
                    FUN_02bcc824(plVar17,lVar21,lVar24,8);
                    puVar25 = local_78;
                    goto joined_r0x028aa364;
                  }
                }
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar21,lVar24,8);
                puVar25 = local_78;
              }
            }
            else {
              FUN_028ade48(puVar2,lVar23,&local_98);
              *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 0x30;
              puVar25 = local_78;
            }
joined_r0x028aa364:
            local_78 = puVar25;
            if (puVar25 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar25 + 1);
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
                puVar25[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_68 = *puVar25;
                FUN_02a44274(lVar23 + 0xd8,&local_68);
              }
            }
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            (**(code **)(*plVar14 + 0x18))(plVar14);
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
  }
  return;
}


