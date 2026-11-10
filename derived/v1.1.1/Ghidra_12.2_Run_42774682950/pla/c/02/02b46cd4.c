/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b46cd4; name: FUN_02b46cd4
 */


void FUN_02b46cd4(long param_1,long *param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 in_x7;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  char local_88 [32];
  long *local_68;
  
  plVar14 = (long *)(param_1 + 0xd0);
  if (*plVar14 == 0) {
    lVar10 = FUN_02a9e788(local_88,*(undefined8 *)(param_1 + 8),*(long *)(*param_2 + 0x60) + 0x58);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x50);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar11 = (long *)*plVar14;
    *plVar14 = 0;
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *plVar14 = lVar10;
  }
  lVar10 = *(long *)(param_1 + 0x60);
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar10 != lVar5) {
    lVar22 = param_1 + 0x98;
    puVar3 = (undefined8 *)(param_1 + 0xb0);
    do {
      lVar12 = *(long *)(lVar10 + 8);
      lVar9 = *(long *)(lVar12 + 0x278) - *(long *)(lVar12 + 0x270);
      if (lVar9 != 0) {
        uVar17 = 0;
        do {
          FUN_02b31604(local_88,*param_2,param_1 + 0xd8,*(long *)(lVar12 + 0x270) + uVar17 * 0x1b0,
                       *(long *)(lVar12 + 0x2a8) + uVar17 * 0x38,plVar14,param_3 & 1,
                       *(undefined8 *)(param_1 + 8),in_x7,lVar22);
          lVar12 = *(long *)(param_1 + 0xa0);
          if (lVar12 == *(long *)(param_1 + 0xa8)) {
            uVar16 = *(ulong *)(param_1 + 0xb8);
            lVar12 = lVar12 - *(long *)(param_1 + 0x98) >> 3;
            if (0x7ffffffffffffffe < uVar16) {
              uVar16 = 0x7fffffffffffffff;
            }
            uVar4 = lVar12 * -0x3333333333333333 + 1;
            if (uVar16 < uVar4) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar13 = *(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0x98) >> 3;
            uVar15 = lVar13 * -0x6666666666666666;
            if (uVar4 <= uVar15) {
              uVar4 = uVar15;
            }
            if ((ulong)(lVar13 * -0x3333333333333333) < uVar16 >> 1) {
              uVar16 = uVar4;
            }
            if (uVar16 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar16 * 0x28,8);
              if (lVar13 == 0) {
                (**(code **)(*(long *)*puVar3 + 0xb8))();
              }
            }
            lVar20 = lVar13 + lVar12 * 8;
            FUN_02b2e00c(puVar3,lVar20,local_88);
            pcVar18 = *(char **)(param_1 + 0x98);
            pcVar21 = *(char **)(param_1 + 0xa0);
            lVar12 = lVar20 + 0x28;
            if (pcVar21 == pcVar18) {
              pcVar21 = pcVar18;
            }
            else {
              do {
                lVar20 = lVar20 + -0x28;
                pcVar21 = pcVar21 + -0x28;
                FUN_02b2e00c(puVar3,lVar20,pcVar21);
              } while (pcVar18 != pcVar21);
              pcVar18 = *(char **)(param_1 + 0x98);
              pcVar21 = *(char **)(param_1 + 0xa0);
            }
            *(long *)(param_1 + 0x98) = lVar20;
            *(long *)(param_1 + 0xa0) = lVar12;
            lVar12 = *(long *)(param_1 + 0xa8);
            *(ulong *)(param_1 + 0xa8) = lVar13 + uVar16 * 0x28;
            if (pcVar21 != pcVar18) {
              do {
                pcVar19 = pcVar21 + -0x28;
                if (*pcVar19 != '\0') {
                  if (*(long **)(pcVar21 + -8) != (long *)0x0) {
                    (**(code **)(**(long **)(pcVar21 + -8) + 0x20))();
                  }
                  pcVar21[-0x28] = '\0';
                }
                pcVar21 = pcVar19;
              } while (pcVar18 != pcVar19);
            }
            if (pcVar18 != (char *)0x0) {
              plVar11 = (long *)*puVar3;
              lVar12 = lVar12 - (long)pcVar18;
              uVar16 = (**(code **)(*plVar11 + 0xc0))(plVar11);
              if ((uVar16 & 1) != 0) {
                lVar13 = tpidr_el0;
                if (*(char *)(lVar13 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar13 + 0x38d488) = 1;
                  *(undefined8 *)(lVar13 + 0x38d478) = 0;
                  *(undefined8 *)(lVar13 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar13 + 0x38d480)) {
                  FUN_02bcc824(plVar11,pcVar18,lVar12,8);
                  goto joined_r0x02b4700c;
                }
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,pcVar18,lVar12,8);
            }
          }
          else {
            FUN_02b2e00c(puVar3,lVar12,local_88);
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 0x28;
          }
joined_r0x02b4700c:
          if (local_88[0] != '\0') {
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            local_88[0] = '\0';
          }
          uVar17 = uVar17 + 1;
          if ((ulong)((lVar9 >> 4) * -0x7b425ed097b425ed) <= uVar17) break;
          lVar12 = *(long *)(lVar10 + 8);
        } while( true );
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != lVar5);
  }
  lVar10 = *param_2;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar14 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar10;
  if (plVar14 != (long *)0x0) {
    plVar11 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  return;
}


