/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ac8c4; name: FUN_025ac8c4
 */


void FUN_025ac8c4(float param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  double dVar11;
  double dVar12;
  
  if (*(char *)(param_2 + 0x68) != '\0') {
    if (*(char *)(param_2 + 0x7d) == '\0' && *(char *)(param_2 + 0x7c) == '\0') {
      uVar3 = *(uint *)(param_2 + 0x78);
      if (0x17 < uVar3) {
LAB_025acbd8:
                    /* WARNING: Subroutine does not return */
        FUN_025ad8d0();
      }
      iVar6 = uVar3 + 1;
      dVar12 = *(double *)(param_2 + 0x70);
      dVar11 = dVar12 + (double)param_1;
      *(double *)(param_2 + 0x70) = dVar11;
      if ((double)(uint)(iVar6 * 0x3c) <= dVar11) {
        *(int *)(param_2 + 0x78) = iVar6;
        if (0x16 < uVar3) {
          iVar6 = 0;
          *(undefined4 *)(param_2 + 0x78) = 0;
          *(double *)(param_2 + 0x70) = dVar11 + -1440.0;
        }
        FUN_019ed768(*(undefined8 *)(param_2 + 0xb8),iVar6);
        if (0x17 < *(uint *)(param_2 + 0x78)) goto LAB_025acbd8;
        if (*(int *)(&DAT_03a7d720 + (long)(int)*(uint *)(param_2 + 0x78) * 4) !=
            *(int *)(&DAT_03a7d720 + (long)(int)uVar3 * 4)) {
          if (*(int *)(param_2 + 0xc0) == 0x7fffffff) {
            *(undefined4 *)(param_2 + 0xc0) = 0;
          }
          else {
            *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
          }
        }
      }
      if (((2.220446049250313e-16 < ABS(dVar12 - *(double *)(param_2 + 0x70))) &&
          (dVar12 < *(double *)(param_2 + 0xb0))) &&
         (*(double *)(param_2 + 0xb0) <= *(double *)(param_2 + 0x70))) {
        iVar6 = *(int *)(param_2 + 0xa0) + 1;
        *(int *)(param_2 + 0xa0) = iVar6;
        if (iVar6 < *(int *)(param_2 + 0xa4)) {
          *(undefined4 *)(param_2 + 0xa8) = 0;
          if (*(int *)(param_2 + 0x80) <= iVar6) {
            *(undefined4 *)(param_2 + 0xa8) = 1;
            iVar2 = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x80);
            if (iVar2 <= iVar6) {
              *(undefined4 *)(param_2 + 0xa8) = 2;
              iVar2 = *(int *)(param_2 + 0x88) + iVar2;
              if (iVar2 <= iVar6) {
                *(undefined4 *)(param_2 + 0xa8) = 3;
                iVar2 = *(int *)(param_2 + 0x8c) + iVar2;
                if (iVar2 <= iVar6) {
                  *(undefined4 *)(param_2 + 0xa8) = 4;
                  iVar2 = *(int *)(param_2 + 0x90) + iVar2;
                  if (iVar2 <= iVar6) {
                    *(undefined4 *)(param_2 + 0xa8) = 5;
                    iVar2 = *(int *)(param_2 + 0x94) + iVar2;
                    if (iVar2 <= iVar6) {
                      *(undefined4 *)(param_2 + 0xa8) = 6;
                      iVar2 = *(int *)(param_2 + 0x98) + iVar2;
                      if (iVar2 <= iVar6) {
                        uVar8 = 7;
                        if (*(int *)(param_2 + 0x9c) + iVar2 <= iVar6) {
                          uVar8 = 8;
                        }
                        *(undefined4 *)(param_2 + 0xa8) = uVar8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)(param_2 + 0xa0) = 0;
          *(undefined4 *)(param_2 + 0xa8) = 0;
        }
      }
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar9 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar9;
    plVar10 = *(long **)(lVar9 + 0x278);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar10[0x1c] = *(long *)(param_2 + 0x70);
    *(undefined1 *)(plVar10 + 0x1d) = *(undefined1 *)(param_2 + 0x7c);
    *(undefined4 *)((long)plVar10 + 0xec) = *(undefined4 *)(param_2 + 0xa0);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x025aca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x20))(plVar10);
        return;
      }
    }
  }
  return;
}


