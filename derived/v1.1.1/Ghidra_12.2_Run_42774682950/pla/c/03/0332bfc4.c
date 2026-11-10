/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332bfc4; name: FUN_0332bfc4
 */


uint FUN_0332bfc4(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  
  if (*param_1 == 0) {
LAB_0332bfcc:
    iVar4 = param_1[1];
  }
  else {
    iVar4 = param_1[0x126];
    if (0 < iVar4) {
      puVar8 = *(undefined8 **)(param_1 + 0x124);
      uVar9 = (int)((ulong)*puVar8 >> 0x20) - (int)*puVar8;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      if (iVar4 == 1) {
        uVar17 = uVar9;
        uVar13 = uVar9;
        uVar9 = 0;
      }
      else {
        uVar10 = (int)((ulong)puVar8[8] >> 0x20) - (int)puVar8[8];
        uVar13 = uVar10;
        if ((int)uVar10 <= (int)uVar9) {
          uVar13 = uVar9;
        }
        uVar17 = (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) + uVar9;
        uVar9 = (uint)((int)uVar9 < (int)uVar10);
        if (iVar4 != 2) {
          uVar7 = (int)((ulong)puVar8[0x10] >> 0x20) - (int)puVar8[0x10];
          uVar10 = uVar7;
          if ((int)uVar7 <= (int)uVar13) {
            uVar10 = uVar13;
          }
          uVar17 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + uVar17;
          uVar3 = 2;
          if ((int)uVar7 <= (int)uVar13) {
            uVar3 = uVar9;
          }
          uVar13 = uVar10;
          uVar9 = uVar3;
          if (iVar4 != 3) {
            uVar7 = (int)((ulong)puVar8[0x18] >> 0x20) - (int)puVar8[0x18];
            uVar13 = uVar7;
            if ((int)uVar7 <= (int)uVar10) {
              uVar13 = uVar10;
            }
            uVar17 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + uVar17;
            uVar9 = 3;
            if ((int)uVar7 <= (int)uVar10) {
              uVar9 = uVar3;
            }
            if (iVar4 != 4) {
              lVar15 = 4;
              puVar16 = puVar8 + 0x20;
              uVar10 = uVar13;
              do {
                uVar7 = (int)((ulong)*puVar16 >> 0x20) - (int)*puVar16;
                uVar13 = uVar7;
                uVar3 = (uint)lVar15;
                if ((int)uVar7 <= (int)uVar10) {
                  uVar13 = uVar10;
                  uVar3 = uVar9;
                }
                uVar9 = uVar3;
                lVar15 = lVar15 + 1;
                uVar17 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + uVar17;
                puVar16 = puVar16 + 8;
                uVar10 = uVar13;
              } while (iVar4 != lVar15);
            }
          }
        }
      }
      if (0xf < (int)uVar13) {
        plVar1 = puVar8 + (long)(int)uVar9 * 8;
        uVar9 = uVar13 >> 1;
        if (uVar17 >> 3 <= uVar13 >> 1) {
          uVar9 = uVar17 >> 3;
        }
        if ((int)uVar9 <= (int)param_3) {
          uVar9 = param_3;
        }
        do {
          lVar15 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar15 + (ulong)uVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar10 = (uint)lVar15;
        uVar13 = (uint)((ulong)lVar15 >> 0x20);
        uVar17 = uVar13 - uVar10;
        if (uVar9 + uVar10 <= uVar13) {
          uVar17 = uVar9;
          uVar13 = uVar9 + uVar10;
        }
        if (uVar10 < uVar13) {
          if ((int)param_3 < (int)uVar17) {
            uVar14 = -(ulong)(param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)param_2 << 6;
            *(ulong *)(*(long *)(param_1 + 0x124) + uVar14) = CONCAT44(uVar13,uVar10 + param_3);
            *(uint *)(*(long *)(param_1 + 0x10) + uVar14) = param_2;
          }
          *param_4 = uVar10;
          return uVar17;
        }
        goto LAB_0332bfcc;
      }
    }
    *param_1 = 0;
    iVar4 = param_1[1];
  }
  if ((iVar4 == 0) && (iVar4 = param_1[0x12], 1 < iVar4)) {
    iVar11 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x40);
    iVar12 = 1;
    do {
      iVar2 = 0;
      if (iVar4 <= iVar11 + 1) {
        iVar2 = iVar4;
      }
      iVar11 = (iVar11 + 1) - iVar2;
      plVar1 = (long *)(*(long *)(param_1 + 0x124) + (long)iVar11 * 0x40);
      if ((uint)*plVar1 < (uint)((ulong)*plVar1 >> 0x20)) {
        do {
          lVar15 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar15 + (int)param_3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar9 = (uint)lVar15;
        uVar17 = (uint)((ulong)lVar15 >> 0x20);
        if (uVar9 < uVar17) {
          *(int *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x40) = iVar11;
          *param_4 = uVar9;
          return uVar17 - uVar9;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar4);
  }
  return 0;
}


