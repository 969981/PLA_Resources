/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00565840; name: FUN_00565840
 */


undefined8 FUN_00565840(uint *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  short *__s;
  size_t sVar20;
  short *psVar21;
  char *__s_00;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lStack_68 = param_2[1];
  local_70 = *param_2;
  if ((param_2[1] == 0) || (*(char *)*param_2 != '[')) {
    *param_4 = 1;
    *(undefined8 *)(param_4 + 2) = 0;
    *(undefined8 *)(param_4 + 4) = 0;
    return 0;
  }
  uVar2 = *param_1;
  lVar8 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (lVar8 != 0) {
    FUN_0055da3c(lVar8,0x14,uVar2 & 0x3ffe);
  }
  lVar9 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (lVar9 != 0) {
    FUN_0055fb3c(lVar9);
  }
  *(long *)(lVar8 + 0x20) = lVar9;
  lVar9 = *param_2;
  lVar1 = param_2[1];
  pcVar18 = (char *)(lVar9 + 1);
  uVar19 = lVar1 - 1;
  *param_2 = (long)pcVar18;
  param_2[1] = uVar19;
  if (uVar19 != 0) {
    if (*pcVar18 == '^') {
      uVar19 = lVar1 - 2;
      *param_2 = lVar9 + 2;
      param_2[1] = uVar19;
      if ((*param_1 & 0x804) != 4) {
        FUN_0055fb58(*(undefined8 *)(lVar8 + 0x20),10,10);
        uVar19 = param_2[1];
      }
      if (uVar19 == 0) goto LAB_00565c30;
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar2 = *(uint *)PTR_DAT_04374d60;
    uVar15 = (ulong)uVar2;
    uVar3 = *(uint *)PTR_DAT_04374d68;
    bVar5 = true;
    do {
      while( true ) {
        pcVar18 = (char *)*param_2;
        cVar4 = *pcVar18;
        if ((!bVar5) && (cVar4 == ']')) {
          *param_2 = (long)(pcVar18 + 1);
          param_2[1] = uVar19 - 1;
          if (bVar6) {
            FUN_005603a8(*(undefined8 *)(lVar8 + 0x20));
          }
          *param_3 = lVar8;
          return 1;
        }
        if (!bVar5 && cVar4 == '-') {
          if (((*(byte *)((long)param_1 + 1) >> 1 & 1) != 0) ||
             ((uVar19 = uVar19 - 1, uVar19 != 0 && (pcVar18[1] == ']')))) goto LAB_00565aa4;
          uVar14 = (undefined4)uVar19;
          if (3 < uVar19) {
            uVar14 = 4;
          }
          iVar7 = FUN_00550ad0(pcVar18 + 1,uVar14);
          if (iVar7 != 0) {
            iVar7 = FUN_00550920(&local_78,pcVar18 + 1);
            if ((int)local_78 < 0x110000) {
              if ((iVar7 != 1) || ((int)local_78 != 0xfffd)) {
                if (-1 < iVar7) {
                  *param_4 = 4;
                  *(long *)(param_4 + 2) = *param_2;
                  *(long *)(param_4 + 4) = (long)(iVar7 + 1);
                }
                goto LAB_00565c40;
              }
            }
            else {
              local_78 = CONCAT44(local_78._4_4_,0xfffd);
            }
          }
          *param_4 = 0xc;
          *(undefined8 *)(param_4 + 2) = 0;
          *(undefined8 *)(param_4 + 4) = 0;
          goto LAB_00565c40;
        }
        if ((((uVar19 < 3) || (cVar4 != '[')) || (pcVar18[1] != ':')) ||
           (((long)uVar19 < 2 || ((long)(uVar19 - 2) < 2)))) break;
        uVar13 = *param_1;
        pcVar17 = pcVar18 + 2;
        uVar10 = *(undefined8 *)(lVar8 + 0x20);
        if (*pcVar17 == ':') goto LAB_00565a00;
        do {
          do {
            pcVar17 = pcVar17 + 1;
            if (pcVar18 + (uVar19 - 2) < pcVar17) goto LAB_00565a64;
          } while (*pcVar17 != ':');
LAB_00565a00:
        } while (pcVar17[1] != ']');
        sVar20 = (long)(pcVar17 + 2) - (long)pcVar18;
        if ((int)uVar2 < 1) {
LAB_00565d1c:
          *param_4 = 4;
          *(char **)(param_4 + 2) = pcVar18;
          *(size_t *)(param_4 + 4) = sVar20;
          goto LAB_00565c40;
        }
        puVar12 = (undefined8 *)PTR_PTR_04374d70;
        if (sVar20 == 0) {
          uVar16 = uVar15;
          while (((char *)*puVar12 != (char *)0x0 && (*(char *)*puVar12 != '\0'))) {
            uVar16 = uVar16 - 1;
            puVar12 = puVar12 + 6;
            if (uVar16 == 0) {
              sVar20 = 0;
              goto LAB_00565d1c;
            }
          }
        }
        else {
          __s_00 = *(char **)PTR_PTR_04374d70;
          uVar16 = uVar15;
          if (__s_00 != (char *)0x0) goto LAB_00565ba8;
LAB_00565bbc:
          if (sVar20 != 0) goto LAB_00565b94;
          while ((__s_00 != pcVar18 && (iVar7 = memcmp(__s_00,pcVar18,sVar20), iVar7 != 0))) {
LAB_00565b94:
            do {
              uVar16 = uVar16 - 1;
              puVar12 = puVar12 + 6;
              if (uVar16 == 0) goto LAB_00565d1c;
              __s_00 = (char *)*puVar12;
              if (__s_00 == (char *)0x0) goto LAB_00565bbc;
LAB_00565ba8:
              sVar11 = strlen(__s_00);
            } while (sVar11 != sVar20);
          }
        }
        *param_2 = (long)(pcVar17 + 2);
        param_2[1] = uVar19 - sVar20;
        uVar14 = *(undefined4 *)(puVar12 + 1);
LAB_00565b3c:
        FUN_00564d80(uVar10,puVar12,uVar14,uVar13);
LAB_00565b40:
        uVar19 = param_2[1];
        bVar5 = false;
        if (uVar19 == 0) goto LAB_00565c30;
      }
LAB_00565a64:
      if (((2 < uVar19) && (cVar4 == '\\')) && ((byte)(pcVar18[1] | 0x20U) == 0x70)) {
        iVar7 = FUN_005649b0(param_2,*param_1,*(undefined8 *)(lVar8 + 0x20),param_4);
        if (iVar7 == 0) goto LAB_00565b40;
        if (iVar7 != 1) goto LAB_00565aa4;
        goto LAB_00565c40;
      }
LAB_00565aa4:
      uVar13 = *param_1;
      if (((((uVar13 >> 7 & 1) != 0) && (uVar19 = param_2[1], 1 < uVar19)) &&
          (psVar21 = (short *)*param_2, (char)*psVar21 == '\\')) && (0 < (int)uVar3)) {
        __s = *(short **)PTR_PTR_04374d78;
        puVar12 = (undefined8 *)PTR_PTR_04374d78;
        uVar16 = (ulong)uVar3;
        if (__s != (short *)0x0) goto LAB_00565afc;
        do {
          do {
            puVar12 = puVar12 + 6;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_00565b50;
            __s = (short *)*puVar12;
          } while (__s == (short *)0x0);
LAB_00565afc:
          sVar20 = strlen((char *)__s);
        } while ((sVar20 != 2) || ((__s != psVar21 && (*__s != *psVar21))));
        *param_2 = (long)(psVar21 + 1);
        param_2[1] = uVar19 - 2;
        uVar10 = *(undefined8 *)(lVar8 + 0x20);
        uVar14 = *(undefined4 *)(puVar12 + 1);
        goto LAB_00565b3c;
      }
LAB_00565b50:
      local_78 = 0;
      uVar19 = FUN_00565648(param_1,param_2,&local_78,&local_70,param_4);
      if ((uVar19 & 1) == 0) goto LAB_00565c40;
      FUN_005644b4(*(undefined8 *)(lVar8 + 0x20),local_78 & 0xffffffff,local_78._4_4_,*param_1 | 4);
      uVar19 = param_2[1];
      bVar5 = false;
    } while (uVar19 != 0);
  }
LAB_00565c30:
  *param_4 = 5;
  *(long *)(param_4 + 4) = lStack_68;
  *(long *)(param_4 + 2) = local_70;
LAB_00565c40:
  FUN_0055de34(lVar8);
  return 0;
}


