/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f4800; name: FUN_030f4800
 */


void FUN_030f4800(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar16;
  long *plVar15;
  long *plVar18;
  long *plVar17;
  int iVar19;
  
  do {
    lVar14 = *(long *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30);
    iVar19 = param_2;
    iVar12 = param_3;
    do {
      while( true ) {
        iVar11 = *(int *)(lVar14 + 0x20);
        plVar15 = (long *)(param_1 + -0x30 + (long)iVar19 * 0x30);
        iVar1 = iVar19;
        do {
          iVar19 = iVar1;
          plVar16 = plVar15;
          plVar15 = plVar16 + 6;
          iVar1 = iVar19 + 1;
        } while (iVar11 < *(int *)(*plVar15 + 0x20));
        plVar17 = (long *)(param_1 + 0x30 + (long)iVar12 * 0x30);
        iVar12 = iVar12 + 1;
        do {
          iVar13 = iVar12;
          plVar18 = plVar17;
          plVar17 = plVar18 + -6;
          iVar12 = iVar13 + -1;
        } while (*(int *)(*plVar17 + 0x20) < iVar11);
        if (iVar19 <= iVar12) break;
        if (iVar12 < iVar19) goto LAB_030f48ec;
      }
      if (iVar19 != iVar12) {
        lVar2 = *plVar17;
        lVar6 = plVar18[-5];
        lVar3 = plVar18[-4];
        lVar7 = plVar18[-3];
        lVar4 = plVar18[-2];
        lVar8 = plVar18[-1];
        lVar5 = plVar16[8];
        lVar9 = plVar16[9];
        lVar10 = plVar16[0xb];
        plVar18[-2] = plVar16[10];
        plVar18[-1] = lVar10;
        plVar18[-4] = lVar5;
        plVar18[-3] = lVar9;
        lVar5 = plVar16[7];
        *plVar17 = *plVar15;
        plVar18[-5] = lVar5;
        *plVar15 = lVar2;
        plVar16[7] = lVar6;
        plVar16[10] = lVar4;
        plVar16[0xb] = lVar8;
        plVar16[8] = lVar3;
        plVar16[9] = lVar7;
      }
      iVar12 = iVar13 + -2;
      iVar19 = iVar1;
    } while (iVar1 <= iVar12);
LAB_030f48ec:
    if (param_2 < iVar12) {
      FUN_030f4800(param_1);
    }
    param_2 = iVar19;
    if (param_3 <= iVar19) {
      return;
    }
  } while( true );
}


