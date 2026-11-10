/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131d328; name: FUN_0131d328
 */


bool FUN_0131d328(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  
  if (param_1 < 7) {
    if (param_1 == 5) {
      return true;
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar8 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar8;
    plVar14 = *(long **)(lVar8 + 0x228);
    if (plVar14 != (long *)0x0) {
      lVar8 = plVar14[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(&PTR_s_FSYS_AREA_01_OPEN_04204d50)[(long)param_1 * 3] != '\0') {
        uVar10 = ((long *)plVar14[0x37])[1];
        if (uVar10 != 0) {
          uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar9 = *(ulong *)(&DAT_04204d48 + (long)param_1 * 0x18);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            uVar12 = uVar10 - 1 & uVar9;
          }
          else if (uVar9 < uVar10) {
            uVar12 = uVar9;
          }
          else {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar9 / uVar10;
            }
            uVar12 = uVar9 - uVar12 * uVar10;
          }
          plVar13 = *(long **)(*(long *)plVar14[0x37] + uVar12 * 8);
          if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if (plVar13[1] == uVar9) {
                  if (plVar13[2] == uVar9) goto LAB_0131d4e0;
                }
                else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_0131d480;
                plVar13 = (long *)*plVar13;
                bVar5 = false;
              } while (plVar13 != (long *)0x0);
              goto LAB_0131d4ec;
            }
            do {
              uVar11 = plVar13[1];
              if (uVar11 == uVar9) {
                if (plVar13[2] == uVar9) goto LAB_0131d4e0;
              }
              else {
                if (uVar10 <= uVar11) {
                  uVar4 = 0;
                  if (uVar10 != 0) {
                    uVar4 = uVar11 / uVar10;
                  }
                  uVar11 = uVar11 - uVar4 * uVar10;
                }
                if (uVar11 != uVar12) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
LAB_0131d480:
      bVar5 = false;
      goto LAB_0131d4ec;
    }
  }
  return false;
LAB_0131d4e0:
  bVar5 = (char)plVar13[3] != '\0';
LAB_0131d4ec:
  lVar8 = plVar14[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return bVar5;
}


