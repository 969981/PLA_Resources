/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00119e70; name: FUN_00119e70
 */


long FUN_00119e70(uint *param_1,long param_2,size_t **param_3,size_t param_4,size_t *param_5,
                 long param_6)

{
  size_t **ppsVar1;
  size_t **ppsVar2;
  ushort uVar3;
  char cVar4;
  size_t *__src;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  char *pcVar9;
  size_t **ppsVar10;
  code *pcVar11;
  uint uVar12;
  size_t **ppsVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  char *pcVar17;
  int iVar18;
  uint *puVar19;
  ulong uVar20;
  size_t sVar21;
  long lVar22;
  size_t sVar23;
  size_t **ppsVar24;
  size_t *psVar25;
  size_t *psVar26;
  size_t *psVar27;
  size_t *psVar28;
  size_t *psVar29;
  size_t *local_290 [52];
  size_t local_f0 [16];
  undefined2 local_70;
  uint auStack_6e [3];
  
  if ((param_2 < 2) || ((long)param_4 < 1)) {
    if (param_2 == 1) {
      memset(param_3,(uint)(byte)*param_1,param_4);
      return 1;
    }
    return -1;
  }
  bVar5 = (byte)*param_1;
  puVar8 = (uint *)((long)param_1 + param_2);
  __src = (size_t *)((long)param_1 + 1);
  if (bVar5 == 0) goto LAB_0011a000;
  puVar19 = (uint *)((long)param_1 + 2);
  local_f0[0] = 0;
  local_290[0] = param_5;
  if (puVar8 < puVar19) {
    FUN_0010a430();
    pcVar11 = *(code **)PTR_PTR_043722f8;
    if (pcVar11 == (code *)0x0) goto LAB_0011a688;
    pcVar9 = "OODLE ERROR : corruption : from_ptr+2 <= from_end\n";
    uVar7 = 0x2f;
LAB_0011a680:
    (*pcVar11)(0,"v:/devel/projects/oodle2/core/newlz_arrays.inl",uVar7,pcVar9);
LAB_0011a688:
    FUN_0010a450();
    return -1;
  }
  lVar22 = param_6 - (long)param_5;
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 >> 4 & 7;
    if (bVar5 == 0) {
      uVar20 = (ulong)(ushort)((ushort)*param_1 >> 8) | ((ulong)(ushort)*param_1 & 0xf) << 8;
      goto joined_r0x00119f70;
    }
LAB_00119fa8:
    lVar6 = FUN_00119c60(bVar5,local_290,param_1,puVar8,local_f0,lVar22,param_5,param_6);
    uVar20 = local_f0[0];
joined_r0x00119fc0:
    if (lVar6 < 1) {
      return -1;
    }
    sVar23 = param_2 - lVar6;
    local_f0[0] = uVar20;
    sVar21 = uVar20 + sVar23;
  }
  else {
    if (param_1 + 1 <= puVar8) {
      bVar5 = bVar5 >> 4;
      if (bVar5 != 0) goto LAB_00119fa8;
      puVar19 = (uint *)((long)param_1 + 3);
      uVar12 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      if ((uVar12 & 0xffff) >> 10 != 0) {
        return -1;
      }
      uVar20 = (ulong)((uVar12 >> 0x10 | uVar12 << 0x10) >> 8 & 0x3ffff);
joined_r0x00119f70:
      if (lVar22 < (long)uVar20) {
        return -1;
      }
      if (puVar8 < (uint *)((long)puVar19 + uVar20)) {
        return -1;
      }
      memmove(param_5,puVar19,uVar20);
      lVar6 = (long)((long)puVar19 + uVar20) - (long)param_1;
      goto joined_r0x00119fc0;
    }
    if ((uint *)((long)param_1 + 3U) != puVar8) {
      return -1;
    }
    if ((bVar5 != 0 || *(char *)((long)param_1 + 1) != '\0') || *(char *)puVar19 != '\0') {
      FUN_0010a430();
      pcVar11 = *(code **)PTR_PTR_043722f8;
      if (pcVar11 == (code *)0x0) goto LAB_0011a688;
      pcVar9 = "OODLE ERROR : corruption : header == 0\n";
      uVar7 = 0x72;
      goto LAB_0011a680;
    }
    local_290[0] = (size_t *)0x0;
    lVar6 = 3;
    local_f0[0] = 0;
    sVar23 = param_2 - 3;
    sVar21 = sVar23;
  }
  if (lVar22 < (long)sVar21) {
    return -1;
  }
  memcpy((char *)((long)local_290[0] + local_f0[0]),(void *)((long)param_1 + lVar6),sVar23);
  puVar8 = (uint *)((long)local_290[0] + sVar23 + local_f0[0]);
  __src = local_290[0];
