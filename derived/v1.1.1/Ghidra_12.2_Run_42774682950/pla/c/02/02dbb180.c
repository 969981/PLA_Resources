/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dbb180; name: FUN_02dbb180
 */


int FUN_02dbb180(int *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  
  puVar7 = (ushort *)((long)param_2 - (long)*param_2);
  if ((*puVar7 < 7) || ((ulong)puVar7[3] == 0)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 1;
    switch(*(undefined4 *)((long)param_2 + (ulong)puVar7[3])) {
    case 0:
      goto switchD_02dbb1dc_caseD_0;
    case 1:
      lVar14 = 0;
      if ((ulong)puVar7[2] != 0) {
        puVar12 = (uint *)((long)param_2 + (ulong)puVar7[2]);
        lVar14 = (long)puVar12 + (ulong)*puVar12;
      }
      uVar9 = (ulong)*(ushort *)((long)param_1 + (6 - (long)*param_1));
      puVar1 = (uint *)((long)param_1 + uVar9);
      uVar10 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar10);
      puVar12 = puVar1 + 1;
      uVar11 = (ulong)*puVar1;
      if (uVar11 != 0) {
        lVar2 = uVar10 + uVar9;
        lVar13 = 0;
        puVar12 = puVar12 + uVar11;
        do {
          uVar9 = (ulong)*(uint *)((long)param_1 + lVar13 + lVar2 + 4);
          lVar8 = lVar13 + (uVar9 - (long)*(int *)((long)param_1 + lVar13 + uVar9 + lVar2 + 4)) +
                           lVar2;
          if ((*(ushort *)((long)param_1 + lVar8 + 4) < 5) ||
             (uVar10 = (ulong)*(ushort *)((long)param_1 + lVar8 + 8), uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            lVar8 = uVar9 + uVar10;
            lVar8 = (long)param_1 +
                    lVar13 + lVar8 + (ulong)*(uint *)((long)param_1 + lVar13 + lVar8 + lVar2 + 4) +
                    lVar2 + 4;
          }
          iVar5 = strcmp((char *)(lVar14 + 4),(char *)(lVar8 + 4));
          if (iVar5 == 0) {
            puVar12 = (uint *)((long)param_1 + lVar13 + lVar2 + 4);
            break;
          }
          lVar13 = lVar13 + 4;
        } while (uVar11 * 4 != lVar13);
      }
      piVar3 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar12 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
      uVar4 = *puVar12;
      if ((ulong)uVar4 != 0) {
        lVar14 = 0;
        iVar5 = 0;
        do {
          uVar9 = (ulong)*(uint *)((long)puVar12 + lVar14 + 4);
          lVar13 = lVar14 + (uVar9 - (long)*(int *)((long)puVar12 + lVar14 + uVar9 + 4));
          if ((*(ushort *)((long)puVar12 + lVar13 + 4) < 5) ||
             (uVar10 = (ulong)*(ushort *)((long)puVar12 + lVar13 + 8), uVar10 == 0)) {
            lVar13 = 0;
          }
          else {
            lVar13 = uVar9 + uVar10;
            lVar13 = (long)puVar12 +
                     lVar14 + lVar13 + (ulong)*(uint *)((long)puVar12 + lVar14 + lVar13 + 4) + 4;
          }
          iVar6 = FUN_02dbb180(param_1,lVar13);
          lVar14 = lVar14 + 4;
          iVar5 = iVar6 + iVar5;
        } while ((ulong)uVar4 * 4 != lVar14);
        return iVar5;
      }
      break;
    case 2:
      lVar14 = 0;
      if ((ulong)puVar7[2] != 0) {
        puVar12 = (uint *)((long)param_2 + (ulong)puVar7[2]);
        lVar14 = (long)puVar12 + (ulong)*puVar12;
      }
      uVar9 = (ulong)*(ushort *)((long)param_1 + (8 - (long)*param_1));
      puVar1 = (uint *)((long)param_1 + uVar9);
      uVar10 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar10);
      puVar12 = puVar1 + 1;
      uVar11 = (ulong)*puVar1;
      if (uVar11 != 0) {
        lVar2 = uVar10 + uVar9;
        lVar13 = 0;
        puVar12 = puVar12 + uVar11;
        do {
          uVar9 = (ulong)*(uint *)((long)param_1 + lVar13 + lVar2 + 4);
          lVar8 = lVar13 + (uVar9 - (long)*(int *)((long)param_1 + lVar13 + uVar9 + lVar2 + 4)) +
                           lVar2;
          if ((*(ushort *)((long)param_1 + lVar8 + 4) < 5) ||
             (uVar10 = (ulong)*(ushort *)((long)param_1 + lVar8 + 8), uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            lVar8 = uVar9 + uVar10;
            lVar8 = (long)param_1 +
                    lVar13 + lVar8 + (ulong)*(uint *)((long)param_1 + lVar13 + lVar8 + lVar2 + 4) +
                    lVar2 + 4;
          }
          iVar5 = strcmp((char *)(lVar14 + 4),(char *)(lVar8 + 4));
          if (iVar5 == 0) {
            puVar12 = (uint *)((long)param_1 + lVar13 + lVar2 + 4);
            break;
          }
          lVar13 = lVar13 + 4;
        } while (uVar11 * 4 != lVar13);
      }
      piVar3 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar12 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (10 - (long)*piVar3)));
      puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
      uVar4 = *puVar12;
      if ((ulong)uVar4 != 0) {
        lVar14 = 0;
        iVar5 = 0;
        do {
          uVar9 = (ulong)*(uint *)((long)puVar12 + lVar14 + 4);
          lVar13 = lVar14 + (uVar9 - (long)*(int *)((long)puVar12 + lVar14 + uVar9 + 4));
          if ((*(ushort *)((long)puVar12 + lVar13 + 4) < 5) ||
             (uVar10 = (ulong)*(ushort *)((long)puVar12 + lVar13 + 8), uVar10 == 0)) {
            lVar13 = 0;
          }
          else {
            lVar13 = uVar9 + uVar10;
            lVar13 = (long)puVar12 +
                     lVar14 + lVar13 + (ulong)*(uint *)((long)puVar12 + lVar14 + lVar13 + 4) + 4;
          }
          iVar6 = FUN_02dbb180(param_1,lVar13);
          lVar14 = lVar14 + 4;
          iVar5 = iVar6 + iVar5;
        } while ((ulong)uVar4 * 4 != lVar14);
        return iVar5;
      }
    }
    iVar5 = 0;
  }
switchD_02dbb1dc_caseD_0:
  return iVar5;
}


