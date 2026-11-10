/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b45920; name: FUN_02b45920
 */


void FUN_02b45920(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *local_68;
  
  lVar12 = *(long *)(param_1 + 0x90);
  lVar24 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar24 != lVar3) {
    uVar17 = 0;
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    lVar14 = *(long *)(param_1 + 0x98);
    do {
      lVar20 = *(long *)(lVar24 + 8);
      iVar4 = (int)((ulong)(*(long *)(lVar20 + 0x278) - *(long *)(lVar20 + 0x270)) >> 4) *
              -0x1642c859;
      uVar17 = uVar17 + iVar4;
      bVar7 = false;
      bVar8 = false;
      if (iVar4 != 0) {
        uVar11 = (uint)((ulong)(lVar14 - lVar12) >> 3);
        bVar8 = uVar11 <= uVar17;
        bVar7 = uVar17 == uVar11;
      }
      if (bVar8 && !bVar7) {
        iVar19 = 0;
        lVar13 = lVar20;
        do {
          FUN_02b3ced4(&local_68,*param_2,*(long *)(lVar13 + 0x270) + (long)iVar19 * 0x170,
                       *(long *)(*(long *)(lVar20 + 0x2b0) + 0x270) + (long)iVar19 * 8,
                       *(undefined8 *)(param_1 + 8));
          plVar22 = local_68;
          local_68[0x30] = *(long *)(param_1 + 200);
          local_68[0x31] = *(long *)(param_1 + 0xd0);
          local_68[0x32] = *(long *)(param_1 + 0xd8);
          plVar21 = *(long **)(param_1 + 0xe0);
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x18))(plVar21);
          }
          plVar9 = (long *)plVar22[0x33];
          plVar22[0x33] = (long)plVar21;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          lVar13 = *(long *)(param_1 + 0x98);
          if (lVar13 == *(long *)(param_1 + 0xa0)) {
            uVar18 = *(ulong *)(param_1 + 0xb0);
            lVar13 = lVar13 - *(long *)(param_1 + 0x90) >> 3;
            uVar10 = lVar13 + 1;
            if (0x7ffffffffffffffe < uVar18) {
              uVar18 = 0x7fffffffffffffff;
            }
            if (uVar18 < uVar10) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar15 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x90);
            if ((ulong)(lVar15 >> 3) < uVar18 >> 1) {
              uVar16 = lVar15 >> 2;
              uVar18 = uVar10;
              if (uVar10 <= uVar16) {
                uVar18 = uVar16;
              }
            }
            if (uVar18 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar18 << 3,8);
              if (lVar15 == 0) {
                (**(code **)(*(long *)*puVar1 + 0xb8))();
              }
            }
            lVar23 = lVar15 + lVar13 * 8;
            FUN_02b16768(puVar1,lVar23,&local_68);
            plVar22 = *(long **)(param_1 + 0x90);
            plVar21 = *(long **)(param_1 + 0x98);
            lVar13 = lVar23 + 8;
            if (plVar21 == plVar22) {
              plVar21 = plVar22;
            }
            else {
              do {
                lVar23 = lVar23 + -8;
                plVar21 = plVar21 + -1;
                FUN_02b16768(puVar1,lVar23,plVar21);
              } while (plVar22 != plVar21);
              plVar22 = *(long **)(param_1 + 0x90);
              plVar21 = *(long **)(param_1 + 0x98);
            }
            *(long *)(param_1 + 0x90) = lVar23;
            *(long *)(param_1 + 0x98) = lVar13;
            lVar13 = *(long *)(param_1 + 0xa0);
            *(ulong *)(param_1 + 0xa0) = lVar15 + uVar18 * 8;
            while (plVar21 != plVar22) {
              plVar21 = plVar21 + -1;
              plVar9 = (long *)*plVar21;
              if (plVar9 != (long *)0x0) {
                plVar2 = plVar9 + 10;
                do {
                  iVar6 = (int)*plVar2 + -1;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *(int *)plVar2 = iVar6;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
              }
            }
            if (plVar22 != (long *)0x0) {
              plVar21 = (long *)*puVar1;
              lVar13 = lVar13 - (long)plVar22;
              uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
              if ((uVar10 & 1) != 0) {
                lVar15 = tpidr_el0;
                if (*(char *)(lVar15 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar15 + 0x38d488) = 1;
                  *(undefined8 *)(lVar15 + 0x38d478) = 0;
                  *(undefined8 *)(lVar15 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar15 + 0x38d480)) {
                  FUN_02bcc824(plVar21,plVar22,lVar13,8);
                  goto joined_r0x02b45be0;
                }
              }
              (**(code **)(*plVar21 + 0x18))(plVar21,plVar22,lVar13,8);
            }
          }
          else {
            FUN_02b16768(puVar1,lVar13,&local_68);
            *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 8;
          }
joined_r0x02b45be0:
          if (local_68 != (long *)0x0) {
            plVar22 = local_68 + 10;
            do {
              iVar6 = (int)*plVar22 + -1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar7) {
                *(int *)plVar22 = iVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
          iVar19 = iVar19 + 1;
          if (iVar19 == iVar4) break;
          lVar13 = *(long *)(lVar24 + 8);
        } while( true );
      }
      lVar24 = lVar24 + 0x30;
    } while (lVar24 != lVar3);
  }
  return;
}


