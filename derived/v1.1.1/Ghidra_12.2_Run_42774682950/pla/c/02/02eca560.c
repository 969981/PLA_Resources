/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca560; name: FUN_02eca560
 */


long * FUN_02eca560(long *param_1)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long *local_18;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (DAT_0440a7e0 != (long *)0x0) {
      plVar6 = DAT_0440a7e0;
      do {
        if (plVar6[2] == param_1[1]) {
          return plVar6;
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != (long *)0x0);
      local_18 = DAT_0440a7e0;
      do {
        uVar7 = (**(code **)(*local_18 + 0x60))();
        if ((uVar7 & 1) != 0) {
          return local_18;
        }
        local_18 = (long *)local_18[1];
      } while (local_18 != (long *)0x0);
      return (long *)0x0;
    }
  }
  else {
    iVar9 = *(int *)(lVar5 + 0x180);
    iVar4 = iVar9;
    if (iVar9 == -1) {
      lVar8 = lVar5;
      do {
        lVar8 = *(long *)(lVar8 + 0x88);
        iVar4 = iVar9;
        if (lVar8 == 0) goto LAB_02eca580;
        iVar4 = *(int *)(lVar8 + 0x180);
      } while (iVar4 == -1);
      *(int *)(lVar5 + 0x180) = iVar4;
    }
LAB_02eca580:
    if (DAT_0440a7e0 != (long *)0x0) {
      uVar7 = param_1[1];
      plVar6 = DAT_0440a7e0;
      if (DAT_0440a7f8 != 0) {
        do {
          if ((int)plVar6[0xb] == iVar4) {
            uVar10 = *(uint *)(plVar6 + 6);
            if (uVar10 != 0) {
              iVar9 = 0;
              uVar11 = uVar10;
              do {
                iVar2 = iVar9 + (uVar11 >> 1);
                uVar12 = *(ulong *)(plVar6[5] + (long)iVar2 * 8);
                if (uVar12 == uVar7) {
                  bVar3 = plVar6[5] + (long)iVar2 * 8 != 0;
                  goto joined_r0x02eca694;
                }
                if (uVar12 < uVar7) {
                  iVar9 = iVar2 + 1;
                }
                uVar11 = uVar11 - (uVar12 < uVar7) >> 1;
              } while (uVar11 != 0);
            }
            bVar3 = false;
joined_r0x02eca694:
            if (*(char *)((long)plVar6 + 0x166) == '\0') {
              if (bVar3) {
                return plVar6;
              }
              if (uVar10 == 0) {
                iVar9 = 0;
                uVar10 = DAT_0440a7f8;
                while( true ) {
                  iVar2 = iVar9 + (uVar10 >> 1);
                  uVar12 = *(ulong *)(DAT_0440a7f0 + (long)iVar2 * 8);
                  if (uVar12 == uVar7) break;
                  if (uVar12 < uVar7) {
                    iVar9 = iVar2 + 1;
                  }
                  uVar10 = uVar10 - (uVar12 < uVar7) >> 1;
                  if (uVar10 == 0) {
                    return plVar6;
                  }
                }
                if (DAT_0440a7f0 + (long)iVar2 * 8 == 0) {
                  return plVar6;
                }
              }
            }
            else if (bVar3) {
              return plVar6;
            }
          }
          plVar1 = plVar6 + 1;
          plVar6 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        if ((int)plVar6[0xb] == iVar4) {
          uVar10 = *(uint *)(plVar6 + 6);
          if (uVar10 != 0) {
            iVar9 = 0;
            uVar11 = uVar10;
            do {
              iVar2 = iVar9 + (uVar11 >> 1);
              uVar12 = *(ulong *)(plVar6[5] + (long)iVar2 * 8);
              if (uVar12 == uVar7) {
                bVar3 = plVar6[5] + (long)iVar2 * 8 != 0;
                goto joined_r0x02eca600;
              }
              if (uVar12 < uVar7) {
                iVar9 = iVar2 + 1;
              }
              uVar11 = uVar11 - (uVar12 < uVar7) >> 1;
            } while (uVar11 != 0);
          }
          bVar3 = false;
joined_r0x02eca600:
          if (*(char *)((long)plVar6 + 0x166) == '\0') {
            if ((bool)(uVar10 == 0 | bVar3)) {
              return plVar6;
            }
          }
          else if (bVar3) {
            return plVar6;
          }
        }
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


