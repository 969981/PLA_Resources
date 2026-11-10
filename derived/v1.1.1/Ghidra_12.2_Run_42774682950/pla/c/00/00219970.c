/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00219970; name: FUN_00219970
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00219970(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  
  lVar16 = *(long *)(param_1 + 0x60);
  uVar19 = *(uint *)(param_1 + 0xac);
  pcVar1 = (char *)(lVar16 + (ulong)uVar19);
  uVar5 = *(uint *)(param_1 + 0xb4);
  uVar7 = *(int *)(param_1 + 0x50) - 0x106;
  uVar4 = 0;
  if (uVar7 <= uVar19) {
    uVar4 = uVar19 - uVar7;
  }
  uVar18 = (ulong)(int)*(uint *)(param_1 + 0xb8);
  uVar19 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xcc) <= *(uint *)(param_1 + 0xb8)) {
    uVar19 = *(uint *)(param_1 + 0xbc) >> 2;
  }
  cVar9 = (pcVar1 + uVar18)[-1];
  uVar7 = uVar5;
  if (*(uint *)(param_1 + 0xd0) <= uVar5) {
    uVar7 = *(uint *)(param_1 + 0xd0);
  }
  cVar10 = pcVar1[uVar18];
  do {
    pcVar15 = (char *)(lVar16 + (param_2 & 0xffffffff));
    iVar17 = (int)uVar18;
    if ((((pcVar15[iVar17] == cVar10) && (pcVar15[(long)iVar17 + -1] == cVar9)) &&
        (*pcVar15 == *pcVar1)) && (pcVar15[1] == pcVar1[1])) {
      lVar2 = lVar16 + 5 + (param_2 & 0xffffffff);
      lVar8 = 0;
      do {
        lVar13 = lVar8;
        lVar3 = lVar2 + lVar13;
        if (pcVar1[lVar13 + 3] != *(char *)(lVar3 + -2)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 3));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
        if (pcVar1[lVar13 + 4] != *(char *)(lVar3 + -1)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 4));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
        if (pcVar1[lVar13 + 5] != *(char *)(lVar2 + lVar13)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 5));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
        if (pcVar1[lVar13 + 6] != *(char *)(lVar3 + 1)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 6));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
        if (pcVar1[lVar13 + 7] != *(char *)(lVar3 + 2)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 7));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
        if (pcVar1[lVar13 + 8] != *(char *)(lVar3 + 3)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 8));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
        if (pcVar1[lVar13 + 9] != *(char *)(lVar3 + 4)) {
          pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 9));
          uVar14 = 0x102 - (long)(int)pcVar15;
          iVar11 = (int)uVar14;
          goto joined_r0x00219b08;
        }
      } while ((lVar13 + 10U < 0x102) &&
              (lVar8 = lVar13 + 8, pcVar1[lVar13 + 10] == *(char *)(lVar3 + 5)));
      pcVar15 = pcVar1 + (0x102 - (long)(pcVar1 + lVar13 + 10));
      uVar14 = 0x102 - (long)(int)pcVar15;
      iVar11 = (int)uVar14;
joined_r0x00219b08:
      if (iVar17 < iVar11) {
        uVar12 = (uint)uVar14;
        *(int *)(param_1 + 0xb0) = (int)param_2;
        if ((int)uVar7 <= (int)uVar12) {
LAB_00219bbc:
          if (uVar12 <= uVar5) {
            uVar5 = uVar12;
          }
          return uVar5;
        }
        cVar10 = pcVar1[uVar14];
        cVar9 = pcVar1[0x10100000000 - ((long)pcVar15 << 0x20) >> 0x20];
        uVar18 = uVar14 & 0xffffffff;
      }
    }
    uVar12 = (uint)uVar18;
    uVar6 = *(ushort *)(*(long *)(param_1 + 0x70) + (param_2 & *(uint *)(param_1 + 0x58)) * 2);
    param_2 = (ulong)uVar6;
    if ((uVar6 <= uVar4) || (uVar19 = uVar19 - 1, uVar19 == 0)) goto LAB_00219bbc;
  } while( true );
}