LAB_0011a000:
  sVar23 = param_4;
  if (param_4 < 0x128) {
    sVar23 = 0x127;
  }
  psVar28 = (size_t *)0x0;
  psVar29 = (size_t *)0x0;
  ppsVar1 = (size_t **)((long)param_3 + param_4);
  ppsVar10 = (size_t **)((long)param_3 + (sVar23 - 0x127));
  ppsVar24 = param_3;
  if ((param_3 < ppsVar10) && (0x70 < (long)puVar8 - (long)__src)) {
    psVar28 = (size_t *)0x0;
    psVar29 = (size_t *)0x0;
    do {
      bVar5 = (byte)*(uint *)((long)puVar8 - 1U);
      puVar19 = puVar8;
      if (bVar5 - 1 < 0x2f) {
LAB_0011a12c:
        if (bVar5 < 0x10) {
LAB_0011a1ac:
          if (bVar5 == 1) {
            cVar4 = (char)*__src;
            psVar28 = (size_t *)
                      CONCAT17(cVar4,CONCAT16(cVar4,CONCAT15(cVar4,CONCAT14(cVar4,CONCAT13(cVar4,
                                                  CONCAT12(cVar4,CONCAT11(cVar4,cVar4)))))));
            psVar29 = (size_t *)
                      CONCAT17(cVar4,CONCAT16(cVar4,CONCAT15(cVar4,CONCAT14(cVar4,CONCAT13(cVar4,
                                                  CONCAT12(cVar4,CONCAT11(cVar4,cVar4)))))));
            __src = (size_t *)((long)__src + 1);
            puVar8 = (uint *)((long)puVar19 - 1);
          }
          else {
            puVar8 = (uint *)((long)puVar19 - 2);
            uVar3 = (ushort)*puVar8;
            if (bVar5 < 9) {
              uVar12 = (uint)uVar3;
              uVar20 = (ulong)(uVar12 * 0x40 - 0x7fc0);
              if ((long)puVar8 - (long)__src < (long)uVar20) {
                return -1;
              }
              if ((long)ppsVar1 - (long)ppsVar24 < (long)uVar20) {
                return -1;
              }
              psVar26 = (size_t *)*__src;
              uVar15 = (ulong)(uint)-(int)ppsVar24 & 0xf;
              pcVar9 = (char *)((long)__src + uVar15);
              puVar14 = (undefined8 *)((long)ppsVar24 + uVar15);
              iVar18 = uVar12 - 0x200;
              ppsVar24[1] = (size_t *)__src[1];
              *ppsVar24 = psVar26;
              uVar7 = *(undefined8 *)pcVar9;
              puVar14[1] = *(undefined8 *)(pcVar9 + 8);
              *puVar14 = uVar7;
              uVar7 = *(undefined8 *)(pcVar9 + 0x10);
              puVar14[3] = *(undefined8 *)(pcVar9 + 0x18);
              puVar14[2] = uVar7;
              uVar7 = *(undefined8 *)(pcVar9 + 0x20);
              puVar14[5] = *(undefined8 *)(pcVar9 + 0x28);
              puVar14[4] = uVar7;
              if (iVar18 != 0) {
                pcVar17 = pcVar9;
                if ((uVar3 & 1) != 0) {
                  uVar7 = *(undefined8 *)(pcVar9 + 0x30);
                  iVar18 = uVar12 - 0x201;
                  puVar14[7] = *(undefined8 *)(pcVar9 + 0x38);
                  puVar14[6] = uVar7;
                  pcVar17 = pcVar9 + 0x40;
                  uVar7 = *(undefined8 *)pcVar17;
                  puVar14[9] = *(undefined8 *)(pcVar9 + 0x48);
                  puVar14[8] = uVar7;
                  uVar7 = *(undefined8 *)(pcVar9 + 0x50);
                  puVar14[0xb] = *(undefined8 *)(pcVar9 + 0x58);
                  puVar14[10] = uVar7;
                  uVar7 = *(undefined8 *)(pcVar9 + 0x60);
                  puVar14[0xd] = *(undefined8 *)(pcVar9 + 0x68);
                  puVar14[0xc] = uVar7;
                  puVar14 = puVar14 + 8;
                }
                if (uVar3 != 0x201) {
                  pcVar17 = pcVar17 + 0x50;
                  puVar14 = puVar14 + 10;
                  do {
                    uVar7 = *(undefined8 *)(pcVar17 + -0x20);
                    puVar14[-3] = *(undefined8 *)(pcVar17 + -0x18);
                    puVar14[-4] = uVar7;
                    uVar7 = *(undefined8 *)(pcVar17 + -0x10);
                    puVar14[-1] = *(undefined8 *)(pcVar17 + -8);
                    puVar14[-2] = uVar7;
                    uVar7 = *(undefined8 *)pcVar17;
                    iVar18 = iVar18 + -2;
                    puVar14[1] = *(undefined8 *)(pcVar17 + 8);
                    *puVar14 = uVar7;
                    uVar7 = *(undefined8 *)(pcVar17 + 0x10);
                    puVar14[3] = *(undefined8 *)(pcVar17 + 0x18);
                    puVar14[2] = uVar7;
                    uVar7 = *(undefined8 *)(pcVar17 + 0x20);
                    puVar14[5] = *(undefined8 *)(pcVar17 + 0x28);
                    puVar14[4] = uVar7;
                    uVar7 = *(undefined8 *)(pcVar17 + 0x30);
                    puVar14[7] = *(undefined8 *)(pcVar17 + 0x38);
                    puVar14[6] = uVar7;
                    uVar7 = *(undefined8 *)(pcVar17 + 0x40);
                    puVar14[9] = *(undefined8 *)(pcVar17 + 0x48);
                    puVar14[8] = uVar7;
                    pcVar9 = pcVar17 + 0x58;
                    uVar7 = *(undefined8 *)(pcVar17 + 0x50);
                    pcVar17 = pcVar17 + 0x80;
                    puVar14[0xb] = *(undefined8 *)pcVar9;
                    puVar14[10] = uVar7;
                    puVar14 = puVar14 + 0x10;
                  } while (iVar18 != 0);
                }
              }
              __src = (size_t *)((long)__src + uVar20);
              psVar26 = (size_t *)__src[-2];
              ppsVar24 = (size_t **)((long)ppsVar24 + uVar20);
              ppsVar24[-1] = (size_t *)__src[-1];
              ppsVar24[-2] = psVar26;
            }
            else {
              uVar20 = (ulong)((uint)uVar3 * 0x80 - 0x47f80);
              if ((long)ppsVar1 - (long)ppsVar24 < (long)uVar20) {
                return -1;
              }
              ppsVar2 = (size_t **)((long)ppsVar24 + uVar20);
              ppsVar24[1] = psVar29;
              *ppsVar24 = psVar28;
              ppsVar13 = (size_t **)((long)ppsVar24 + 0xfU & 0xfffffffffffffff0);
              ppsVar2[-7] = psVar29;
              ppsVar2[-8] = psVar28;
              ppsVar2[-1] = psVar29;
              ppsVar2[-2] = psVar28;
              ppsVar2[-5] = psVar29;
              ppsVar2[-6] = psVar28;
              ppsVar2[-3] = psVar29;
              ppsVar2[-4] = psVar28;
              do {
                ppsVar13[1] = psVar29;
                *ppsVar13 = psVar28;
                ppsVar13[3] = psVar29;
                ppsVar13[2] = psVar28;
                ppsVar13[5] = psVar29;
                ppsVar13[4] = psVar28;
                ppsVar13[7] = psVar29;
                ppsVar13[6] = psVar28;
                ppsVar13 = ppsVar13 + 8;
                ppsVar24 = ppsVar2;
              } while (ppsVar13 < ppsVar2 + -8);
            }
          }
        }
        else {
LAB_0011a134:
          puVar8 = (uint *)((long)puVar19 - 2);
          uVar12 = *puVar8;
          psVar26 = (size_t *)*__src;
          ppsVar24[1] = (size_t *)__src[1];
          *ppsVar24 = psVar26;
          psVar26 = (size_t *)__src[2];
          uVar20 = (ulong)(ushort)uVar12 & 0x3f;
          ppsVar24[3] = (size_t *)__src[3];
          ppsVar24[2] = psVar26;
          psVar27 = (size_t *)__src[4];
          uVar12 = (ushort)uVar12 - 0x1000 >> 6;
          psVar26 = (size_t *)((long)ppsVar24 + uVar20);
          ppsVar24[5] = (size_t *)__src[5];
          ppsVar24[4] = psVar27;
          psVar27 = __src + 7;
          psVar25 = (size_t *)__src[6];
          __src = (size_t *)((long)__src + uVar20);
          ppsVar24[7] = (size_t *)*psVar27;
          ppsVar24[6] = psVar25;
          psVar26[1] = (size_t)psVar29;
          *psVar26 = (size_t)psVar28;
          psVar26[3] = (size_t)psVar29;
          psVar26[2] = (size_t)psVar28;
          psVar26[5] = (size_t)psVar29;
          psVar26[4] = (size_t)psVar28;
          if (0x30 < uVar12) {
            uVar20 = (long)psVar26 + 0xfU & 0xfffffffffffffff0;
            *(size_t **)(uVar20 + 0x28) = psVar29;
            *(size_t **)(uVar20 + 0x20) = psVar28;
            *(size_t **)(uVar20 + 0x38) = psVar29;
            *(size_t **)(uVar20 + 0x30) = psVar28;
            *(size_t **)(uVar20 + 0x48) = psVar29;
            *(size_t **)(uVar20 + 0x40) = psVar28;
            *(size_t **)(uVar20 + 0x58) = psVar29;
            *(size_t **)(uVar20 + 0x50) = psVar28;
            *(size_t **)(uVar20 + 0x68) = psVar29;
            *(size_t **)(uVar20 + 0x60) = psVar28;
            *(size_t **)(uVar20 + 0x78) = psVar29;
            *(size_t **)(uVar20 + 0x70) = psVar28;
          }
          ppsVar24 = (size_t **)((long)psVar26 + (ulong)uVar12);
        }
      }
      else {
        psVar27 = __src + 1;
        psVar25 = (size_t *)*__src;
        uVar20 = (ulong)(0xf - bVar5) & 0xf;
        psVar26 = (size_t *)((long)ppsVar24 + uVar20);
        __src = (size_t *)((long)__src + uVar20);
        ppsVar24[1] = (size_t *)*psVar27;
        *ppsVar24 = psVar25;
        psVar26[1] = (size_t)psVar29;
        *psVar26 = (size_t)psVar28;
        ppsVar24 = (size_t **)((long)psVar26 + (ulong)(bVar5 >> 4));
        puVar19 = (uint *)((long)puVar8 - 2);
        bVar5 = (byte)*puVar19;
        puVar16 = (uint *)((long)puVar8 - 1U);
        if (bVar5 - 1 < 0x2f) {
LAB_0011a128:
          puVar19 = puVar16;
          goto LAB_0011a12c;
        }
        psVar27 = __src + 1;
        psVar25 = (size_t *)*__src;
        uVar20 = (ulong)(0xf - bVar5) & 0xf;
        psVar26 = (size_t *)((long)ppsVar24 + uVar20);
        __src = (size_t *)((long)__src + uVar20);
        ppsVar24[1] = (size_t *)*psVar27;
        *ppsVar24 = psVar25;
        psVar26[1] = (size_t)psVar29;
        *psVar26 = (size_t)psVar28;
        ppsVar24 = (size_t **)((long)psVar26 + (ulong)(bVar5 >> 4));
        puVar16 = (uint *)((long)puVar8 - 3);
        bVar5 = (byte)*puVar16;
        if (bVar5 - 1 < 0x2f) {
          if (bVar5 < 0x10) goto LAB_0011a1ac;
          goto LAB_0011a134;
        }
        psVar27 = __src + 1;
        psVar25 = (size_t *)*__src;
        uVar20 = (ulong)(0xf - bVar5) & 0xf;
        psVar26 = (size_t *)((long)ppsVar24 + uVar20);
        __src = (size_t *)((long)__src + uVar20);
        ppsVar24[1] = (size_t *)*psVar27;
        *ppsVar24 = psVar25;
        psVar26[1] = (size_t)psVar29;
        *psVar26 = (size_t)psVar28;
        ppsVar24 = (size_t **)((long)psVar26 + (ulong)(bVar5 >> 4));
        puVar8 = puVar8 + -1;
        bVar5 = (byte)*puVar8;
        if (bVar5 - 1 < 0x2f) goto LAB_0011a128;
        psVar27 = __src + 1;
        psVar25 = (size_t *)*__src;
        uVar20 = (ulong)(0xf - bVar5) & 0xf;
        psVar26 = (size_t *)((long)ppsVar24 + uVar20);
        __src = (size_t *)((long)__src + uVar20);
        ppsVar24[1] = (size_t *)*psVar27;
        *ppsVar24 = psVar25;
        psVar26[1] = (size_t)psVar29;
        *psVar26 = (size_t)psVar28;
        ppsVar24 = (size_t **)((long)psVar26 + (ulong)(bVar5 >> 4));
      }
    } while ((ppsVar24 < ppsVar10) && (0x70 < (long)puVar8 - (long)__src));
  }
  if (param_4 < 0xcf) {
    param_4 = 0xce;
  }
  local_70 = 0;
  lVar22 = 0;
  sVar23 = 0;
  param_3 = (size_t **)((long)param_3 + (param_4 - 0xce));
  local_f0[0xe] = 0;
  local_f0[0xf] = 0;
  local_f0[0xc] = 0;
  local_f0[0xd] = 0;
  local_f0[10] = 0;
  local_f0[0xb] = 0;
  local_f0[8] = 0;
  local_f0[9] = 0;
  local_f0[6] = 0;
  local_f0[7] = 0;
  local_f0[4] = 0;
  local_f0[5] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  ppsVar10 = ppsVar1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            sVar21 = (long)puVar8 - (long)__src;
            puVar19 = puVar8;
            if ((long)sVar21 < 0x41) {
              if (lVar22 != 0) {
                return -1;
              }
              memcpy(local_f0,__src,sVar21);
              memcpy((void *)((long)auStack_6e - sVar21),__src,sVar21);
              lVar22 = 0x82 - sVar21;
              __src = local_f0;
              puVar19 = auStack_6e;
            }
            ppsVar13 = ppsVar24;
            if (param_3 <= ppsVar24) {
              if (ppsVar24 == ppsVar10) {
                if ((long)puVar19 - (long)__src != lVar22) {
                  return -1;
                }
                if (sVar23 == 0) {
                  return param_2;
                }
                memcpy((void *)((long)ppsVar1 - sVar23),local_290,sVar23);
                return param_2;
              }
              if (sVar23 != 0) {
                return -1;
              }
              sVar23 = (long)ppsVar10 - (long)ppsVar24;
              ppsVar13 = local_290;
              param_3 = (size_t **)((long)local_290 + sVar23);
              ppsVar10 = param_3;
            }
            puVar8 = (uint *)((long)puVar19 - 1);
            bVar5 = (byte)*puVar8;
            uVar12 = (uint)bVar5;
            if (uVar12 - 1 < 0x2f) break;
            psVar27 = __src + 1;
            psVar25 = (size_t *)*__src;
            uVar20 = (ulong)(0xf - uVar12) & 0xf;
            psVar26 = (size_t *)((long)ppsVar13 + uVar20);
            __src = (size_t *)((long)__src + uVar20);
            ppsVar13[1] = (size_t *)*psVar27;
            *ppsVar13 = psVar25;
            psVar26[1] = (size_t)psVar29;
            *psVar26 = (size_t)psVar28;
            ppsVar24 = (size_t **)((long)psVar26 + (ulong)(bVar5 >> 4));
          }
          if (uVar12 < 0x10) break;
          puVar8 = (uint *)((long)puVar19 - 2);
          uVar12 = *puVar8;
          psVar26 = (size_t *)*__src;
          ppsVar13[1] = (size_t *)__src[1];
          *ppsVar13 = psVar26;
          psVar26 = (size_t *)__src[2];
          uVar20 = (ulong)(ushort)uVar12 & 0x3f;
          ppsVar13[3] = (size_t *)__src[3];
          ppsVar13[2] = psVar26;
          psVar27 = (size_t *)__src[4];
          uVar12 = (ushort)uVar12 - 0x1000 >> 6;
          psVar26 = (size_t *)((long)ppsVar13 + uVar20);
          ppsVar13[5] = (size_t *)__src[5];
          ppsVar13[4] = psVar27;
          psVar27 = __src + 7;
          psVar25 = (size_t *)__src[6];
          __src = (size_t *)((long)__src + uVar20);
          ppsVar13[7] = (size_t *)*psVar27;
          ppsVar13[6] = psVar25;
          psVar26[1] = (size_t)psVar29;
          *psVar26 = (size_t)psVar28;
          psVar26[3] = (size_t)psVar29;
          psVar26[2] = (size_t)psVar28;
          psVar26[5] = (size_t)psVar29;
          psVar26[4] = (size_t)psVar28;
          if (0x30 < uVar12) {
            uVar20 = (long)psVar26 + 0xfU & 0xfffffffffffffff0;
            *(size_t **)(uVar20 + 0x28) = psVar29;
            *(size_t **)(uVar20 + 0x20) = psVar28;
            *(size_t **)(uVar20 + 0x38) = psVar29;
            *(size_t **)(uVar20 + 0x30) = psVar28;
            *(size_t **)(uVar20 + 0x48) = psVar29;
            *(size_t **)(uVar20 + 0x40) = psVar28;
            *(size_t **)(uVar20 + 0x58) = psVar29;
            *(size_t **)(uVar20 + 0x50) = psVar28;
            *(size_t **)(uVar20 + 0x68) = psVar29;
            *(size_t **)(uVar20 + 0x60) = psVar28;
            *(size_t **)(uVar20 + 0x78) = psVar29;
            *(size_t **)(uVar20 + 0x70) = psVar28;
          }
          ppsVar24 = (size_t **)((long)psVar26 + (ulong)uVar12);
        }
        if (uVar12 != 1) break;
        cVar4 = (char)*__src;
        psVar28 = (size_t *)
                  CONCAT17(cVar4,CONCAT16(cVar4,CONCAT15(cVar4,CONCAT14(cVar4,CONCAT13(cVar4,
                                                  CONCAT12(cVar4,CONCAT11(cVar4,cVar4)))))));
        psVar29 = (size_t *)
                  CONCAT17(cVar4,CONCAT16(cVar4,CONCAT15(cVar4,CONCAT14(cVar4,CONCAT13(cVar4,
                                                  CONCAT12(cVar4,CONCAT11(cVar4,cVar4)))))));
        __src = (size_t *)((long)__src + 1);
        ppsVar24 = ppsVar13;
      }
      puVar8 = (uint *)((long)puVar19 - 2);
      uVar3 = (ushort)*puVar8;
      if (bVar5 < 9) break;
      uVar20 = (ulong)((uint)uVar3 * 0x80 - 0x47f80);
      if ((long)ppsVar10 - (long)ppsVar13 < (long)uVar20) {
        return -1;
      }
      ppsVar24 = (size_t **)((long)ppsVar13 + uVar20);
      ppsVar13[1] = psVar29;
      *ppsVar13 = psVar28;
      ppsVar13 = (size_t **)((long)ppsVar13 + 0xfU & 0xfffffffffffffff0);
      ppsVar24[-7] = psVar29;
      ppsVar24[-8] = psVar28;
      ppsVar24[-1] = psVar29;
      ppsVar24[-2] = psVar28;
      ppsVar24[-5] = psVar29;
      ppsVar24[-6] = psVar28;
      ppsVar24[-3] = psVar29;
      ppsVar24[-4] = psVar28;
      do {
        ppsVar13[1] = psVar29;
        *ppsVar13 = psVar28;
        ppsVar13[3] = psVar29;
        ppsVar13[2] = psVar28;
        ppsVar13[5] = psVar29;
        ppsVar13[4] = psVar28;
        ppsVar13[7] = psVar29;
        ppsVar13[6] = psVar28;
        ppsVar13 = ppsVar13 + 8;
      } while (ppsVar13 < ppsVar24 + -8);
    }
    uVar12 = (uint)uVar3;
    uVar20 = (ulong)(uVar12 * 0x40 - 0x7fc0);
    if ((long)puVar8 - (long)__src < (long)uVar20) {
      return -1;
    }
    if ((long)ppsVar10 - (long)ppsVar13 < (long)uVar20) break;
    psVar26 = (size_t *)*__src;
    uVar15 = (ulong)(uint)-(int)ppsVar13 & 0xf;
    pcVar9 = (char *)((long)__src + uVar15);
    puVar14 = (undefined8 *)((long)ppsVar13 + uVar15);
    iVar18 = uVar12 - 0x200;
    ppsVar13[1] = (size_t *)__src[1];
    *ppsVar13 = psVar26;
    uVar7 = *(undefined8 *)pcVar9;
    puVar14[1] = *(undefined8 *)(pcVar9 + 8);
    *puVar14 = uVar7;
    uVar7 = *(undefined8 *)(pcVar9 + 0x10);
    puVar14[3] = *(undefined8 *)(pcVar9 + 0x18);
    puVar14[2] = uVar7;
    uVar7 = *(undefined8 *)(pcVar9 + 0x20);
    puVar14[5] = *(undefined8 *)(pcVar9 + 0x28);
    puVar14[4] = uVar7;
    if (iVar18 != 0) {
      pcVar17 = pcVar9;
      if ((uVar3 & 1) != 0) {
        uVar7 = *(undefined8 *)(pcVar9 + 0x30);
        iVar18 = uVar12 - 0x201;
        puVar14[7] = *(undefined8 *)(pcVar9 + 0x38);
        puVar14[6] = uVar7;
        pcVar17 = pcVar9 + 0x40;
        uVar7 = *(undefined8 *)pcVar17;
        puVar14[9] = *(undefined8 *)(pcVar9 + 0x48);
        puVar14[8] = uVar7;
        uVar7 = *(undefined8 *)(pcVar9 + 0x50);
        puVar14[0xb] = *(undefined8 *)(pcVar9 + 0x58);
        puVar14[10] = uVar7;
        uVar7 = *(undefined8 *)(pcVar9 + 0x60);
        puVar14[0xd] = *(undefined8 *)(pcVar9 + 0x68);
        puVar14[0xc] = uVar7;
        puVar14 = puVar14 + 8;
      }
      if (uVar3 != 0x201) {
        puVar14 = puVar14 + 10;
        pcVar17 = pcVar17 + 0x50;
        do {
          uVar7 = *(undefined8 *)(pcVar17 + -0x20);
          puVar14[-3] = *(undefined8 *)(pcVar17 + -0x18);
          puVar14[-4] = uVar7;
          uVar7 = *(undefined8 *)(pcVar17 + -0x10);
          puVar14[-1] = *(undefined8 *)(pcVar17 + -8);
          puVar14[-2] = uVar7;
          uVar7 = *(undefined8 *)pcVar17;
          iVar18 = iVar18 + -2;
          puVar14[1] = *(undefined8 *)(pcVar17 + 8);
          *puVar14 = uVar7;
          uVar7 = *(undefined8 *)(pcVar17 + 0x10);
          puVar14[3] = *(undefined8 *)(pcVar17 + 0x18);
          puVar14[2] = uVar7;
          uVar7 = *(undefined8 *)(pcVar17 + 0x20);
          puVar14[5] = *(undefined8 *)(pcVar17 + 0x28);
          puVar14[4] = uVar7;
          uVar7 = *(undefined8 *)(pcVar17 + 0x30);
          puVar14[7] = *(undefined8 *)(pcVar17 + 0x38);
          puVar14[6] = uVar7;
          uVar7 = *(undefined8 *)(pcVar17 + 0x40);
          puVar14[9] = *(undefined8 *)(pcVar17 + 0x48);
          puVar14[8] = uVar7;
          pcVar9 = pcVar17 + 0x58;
          uVar7 = *(undefined8 *)(pcVar17 + 0x50);
          pcVar17 = pcVar17 + 0x80;
          puVar14[0xb] = *(undefined8 *)pcVar9;
          puVar14[10] = uVar7;
          puVar14 = puVar14 + 0x10;
        } while (iVar18 != 0);
      }
    }
    __src = (size_t *)((long)__src + uVar20);
    psVar26 = (size_t *)__src[-2];
    ppsVar24 = (size_t **)((long)ppsVar13 + uVar20);
    ppsVar24[-1] = (size_t *)__src[-1];
    ppsVar24[-2] = psVar26;
  }
  return -1;
}


