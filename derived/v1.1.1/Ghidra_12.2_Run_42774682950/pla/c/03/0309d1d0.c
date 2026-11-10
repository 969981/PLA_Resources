/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309d1d0; name: FUN_0309d1d0
 */


void FUN_0309d1d0(long *param_1,long param_2,long param_3,long *param_4)

{
  undefined2 *puVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint *puVar17;
  int iVar18;
  
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar12 = (int)param_4[1];
  if (0 < iVar12) {
    lVar10 = 0;
    do {
      piVar15 = (int *)(*param_4 + lVar10 * 0xc);
      iVar11 = *piVar15;
      iVar18 = piVar15[1];
      if (iVar11 < iVar18) {
        lVar13 = (long)iVar18 - (long)iVar11;
        lVar14 = (long)iVar11 * 0xc;
        do {
          puVar1 = (undefined2 *)(*param_1 + lVar14);
          uVar4 = (ulong)*(uint *)(puVar1 + 2);
          if ((((*(byte *)(param_3 + uVar4 * 0x68 + 0x42) >> 2 & 1) == 0) ||
              ((~*(uint *)(param_3 + uVar4 * 0x68 + 8) & 0xffffff) != 0)) ||
             ((~*(uint *)(param_3 + uVar4 * 0x68 + 0x18) & 0xffffff) != 0)) {
            uVar16 = *(ulong *)(param_3 + uVar4 * 0x68 + 8) & 0xffffff;
            if (uVar16 == 0xffffff) {
              bVar6 = 0;
            }
            else {
              bVar6 = *(byte *)(*(long *)(param_2 + 0x38) + uVar16 * 0xc0 + 0x54) >> 3 & 1;
            }
            uVar4 = *(ulong *)(param_3 + uVar4 * 0x68 + 0x18) & 0xffffff;
            if (uVar4 == 0xffffff) {
              bVar7 = 0;
            }
            else {
              bVar7 = *(byte *)(*(long *)(param_2 + 0x38) + uVar4 * 0xc0 + 0x54) >> 3 & 1;
            }
            if ((bVar6 | bVar7) == 1) {
              if (uVar16 == 0xffffff) {
                uVar16 = 0;
                if (uVar4 != 0xffffff) goto LAB_0309d258;
LAB_0309d35c:
                lVar5 = 0;
              }
              else {
                uVar16 = (ulong)(*(byte *)(*(long *)(param_2 + 0xf8) + uVar16) + 1) & 0xff;
                if (uVar4 == 0xffffff) goto LAB_0309d35c;
LAB_0309d258:
                lVar5 = ((ulong)(*(byte *)(*(long *)(param_2 + 0xf8) + uVar4) + 1) & 0xff) * 0x21;
              }
              puVar1[1] = *(undefined2 *)(DAT_04434b38 + (lVar5 + uVar16) * 2 + 0x18);
              *puVar1 = 0xffff;
              *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
            }
          }
          lVar13 = lVar13 + -1;
          lVar14 = lVar14 + 0xc;
        } while (lVar13 != 0);
        iVar12 = (int)param_4[1];
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar12);
  }
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar14;
    lVar14 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar14 != 0) {
    FUN_032d5af0(lVar14,"TtSort",6);
  }
  FUN_0309ced0(*param_1 + (long)(int)param_1[2] * 0xc,(int)param_1[1] - (int)param_1[2]);
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar14;
    lVar10 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar10 != 0) {
    FUN_032d5b34(lVar10,&DAT_0390f40e);
  }
  *(undefined4 *)(param_4 + 1) = 0;
  sVar2 = *(short *)(*param_1 + (long)(int)param_1[2] * 0xc + 2);
  puVar17 = (uint *)((long)param_4 + 0xc);
  piVar15 = (int *)*param_4;
  if ((*puVar17 & 0x3fffffff) == 0) {
    uVar9 = (*puVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    piVar15 = (int *)FUN_032bd1d4(PTR_PTR_0434a080,uVar9,0xc,piVar15,0,puVar17);
    *param_4 = (long)piVar15;
  }
  *(undefined4 *)(param_4 + 1) = 1;
  *piVar15 = (int)param_1[2];
  puVar3 = PTR_PTR_0434a080;
  iVar12 = (int)param_1[2];
  iVar11 = *(int *)((long)param_1 + 0x14);
  if (0 < iVar11) {
    iVar18 = 0;
    iVar8 = iVar12;
    do {
      if (*(short *)(*param_1 + (long)iVar12 * 0xc + 2) != sVar2) {
        piVar15[1] = iVar12;
        iVar12 = (int)param_4[1];
        lVar10 = *param_4;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar12) {
          lVar10 = FUN_0305b44c(puVar3,iVar12 + 1,lVar10,iVar12,puVar17);
          *param_4 = lVar10;
        }
        *(int *)(param_4 + 1) = iVar12 + 1;
        piVar15 = (int *)(lVar10 + (long)iVar12 * 0xc);
        *piVar15 = iVar18 + (int)param_1[2];
        iVar8 = (int)param_1[2];
        iVar11 = *(int *)((long)param_1 + 0x14);
      }
      iVar18 = iVar18 + 1;
      iVar12 = iVar8 + iVar18;
    } while (iVar18 < iVar11);
  }
  piVar15[1] = iVar12;
  return;
}


