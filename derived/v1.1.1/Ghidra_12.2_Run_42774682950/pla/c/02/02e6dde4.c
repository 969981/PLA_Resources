/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6dde4; name: FUN_02e6dde4
 */


void FUN_02e6dde4(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong *puVar13;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar6 = uVar2 - 1;
  lVar8 = *(long *)(param_1 + 0x28);
  iVar10 = 0;
  iVar12 = iVar6;
  do {
    while( true ) {
      iVar3 = iVar12 - iVar10;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = iVar10 + (iVar3 >> 1);
      puVar13 = *(ulong **)(lVar8 + (ulong)uVar1 * 8);
      if ((uint)puVar13[4] <= (uint)param_2[4]) break;
LAB_02e6de48:
      iVar12 = uVar1 - 1;
      if (iVar12 < iVar10) goto LAB_02e6de54;
    }
    if ((uint)param_2[4] <= (uint)puVar13[4]) {
      if (*puVar13 < *param_2) goto LAB_02e6de48;
      if (*puVar13 <= *param_2) {
        if (param_2[1] < puVar13[1]) goto LAB_02e6de48;
        if (param_2[1] <= puVar13[1]) {
          puVar5 = (undefined8 *)(lVar8 + (ulong)uVar1 * 8);
          puVar9 = (undefined8 *)(lVar8 + (ulong)uVar2 * 8 + -8);
          if (puVar9 <= puVar5) goto LAB_02e6defc;
          uVar7 = ((ulong)uVar2 * 8 + (ulong)uVar1 * -8) - 9;
          uVar2 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
          if ((uVar2 & 3) == 0) {
            if (uVar7 < 0x18) goto LAB_02e6def4;
            goto LAB_02e6decc;
          }
          lVar8 = -((ulong)uVar2 & 3);
          puVar11 = puVar5;
          do {
            puVar5 = puVar11 + 1;
            *puVar11 = *puVar5;
            bVar4 = lVar8 != -1;
            lVar8 = lVar8 + 1;
            puVar11 = puVar5;
          } while (bVar4);
          if (0x17 < uVar7) {
LAB_02e6decc:
            do {
              *puVar5 = puVar5[1];
              puVar5[1] = puVar5[2];
              puVar5[2] = puVar5[3];
              puVar11 = puVar5 + 4;
              puVar5[3] = *puVar11;
              puVar5 = puVar11;
            } while (puVar11 < puVar9);
          }
LAB_02e6def4:
          iVar6 = *(int *)(param_1 + 0x30) + -1;
LAB_02e6defc:
          *(int *)(param_1 + 0x30) = iVar6;
LAB_02e6de54:
          *(undefined4 *)(param_2 + 4) = 0xffffffff;
          return;
        }
      }
    }
    iVar10 = uVar1 + 1;
    if (iVar12 < iVar10) goto LAB_02e6de54;
  } while( true );
}


