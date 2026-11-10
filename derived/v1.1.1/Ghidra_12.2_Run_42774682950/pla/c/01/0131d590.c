/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131d590; name: FUN_0131d590
 */


ulong FUN_0131d590(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  
  if (param_1 < 7) {
    uVar13 = (ulong)*(int *)(&DAT_03a7acdc + (long)param_2 * 4 + (long)param_1 * 0x10);
    if (*(int *)(&DAT_03a7acdc + (long)param_2 * 4 + (long)param_1 * 0x10) == 0) goto LAB_0131d768;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar12 = *(long **)(lVar7 + 0x228);
    if (plVar12 != (long *)0x0) {
      lVar7 = plVar12[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(&PTR_DAT_04204df8)[uVar13 * 3] != '\0') {
        uVar9 = ((long *)plVar12[0x37])[1];
        if (uVar9 != 0) {
          uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
          uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
          uVar8 = *(ulong *)(&DAT_04204df0 + uVar13 * 0x18);
          uVar13 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            uVar10 = uVar9 - 1 & uVar8;
          }
          else if (uVar8 < uVar9) {
            uVar10 = uVar8;
          }
          else {
            uVar10 = 0;
            if (uVar9 != 0) {
              uVar10 = uVar8 / uVar9;
            }
            uVar10 = uVar8 - uVar10 * uVar9;
          }
          plVar11 = *(long **)(*(long *)plVar12[0x37] + uVar10 * 8);
          if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if (plVar11[1] == uVar8) {
                  if (plVar11[2] == uVar8) goto LAB_0131d740;
                }
                else if ((plVar11[1] & uVar9 - 1) != uVar10) goto LAB_0131d6f0;
                plVar11 = (long *)*plVar11;
                uVar13 = 0;
              } while (plVar11 != (long *)0x0);
              goto LAB_0131d74c;
            }
            do {
              uVar13 = plVar11[1];
              if (uVar13 == uVar8) {
                if (plVar11[2] == uVar8) goto LAB_0131d740;
              }
              else {
                if (uVar9 <= uVar13) {
                  uVar4 = 0;
                  if (uVar9 != 0) {
                    uVar4 = uVar13 / uVar9;
                  }
                  uVar13 = uVar13 - uVar4 * uVar9;
                }
                if (uVar13 != uVar10) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
LAB_0131d6f0:
      uVar13 = 0;
      goto LAB_0131d74c;
    }
  }
  uVar13 = 0;
  goto LAB_0131d768;
LAB_0131d740:
  uVar13 = (ulong)((char)plVar11[3] != '\0');
LAB_0131d74c:
  lVar7 = plVar12[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
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
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
LAB_0131d768:
  return uVar13 & 0xffffffff;
}


