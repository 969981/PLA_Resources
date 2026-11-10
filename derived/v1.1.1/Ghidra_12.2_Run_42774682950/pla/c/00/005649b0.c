/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005649b0; name: FUN_005649b0
 */


undefined8 FUN_005649b0(long *param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  undefined4 uVar8;
  uint uVar9;
  short *psVar10;
  undefined **ppuVar11;
  size_t __n;
  ulong uVar12;
  short *psVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  uint local_6c;
  int local_68;
  int local_64;
  
  if ((param_2 >> 10 & 1) == 0) {
    return 2;
  }
  uVar12 = param_1[1];
  uVar16 = uVar12 - 2;
  if (uVar12 < 2) {
    return 2;
  }
  pcVar14 = (char *)*param_1;
  if (*pcVar14 != '\\') {
    return 2;
  }
  bVar2 = pcVar14[1];
  uVar9 = (uint)bVar2;
  local_6c = (uint)bVar2;
  if ((local_6c | 0x20) != 0x70) {
    return 2;
  }
  iVar5 = 1;
  if (bVar2 == 0x50) {
    iVar5 = -1;
  }
  psVar13 = (short *)(pcVar14 + 2);
  *param_1 = (long)psVar13;
  param_1[1] = uVar16;
  uVar8 = (undefined4)uVar16;
  if (3 < uVar16) {
    uVar8 = 4;
  }
  iVar4 = FUN_00550ad0(psVar13,uVar8);
  if (iVar4 != 0) {
    iVar4 = FUN_00550920(&local_6c,*param_1);
    if ((int)local_6c < 0x110000) {
      if ((iVar4 != 1) || (uVar9 = 0xfffd, local_6c != 0xfffd)) {
        *param_1 = *param_1 + (long)iVar4;
        param_1[1] = param_1[1] - (long)iVar4;
        uVar9 = local_6c;
        if (iVar4 == 0) {
          return 1;
        }
        goto LAB_00564aa8;
      }
    }
    else {
      uVar9 = 0xfffd;
      local_6c = 0xfffd;
    }
  }
  *param_4 = 0xc;
  *(undefined8 *)(param_4 + 2) = 0;
  *(undefined8 *)(param_4 + 4) = 0;
LAB_00564aa8:
  if (uVar9 == 0x7b) {
    uVar6 = FUN_0056a668(param_1,0x7d,0);
    uVar16 = uVar12;
    pcVar1 = pcVar14;
    if (uVar6 == 0xffffffffffffffff) {
      do {
        if (uVar16 == 0) {
          *param_4 = 4;
          *(char **)(param_4 + 2) = pcVar14;
          *(ulong *)(param_4 + 4) = uVar12;
          return 1;
        }
        uVar8 = (undefined4)uVar16;
        if (3 < uVar16) {
          uVar8 = 4;
        }
        iVar5 = FUN_00550ad0(pcVar1,uVar8);
        if (((iVar5 == 0) || (iVar5 = FUN_00550920(&local_64,pcVar1), 0x10ffff < local_64)) ||
           ((iVar5 == 1 && (local_64 == 0xfffd)))) goto LAB_00564d6c;
        pcVar1 = pcVar1 + iVar5;
        uVar16 = uVar16 - (long)iVar5;
      } while (-1 < iVar5);
    }
    else {
      psVar13 = (short *)*param_1;
      *param_1 = (long)((long)psVar13 + uVar6 + 1);
      param_1[1] = param_1[1] - (uVar6 + 1);
      psVar10 = psVar13;
      uVar16 = uVar6;
      do {
        if (uVar16 == 0) {
          lVar15 = *param_1;
          goto joined_r0x00564b58;
        }
        uVar8 = (undefined4)uVar16;
        if (3 < uVar16) {
          uVar8 = 4;
        }
        iVar4 = FUN_00550ad0(psVar10,uVar8);
        if (((iVar4 == 0) || (iVar4 = FUN_00550920(&local_68,psVar10), 0x10ffff < local_68)) ||
           ((iVar4 == 1 && (local_68 == 0xfffd)))) {
LAB_00564d6c:
          *param_4 = 0xc;
          *(undefined8 *)(param_4 + 2) = 0;
          *(undefined8 *)(param_4 + 4) = 0;
          return 1;
        }
        psVar10 = (short *)((long)psVar10 + (long)iVar4);
        uVar16 = uVar16 - (long)iVar4;
      } while (-1 < iVar4);
    }
    return 1;
  }
  lVar15 = *param_1;
  uVar6 = lVar15 - (long)psVar13;
joined_r0x00564b58:
  if (uVar6 == 0) {
    __n = 0;
    psVar10 = psVar13;
    iVar4 = iVar5;
  }
  else {
    bVar3 = (char)*psVar13 == '^';
    __n = uVar6 - bVar3;
    psVar10 = (short *)((long)psVar13 + 1);
    if (!bVar3) {
      psVar10 = psVar13;
    }
    iVar4 = -iVar5;
    if (!bVar3) {
      iVar4 = iVar5;
    }
    if (__n == 3) {
      if ((psVar10 == (short *)&DAT_038c9a82) || (*psVar10 == 0x6e41 && (char)psVar10[1] == 'y')) {
        ppuVar11 = &PTR_DAT_04186bc8;
LAB_00564d14:
        FUN_00564d80(param_3,ppuVar11,iVar4,param_2);
        return 0;
      }
      __n = 3;
    }
  }
  uVar16 = (ulong)*(uint *)PTR_DAT_04374d50;
  if (0 < (int)*(uint *)PTR_DAT_04374d50) {
    ppuVar11 = (undefined **)PTR_PTR_04374d58;
    if (__n == 0) {
      do {
        if ((*ppuVar11 == (char *)0x0) || (**ppuVar11 == '\0')) goto LAB_00564d14;
        uVar16 = uVar16 - 1;
        ppuVar11 = ppuVar11 + 6;
      } while (uVar16 != 0);
    }
    else {
      do {
        psVar13 = (short *)*ppuVar11;
        if (psVar13 == (short *)0x0) {
          if (__n == 0) goto LAB_00564cc4;
        }
        else {
          sVar7 = strlen((char *)psVar13);
          if (sVar7 == __n) {
LAB_00564cc4:
            if ((psVar13 == psVar10) || (iVar5 = memcmp(psVar13,psVar10,__n), iVar5 == 0))
            goto LAB_00564d14;
          }
        }
        uVar16 = uVar16 - 1;
        ppuVar11 = ppuVar11 + 6;
      } while (uVar16 != 0);
    }
  }
  *param_4 = 4;
  *(char **)(param_4 + 2) = pcVar14;
  *(long *)(param_4 + 4) = lVar15 - (long)pcVar14;
  return 1;
}


