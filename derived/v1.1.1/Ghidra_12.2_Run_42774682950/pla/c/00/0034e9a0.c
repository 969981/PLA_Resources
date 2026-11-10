/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034e9a0; name: FUN_0034e9a0
 */


undefined1  [16] FUN_0034e9a0(long *param_1,byte *param_2,uint param_3)

{
  ulong __n;
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  auVar14 = FUN_0034e7dc(param_1,param_2,param_3 & 1);
  uVar12 = auVar14._8_8_;
  iVar3 = auVar14._0_4_;
  if (iVar3 == 0) {
    return auVar14;
  }
  if (*(char *)(*param_1 + 0x28) == '\0') {
    return auVar14;
  }
  switch(iVar3) {
  case 1:
  case 4:
  case 6:
    uVar12 = *(ulong *)(uVar12 + 0x10);
    uVar6 = param_1[10];
    if (uVar12 == uVar6) {
      return auVar14;
    }
    break;
  case 2:
    uVar12 = *(ulong *)(uVar12 + 0x28);
    uVar6 = param_1[10];
    if (uVar12 == uVar6) {
      return auVar14;
    }
    break;
  case 3:
  case 7:
    uVar12 = *(ulong *)(*(long *)(uVar12 + 0x10) + 0x10);
    uVar6 = param_1[10];
    if (uVar12 == uVar6) {
      return auVar14;
    }
    break;
  case 5:
    uVar12 = *(ulong *)(*(long *)(uVar12 + 0x18) + 0x10);
    uVar6 = param_1[10];
    if (uVar12 == uVar6) {
      return auVar14;
    }
    break;
  case 8:
    uVar6 = param_1[10];
    if (uVar12 == uVar6) {
      return auVar14;
    }
    break;
  default:
    uVar12 = 0;
    uVar6 = param_1[10];
    if (uVar6 == 0) {
      return auVar14;
    }
  }
  plVar13 = param_1 + 0xd;
  for (plVar8 = (long *)*plVar13; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    if ((ulong)plVar8[4] <= uVar12) {
      if (uVar12 <= (ulong)plVar8[4]) {
        return auVar14;
      }
      plVar8 = plVar8 + 1;
    }
  }
  if (iVar3 != 8) goto LAB_0034ecbc;
  pbVar11 = *(byte **)(uVar6 + 8);
  bVar1 = *pbVar11;
  bVar2 = *param_2;
  uVar6 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar6 = *(ulong *)(pbVar11 + 8);
  }
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(ulong *)(param_2 + 8);
  }
  if (__n <= uVar6) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
LAB_0034ed1c:
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar4 = *(byte **)(param_2 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar4 = param_2 + 1;
      }
      pbVar5 = *(byte **)(pbVar11 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = pbVar11 + 1;
      }
      iVar3 = memcmp(pbVar5,pbVar4,__n);
      if (iVar3 != 0) goto LAB_0034eb4c;
    }
    if (uVar6 == __n) {
      return auVar14;
    }
    if ((bVar1 & 1) == 0) {
      bVar1 = pbVar11[__n + 1];
    }
    else {
      bVar1 = *(byte *)(*(long *)(pbVar11 + 0x10) + __n);
    }
    if (bVar1 == 0x2e) {
      return auVar14;
    }
  }
LAB_0034eb4c:
  plVar8 = (long *)param_1[0xc];
  if (plVar8 != plVar13) {
    pbVar11 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar11 = param_2 + 1;
    }
    if (__n == 0xffffffffffffffff) {
      do {
        if (plVar8[4] != 0) {
          pbVar11 = *(byte **)(plVar8[4] + 8);
          bVar1 = *pbVar11;
          uVar6 = (ulong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar11 + 8);
          }
          if (uVar6 == 0xffffffffffffffff) goto LAB_0034ed1c;
        }
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar7 = plVar8 + 2;
          plVar9 = (long *)*plVar7;
          if ((long *)*plVar9 != plVar8) {
            do {
              lVar10 = *plVar7;
              plVar7 = (long *)(lVar10 + 0x10);
              plVar9 = (long *)*plVar7;
            } while (*plVar9 != lVar10);
          }
        }
        else {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar8 = plVar9;
      } while (plVar9 != plVar13);
    }
    else {
      do {
        if (plVar8[4] != 0) {
          pbVar4 = *(byte **)(plVar8[4] + 8);
          bVar1 = *pbVar4;
          uVar6 = (ulong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar4 + 8);
          }
          if (__n <= uVar6) {
            if (__n != 0) {
              pbVar5 = *(byte **)(pbVar4 + 0x10);
              if ((bVar1 & 1) == 0) {
                pbVar5 = pbVar4 + 1;
              }
              iVar3 = memcmp(pbVar5,pbVar11,__n);
              if (iVar3 != 0) goto LAB_0034ebe4;
            }
            if (uVar6 == __n) {
              return auVar14;
            }
            if ((bVar1 & 1) == 0) {
              bVar1 = pbVar4[__n + 1];
            }
            else {
              bVar1 = *(byte *)(*(long *)(pbVar4 + 0x10) + __n);
            }
            if (bVar1 == 0x2e) {
              return auVar14;
            }
          }
        }
LAB_0034ebe4:
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar7 = plVar8 + 2;
          plVar9 = (long *)*plVar7;
          if ((long *)*plVar9 != plVar8) {
            do {
              lVar10 = *plVar7;
              plVar7 = (long *)(lVar10 + 0x10);
              plVar9 = (long *)*plVar7;
            } while (*plVar9 != lVar10);
          }
        }
        else {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar8 = plVar9;
      } while (plVar9 != plVar13);
    }
  }
LAB_0034ecbc:
  param_1[0x12] = uVar12;
  if ((byte *)(param_1 + 0x13) != param_2) {
    uVar12 = *(ulong *)(param_2 + 8);
    pbVar11 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar11 = param_2 + 1;
      uVar12 = (ulong)(*param_2 >> 1);
    }
    FUN_00291910(param_1 + 0x13,pbVar11,uVar12);
  }
  return ZEXT816(0);
}


