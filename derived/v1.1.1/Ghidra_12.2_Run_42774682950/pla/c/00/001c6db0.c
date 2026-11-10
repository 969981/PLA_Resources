/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c6db0; name: FUN_001c6db0
 */


void FUN_001c6db0(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar13 = (int)param_2;
    lVar9 = param_1 + ((long)((ulong)(iVar13 + param_3) << 0x20) >> 0x21) * 0x40;
    iVar1 = *(int *)(lVar9 + 0x20);
    iVar2 = *(int *)(lVar9 + 0x24);
    iVar6 = *(int *)(lVar9 + 0x28);
    uVar8 = (ulong)param_3;
    do {
      uVar10 = -(param_2 >> 0x1f) & 0xffffffc000000000 | param_2 << 6;
      lVar9 = param_1 + uVar10;
      iVar14 = *(int *)(lVar9 + 0x20);
      iVar7 = iVar14 - iVar1;
      if (iVar1 <= iVar14) goto LAB_001c6e38;
      do {
        do {
          param_2 = (ulong)((int)param_2 + 1);
          uVar10 = uVar10 + 0x40;
          lVar9 = param_1 + uVar10;
          iVar14 = *(int *)(lVar9 + 0x20);
          iVar7 = iVar14 - iVar1;
        } while (iVar14 < iVar1);
LAB_001c6e38:
      } while ((iVar14 == iVar1 || iVar7 < 0 != SBORROW4(iVar14,iVar1)) &&
              ((*(int *)(lVar9 + 0x24) < iVar2 ||
               ((*(int *)(lVar9 + 0x24) <= iVar2 && (*(int *)(lVar9 + 0x28) < iVar6))))));
      uVar10 = -(uVar8 >> 0x1f) & 0xffffffc000000000 | uVar8 << 6;
      lVar11 = param_1 + uVar10;
      iVar7 = *(int *)(lVar11 + 0x20);
      if (iVar7 <= iVar1) goto LAB_001c6e84;
      do {
        do {
          uVar8 = (ulong)((int)uVar8 - 1);
          uVar10 = uVar10 - 0x40;
          lVar11 = param_1 + uVar10;
          iVar7 = *(int *)(lVar11 + 0x20);
        } while (iVar1 < iVar7);
LAB_001c6e84:
      } while ((iVar1 <= iVar7) &&
              ((iVar2 < *(int *)(lVar11 + 0x24) ||
               ((iVar2 <= *(int *)(lVar11 + 0x24) && (iVar6 < *(int *)(lVar11 + 0x28)))))));
      iVar7 = (int)uVar8;
      iVar14 = (int)param_2;
      if (iVar14 <= iVar7) {
        if (iVar14 != iVar7) {
          uVar3 = *(undefined8 *)(lVar11 + 0x20);
          uVar4 = *(undefined8 *)(lVar11 + 0x28);
          uVar12 = *(undefined8 *)(lVar11 + 0x30);
          uVar16 = *(undefined8 *)(lVar11 + 0x18);
          uVar15 = *(undefined8 *)(lVar11 + 0x10);
          uVar17 = *(undefined8 *)(lVar9 + 0x10);
          *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined8 *)(lVar11 + 0x10) = uVar17;
          uVar17 = *(undefined8 *)(lVar9 + 0x28);
          uVar5 = *(undefined8 *)(lVar9 + 0x30);
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
          *(undefined8 *)(lVar11 + 0x28) = uVar17;
          *(undefined8 *)(lVar11 + 0x30) = uVar5;
          *(undefined8 *)(lVar9 + 0x18) = uVar16;
          *(undefined8 *)(lVar9 + 0x10) = uVar15;
          *(undefined8 *)(lVar9 + 0x28) = uVar4;
          *(undefined8 *)(lVar9 + 0x30) = uVar12;
          *(undefined8 *)(lVar9 + 0x20) = uVar3;
        }
        uVar8 = (ulong)(iVar7 - 1);
        param_2 = (ulong)(iVar14 + 1);
      }
    } while ((int)param_2 <= (int)uVar8);
    if (iVar13 < (int)uVar8) {
      FUN_001c6db0(param_1);
    }
  } while ((int)param_2 < (int)param_3);
  return;
}


