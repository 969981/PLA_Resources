/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3f6f0; name: FUN_00d3f6f0
 */


long FUN_00d3f6f0(int *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  
  if ((6 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    if ((puVar1 != (uint *)0x0) && (uVar10 = (ulong)*puVar1, lVar11 = uVar10 * 4, uVar10 != 0)) {
      lVar2 = uVar14 + uVar13;
      lVar12 = 0;
      if (param_3 == 0) {
        do {
          uVar13 = (ulong)*(uint *)((long)param_1 + lVar12 + lVar2 + 4);
          lVar8 = lVar12 + uVar13 + lVar2;
          lVar3 = lVar12 + (uVar13 - (long)*(int *)((long)param_1 + lVar8 + 4)) + lVar2;
          if (*(ushort *)((long)param_1 + lVar3 + 4) < 5) {
            return 0;
          }
          uVar14 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8);
          if (uVar14 == 0) {
            return 0;
          }
          uVar10 = (ulong)*(uint *)((long)param_1 + lVar12 + uVar13 + uVar14 + lVar2 + 4);
          if ((long)param_1 + lVar12 + uVar13 + uVar10 + uVar14 + lVar2 + 4 == 0) {
            return 0;
          }
          lVar3 = uVar13 + uVar14 + uVar10;
          lVar4 = lVar12 + (lVar3 - *(int *)((long)param_1 + lVar12 + lVar3 + lVar2 + 4)) + lVar2;
          uVar6 = *(ushort *)((long)param_1 + lVar4 + 4);
          if ((uVar6 < 5) || (uVar13 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8), uVar13 == 0))
          {
            uVar16 = 1;
          }
          else {
            bVar5 = *(byte *)((long)param_1 + lVar12 + lVar3 + uVar13 + lVar2 + 4);
            if (bVar5 < 5) {
              uVar16 = 0x19U >> (ulong)(bVar5 & 0x1f) & 1;
            }
            else {
              uVar16 = 0;
            }
          }
          if (param_2 == 0x365) {
            if ((uVar6 < 9) ||
               (uVar13 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc), uVar13 == 0)) {
              iVar15 = 0;
            }
            else {
              iVar15 = *(int *)((long)param_1 + lVar12 + lVar3 + uVar13 + lVar2 + 4);
            }
            uVar16 = uVar16 & iVar15 == param_4;
          }
          if (uVar16 != 0) {
            return (long)param_1 + lVar8 + 4;
          }
          lVar12 = lVar12 + 4;
        } while (lVar11 != lVar12);
      }
      else {
        do {
          uVar13 = (ulong)*(uint *)((long)param_1 + lVar12 + lVar2 + 4);
          lVar8 = lVar12 + uVar13 + lVar2;
          lVar3 = lVar12 + (uVar13 - (long)*(int *)((long)param_1 + lVar8 + 4)) + lVar2;
          if (*(ushort *)((long)param_1 + lVar3 + 4) < 5) {
            return 0;
          }
          uVar14 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8);
          if (uVar14 == 0) {
            return 0;
          }
          lVar3 = uVar13 + uVar14;
          uVar10 = (ulong)*(uint *)((long)param_1 + lVar12 + lVar3 + lVar2 + 4);
          if ((long)param_1 + lVar12 + uVar13 + uVar10 + uVar14 + lVar2 + 4 == 0) {
            return 0;
          }
          if (param_3 == 1) {
            lVar4 = lVar3 + uVar10;
            lVar7 = lVar12 + (lVar4 - *(int *)((long)param_1 + lVar12 + lVar4 + lVar2 + 4)) + lVar2;
            if (((*(ushort *)((long)param_1 + lVar7 + 4) < 5) ||
                (uVar13 = (ulong)*(ushort *)((long)param_1 + lVar7 + 8), uVar13 == 0)) ||
               (uVar16 = *(byte *)((long)param_1 + lVar12 + lVar4 + uVar13 + lVar2 + 4) - 1,
               4 < uVar16)) goto LAB_00d3f89c;
            bVar9 = (uVar16 & 1) == 0;
LAB_00d3f83c:
            if (param_2 != 0x365) goto LAB_00d3f8a8;
LAB_00d3f848:
            lVar3 = lVar3 + uVar10;
            lVar4 = lVar12 + (lVar3 - *(int *)((long)param_1 + lVar12 + lVar3 + lVar2 + 4)) + lVar2;
            if ((*(ushort *)((long)param_1 + lVar4 + 4) < 9) ||
               (uVar13 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc), uVar13 == 0)) {
              iVar15 = 0;
            }
            else {
              iVar15 = *(int *)((long)param_1 + lVar12 + lVar3 + uVar13 + lVar2 + 4);
            }
            if ((bool)(bVar9 & iVar15 == param_4)) {
LAB_00d3f8d0:
              return (long)param_1 + lVar8 + 4;
            }
          }
          else {
            if (param_3 == 2) {
              lVar4 = lVar3 + uVar10;
              lVar7 = lVar12 + (lVar4 - *(int *)((long)param_1 + lVar12 + lVar4 + lVar2 + 4)) +
                      lVar2;
              if ((4 < *(ushort *)((long)param_1 + lVar7 + 4)) &&
                 (uVar13 = (ulong)*(ushort *)((long)param_1 + lVar7 + 8), uVar13 != 0)) {
                bVar9 = *(char *)((long)param_1 + lVar12 + lVar4 + uVar13 + lVar2 + 4) == '\x02';
                goto LAB_00d3f83c;
              }
            }
LAB_00d3f89c:
            bVar9 = false;
            if (param_2 == 0x365) goto LAB_00d3f848;
LAB_00d3f8a8:
            if (bVar9) goto LAB_00d3f8d0;
          }
          lVar12 = lVar12 + 4;
        } while (lVar11 != lVar12);
      }
      return 0;
    }
  }
  return 0;
}


