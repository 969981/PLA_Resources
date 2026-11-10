/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b3928; name: FUN_031b3928
 */


undefined8
FUN_031b3928(long param_1,undefined8 param_2,ulong param_3,uint param_4,undefined8 param_5,
            uint param_6,uint *param_7,undefined8 param_8,undefined8 param_9,uint *param_10)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  uVar8 = 0;
  *param_10 = 0;
  if (0 < (int)param_6) {
    uVar9 = (uint)(*param_7 != 0xffffffff);
    if (param_6 != 1) {
      uVar11 = 1;
      do {
        puVar1 = param_7 + uVar11;
        uVar10 = (uint)uVar11;
        uVar11 = uVar11 + 1;
        uVar15 = 0;
        if (*puVar1 != 0xffffffff) {
          uVar15 = 1 << (ulong)(uVar10 & 0x1f);
        }
        uVar9 = uVar15 | uVar9;
      } while (param_6 != uVar11);
    }
    uVar8 = 0;
    if ((((0 < (int)param_4) && ((uint)param_3 != 0xffffffff)) && (0 < (int)param_6)) &&
       ((param_4 == param_6 && (uVar9 != 0)))) {
      iVar2 = *(int *)(param_1 + 0x40);
      uVar15 = (uint)param_3 >> 0x16;
      lVar12 = *(long *)(param_1 + 0x38);
      if ((int)uVar15 < iVar2) {
        lVar13 = *(long *)(lVar12 + (ulong)uVar15 * 0xf0);
        if (lVar13 == 0) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((int)(param_3 & 0x3fffff) < *(int *)(lVar13 + 0xd8) + *(int *)(lVar13 + 0x20)) {
            if ((*(int *)(lVar13 + 0x108) == 0) ||
               ((*(byte *)(*(long *)(lVar13 + 0x100) + (param_3 & 0x3fffff)) & 1) == 0)) {
              bVar3 = true;
              bVar5 = true;
              bVar4 = true;
            }
            else {
              bVar4 = false;
              bVar3 = true;
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
            bVar4 = false;
            bVar3 = true;
          }
        }
      }
      else {
        bVar3 = false;
        bVar5 = false;
        bVar4 = false;
      }
      uVar15 = *param_7;
      if (((uVar15 == 0xffffffff) || (iVar2 <= (int)(uVar15 >> 0x16))) ||
         (lVar13 = *(long *)(lVar12 + (ulong)(uVar15 >> 0x16) * 0xf0), lVar13 == 0)) {
        uVar10 = 0;
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x20);
        if ((int)((ulong)uVar15 & 0x3fffff) < *(int *)(lVar13 + 0xd8) + *(int *)(lVar13 + 0x20)) {
          if ((*(int *)(lVar13 + 0x108) == 0) ||
             ((*(byte *)(*(long *)(lVar13 + 0x100) + ((ulong)uVar15 & 0x3fffff)) & 1) == 0)) {
            uVar14 = 1;
          }
          else {
            uVar14 = 0;
          }
          uVar10 = 1;
        }
        else {
          uVar14 = 0;
          uVar10 = 0;
        }
        uVar15 = 1;
      }
      if (param_6 != 1) {
        uVar11 = 1;
        do {
          uVar7 = param_7[uVar11];
          if (uVar7 != 0xffffffff) {
            if (((int)(uVar7 >> 0x16) < iVar2) &&
               (lVar13 = *(long *)(lVar12 + (ulong)(uVar7 >> 0x16) * 0xf0), lVar13 != 0)) {
              lVar13 = *(long *)(lVar13 + 0x20);
              uVar6 = (uint)uVar11;
              if ((int)((ulong)uVar7 & 0x3fffff) < *(int *)(lVar13 + 0xd8) + *(int *)(lVar13 + 0x20)
                 ) {
                if ((*(int *)(lVar13 + 0x108) == 0) ||
                   ((*(byte *)(*(long *)(lVar13 + 0x100) + ((ulong)uVar7 & 0x3fffff)) & 1) == 0)) {
                  uVar7 = 1 << (ulong)(uVar6 & 0x1f);
                  uVar15 = uVar7 | uVar15;
                  uVar10 = uVar7 | uVar10;
                }
                else {
                  uVar6 = 1 << (ulong)(uVar6 & 0x1f);
                  uVar7 = 0;
                  uVar15 = uVar6 | uVar15;
                  uVar10 = uVar6 | uVar10;
                }
              }
              else {
                uVar7 = 0;
                uVar15 = 1 << (ulong)(uVar6 & 0x1f) | uVar15;
              }
            }
            else {
              uVar7 = 0;
            }
            uVar14 = uVar7 | uVar14;
          }
          uVar11 = uVar11 + 1;
        } while (param_6 != uVar11);
      }
      uVar8 = 0;
      if (((((bVar3) && (uVar10 != 0)) && (bVar5)) && ((uVar15 != 0 && (uVar8 = 0, bVar4)))) &&
         (uVar14 != 0)) {
        *param_10 = uVar14 & uVar9 & uVar10 & uVar15;
        uVar8 = 1;
      }
    }
  }
  return uVar8;
}


