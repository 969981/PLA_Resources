/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004210f0; name: FUN_004210f0
 */


int FUN_004210f0(undefined1 *param_1,ulong param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ulong uVar19;
  char local_3 [3];
  
  lVar10 = -1;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar3 = (uint)param_2;
    cVar1 = (char)param_2;
    local_3[uVar8 + 2] = cVar1;
    param_2 = param_2 >> 8;
    uVar9 = uVar8 - 1;
    lVar10 = lVar10 + 1;
  } while (param_2 != 0);
  uVar7 = -uVar9;
  if (uVar9 == 0) {
    uVar14 = 0;
    uVar3 = 0;
    iVar4 = 1;
    goto joined_r0x004211a4;
  }
  iVar4 = (int)uVar9;
  if (param_3 == 0) {
    uVar3 = 0;
    uVar13 = (uint)(cVar1 < '\0');
    iVar4 = uVar13 - iVar4;
joined_r0x004211a4:
    uVar14 = (ulong)uVar13;
  }
  else {
    uVar3 = uVar3 & 0xff;
    if (0x80 < uVar3) {
      uVar3 = 0xff;
      uVar14 = 1;
      iVar4 = 1 - iVar4;
      goto joined_r0x004211a4;
    }
    if (uVar3 == 0x80) {
      if (1 < uVar7) {
        uVar14 = ~uVar9;
        if (uVar14 < 4) {
          bVar12 = 0;
          uVar5 = 1;
LAB_004212d8:
          uVar14 = uVar5 + uVar9;
          uVar3 = -(int)uVar14 - 8;
          uVar2 = (ulong)uVar3 & 3;
          uVar19 = uVar5;
          if ((uVar3 & 3) != 0) {
            do {
              uVar5 = uVar19 + 1;
              bVar12 = bVar12 | local_3[uVar9 + uVar19 + 3];
              uVar2 = uVar2 - 1;
              uVar19 = uVar5;
            } while (uVar2 != 0);
          }
          if (2 < ~uVar14) {
            lVar15 = uVar5 + uVar9 + 1;
            lVar6 = uVar5 + uVar9;
            do {
              lVar15 = lVar15 + 4;
              bVar12 = bVar12 | local_3[lVar6 + 3] | local_3[lVar6 + 4] | local_3[lVar6 + 5] |
                       local_3[lVar6 + 6];
              lVar6 = lVar6 + 4;
            } while (lVar15 != 1);
          }
        }
        else {
          uVar19 = uVar14 & 0xfffffffffffffffc;
          bVar17 = 0;
          bVar18 = 0;
          bVar16 = 0;
          bVar12 = 0;
          uVar5 = uVar19 | 1;
          uVar2 = uVar19;
          pbVar11 = (byte *)(local_3 + uVar8 + 6);
          do {
            bVar17 = bVar17 | pbVar11[-3];
            bVar18 = bVar18 | pbVar11[-2];
            bVar16 = bVar16 | pbVar11[-1];
            bVar12 = bVar12 | *pbVar11;
            uVar2 = uVar2 - 4;
            pbVar11 = pbVar11 + 4;
          } while (uVar2 != 0);
          bVar12 = bVar12 | bVar16 | bVar18 | bVar17;
          if (uVar14 != uVar19) goto LAB_004212d8;
        }
        uVar3 = -(uint)(bVar12 != 0);
        uVar13 = uVar3 & 1;
        iVar4 = uVar13 - iVar4;
        goto joined_r0x004211a4;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
    iVar4 = -iVar4;
    uVar14 = 0;
  }
joined_r0x004211a4:
  if ((param_1 != (undefined1 *)0x0) && (*param_1 = (char)uVar3, uVar9 != 0)) {
    uVar13 = uVar3 & 1;
    if ((uVar7 & 1) != 0) {
      uVar7 = ~uVar9;
      register0x00000008 = (BADSPACEBASE *)(local_3 + 2);
      uVar13 = uVar13 + ((uint)(byte)local_3[2] ^ uVar3 & 0xff);
      param_1[lVar10 + uVar14] = (char)uVar13;
      uVar13 = uVar13 >> 8;
    }
    if (uVar8 != 0) {
      param_1 = param_1 + uVar7 + uVar14 + -1;
      pbVar11 = (byte *)((long)register0x00000008 + -1);
      do {
        uVar13 = uVar13 + ((*pbVar11 ^ uVar3) & 0xff);
        *param_1 = (char)uVar13;
        uVar13 = (uVar13 >> 8) + ((pbVar11[-1] ^ uVar3) & 0xff);
        uVar7 = uVar7 - 2;
        param_1[-1] = (char)uVar13;
        uVar13 = uVar13 >> 8;
        param_1 = param_1 + -2;
        pbVar11 = pbVar11 + -2;
      } while (uVar7 != 0);
    }
  }
  return iVar4;
}


