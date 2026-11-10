/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001856e8; name: FUN_001856e8
 */


int FUN_001856e8(long param_1,uint *param_2,int param_3,uint param_4,uint *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  
  puVar7 = PTR_DAT_04372420;
  lVar9 = *(long *)(param_1 + 0x48);
  lVar3 = 0;
  if (lVar9 != 0) {
    lVar3 = lVar9 + param_1 + 0x48;
  }
  if (param_4 == 0xffffffff) {
    uVar11 = -(uint)(*(int *)(lVar3 + 0x68) == 0);
  }
  else {
    plVar13 = (long *)(lVar3 + 0x70);
    plVar14 = (long *)(lVar3 + 0x60);
    param_4 = param_4 >> (ulong)(-(uint)*(byte *)(param_1 + 0x1c) & 0x1f);
    uVar11 = param_4 >> 8;
    uVar12 = param_4 >> 1 & 0x7f;
    iVar17 = uVar12 + *(int *)((long)plVar14 + (ulong)uVar11 * 0x60 + *plVar14 + 0x50);
    lVar9 = (long)iVar17 * 4 + *plVar13;
    cVar6 = *(char *)((long)plVar13 + lVar9 + 3);
    if ((cVar6 == *(char *)((long)plVar13 + lVar9 + 1)) ||
       ((uint)(*(char *)((long)plVar13 + (long)iVar17 * 4 + *plVar13 + 2) != cVar6) <= (param_4 & 1)
       )) {
      if (uVar12 + 1 < (uint)*(byte *)((long)plVar14 + (ulong)uVar11 * 0x60 + *plVar14 + 0x59)) {
        uVar11 = (uVar12 + 1) * 2 | uVar11 << 8;
      }
      else {
        if (*(int *)(lVar3 + 0x68) <= (int)(uVar11 + 1)) {
          return 0;
        }
        uVar11 = (uVar11 + 1) * 0x100;
      }
    }
    else {
      uVar11 = (param_4 & 1) + 1 | uVar12 << 1 | uVar11 << 8;
    }
  }
  if (uVar11 == 0xffffffff) {
    iVar17 = 0;
  }
  else {
    plVar15 = (long *)(lVar3 + 0x70);
    lVar10 = *plVar15;
    plVar14 = (long *)(lVar3 + 0x60);
    lVar9 = *plVar14;
    iVar17 = 0;
    plVar13 = (long *)PTR_DAT_043723b0;
    do {
      while( true ) {
        lVar2 = lVar10 + (long)plVar15;
        lVar4 = 0;
        if (lVar10 != 0) {
          lVar4 = lVar2;
        }
        while( true ) {
          uVar18 = uVar11 >> 8;
          uVar19 = (ulong)uVar18;
          uVar5 = *(uint *)((long)plVar14 + uVar19 * 0x60 + lVar9 + 0x50);
          uVar16 = uVar11 >> 1 & 0x7f;
          lVar10 = lVar4 + (ulong)uVar5 * 4 + (ulong)uVar16 * 4;
          uVar12 = uVar11 & 1;
          if ((*(char *)(lVar10 + 1) != *(char *)(lVar10 + 3)) || (*(byte *)(lVar10 + 2) - 3 < 2))
          break;
          iVar1 = uVar5 + uVar16;
          lVar10 = lVar2 + (long)iVar1 * 4;
          cVar6 = *(char *)(lVar10 + 3);
          if ((cVar6 == *(char *)(lVar10 + 1)) ||
             ((*(char *)(lVar2 + (long)iVar1 * 4 + 2) != cVar6) <= uVar12)) {
            uVar16 = uVar16 + 1;
            if (uVar16 < *(byte *)((long)plVar14 + uVar19 * 0x60 + lVar9 + 0x59)) {
              uVar12 = 0;
            }
            else {
              uVar18 = uVar18 + 1;
              if (*(int *)(lVar3 + 0x68) <= (int)uVar18) {
                return iVar17;
              }
              uVar12 = 0;
              uVar16 = 0;
            }
          }
          else {
            uVar12 = uVar12 + 1;
          }
          uVar11 = uVar12 | uVar16 << 1 | uVar18 << 8;
          if (uVar11 == 0xffffffff) {
            return iVar17;
          }
        }
        lVar9 = *(long *)(param_5 + 2);
        if ((lVar9 == 0) ||
           (uVar8 = (**(code **)(*plVar13 + (ulong)*(byte *)(lVar9 + 0x18) * 0x40 + 0x4020))
                              (lVar9,(uVar11 + 1 << (ulong)(-(uint)*(byte *)(param_1 + 0x1c) & 0x1f)
                                     ) + -1), plVar13 = (long *)PTR_DAT_043723b0, (uVar8 & 1) != 0))
        {
          iVar17 = iVar17 + 1;
          *param_2 = (uVar11 + 1 << (ulong)(-((uint)*(byte *)(param_1 + 0x1c) + param_5[1]) & 0x1f))
                     - 1 | *(uint *)(puVar7 + (long)(int)param_5[1] * 4) & *param_5;
          if (iVar17 == param_3) {
            return param_3;
          }
          param_2 = param_2 + 1;
        }
        lVar9 = *plVar14;
        iVar1 = *(int *)((long)plVar14 + uVar19 * 0x60 + lVar9 + 0x50) + uVar16;
        lVar10 = *plVar15;
        lVar2 = (long)iVar1 * 4 + lVar10;
        cVar6 = *(char *)((long)plVar15 + lVar2 + 3);
        if ((cVar6 != *(char *)((long)plVar15 + lVar2 + 1)) &&
           (uVar12 < (*(char *)((long)plVar15 + (long)iVar1 * 4 + lVar10 + 2) != cVar6))) break;
        if (uVar16 + 1 < (uint)*(byte *)((long)plVar14 + uVar19 * 0x60 + lVar9 + 0x59)) {
          uVar11 = (uVar16 + 1) * 2 | uVar18 << 8;
        }
        else {
          if (*(int *)(lVar3 + 0x68) <= (int)(uVar18 + 1)) {
            return iVar17;
          }
          uVar11 = (uVar18 + 1) * 0x100;
        }
        if (uVar11 == 0xffffffff) {
          return iVar17;
        }
      }
      uVar11 = uVar12 + 1 | uVar16 << 1 | uVar18 << 8;
    } while (uVar11 != 0xffffffff);
  }
  return iVar17;
}


