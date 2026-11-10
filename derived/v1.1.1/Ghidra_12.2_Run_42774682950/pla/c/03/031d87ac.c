/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d87ac; name: FUN_031d87ac
 */


void FUN_031d87ac(long param_1,int *param_2,int *param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int aiStack_68 [2];
  
  puVar7 = PTR_PTR_0434a080;
  piVar2 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10);
  sVar11 = (short)piVar2[2];
  sVar3 = *(short *)((long)piVar2 + 10);
  if (0 < (int)sVar3 + (int)sVar11) {
    iVar12 = (int)sVar11;
    uVar16 = 0;
    while( true ) {
      if ((int)uVar16 < (int)sVar11) {
        iVar14 = *piVar2;
      }
      else {
        iVar14 = piVar2[1] - (int)sVar11;
      }
      iVar14 = iVar14 + uVar16;
      lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x28);
      iVar10 = *(int *)(lVar13 + (long)iVar14 * 0x14 + 8);
      if ((iVar10 != -1) && (iVar14 != *param_3)) {
        iVar14 = *(int *)(lVar13 + (long)iVar14 * 0x14 + 0xc);
        lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x18);
        piVar1 = (int *)(lVar13 + (long)iVar14 * 0x10);
        uVar4 = *(ushort *)(piVar1 + 2);
        uVar15 = iVar10 - *piVar1;
        if ((uint)(int)(short)uVar4 <= uVar15) {
          uVar15 = (uint)uVar4 + (iVar10 - *(int *)(lVar13 + (long)iVar14 * 0x10 + 4));
        }
        iVar10 = *param_2;
        if (iVar14 == iVar10) {
          if ((uVar16 & 0xffff) < (uVar15 & 0xffff)) {
            iVar9 = (int)param_4[1];
            lVar13 = *param_4;
            iVar10 = iVar9 + 1;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar9) {
              lVar13 = FUN_031dcbe0(puVar7,iVar10,lVar13,iVar9,(long)param_4 + 0xc);
              iVar9 = (int)param_4[1];
              *param_4 = lVar13;
            }
            piVar1 = (int *)(lVar13 + (long)iVar9 * 0x10);
            *piVar1 = iVar14;
            piVar1[1] = iVar14;
            *(short *)(piVar1 + 2) = (short)uVar16;
            *(short *)((long)piVar1 + 10) = (short)uVar15;
            *(undefined1 *)(piVar1 + 3) = 0;
            *(int *)(param_4 + 1) = iVar10;
          }
        }
        else {
          iVar9 = iVar10;
          uVar5 = uVar16;
          iVar6 = iVar14;
          if (iVar14 <= iVar10) {
            iVar9 = iVar14;
            uVar5 = uVar15;
            uVar15 = uVar16;
            iVar6 = iVar10;
          }
          aiStack_68[0] = iVar14;
          bVar8 = FUN_031d89f4(param_1,aiStack_68);
          lVar13 = *param_4;
          iVar10 = (int)param_4[1];
          iVar14 = iVar10 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar10) {
            lVar13 = FUN_031dcbe0(puVar7,iVar14,lVar13,iVar10,(long)param_4 + 0xc);
            iVar10 = (int)param_4[1];
            *param_4 = lVar13;
          }
          piVar1 = (int *)(lVar13 + (long)iVar10 * 0x10);
          *(short *)(piVar1 + 2) = (short)uVar5;
          *piVar1 = iVar9;
          piVar1[1] = iVar6;
          *(short *)((long)piVar1 + 10) = (short)uVar15;
          *(byte *)(piVar1 + 3) = ~bVar8 & 1;
          *(int *)(param_4 + 1) = iVar14;
        }
      }
      if ((iVar12 + sVar3) - 1U == uVar16) break;
      sVar11 = (short)piVar2[2];
      uVar16 = uVar16 + 1;
    }
  }
  return;
}


