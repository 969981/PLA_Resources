/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054e420; name: FUN_0054e420
 */


undefined8 FUN_0054e420(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  int iVar8;
  int iVar9;
  char *__s;
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar18 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  
  if (*param_1 != 4) {
    return 0;
  }
  lVar3 = (long)param_1 + 9;
  uVar7 = (ulong)(*(byte *)(param_1 + 2) >> 1);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    lVar3 = *(long *)(param_1 + 6);
    uVar7 = *(ulong *)(param_1 + 4);
  }
  if (*(char *)(uVar7 + lVar3 + -1) != 's') {
    return 0;
  }
  __s = (char *)FUN_002ec2d0();
  __s[uVar7 - 1] = '\0';
  pcVar10 = strchr(__s,0x2e);
  if (pcVar10 == (char *)0x0) {
    iVar8 = 0;
    if (__s == (char *)0x0) {
LAB_0054e500:
      iVar9 = 0;
    }
    else {
LAB_0054e5cc:
                    /* try { // try from 0054e5cc to 0054e5d3 has its CatchHandler @ 0054e638 */
      iVar9 = FUN_002ec930(__s);
      if (iVar9 == -1) goto LAB_0054e610;
    }
    *param_2 = (long)(iVar8 / 1000000 + iVar9 * 1000);
    uVar14 = 1;
  }
  else {
    *pcVar10 = '\0';
                    /* try { // try from 0054e490 to 0054e497 has its CatchHandler @ 0054e648 */
    iVar8 = FUN_002ec930(pcVar10 + 1);
    if (iVar8 != -1) {
      sVar11 = strlen(pcVar10 + 1);
      iVar9 = (int)sVar11;
      if (iVar9 < 10) {
        if (iVar9 != 9) {
          uVar5 = 9 - iVar9;
          uVar4 = uVar5;
          if ((int)uVar5 < 2) {
            uVar4 = 1;
          }
          if (uVar4 < 0x10) {
            uVar12 = 0;
          }
          else {
            iVar15 = 1;
            iVar16 = 1;
            iVar9 = 1;
            uVar12 = uVar4 & 0x7ffffff0;
            uVar1 = (uVar12 - 0x10 >> 4) + 1;
            uVar2 = uVar1 & 1;
            if (uVar12 - 0x10 == 0) {
              iVar38 = 10;
              iVar39 = 10;
              iVar40 = 10;
              iVar41 = 10;
              iVar13 = 10;
              iVar34 = 10;
              iVar26 = 10;
              iVar28 = 10;
              iVar22 = 10;
              iVar24 = 10;
              iVar30 = 10;
              iVar32 = 10;
LAB_0054e578:
              iVar33 = iVar32;
              iVar31 = iVar30;
              iVar25 = iVar24;
              iVar23 = iVar22;
              iVar29 = iVar28;
              iVar27 = iVar26;
              iVar37 = iVar34;
              iVar35 = iVar13;
              iVar8 = iVar8 * 10;
              iVar9 = iVar9 * 10;
              iVar15 = iVar15 * 10;
              iVar16 = iVar16 * 10;
              iVar17 = iVar38;
              iVar19 = iVar39;
              iVar20 = iVar40;
              iVar21 = iVar41;
            }
            else {
              iVar13 = uVar2 - uVar1;
              iVar17 = 1;
              iVar19 = 1;
              iVar20 = 1;
              iVar21 = 1;
              iVar35 = 1;
              iVar37 = 1;
              iVar27 = 1;
              iVar29 = 1;
              iVar23 = 1;
              iVar25 = 1;
              iVar31 = 1;
              iVar33 = 1;
              do {
                iVar32 = iVar33;
                iVar30 = iVar31;
                iVar24 = iVar25;
                iVar22 = iVar23;
                iVar28 = iVar29;
                iVar26 = iVar27;
                iVar36 = iVar37;
                iVar34 = iVar35;
                iVar41 = iVar21;
                iVar40 = iVar20;
                iVar39 = iVar19;
                iVar38 = iVar17;
                iVar8 = iVar8 * 100;
                iVar9 = iVar9 * 100;
                iVar15 = iVar15 * 100;
                iVar16 = iVar16 * 100;
                iVar13 = iVar13 + 2;
                iVar17 = iVar38 * 100;
                iVar19 = iVar39 * 100;
                iVar20 = iVar40 * 100;
                iVar21 = iVar41 * 100;
                iVar23 = iVar22 * 100;
                iVar25 = iVar24 * 100;
                iVar27 = iVar26 * 100;
                iVar29 = iVar28 * 100;
                iVar31 = iVar30 * 100;
                iVar33 = iVar32 * 100;
                iVar35 = iVar34 * 100;
                iVar37 = iVar36 * 100;
              } while (iVar13 != 0);
              iVar38 = iVar38 * 1000;
              iVar39 = iVar39 * 1000;
              iVar40 = iVar40 * 1000;
              iVar41 = iVar41 * 1000;
              iVar13 = iVar34 * 1000;
              iVar34 = iVar36 * 1000;
              iVar26 = iVar26 * 1000;
              iVar28 = iVar28 * 1000;
              iVar22 = iVar22 * 1000;
              iVar24 = iVar24 * 1000;
              iVar30 = iVar30 * 1000;
              iVar32 = iVar32 * 1000;
              if (uVar2 != 0) goto LAB_0054e578;
            }
            iVar31 = iVar31 * iVar23 * iVar17 * iVar8;
            iVar33 = iVar33 * iVar25 * iVar19 * iVar9;
            iVar35 = iVar35 * iVar27 * iVar20 * iVar15;
            iVar37 = iVar37 * iVar29 * iVar21 * iVar16;
            auVar18._4_4_ = iVar33;
            auVar18._0_4_ = iVar31;
            auVar18._8_4_ = iVar35;
            auVar18._12_4_ = iVar37;
            auVar6._4_4_ = iVar33;
            auVar6._0_4_ = iVar31;
            auVar6._8_4_ = iVar35;
            auVar6._12_4_ = iVar37;
            auVar18 = NEON_ext(auVar18,auVar6,8,1);
            iVar8 = iVar31 * auVar18._0_4_ * iVar33 * auVar18._4_4_;
            if (uVar4 == uVar12) goto LAB_0054e5c4;
          }
          do {
            uVar12 = uVar12 + 1;
            iVar8 = iVar8 * 10;
          } while ((int)uVar12 < (int)uVar5);
        }
LAB_0054e5c4:
        if (pcVar10 == __s) goto LAB_0054e500;
        goto LAB_0054e5cc;
      }
    }
LAB_0054e610:
    uVar14 = 0;
  }
  if (__s == (char *)0x0) {
    return uVar14;
  }
                    /* try { // try from 0054e618 to 0054e61f has its CatchHandler @ 0054e644 */
  free(__s);
  return uVar14;
}


