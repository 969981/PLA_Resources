/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a28614; name: FUN_01a28614
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a28614(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70 [2];
  
  puVar7 = PTR_DAT_0437ef50;
  puVar6 = PTR_DAT_0437ef48;
  lVar17 = *(long *)(param_1 + 0x230);
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar11 = *(int *)(lVar17 + 0xc);
    while( true ) {
      plVar23 = *(long **)(lVar17 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        uVar13 = FUN_009cdcc0();
        *(undefined8 *)puVar7 = uVar13;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar23 == (long *)0x0) {
          return;
        }
        if (plVar23 == (long *)puVar7) break;
        plVar23 = (long *)*plVar23;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) break;
      ClearExclusiveLocal();
LAB_01a28688:
      iVar11 = iVar10;
      if (iVar10 == 0) {
        return;
      }
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_01a28688;
    lVar17 = *(long *)(lVar17 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    uVar9 = (**(code **)(**(long **)(lVar17 + 0x48) + 0x38))();
    if (uVar9 != 0) {
      plVar23 = *(long **)(param_1 + 0x248);
      uVar16 = (ulong)uVar9;
      lVar14 = *(long *)(param_1 + 0x240);
      uVar19 = (long)plVar23 - lVar14 >> 3;
      lVar22 = uVar19 - uVar16;
      if (uVar19 < uVar16) {
        puVar2 = (undefined8 *)(param_1 + 600);
        if ((ulong)(*(long *)(param_1 + 0x250) - (long)plVar23 >> 3) < uVar16 - uVar19) {
          uVar15 = *(ulong *)(param_1 + 0x260);
          if (0x7ffffffffffffffe < uVar15) {
            uVar15 = 0x7fffffffffffffff;
          }
          if (uVar15 < uVar16) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = *(long *)(param_1 + 0x250) - lVar14;
          if ((ulong)(lVar14 >> 3) < uVar15 >> 1) {
            uVar15 = lVar14 >> 2;
            uVar24 = uVar16;
            if (uVar16 <= uVar15) goto LAB_01a28784;
LAB_01a2878c:
            lVar14 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar24 << 3,8);
            uVar15 = uVar24;
            if (lVar14 == 0) {
              (**(code **)(*(long *)*puVar2 + 0xb8))();
            }
          }
          else {
LAB_01a28784:
            uVar24 = uVar15;
            if (uVar15 != 0) goto LAB_01a2878c;
            lVar14 = 0;
          }
          lVar20 = lVar14 + uVar19 * 8;
          FUN_01a2c96c(puVar2,lVar20);
          lVar21 = lVar20 + 8;
          if (uVar16 - uVar19 != 1) {
            do {
              lVar22 = lVar22 + 1;
              FUN_01a2c96c(puVar2,lVar21);
              lVar21 = lVar21 + 8;
            } while (lVar22 != -1);
          }
          plVar23 = *(long **)(param_1 + 0x240);
          plVar18 = *(long **)(param_1 + 0x248);
          if (plVar18 == plVar23) {
            plVar18 = plVar23;
          }
          else {
            do {
              lVar20 = lVar20 + -8;
              plVar18 = plVar18 + -1;
              FUN_01a2ca38(puVar2,lVar20,plVar18);
            } while (plVar23 != plVar18);
            plVar23 = *(long **)(param_1 + 0x240);
            plVar18 = *(long **)(param_1 + 0x248);
          }
          *(long *)(param_1 + 0x240) = lVar20;
          lVar22 = *(long *)(param_1 + 0x250);
          *(long *)(param_1 + 0x248) = lVar21;
          *(ulong *)(param_1 + 0x250) = lVar14 + uVar15 * 8;
          while (plVar18 != plVar23) {
            plVar18 = plVar18 + -1;
            plVar12 = (long *)*plVar18;
            if (plVar12 != (long *)0x0) {
              plVar3 = plVar12 + 10;
              do {
                iVar11 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *(int *)plVar3 = iVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*plVar12 + 0x10))();
              }
            }
          }
          if (plVar23 != (long *)0x0) {
            plVar18 = (long *)*puVar2;
            lVar22 = lVar22 - (long)plVar23;
            uVar19 = (**(code **)(*plVar18 + 0xc0))(plVar18);
            if ((uVar19 & 1) != 0) {
              lVar14 = tpidr_el0;
              if (*(char *)(lVar14 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar14 + 0x38d488) = 1;
                *(undefined8 *)(lVar14 + 0x38d478) = 0;
                *(undefined8 *)(lVar14 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar14 + 0x38d480)) {
                FUN_02bcc824(plVar18,plVar23,lVar22,8);
                goto LAB_01a28820;
              }
            }
            (**(code **)(*plVar18 + 0x18))(plVar18,plVar23,lVar22,8);
          }
        }
        else {
          do {
            FUN_01a2c96c(lVar14,puVar2,plVar23);
            plVar23 = (long *)(*(long *)(param_1 + 0x248) + 8);
            bVar8 = lVar22 != -1;
            lVar22 = lVar22 + 1;
            *(long **)(param_1 + 0x248) = plVar23;
            lVar14 = param_1;
          } while (bVar8);
        }
      }
      else if (lVar22 != 0) {
        plVar18 = (long *)(lVar14 + uVar16 * 8);
        if (plVar18 != plVar23) {
          plVar12 = (long *)plVar23[-1];
          if (plVar12 != (long *)0x0) {
            plVar3 = plVar12 + 10;
            do {
              iVar11 = (int)*plVar3 + -1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *(int *)plVar3 = iVar11;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 == 0) {
              (**(code **)(*plVar12 + 0x10))();
            }
          }
          if (plVar23 + -1 != plVar18) {
            plVar23 = plVar23 + -2;
            plVar12 = (long *)*plVar23;
            if (plVar12 != (long *)0x0) {
              plVar3 = plVar12 + 10;
              do {
                iVar11 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *(int *)plVar3 = iVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 == 0) goto LAB_01a28d80;
            }
LAB_01a28d58:
            if (plVar23 != plVar18) {
              while( true ) {
                plVar23 = plVar23 + -1;
                plVar12 = (long *)*plVar23;
                if (plVar12 == (long *)0x0) break;
                plVar3 = plVar12 + 10;
                do {
                  iVar11 = (int)*plVar3 + -1;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar8) {
                    *(int *)plVar3 = iVar11;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 != 0) break;
LAB_01a28d80:
                (**(code **)(*plVar12 + 0x10))();
                if (plVar23 == plVar18) goto LAB_01a28d94;
              }
              goto LAB_01a28d58;
            }
          }
        }
LAB_01a28d94:
        *(long **)(param_1 + 0x248) = plVar18;
      }
