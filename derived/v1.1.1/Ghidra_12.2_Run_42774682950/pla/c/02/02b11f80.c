/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b11f80; name: FUN_02b11f80
 */


long FUN_02b11f80(long param_1,ulong *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar14;
  int iVar13;
  ulong local_50;
  char *local_48;
  ulong local_40;
  long *local_38;
  long *local_28;
  
  uVar11 = *param_2;
  pcVar1 = (char *)param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  local_50 = uVar11;
  local_48 = pcVar1;
  if (local_38 == (long *)0x0) {
    cVar2 = *pcVar1;
  }
  else {
    (**(code **)(*local_38 + 0x18))();
    cVar2 = *pcVar1;
  }
  if (cVar2 != '\0') {
    uVar6 = *(ulong *)(param_1 + 0x140);
    do {
      if (uVar6 != 0) {
        uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar10 = uVar6 - 1 & uVar11;
        }
        else {
          uVar10 = uVar11;
          if (uVar6 <= uVar11) {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar11 / uVar6;
            }
            uVar10 = uVar11 - uVar10 * uVar6;
          }
        }
        plVar12 = *(long **)(*(long *)(param_1 + 0x138) + uVar10 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          if (uVar9 < 2) {
            do {
              if (plVar12[1] == uVar11) {
                if (plVar12[2] == uVar11) goto LAB_02b12174;
              }
              else if ((plVar12[1] & uVar6 - 1) != uVar10) break;
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
          else {
            do {
              uVar9 = plVar12[1];
              if (uVar9 == uVar11) {
                if (plVar12[2] == uVar11) goto LAB_02b12174;
              }
              else {
                if (uVar6 <= uVar9) {
                  uVar5 = 0;
                  if (uVar6 != 0) {
                    uVar5 = uVar9 / uVar6;
                  }
                  uVar9 = uVar9 - uVar5 * uVar6;
                }
                if (uVar9 != uVar10) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
      }
      FUN_02bba5e0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x78),&local_50);
      if (local_28 == (long *)0x0) break;
      lVar7 = local_28[0x29];
      if (lVar7 == 0) {
        iVar14 = 3;
        iVar13 = 3;
      }
      else {
        local_50 = *(ulong *)(lVar7 + 0x60);
        local_48 = *(char **)(lVar7 + 0x68);
        local_40 = *(ulong *)(lVar7 + 0x70);
        plVar12 = *(long **)(lVar7 + 0x78);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        if (local_38 != (long *)0x0) {
          lVar7 = *local_38;
          local_38 = plVar12;
          (**(code **)(lVar7 + 0x20))();
          plVar12 = local_38;
        }
        local_38 = plVar12;
        iVar14 = 0;
        iVar13 = 0;
      }
      if (local_28 != (long *)0x0) {
        plVar12 = local_28 + 10;
        do {
          iVar4 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        iVar13 = iVar14;
        if (iVar4 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
      if ((iVar13 != 0) || (*local_48 == '\0')) break;
      uVar6 = *(ulong *)(param_1 + 0x140);
      uVar11 = local_50;
    } while( true );
  }
LAB_02b122d0:
  lVar7 = 0;
  if (local_38 == (long *)0x0) {
    return 0;
  }
  goto LAB_02b12298;
LAB_02b12174:
  uVar11 = *(ulong *)(param_1 + 0xa0);
  if (uVar11 != 0) {
    uVar9 = plVar12[6];
    uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar10 = uVar11 - 1 & uVar9;
    }
    else {
      uVar10 = uVar9;
      if (uVar11 <= uVar9) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar9 / uVar11;
        }
        uVar10 = uVar9 - uVar10 * uVar11;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x98) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (1 < uVar6) goto LAB_02b121f4;
      goto LAB_02b1223c;
    }
  }
  goto LAB_02b122d0;
LAB_02b121f4:
  do {
    uVar6 = plVar12[1];
    if (uVar6 == uVar9) {
      if (plVar12[2] == uVar9) goto LAB_02b12274;
    }
    else {
      if (uVar11 <= uVar6) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar6 / uVar11;
        }
        uVar6 = uVar6 - uVar5 * uVar11;
      }
      if (uVar6 != uVar10) goto LAB_02b122d0;
    }
    plVar12 = (long *)*plVar12;
    lVar7 = 0;
  } while (plVar12 != (long *)0x0);
  goto LAB_02b12290;
LAB_02b12274:
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)plVar12[6] * 0x20);
  lVar7 = 0;
  if (*(char *)(lVar8 + 0xd0) != '\0') {
    lVar7 = lVar8;
  }
  goto LAB_02b12290;
LAB_02b1223c:
  do {
    if (plVar12[1] == uVar9) {
      if (plVar12[2] == uVar9) goto LAB_02b12274;
    }
    else if ((plVar12[1] & uVar11 - 1) != uVar10) goto LAB_02b122d0;
    plVar12 = (long *)*plVar12;
    lVar7 = 0;
  } while (plVar12 != (long *)0x0);
LAB_02b12290:
  if (local_38 != (long *)0x0) {
LAB_02b12298:
    (**(code **)(*local_38 + 0x20))();
  }
  return lVar7;
}


