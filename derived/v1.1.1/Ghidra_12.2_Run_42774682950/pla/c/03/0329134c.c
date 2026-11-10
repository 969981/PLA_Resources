/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329134c; name: FUN_0329134c
 */


ulong FUN_0329134c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  undefined8 uVar17;
  long local_58;
  ulong local_48;
  
  uVar15 = (uint)((ulong)*param_2 >> 0x20);
  uVar13 = (ulong)(((uint)*param_2 ^ (uVar15 >> 0x10 | uVar15 << 0x10) ^
                   ((uint)param_2[1] >> 3 | (uint)param_2[1] << 0x1d)) & 0xfffffffe);
  local_48 = uVar13;
  uVar6 = FUN_032c2d30(param_1 + 2,&local_48);
  puVar5 = PTR_PTR_0434a080;
  uVar15 = *(uint *)(param_1 + 1);
  if (*(int *)((long)param_1 + 0x1c) < (int)uVar6) {
    uVar9 = *(uint *)((long)param_1 + 0xc);
    uVar6 = uVar15 + 1;
    if ((int)uVar15 < (int)(uVar9 & 0x3fffffff)) {
      lVar7 = *param_1;
      uVar9 = uVar15;
    }
    else {
      lVar7 = *param_1;
      if (0x3ffffffe < (int)uVar15) {
        FUN_032bd0a8(uVar6);
        uVar9 = *(uint *)((long)param_1 + 0xc);
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar4 = uVar6;
      if ((int)uVar6 <= (int)uVar9) {
        uVar4 = uVar9;
      }
      lVar7 = FUN_032bd1d4(puVar5,uVar4,0x10,lVar7,uVar15);
      uVar9 = *(uint *)(param_1 + 1);
      *param_1 = lVar7;
    }
    puVar1 = (undefined8 *)(lVar7 + (long)(int)uVar9 * 0x10);
    puVar1[1] = param_2[1];
    *puVar1 = *param_2;
    iVar8 = (int)param_1[5];
    lVar7 = param_1[4];
    *(uint *)(param_1 + 1) = uVar6;
    lVar12 = (long)iVar8;
    iVar3 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) <= iVar8) {
      lVar7 = FUN_03291664(puVar5,iVar3);
      iVar8 = (int)param_1[5];
      param_1[4] = lVar7;
    }
    puVar2 = (uint *)(lVar7 + (long)iVar8 * 8);
    *(int *)(param_1 + 5) = iVar3;
    *puVar2 = uVar15;
    puVar2[1] = 0xffffffff;
    local_58 = lVar12;
    local_48 = uVar13;
    FUN_032c2c3c(param_1 + 2,puVar5,&local_48,&local_58);
LAB_03291458:
    uVar13 = (ulong)uVar15;
  }
  else {
    uVar10 = *(ulong *)(param_1[2] + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8);
    lVar12 = param_1[4];
    uVar13 = (ulong)*(int *)(lVar12 + (-(uVar10 >> 0x1f & 1) & 0xfffffff800000000 |
                                      (uVar10 & 0xffffffff) << 3));
    lVar7 = *param_1;
    puVar1 = (undefined8 *)(lVar7 + uVar13 * 0x10);
    uVar17 = *puVar1;
    fVar14 = (float)*param_2;
    fVar16 = (float)((ulong)*param_2 >> 0x20);
    if ((float)puVar1[1] != (float)param_2[1] ||
        ((float)uVar17 != fVar14 || (float)((ulong)uVar17 >> 0x20) != fVar16)) {
      lVar11 = (long)(int)uVar10;
      do {
        iVar3 = *(int *)(lVar12 + lVar11 * 8 + 4);
        lVar11 = (long)iVar3;
        if (iVar3 < 0) {
          uVar9 = *(uint *)((long)param_1 + 0xc);
          uVar6 = uVar15 + 1;
          if ((int)uVar15 < (int)(uVar9 & 0x3fffffff)) {
            uVar9 = uVar15;
          }
          else {
            if (0x3ffffffe < (int)uVar15) {
              FUN_032bd0a8(uVar6);
              uVar9 = *(uint *)((long)param_1 + 0xc);
            }
            uVar9 = (uVar9 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar9) {
              uVar9 = 0x3fffffff;
            }
            uVar4 = uVar6;
            if ((int)uVar6 <= (int)uVar9) {
              uVar4 = uVar9;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar4,0x10,lVar7,uVar15);
            uVar9 = *(uint *)(param_1 + 1);
            *param_1 = lVar7;
          }
          puVar1 = (undefined8 *)(lVar7 + (long)(int)uVar9 * 0x10);
          puVar1[1] = param_2[1];
          *puVar1 = *param_2;
          iVar3 = (int)param_1[5];
          lVar7 = param_1[4];
          *(uint *)(param_1 + 1) = uVar6;
          if (iVar3 < (int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff)) {
            iVar8 = iVar3;
          }
          else {
            lVar7 = FUN_03291664(puVar5,iVar3 + 1,lVar7,iVar3);
            iVar8 = (int)param_1[5];
            param_1[4] = lVar7;
          }
          lVar12 = lVar7 + (long)(int)uVar10 * 8;
          *(int *)(param_1 + 5) = iVar3 + 1;
          uVar6 = *(uint *)(lVar12 + 4);
          puVar2 = (uint *)(lVar7 + (long)iVar8 * 8);
          *puVar2 = uVar15;
          puVar2[1] = uVar6;
          *(int *)(lVar12 + 4) = iVar3;
          goto LAB_03291458;
        }
        uVar13 = (ulong)*(int *)(lVar12 + lVar11 * 8);
        puVar1 = (undefined8 *)(lVar7 + uVar13 * 0x10);
        uVar17 = *puVar1;
      } while ((float)puVar1[1] != (float)param_2[1] ||
               ((float)uVar17 != fVar14 || (float)((ulong)uVar17 >> 0x20) != fVar16));
    }
  }
  return uVar13;
}


