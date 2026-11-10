/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161cbb4; name: FUN_0161cbb4
 */


uint FUN_0161cbb4(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  piVar6 = *(int **)(param_1 + 0xa0);
  if ((10 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5], uVar8 != 0)) {
    uVar9 = (ulong)*(uint *)((long)piVar6 + uVar8);
    puVar1 = (uint *)((long)((long)piVar6 + uVar8) + uVar9);
    if (puVar1 != (uint *)0x0) {
      if (*puVar1 == 0) {
        return 1;
      }
      uVar11 = 0;
      uVar10 = 1;
      lVar12 = (long)piVar6 + uVar9 + uVar8 + 8;
      while( true ) {
        uVar8 = (ulong)*(uint *)(lVar12 + -4);
        lVar13 = uVar8 - (long)*(int *)(lVar12 + uVar8 + -4);
        lVar7 = lVar12 + lVar13;
        uVar2 = *(ushort *)(lVar7 + -4);
        if (uVar2 < 7) {
          lVar7 = 0;
        }
        else {
          uVar9 = (ulong)*(ushort *)(lVar7 + 2);
          lVar7 = 0;
          if (uVar9 != 0) {
            lVar7 = uVar8 + uVar9;
            lVar7 = lVar12 + lVar7 + (ulong)*(uint *)(lVar12 + lVar7 + -4) + -4;
          }
        }
        iVar3 = atoi((char *)(lVar7 + 4));
        if ((uVar2 < 5) || (uVar9 = (ulong)*(ushort *)(lVar12 + lVar13), uVar9 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar12 + uVar8 + uVar9 + -4);
        }
        uVar4 = FUN_0161c998(param_1,uVar5,(long)iVar3);
        if ((uVar4 & 1) == 0) break;
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 & uVar4;
        lVar12 = lVar12 + 4;
        if (*puVar1 <= uVar11) {
          return uVar10;
        }
      }
    }
  }
  return 0;
}


