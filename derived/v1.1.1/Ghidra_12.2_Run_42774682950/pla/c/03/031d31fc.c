/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d31fc; name: FUN_031d31fc
 */


void FUN_031d31fc(long param_1,int *param_2,ushort *param_3,long *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  lVar10 = *(long *)(param_1 + 0x20);
  iVar2 = *param_2;
  iVar12 = iVar2 - *(int *)(lVar10 + 0x20);
  if (iVar2 < *(int *)(lVar10 + 0x20)) {
    lVar16 = *(long *)(lVar10 + 0x18);
    iVar12 = iVar2;
    if (*(int *)(lVar10 + 0x98) != 0) {
      iVar12 = *(int *)(*(long *)(lVar10 + 0x90) + (long)iVar2 * 4);
    }
    if (iVar12 == -1) {
      iVar12 = iVar2;
      goto LAB_031d3268;
    }
    plVar15 = (long *)(lVar10 + 0xb0);
  }
  else {
    plVar15 = (long *)(lVar10 + 0xd0);
  }
  lVar16 = *plVar15;
LAB_031d3268:
  lVar18 = (long)iVar12;
  if ((*(int *)(lVar10 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar10 + 0x100) + (long)iVar2) & 1) == 0)) {
    lVar10 = lVar16 + lVar18 * 0x10;
    uVar8 = *param_3;
    sVar3 = *(short *)(lVar10 + 8);
    if ((short)uVar8 < sVar3) {
      iVar12 = *(int *)(lVar16 + lVar18 * 0x10) + (uint)uVar8;
    }
    else {
      iVar12 = *(int *)(lVar10 + 4) + ((uint)uVar8 - (int)sVar3 & 0xffff);
    }
    iVar6 = (int)param_4[1];
    iVar17 = iVar6 + 1;
    lVar10 = *param_4;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar6) {
      lVar10 = FUN_031d6208(PTR_PTR_0434a090,iVar17);
      iVar6 = (int)param_4[1];
      *param_4 = lVar10;
    }
    piVar13 = (int *)(lVar10 + (long)iVar6 * 8);
    *piVar13 = iVar2;
    piVar13[1] = iVar12;
    *(int *)(param_4 + 1) = iVar17;
  }
  else {
    local_78[0] = iVar2;
    cVar5 = FUN_031d2ff4(param_1,local_78,local_68,local_70);
    puVar4 = PTR_PTR_0434a090;
    if ((cVar5 != '\0') && (lVar10 = (long)local_68[0], local_68[0] != local_70[0])) {
      lVar9 = *(long *)(param_1 + 0x20);
      iVar2 = *(int *)(lVar9 + 0x20);
      while( true ) {
        if ((short)*param_3 < *(short *)(lVar16 + lVar18 * 0x10 + 8)) {
          piVar1 = (int *)(*(long *)(lVar9 + 0xd0) + lVar10 * 0x10);
          piVar13 = piVar1 + 2;
          iVar12 = *piVar1;
        }
        else {
          lVar19 = *(long *)(lVar9 + 0xd0) + lVar10 * 0x10;
          iVar12 = *(int *)(lVar19 + 4);
          piVar13 = (int *)(lVar19 + 10);
        }
        iVar17 = (int)(short)*piVar13;
        if (iVar12 < iVar12 + iVar17) {
          lVar19 = (long)iVar12;
          iVar12 = iVar2 + (int)lVar10;
          if (param_5 == 1) {
            lVar20 = lVar19 * 0x14;
            iVar17 = (int)(short)*piVar13;
            while( true ) {
              iVar17 = iVar17 + -1;
              lVar14 = (long)*(int *)(lVar9 + 0x30);
              if (lVar19 < lVar14) {
                iVar6 = (int)lVar19;
                if (*(int *)(lVar9 + 0x78) != 0) {
                  iVar6 = *(int *)(*(long *)(lVar9 + 0x70) + lVar19 * 4);
                }
                if (iVar6 == -1) {
                  lVar11 = *(long *)(lVar9 + 0x28) + lVar19 * 0x14;
                }
                else {
                  lVar11 = *(long *)(lVar9 + 0xc0) + (long)iVar6 * 0x14;
                }
                uVar8 = 0xffff;
              }
              else {
                lVar11 = *(long *)(lVar9 + 0xe0) + lVar14 * -0x14 + lVar20;
                uVar8 = *(ushort *)(*(long *)(lVar9 + 0x110) + lVar14 * -2 + lVar19 * 2);
              }
              if ((uVar8 == *param_3) && (*(int *)(lVar11 + 8) == -1)) {
                iVar7 = (int)param_4[1];
                lVar9 = *param_4;
                iVar6 = iVar7 + 1;
                if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar7) {
                  lVar9 = FUN_031d6208(puVar4,iVar6,lVar9,iVar7,(long)param_4 + 0xc);
                  iVar7 = (int)param_4[1];
                  *param_4 = lVar9;
                }
                piVar13 = (int *)(lVar9 + (long)iVar7 * 8);
                *piVar13 = iVar12;
                piVar13[1] = (int)lVar19;
                *(int *)(param_4 + 1) = iVar6;
              }
              if (iVar17 == 0) break;
              lVar9 = *(long *)(param_1 + 0x20);
              lVar19 = lVar19 + 1;
              lVar20 = lVar20 + 0x14;
            }
          }
          else {
            while( true ) {
              iVar17 = iVar17 + -1;
              if (lVar19 < *(int *)(lVar9 + 0x30)) {
                uVar8 = 0xffff;
              }
              else {
                uVar8 = *(ushort *)
                         (*(long *)(lVar9 + 0x110) + (long)*(int *)(lVar9 + 0x30) * -2 + lVar19 * 2)
                ;
              }
              if (uVar8 == *param_3) {
                iVar7 = (int)param_4[1];
                lVar9 = *param_4;
                iVar6 = iVar7 + 1;
                if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar7) {
                  lVar9 = FUN_031d6208(puVar4,iVar6,lVar9,iVar7,(long)param_4 + 0xc);
                  iVar7 = (int)param_4[1];
                  *param_4 = lVar9;
                }
                piVar13 = (int *)(lVar9 + (long)iVar7 * 8);
                *piVar13 = iVar12;
                piVar13[1] = (int)lVar19;
                *(int *)(param_4 + 1) = iVar6;
              }
              if (iVar17 == 0) break;
              lVar9 = *(long *)(param_1 + 0x20);
              lVar19 = lVar19 + 1;
            }
          }
        }
        lVar10 = lVar10 + 1;
        if (local_70[0] == (int)lVar10) break;
        lVar9 = *(long *)(param_1 + 0x20);
      }
    }
  }
  return;
}


