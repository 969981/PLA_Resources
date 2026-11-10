/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dc2a4; name: FUN_031dc2a4
 */


void FUN_031dc2a4(long param_1,int *param_2,int *param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  short sVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int aiStack_68 [2];
  
  puVar7 = PTR_PTR_0434a080;
  piVar2 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10);
  sVar12 = (short)piVar2[2];
  sVar3 = *(short *)((long)piVar2 + 10);
  if (0 < (int)sVar3 + (int)sVar12) {
    iVar13 = (int)sVar12;
    uVar17 = 0;
    while( true ) {
      if ((int)uVar17 < (int)sVar12) {
        iVar15 = *piVar2;
      }
      else {
        iVar15 = piVar2[1] - (int)sVar12;
      }
      iVar15 = iVar15 + uVar17;
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x28);
      iVar10 = *(int *)(lVar14 + (long)iVar15 * 0x14 + 8);
      if ((iVar10 != -1) && (iVar15 != *param_3)) {
        iVar15 = *(int *)(lVar14 + (long)iVar15 * 0x14 + 0xc);
        lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x18);
        piVar1 = (int *)(lVar14 + (long)iVar15 * 0x10);
        uVar4 = *(ushort *)(piVar1 + 2);
        uVar16 = iVar10 - *piVar1;
        if ((uint)(int)(short)uVar4 <= uVar16) {
          uVar16 = (uint)uVar4 + (iVar10 - *(int *)(lVar14 + (long)iVar15 * 0x10 + 4));
        }
        iVar10 = *param_2;
        if (iVar15 == iVar10) {
          if ((uVar17 & 0xffff) < (uVar16 & 0xffff)) {
            iVar9 = (int)param_4[1];
            lVar14 = *param_4;
            iVar10 = iVar9 + 1;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar9) {
              lVar14 = FUN_031dcbe0(puVar7,iVar10,lVar14,iVar9,(long)param_4 + 0xc);
              iVar9 = (int)param_4[1];
              *param_4 = lVar14;
            }
            piVar1 = (int *)(lVar14 + (long)iVar9 * 0x10);
            *piVar1 = iVar15;
            piVar1[1] = iVar15;
            *(short *)(piVar1 + 2) = (short)uVar17;
            *(short *)((long)piVar1 + 10) = (short)uVar16;
            *(undefined1 *)(piVar1 + 3) = 2;
            *(int *)(param_4 + 1) = iVar10;
          }
        }
        else {
          iVar9 = iVar10;
          uVar5 = uVar17;
          iVar6 = iVar15;
          if (iVar15 <= iVar10) {
            iVar9 = iVar15;
            uVar5 = uVar16;
            uVar16 = uVar17;
            iVar6 = iVar10;
          }
          aiStack_68[0] = iVar15;
          uVar8 = FUN_031d89f4(param_1,aiStack_68);
          lVar14 = *param_4;
          uVar11 = 1;
          if ((uVar8 & 1) == 0) {
            uVar11 = 2;
          }
          iVar10 = (int)param_4[1];
          iVar15 = iVar10 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar10) {
            lVar14 = FUN_031dcbe0(puVar7,iVar15,lVar14,iVar10,(long)param_4 + 0xc);
            iVar10 = (int)param_4[1];
            *param_4 = lVar14;
          }
          piVar1 = (int *)(lVar14 + (long)iVar10 * 0x10);
          *(short *)(piVar1 + 2) = (short)uVar5;
          *piVar1 = iVar9;
          piVar1[1] = iVar6;
          *(short *)((long)piVar1 + 10) = (short)uVar16;
          *(undefined1 *)(piVar1 + 3) = uVar11;
          *(int *)(param_4 + 1) = iVar15;
        }
      }
      if ((iVar13 + sVar3) - 1U == uVar17) break;
      sVar12 = (short)piVar2[2];
      uVar17 = uVar17 + 1;
    }
  }
  return;
}