LAB_01a28820:
      plVar23 = *(long **)(param_1 + 8);
      uVar19 = 0;
      do {
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar6 = PTR_DAT_04379528;
          if (iVar11 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar22 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar23;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
        plVar18 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x130,0x10);
        if (plVar18 == (long *)0x0) {
          (**(code **)(*plVar23 + 0xb8))(plVar23);
          memset((void *)0x0,0,0x130);
          FUN_01a2cb20(0);
          _DAT_00000010 = 0;
          _DAT_00000018 = 0x130;
          _DAT_00000020 = 0x10;
          _DAT_00000008 = plVar23;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
          bVar8 = true;
        }
        else {
          memset(plVar18,0,0x130);
          FUN_01a2cb20(plVar18);
          plVar18[1] = (long)plVar23;
          plVar18[2] = (long)plVar18;
          plVar18[3] = 0x130;
          plVar18[4] = 0x10;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
          plVar12 = plVar18 + 10;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *(int *)plVar12 = (int)*plVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar8 = false;
        }
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        local_a0 = (undefined8 *)0x0;
        uStack_98 = 0;
        local_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        local_c0 = (undefined8 *)0x0;
        uStack_b8 = 0;
        local_80 = 0x3dcccccd3dcccccd;
        local_78 = 0;
        local_74 = 0;
        FUN_01a2bd14(&local_b0,param_1 + 0x230);
        FUN_00cf98c8(&local_c0,param_1 + 0x220);
        FUN_00af7e30(&local_a0,param_1 + 0x210);
        FUN_00ac3fa4(&local_90,param_1 + 0x1f0);
        local_80 = *(undefined8 *)(param_1 + 0x278);
        local_78 = *(undefined4 *)(param_1 + 0x288);
        local_74 = *(undefined1 *)(param_2 + 0x51);
        FUN_00cf98c8(plVar18 + 0xc,&local_c0);
        FUN_01a2bd14(plVar18 + 0xe,&local_b0);
        FUN_00af7e30(plVar18 + 0x10,&local_a0);
        FUN_00ac3fa4(plVar18 + 0x12,&local_90);
        *(int *)(plVar18 + 0xb) = (int)uVar19;
        *(undefined2 *)((long)plVar18 + 0x55) = 1;
        *(undefined4 *)(plVar18 + 0x24) = (undefined4)local_80;
        *(undefined4 *)((long)plVar18 + 0x124) = local_80._4_4_;
        *(undefined4 *)((long)plVar18 + 300) = local_78;
        *(undefined1 *)((long)plVar18 + 0x57) = local_74;
        plVar18[0x14] = 0x300000006;
        plVar18[0x15] = 0xe00000004;
        lVar22 = *(long *)(param_1 + 0x240);
        if (!bVar8) {
          plVar12 = plVar18 + 10;
          do {
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *(int *)plVar12 = (int)*plVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar12 = *(long **)(lVar22 + uVar19 * 8);
        *(long **)(lVar22 + uVar19 * 8) = plVar18;
        puVar2 = local_90;
        if (plVar12 != (long *)0x0) {
          plVar3 = plVar12 + 10;
          do {
            iVar11 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar4) {
              *(int *)plVar3 = iVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar12 + 0x10))();
            puVar2 = local_90;
          }
        }
        local_90 = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar2 + 1);
          do {
            iVar11 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            puVar2[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar22 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar22;
            local_70[0] = *puVar2;
            FUN_02a44274(lVar22 + 0xd8,local_70);
          }
        }
        puVar2 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_a0 + 1);
          do {
            iVar11 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            local_a0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar22 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar22;
            local_70[0] = *puVar2;
            FUN_02a44274(lVar22 + 0xd8,local_70);
          }
        }
        puVar2 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_b0 + 1);
          do {
            iVar11 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            local_b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar22 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar22;
            local_70[0] = *puVar2;
            FUN_02a44274(lVar22 + 0xd8,local_70);
          }
        }
        puVar2 = local_c0;
        if (local_c0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_c0 + 1);
          do {
            iVar11 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar22 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar22;
            local_70[0] = *puVar2;
            FUN_02a44274(lVar22 + 0xd8,local_70);
          }
        }
        if (!bVar8) {
          plVar12 = plVar18 + 10;
          do {
            iVar11 = (int)*plVar12 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *(int *)plVar12 = iVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar16);
    }
    lVar22 = *(long *)(lVar17 + 8);
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))();
    }
  }
  return;
}


