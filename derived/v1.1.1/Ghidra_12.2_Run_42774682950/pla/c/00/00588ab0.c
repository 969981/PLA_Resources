/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00588ab0; name: FUN_00588ab0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00588ab0(undefined8 *param_1,byte *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  void *pvVar7;
  size_t sVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  byte *pbVar12;
  char cVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  int iVar25;
  uint uVar26;
  undefined1 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong local_f0;
  ulong local_e8;
  byte *local_e0;
  char local_d8 [12];
  undefined1 local_cc;
  char local_cb;
  char local_ca;
  undefined1 local_c9;
  char local_c8;
  char local_c7;
  char local_c6;
  char local_c5;
  char local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_80;
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  uint local_70;
  byte local_6c;
  char *local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar28 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar28 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 00588afc to 00588b03 has its CatchHandler @ 0058ad64 */
  FUN_0030ff7c(param_1,uVar28);
                    /* try { // try from 00588b04 to 00588b13 has its CatchHandler @ 0058ad60 */
  FUN_00580474(&local_80,param_5,param_3);
  local_90 = 0;
  local_c0 = CONCAT44((int)local_75,(int)local_74);
  uStack_b8 = CONCAT44((int)local_77,(int)local_76);
  iVar19 = (int)local_78;
  uStack_98 = 0;
  if ((long)local_80 < -0x7ffff894) {
    iVar25 = -0x80000000;
  }
  else if ((long)local_80 < 0x8000076c) {
    iVar25 = (int)local_80 + -0x76c;
  }
  else {
    iVar25 = 0x7fffffff;
  }
  lVar15 = 0x95f;
  if (2 < iVar19) {
    lVar15 = 0x960;
  }
  lVar15 = (long)local_80 % 400 + lVar15;
  lVar29 = SUB168(SEXT816(lVar15) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar15;
  lVar21 = lVar15 + 3;
  if (-1 < lVar15) {
    lVar21 = lVar15;
  }
  lVar15 = ((lVar29 >> 6) - (lVar29 >> 0x3f)) + lVar15 + (lVar21 >> 2) + lVar15 / 400 +
           (long)*(int *)(&DAT_03a34674 + (long)iVar19 * 4) + (long)(int)local_77;
  uVar28 = SUB168(SEXT816(lVar15) * SEXT816(0x4924924924924925),8);
  uVar20 = 0;
  local_b0 = CONCAT44(iVar25,iVar19 + -1);
  if ((2 < iVar19) && ((local_80 & 3) == 0)) {
    if ((long)local_80 % 100 == 0) {
      uVar20 = (uint)((long)local_80 % 400 == 0);
    }
    else {
      uVar20 = 1;
    }
  }
  uStack_a8 = CONCAT44((int)local_77 + uVar20 + *(int *)(&DAT_03a346a8 + (long)iVar19 * 4) + -1,
                       *(undefined4 *)
                        (&DAT_039c3398 +
                        (long)*(int *)(&DAT_03a34658 +
                                      (lVar15 + ((uVar28 >> 1) - ((long)uVar28 >> 0x3f)) * -7) * 4)
                        * 4));
  local_a0 = (ulong)local_6c;
  uVar28 = *(ulong *)(param_2 + 8);
  pbVar12 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar12 = param_2 + 1;
    uVar28 = (ulong)(*param_2 >> 1);
  }
  pbVar2 = pbVar12 + uVar28;
  pbVar32 = pbVar12;
  if (uVar28 != 0) {
    pbVar14 = (byte *)((ulong)&local_f0 | 1);
    pcVar1 = local_c4 + 1;
    pbVar31 = pbVar12;
    do {
      pbVar22 = pbVar2;
      if (pbVar31 != pbVar2) {
        pbVar22 = pbVar31;
        do {
          if (*pbVar22 == 0x25) goto LAB_00588de0;
          pbVar22 = pbVar22 + 1;
        } while (pbVar2 != pbVar22);
        pbVar22 = pbVar2;
      }
LAB_00588de0:
      if (pbVar32 == pbVar31) {
        if ((long)pbVar22 - (long)pbVar31 != 0) {
                    /* try { // try from 00588df0 to 00588dfb has its CatchHandler @ 0058ad94 */
          FUN_002e4094(param_1,pbVar31,(long)pbVar22 - (long)pbVar31);
          pbVar31 = pbVar22;
          pbVar32 = pbVar22;
        }
      }
      if (pbVar22 != pbVar2) {
        pbVar23 = pbVar22;
        do {
          if (*pbVar23 != 0x25) {
            bVar6 = false;
            goto joined_r0x00588e88;
          }
          pbVar23 = pbVar23 + 1;
        } while (pbVar2 != pbVar23);
      }
      bVar6 = true;
      pbVar23 = pbVar2;
joined_r0x00588e88:
      if ((pbVar32 == pbVar31) && (pbVar23 != pbVar31)) {
                    /* try { // try from 00588e48 to 00588e7b has its CatchHandler @ 0058ad98 */
        FUN_002e4094(param_1,pbVar32,(ulong)((long)pbVar23 - (long)pbVar32) >> 1);
        pbVar31 = pbVar32 + ((long)pbVar23 - (long)pbVar32 & 0xfffffffffffffffe);
        pbVar32 = pbVar31;
        if (!(bool)(bVar6 ^ 1) && pbVar31 != pbVar23) {
          pbVar32 = pbVar31 + 1;
          FUN_002e6a9c(param_1,*pbVar31);
        }
      }
      pbVar31 = pbVar23;
      if ((bVar6) || (((int)pbVar23 - (int)pbVar22 & 1U) == 0)) goto joined_r0x00589c3c;
      bVar3 = *pbVar23;
      pvVar7 = memchr("YmdeHMSzZs%",(uint)bVar3,0xc);
      if (pvVar7 == (void *)0x0) {
        if (bVar3 == 0x45) {
          pbVar31 = pbVar23 + 1;
          if (pbVar31 == pbVar2) break;
          bVar3 = *pbVar31;
          uVar20 = (uint)bVar3;
          if (bVar3 == 0x2a) {
            pbVar22 = pbVar23 + 2;
            if (pbVar22 == pbVar2) goto LAB_005896bc;
            if (*pbVar22 != 0x7a) {
              if ((*pbVar22 != 0x66) && (*pbVar22 != 0x53)) goto LAB_005896bc;
              pbVar31 = pbVar23 + -1;
              uVar16 = (long)pbVar31 - (long)pbVar32;
              if (uVar16 != 0) {
                local_e8 = 0;
                local_e0 = (byte *)0x0;
                local_f0 = 0;
                if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac80 to 0058ac87 has its CatchHandler @ 0058acac */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar16 < 0x17) {
                  local_f0 = (ulong)(byte)((int)uVar16 << 1);
                  pbVar24 = pbVar14;
                  if (0x3f < uVar16) goto LAB_0058a060;
LAB_0058a10c:
                  do {
                    pbVar34 = pbVar32 + 1;
                    pbVar33 = pbVar24 + 1;
                    *pbVar24 = *pbVar32;
                    pbVar24 = pbVar33;
                    pbVar32 = pbVar34;
                  } while (pbVar31 != pbVar34);
                }
                else {
                  uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                  pbVar24 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                  local_f0 = uVar30 | 1;
                  local_e8 = uVar16;
                  local_e0 = pbVar24;
                  if (uVar16 < 0x40) goto LAB_0058a10c;
LAB_0058a060:
                  if (pbVar24 < pbVar31) {
                    if (pbVar32 < pbVar24 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_0058a10c;
                  }
                  uVar10 = uVar16 & 0xffffffffffffffc0;
                  uVar30 = (uVar10 - 0x40 >> 6) + 1;
                  lVar15 = 0;
                  uVar18 = uVar30 & 1;
                  if (uVar10 - 0x40 != 0) {
                    lVar21 = uVar30 - uVar18;
                    do {
                      pbVar33 = pbVar32 + lVar15 + 0x40;
                      pbVar34 = pbVar24 + lVar15 + 0x70;
                      lVar15 = lVar15 + 0x80;
                      uVar35 = *(undefined8 *)(pbVar33 + -0x40);
                      uVar37 = *(undefined8 *)(pbVar33 + -0x28);
                      uVar36 = *(undefined8 *)(pbVar33 + -0x30);
                      uVar39 = *(undefined8 *)(pbVar33 + -0x18);
                      uVar38 = *(undefined8 *)(pbVar33 + -0x20);
                      uVar41 = *(undefined8 *)(pbVar33 + -8);
                      uVar40 = *(undefined8 *)(pbVar33 + -0x10);
                      *(undefined8 *)(pbVar34 + -0x68) = *(undefined8 *)(pbVar33 + -0x38);
                      *(undefined8 *)(pbVar34 + -0x70) = uVar35;
                      *(undefined8 *)(pbVar34 + -0x58) = uVar37;
                      *(undefined8 *)(pbVar34 + -0x60) = uVar36;
                      lVar21 = lVar21 + -2;
                      *(undefined8 *)(pbVar34 + -0x48) = uVar39;
                      *(undefined8 *)(pbVar34 + -0x50) = uVar38;
                      *(undefined8 *)(pbVar34 + -0x38) = uVar41;
                      *(undefined8 *)(pbVar34 + -0x40) = uVar40;
                      uVar35 = *(undefined8 *)pbVar33;
                      uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                      uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                      uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                      uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                      uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                      uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                      *(undefined8 *)(pbVar34 + -0x28) = *(undefined8 *)(pbVar33 + 8);
                      *(undefined8 *)(pbVar34 + -0x30) = uVar35;
                      *(undefined8 *)(pbVar34 + -0x18) = uVar37;
                      *(undefined8 *)(pbVar34 + -0x20) = uVar36;
                      *(undefined8 *)(pbVar34 + -8) = uVar39;
                      *(undefined8 *)(pbVar34 + -0x10) = uVar38;
                      *(undefined8 *)(pbVar34 + 8) = uVar41;
                      *(undefined8 *)pbVar34 = uVar40;
                    } while (lVar21 != 0);
                  }
                  pbVar33 = pbVar24 + uVar10;
                  if (uVar18 != 0) {
                    pbVar34 = pbVar32 + lVar15;
                    pbVar24 = pbVar24 + lVar15;
                    uVar35 = *(undefined8 *)pbVar34;
                    uVar37 = *(undefined8 *)(pbVar34 + 0x18);
                    uVar36 = *(undefined8 *)(pbVar34 + 0x10);
                    uVar39 = *(undefined8 *)(pbVar34 + 0x28);
                    uVar38 = *(undefined8 *)(pbVar34 + 0x20);
                    uVar41 = *(undefined8 *)(pbVar34 + 0x38);
                    uVar40 = *(undefined8 *)(pbVar34 + 0x30);
                    *(undefined8 *)(pbVar24 + 8) = *(undefined8 *)(pbVar34 + 8);
                    *(undefined8 *)pbVar24 = uVar35;
                    *(undefined8 *)(pbVar24 + 0x18) = uVar37;
                    *(undefined8 *)(pbVar24 + 0x10) = uVar36;
                    *(undefined8 *)(pbVar24 + 0x28) = uVar39;
                    *(undefined8 *)(pbVar24 + 0x20) = uVar38;
                    *(undefined8 *)(pbVar24 + 0x38) = uVar41;
                    *(undefined8 *)(pbVar24 + 0x30) = uVar40;
                  }
                  pbVar24 = pbVar33;
                  pbVar32 = pbVar32 + uVar10;
                  if (uVar10 != uVar16) goto LAB_0058a10c;
                }
                *pbVar33 = 0;
                    /* try { // try from 0058a124 to 0058a133 has its CatchHandler @ 0058acfc */
                FUN_0058add0(param_1,&local_f0,&local_c0);
                if ((local_f0 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_e0);
                }
              }
              lVar15 = *param_4;
              pcVar17 = pcVar1;
              if (lVar15 < 0) {
                if (lVar15 == -0x8000000000000000) {
                  local_c4[0] = '8';
                  uVar20 = 0xd;
                  lVar15 = -0xccccccccccccccc;
                  pcVar17 = local_c4;
                }
                else {
                  uVar20 = 0xe;
                }
                lVar15 = -lVar15;
                bVar6 = true;
              }
              else {
                bVar6 = false;
                uVar20 = 0xf;
              }
              pcVar9 = pcVar17 + -1;
              uVar26 = uVar20 - 1;
              do {
                uVar16 = lVar15 + 9;
                uVar20 = uVar20 - 1;
                pcVar9 = pcVar9 + -1;
                pcVar17 = pcVar17 + -1;
                *pcVar17 = "0123456789"[lVar15 % 10];
                uVar26 = uVar26 - 1;
                lVar15 = lVar15 / 10;
              } while (0x12 < uVar16);
              if (0 < (int)uVar20) {
                pcVar17 = pcVar9 + -(ulong)uVar26;
                memset(pcVar17,0x30,(ulong)uVar20);
              }
              if (bVar6) {
                pcVar17 = pcVar17 + -1;
                *pcVar17 = '-';
              }
              pcVar9 = local_d8;
              do {
                pcVar11 = pcVar9;
                if (pcVar17 + -0x15 == pcVar11) {
                  bVar6 = false;
                  bVar3 = *pbVar22;
                  pcVar11 = pcVar17;
                  goto joined_r0x0058a560;
                }
                pcVar9 = pcVar11 + -1;
              } while (pcVar11[0x14] == '0');
              pcVar11 = pcVar11 + 0x15;
              bVar6 = true;
              bVar3 = *pbVar22;
joined_r0x0058a560:
              if (bVar3 == 0x66) {
                if (pcVar11 == pcVar17) {
                  pcVar17 = pcVar17 + -1;
                  *pcVar17 = '0';
                }
              }
              else if (bVar3 == 0x53) {
                pcVar9 = pcVar17;
                if (bVar6) {
                  pcVar9 = pcVar17 + -1;
                  *pcVar9 = '.';
                }
                iVar19 = ((int)local_74 / 10 + ((int)local_74 >> 0x1f)) -
                         (int)((long)local_74 * 0x66666667 >> 0x3f);
                cVar13 = "0123456789"[(int)local_74 + iVar19 * -10];
                pcVar17 = pcVar9 + -2;
                *pcVar17 = "0123456789"[iVar19 % 10];
                pcVar9[-1] = cVar13;
              }
                    /* try { // try from 0058a5d8 to 0058a5e3 has its CatchHandler @ 0058ad2c */
              FUN_002e4094(param_1,pcVar17,(long)pcVar11 - (long)pcVar17);
              goto LAB_0058a5e4;
            }
            pbVar31 = pbVar23 + -1;
            uVar16 = (long)pbVar31 - (long)pbVar32;
            if (uVar16 != 0) {
              local_e8 = 0;
              local_e0 = (byte *)0x0;
              local_f0 = 0;
              if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac88 to 0058ac8f has its CatchHandler @ 0058aca8 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar16 < 0x17) {
                local_f0 = (ulong)(byte)((int)uVar16 << 1);
                pbVar22 = pbVar14;
                if (0x3f < uVar16) goto LAB_00589de0;
LAB_00589e8c:
                do {
                  pbVar33 = pbVar32 + 1;
                  pbVar24 = pbVar22 + 1;
                  *pbVar22 = *pbVar32;
                  pbVar22 = pbVar24;
                  pbVar32 = pbVar33;
                } while (pbVar31 != pbVar33);
              }
              else {
                uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                local_f0 = uVar30 | 1;
                local_e8 = uVar16;
                local_e0 = pbVar22;
                if (uVar16 < 0x40) goto LAB_00589e8c;
LAB_00589de0:
                if (pbVar22 < pbVar31) {
                  if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_00589e8c;
                }
                uVar10 = uVar16 & 0xffffffffffffffc0;
                uVar30 = (uVar10 - 0x40 >> 6) + 1;
                lVar15 = 0;
                uVar18 = uVar30 & 1;
                if (uVar10 - 0x40 != 0) {
                  lVar21 = uVar30 - uVar18;
                  do {
                    pbVar24 = pbVar32 + lVar15 + 0x40;
                    pbVar33 = pbVar22 + lVar15 + 0x70;
                    lVar15 = lVar15 + 0x80;
                    uVar35 = *(undefined8 *)(pbVar24 + -0x40);
                    uVar37 = *(undefined8 *)(pbVar24 + -0x28);
                    uVar36 = *(undefined8 *)(pbVar24 + -0x30);
                    uVar39 = *(undefined8 *)(pbVar24 + -0x18);
                    uVar38 = *(undefined8 *)(pbVar24 + -0x20);
                    uVar41 = *(undefined8 *)(pbVar24 + -8);
                    uVar40 = *(undefined8 *)(pbVar24 + -0x10);
                    *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar24 + -0x38);
                    *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                    *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                    *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                    lVar21 = lVar21 + -2;
                    *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                    *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                    *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                    *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                    uVar35 = *(undefined8 *)pbVar24;
                    uVar37 = *(undefined8 *)(pbVar24 + 0x18);
                    uVar36 = *(undefined8 *)(pbVar24 + 0x10);
                    uVar39 = *(undefined8 *)(pbVar24 + 0x28);
                    uVar38 = *(undefined8 *)(pbVar24 + 0x20);
                    uVar41 = *(undefined8 *)(pbVar24 + 0x38);
                    uVar40 = *(undefined8 *)(pbVar24 + 0x30);
                    *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar24 + 8);
                    *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                    *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                    *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                    *(undefined8 *)(pbVar33 + -8) = uVar39;
                    *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                    *(undefined8 *)(pbVar33 + 8) = uVar41;
                    *(undefined8 *)pbVar33 = uVar40;
                  } while (lVar21 != 0);
                }
                pbVar24 = pbVar22 + uVar10;
                if (uVar18 != 0) {
                  pbVar33 = pbVar32 + lVar15;
                  pbVar22 = pbVar22 + lVar15;
                  uVar35 = *(undefined8 *)pbVar33;
                  uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                  uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                  uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                  uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                  uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                  uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                  *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                  *(undefined8 *)pbVar22 = uVar35;
                  *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                  *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                  *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                  *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                  *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                  *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                }
                pbVar22 = pbVar24;
                pbVar32 = pbVar32 + uVar10;
                if (uVar10 != uVar16) goto LAB_00589e8c;
              }
              *pbVar24 = 0;
                    /* try { // try from 00589ea4 to 00589eb3 has its CatchHandler @ 0058ad0c */
              FUN_0058add0(param_1,&local_f0,&local_c0);
              if ((local_f0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_e0);
              }
            }
            local_c6 = ':';
            local_c9 = 0x3a;
            uVar20 = -local_70;
            if (-1 < (int)local_70) {
              uVar20 = local_70;
            }
            uVar26 = uVar20 / 0x3c + (uVar20 / 0xe10) * -0x3c & 0xff;
            local_ca = "0123456789"[uVar20 / 0xe10 + (uVar20 / 36000) * -10];
            local_c4[0] = "0123456789"[(uVar20 % 0x3c) % 10];
            local_c7 = "0123456789"[uVar26 % 10];
            local_cb = "0123456789"[uVar20 / 36000 + (uVar20 / 360000) * -10];
            local_c5 = "0123456789"[(uVar20 % 0x3c) / 10];
            local_c8 = "0123456789"[uVar26 / 10 + (uVar26 / 100) * -10];
            local_cc = 0x2d;
            if (-1 < (int)local_70) {
              local_cc = 0x2b;
            }
                    /* try { // try from 00589fd4 to 00589fe3 has its CatchHandler @ 0058ad90 */
            FUN_002e4094(param_1,&local_cc,9);
          }
          else {
            if (bVar3 != 0x34) {
              if (uVar20 != 0x7a) goto LAB_005896bc;
              pbVar31 = pbVar23 + -1;
              uVar16 = (long)pbVar31 - (long)pbVar32;
              if (uVar16 != 0) {
                local_e8 = 0;
                local_e0 = (byte *)0x0;
                local_f0 = 0;
                if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac70 to 0058ac77 has its CatchHandler @ 0058acb4 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar16 < 0x17) {
                  local_f0 = (ulong)(byte)((int)uVar16 << 1);
                  pbVar22 = pbVar14;
                  if (0x3f < uVar16) goto LAB_005897ec;
LAB_00589898:
                  do {
                    pbVar33 = pbVar32 + 1;
                    pbVar24 = pbVar22 + 1;
                    *pbVar22 = *pbVar32;
                    pbVar22 = pbVar24;
                    pbVar32 = pbVar33;
                  } while (pbVar31 != pbVar33);
                }
                else {
                  uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                  pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                  local_f0 = uVar30 | 1;
                  local_e8 = uVar16;
                  local_e0 = pbVar22;
                  if (uVar16 < 0x40) goto LAB_00589898;
LAB_005897ec:
                  if (pbVar22 < pbVar31) {
                    if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_00589898;
                  }
                  uVar10 = uVar16 & 0xffffffffffffffc0;
                  uVar30 = (uVar10 - 0x40 >> 6) + 1;
                  lVar15 = 0;
                  uVar18 = uVar30 & 1;
                  if (uVar10 - 0x40 != 0) {
                    lVar21 = uVar30 - uVar18;
                    do {
                      pbVar24 = pbVar32 + lVar15 + 0x40;
                      pbVar33 = pbVar22 + lVar15 + 0x70;
                      lVar15 = lVar15 + 0x80;
                      uVar35 = *(undefined8 *)(pbVar24 + -0x40);
                      uVar37 = *(undefined8 *)(pbVar24 + -0x28);
                      uVar36 = *(undefined8 *)(pbVar24 + -0x30);
                      uVar39 = *(undefined8 *)(pbVar24 + -0x18);
                      uVar38 = *(undefined8 *)(pbVar24 + -0x20);
                      uVar41 = *(undefined8 *)(pbVar24 + -8);
                      uVar40 = *(undefined8 *)(pbVar24 + -0x10);
                      *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar24 + -0x38);
                      *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                      *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                      *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                      lVar21 = lVar21 + -2;
                      *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                      *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                      *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                      *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                      uVar35 = *(undefined8 *)pbVar24;
                      uVar37 = *(undefined8 *)(pbVar24 + 0x18);
                      uVar36 = *(undefined8 *)(pbVar24 + 0x10);
                      uVar39 = *(undefined8 *)(pbVar24 + 0x28);
                      uVar38 = *(undefined8 *)(pbVar24 + 0x20);
                      uVar41 = *(undefined8 *)(pbVar24 + 0x38);
                      uVar40 = *(undefined8 *)(pbVar24 + 0x30);
                      *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar24 + 8);
                      *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                      *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                      *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                      *(undefined8 *)(pbVar33 + -8) = uVar39;
                      *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                      *(undefined8 *)(pbVar33 + 8) = uVar41;
                      *(undefined8 *)pbVar33 = uVar40;
                    } while (lVar21 != 0);
                  }
                  pbVar24 = pbVar22 + uVar10;
                  if (uVar18 != 0) {
                    pbVar33 = pbVar32 + lVar15;
                    pbVar22 = pbVar22 + lVar15;
                    uVar35 = *(undefined8 *)pbVar33;
                    uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                    uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                    uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                    uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                    uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                    uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                    *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                    *(undefined8 *)pbVar22 = uVar35;
                    *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                    *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                    *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                    *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                    *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                    *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                  }
                  pbVar22 = pbVar24;
                  pbVar32 = pbVar32 + uVar10;
                  if (uVar10 != uVar16) goto LAB_00589898;
                }
                *pbVar24 = 0;
                    /* try { // try from 005898b0 to 005898bf has its CatchHandler @ 0058ad40 */
                FUN_0058add0(param_1,&local_f0,&local_c0);
                if ((local_f0 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_e0);
                }
              }
              uVar20 = -local_70;
              if (-1 < (int)local_70) {
                uVar20 = local_70;
              }
              uVar5 = uVar20 / 0x3c + (uVar20 / 0xe10) * -0x3c;
              uVar26 = uVar5 & 0xff;
              local_c7 = "0123456789"[uVar20 / 0xe10 + (uVar20 / 36000) * -10];
              local_c4[0] = "0123456789"[uVar26 % 10];
              local_c6 = ':';
              local_c8 = "0123456789"[uVar20 / 36000 + (uVar20 / 360000) * -10];
              local_c5 = "0123456789"[uVar26 / 10 + (uVar26 / 100) * -10];
              uVar27 = 0x2d;
              if (-1 < (int)local_70) {
                uVar27 = 0x2b;
              }
              local_c9 = 0x2b;
              if (uVar5 != 0 || 0xe0f < uVar20) {
                local_c9 = uVar27;
              }
                    /* try { // try from 005899b8 to 005899c7 has its CatchHandler @ 0058ad90 */
              FUN_002e4094(param_1,&local_c9,6);
              goto LAB_00589bd4;
            }
            if ((pbVar23 + 2 == pbVar2) || (pbVar23[2] != 0x59)) {
LAB_005896bc:
              if (uVar20 - 0x30 < 10) {
                if (uVar20 != 0x2d) {
                  pvVar7 = memchr("0123456789",uVar20,0xb);
                  pbVar22 = pbVar31;
                }
                else {
                  pbVar22 = pbVar23 + 2;
                  pvVar7 = memchr("0123456789",(uint)*pbVar22,0xb);
                }
                bVar6 = uVar20 == 0x2d;
                if (pvVar7 != (void *)0x0) {
                  uVar20 = 0;
                  pbVar24 = pbVar22;
                  do {
                    uVar26 = (int)pvVar7 + 0xfc5cb924;
                    if (9 < (int)uVar26) break;
                    if ((int)uVar20 < -0xccccccc) goto joined_r0x00589c3c;
                    if ((int)(uVar20 * 10) < (int)(uVar26 | 0x80000000)) goto joined_r0x00589c3c;
                    pbVar24 = pbVar24 + 1;
                    uVar20 = uVar20 * 10 - uVar26;
                    pvVar7 = memchr("0123456789",(uint)*pbVar24,0xb);
                  } while (pvVar7 != (void *)0x0);
                  if (pbVar24 != pbVar22) {
                    if (bVar6 || uVar20 != 0x80000000) {
                      if (uVar20 == 0) {
                        if (bVar6) goto joined_r0x00589c3c;
                      }
                      uVar26 = -uVar20;
                      if (bVar6) {
                        uVar26 = uVar20;
                      }
                      if (uVar26 < 0x401) {
                        if (*pbVar24 != 0x66) {
                          if (*pbVar24 != 0x53) goto joined_r0x00589c3c;
                        }
                        pbVar31 = pbVar23 + -1;
                        uVar16 = (long)pbVar31 - (long)pbVar32;
                        if (uVar16 != 0) {
                          local_e8 = 0;
                          local_e0 = (byte *)0x0;
                          local_f0 = 0;
                          if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac90 to 0058ac97 has its CatchHandler @ 0058aca4 */
                    /* WARNING: Subroutine does not return */
                            std::__basic_string_common<true>::__throw_length_error();
                          }
                          if (uVar16 < 0x17) {
                            local_f0 = (ulong)(byte)((int)uVar16 << 1);
                            pbVar22 = pbVar14;
                            if (0x3f < uVar16) goto LAB_0058a89c;
LAB_0058a948:
                            do {
                              pbVar33 = pbVar32 + 1;
                              pbVar23 = pbVar22 + 1;
                              *pbVar22 = *pbVar32;
                              pbVar22 = pbVar23;
                              pbVar32 = pbVar33;
                            } while (pbVar31 != pbVar33);
                          }
                          else {
                            pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078);
                            local_f0 = uVar16 + 0x10 & 0xfffffffffffffff0 | 1;
                            local_e8 = uVar16;
                            local_e0 = pbVar22;
                            if (uVar16 < 0x40) goto LAB_0058a948;
LAB_0058a89c:
                            if (pbVar22 < pbVar31) {
                              if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32)
                              goto LAB_0058a948;
                            }
                            uVar10 = uVar16 & 0xffffffffffffffc0;
                            uVar30 = (uVar10 - 0x40 >> 6) + 1;
                            lVar15 = 0;
                            uVar18 = uVar30 & 1;
                            if (uVar10 - 0x40 != 0) {
                              lVar21 = uVar30 - uVar18;
                              do {
                                pbVar23 = pbVar32 + lVar15 + 0x40;
                                pbVar33 = pbVar22 + lVar15 + 0x70;
                                lVar15 = lVar15 + 0x80;
                                uVar35 = *(undefined8 *)(pbVar23 + -0x40);
                                uVar37 = *(undefined8 *)(pbVar23 + -0x28);
                                uVar36 = *(undefined8 *)(pbVar23 + -0x30);
                                uVar39 = *(undefined8 *)(pbVar23 + -0x18);
                                uVar38 = *(undefined8 *)(pbVar23 + -0x20);
                                uVar41 = *(undefined8 *)(pbVar23 + -8);
                                uVar40 = *(undefined8 *)(pbVar23 + -0x10);
                                *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar23 + -0x38);
                                *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                                *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                                *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                                lVar21 = lVar21 + -2;
                                *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                                *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                                *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                                *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                                uVar35 = *(undefined8 *)pbVar23;
                                uVar37 = *(undefined8 *)(pbVar23 + 0x18);
                                uVar36 = *(undefined8 *)(pbVar23 + 0x10);
                                uVar39 = *(undefined8 *)(pbVar23 + 0x28);
                                uVar38 = *(undefined8 *)(pbVar23 + 0x20);
                                uVar41 = *(undefined8 *)(pbVar23 + 0x38);
                                uVar40 = *(undefined8 *)(pbVar23 + 0x30);
                                *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar23 + 8);
                                *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                                *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                                *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                                *(undefined8 *)(pbVar33 + -8) = uVar39;
                                *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                                *(undefined8 *)(pbVar33 + 8) = uVar41;
                                *(undefined8 *)pbVar33 = uVar40;
                              } while (lVar21 != 0);
                            }
                            pbVar23 = pbVar22 + uVar10;
                            if (uVar18 != 0) {
                              pbVar33 = pbVar32 + lVar15;
                              pbVar22 = pbVar22 + lVar15;
                              uVar35 = *(undefined8 *)pbVar33;
                              uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                              uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                              uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                              uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                              uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                              uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                              *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                              *(undefined8 *)pbVar22 = uVar35;
                              *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                              *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                              *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                              *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                              *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                              *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                            }
                            pbVar22 = pbVar23;
                            pbVar32 = pbVar32 + uVar10;
                            if (uVar10 != uVar16) goto LAB_0058a948;
                          }
                          *pbVar23 = 0;
                    /* try { // try from 0058a960 to 0058a96f has its CatchHandler @ 0058acc8 */
                          FUN_0058add0(param_1,&local_f0,&local_c0);
                          if ((local_f0 & 1) != 0) {
                            FUN_002e2ea0(PTR_LAB_04373088,local_e0);
                          }
                        }
                        pcVar17 = pcVar1;
                        if ((int)uVar26 < 1) {
LAB_0058aab4:
                          pcVar9 = pcVar17;
                          if (*pbVar24 == 0x53) {
                            iVar19 = ((int)local_74 / 10 + ((int)local_74 >> 0x1f)) -
                                     (int)((long)local_74 * 0x66666667 >> 0x3f);
                            cVar13 = "0123456789"[(int)local_74 + iVar19 * -10];
                            pcVar9 = pcVar17 + -2;
                            *pcVar9 = "0123456789"[iVar19 % 10];
                            pcVar17[-1] = cVar13;
                          }
                        }
                        else {
                          pcVar9 = pcVar1;
                          if ((int)uVar26 < 0x13) {
                            lVar15 = *param_4;
                            if (0xf < (int)uVar26) goto LAB_0058a9bc;
                            lVar21 = 0;
                            if (*(long *)(&DAT_03a345a8 + (0xf - (long)(int)uVar26) * 8) != 0) {
                              lVar21 = lVar15 / *(long *)(&DAT_03a345a8 +
                                                         (0xf - (long)(int)uVar26) * 8);
                            }
                            if (lVar21 < 0) goto LAB_0058aa00;
LAB_0058a9f4:
                            bVar6 = false;
                          }
                          else {
                            uVar26 = 0x12;
                            lVar15 = *param_4;
LAB_0058a9bc:
                            lVar21 = *(long *)(&USHORT_03a34530 + (long)(int)uVar26 * 4) * lVar15;
                            if (-1 < lVar21) goto LAB_0058a9f4;
LAB_0058aa00:
                            if (lVar21 == -0x8000000000000000) {
                              local_c4[0] = '8';
                              uVar26 = uVar26 - 2;
                              lVar21 = -0xccccccccccccccc;
                              pcVar9 = local_c4;
                            }
                            else {
                              uVar26 = uVar26 - 1;
                            }
                            lVar21 = -lVar21;
                            bVar6 = true;
                          }
                          pcVar17 = pcVar9 + -1;
                          uVar20 = uVar26 - 1;
                          do {
                            uVar16 = lVar21 + 9;
                            uVar26 = uVar26 - 1;
                            pcVar17 = pcVar17 + -1;
                            pcVar9 = pcVar9 + -1;
                            *pcVar9 = "0123456789"[lVar21 % 10];
                            uVar20 = uVar20 - 1;
                            lVar21 = lVar21 / 10;
                          } while (0x12 < uVar16);
                          if (0 < (int)uVar26) {
                            pcVar9 = pcVar17 + -(ulong)uVar20;
                            memset(pcVar9,0x30,(ulong)uVar26);
                          }
                          if (bVar6) {
                            pcVar9 = pcVar9 + -1;
                            *pcVar9 = '-';
                          }
                          if (*pbVar24 == 0x53) {
                            pcVar17 = pcVar9 + -1;
                            *pcVar17 = '.';
                            goto LAB_0058aab4;
                          }
                        }
                    /* try { // try from 0058ab10 to 0058ab1b has its CatchHandler @ 0058acd8 */
                        FUN_002e4094(param_1,pcVar9,(long)pcVar1 - (long)pcVar9);
                        pbVar31 = pbVar24 + 1;
                        pbVar32 = pbVar31;
                      }
                    }
                  }
                }
              }
              goto joined_r0x00589c3c;
            }
            pbVar31 = pbVar23 + -1;
            uVar16 = (long)pbVar31 - (long)pbVar32;
            if (uVar16 != 0) {
              local_e8 = 0;
              local_e0 = (byte *)0x0;
              local_f0 = 0;
              if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac78 to 0058ac7f has its CatchHandler @ 0058acb0 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar16 < 0x17) {
                local_f0 = (ulong)(byte)((int)uVar16 << 1);
                pbVar22 = pbVar14;
                if (0x3f < uVar16) goto LAB_00589c84;
LAB_00589d30:
                do {
                  pbVar33 = pbVar32 + 1;
                  pbVar24 = pbVar22 + 1;
                  *pbVar22 = *pbVar32;
                  pbVar22 = pbVar24;
                  pbVar32 = pbVar33;
                } while (pbVar31 != pbVar33);
              }
              else {
                uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                local_f0 = uVar30 | 1;
                local_e8 = uVar16;
                local_e0 = pbVar22;
                if (uVar16 < 0x40) goto LAB_00589d30;
LAB_00589c84:
                if (pbVar22 < pbVar31) {
                  if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_00589d30;
                }
                uVar10 = uVar16 & 0xffffffffffffffc0;
                uVar30 = (uVar10 - 0x40 >> 6) + 1;
                lVar15 = 0;
                uVar18 = uVar30 & 1;
                if (uVar10 - 0x40 != 0) {
                  lVar21 = uVar30 - uVar18;
                  do {
                    pbVar24 = pbVar32 + lVar15 + 0x40;
                    pbVar33 = pbVar22 + lVar15 + 0x70;
                    lVar15 = lVar15 + 0x80;
                    uVar35 = *(undefined8 *)(pbVar24 + -0x40);
                    uVar37 = *(undefined8 *)(pbVar24 + -0x28);
                    uVar36 = *(undefined8 *)(pbVar24 + -0x30);
                    uVar39 = *(undefined8 *)(pbVar24 + -0x18);
                    uVar38 = *(undefined8 *)(pbVar24 + -0x20);
                    uVar41 = *(undefined8 *)(pbVar24 + -8);
                    uVar40 = *(undefined8 *)(pbVar24 + -0x10);
                    *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar24 + -0x38);
                    *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                    *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                    *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                    lVar21 = lVar21 + -2;
                    *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                    *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                    *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                    *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                    uVar35 = *(undefined8 *)pbVar24;
                    uVar37 = *(undefined8 *)(pbVar24 + 0x18);
                    uVar36 = *(undefined8 *)(pbVar24 + 0x10);
                    uVar39 = *(undefined8 *)(pbVar24 + 0x28);
                    uVar38 = *(undefined8 *)(pbVar24 + 0x20);
                    uVar41 = *(undefined8 *)(pbVar24 + 0x38);
                    uVar40 = *(undefined8 *)(pbVar24 + 0x30);
                    *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar24 + 8);
                    *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                    *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                    *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                    *(undefined8 *)(pbVar33 + -8) = uVar39;
                    *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                    *(undefined8 *)(pbVar33 + 8) = uVar41;
                    *(undefined8 *)pbVar33 = uVar40;
                  } while (lVar21 != 0);
                }
                pbVar24 = pbVar22 + uVar10;
                if (uVar18 != 0) {
                  pbVar33 = pbVar32 + lVar15;
                  pbVar22 = pbVar22 + lVar15;
                  uVar35 = *(undefined8 *)pbVar33;
                  uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                  uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                  uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                  uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                  uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                  uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                  *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                  *(undefined8 *)pbVar22 = uVar35;
                  *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                  *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                  *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                  *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                  *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                  *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                }
                pbVar22 = pbVar24;
                pbVar32 = pbVar32 + uVar10;
                if (uVar10 != uVar16) goto LAB_00589d30;
              }
              *pbVar24 = 0;
                    /* try { // try from 00589d48 to 00589d57 has its CatchHandler @ 0058ad1c */
              FUN_0058add0(param_1,&local_f0,&local_c0);
              if ((local_f0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_e0);
              }
            }
            pcVar17 = pcVar1;
            if ((long)local_80 < 0) {
              if (local_80 == 0x8000000000000000) {
                local_c4[0] = '8';
                uVar20 = 2;
                uVar16 = 0xf333333333333334;
                pcVar17 = local_c4;
              }
              else {
                uVar20 = 3;
                uVar16 = local_80;
              }
              uVar16 = -uVar16;
              bVar6 = true;
            }
            else {
              bVar6 = false;
              uVar20 = 4;
              uVar16 = local_80;
            }
            pcVar9 = pcVar17 + -1;
            uVar26 = uVar20 - 1;
            do {
              uVar30 = uVar16 + 9;
              uVar20 = uVar20 - 1;
              pcVar9 = pcVar9 + -1;
              pcVar17 = pcVar17 + -1;
              *pcVar17 = "0123456789"[(long)uVar16 % 10];
              uVar26 = uVar26 - 1;
              uVar16 = (long)uVar16 / 10;
            } while (0x12 < uVar30);
            if (0 < (int)uVar20) {
              pcVar17 = pcVar9 + -(ulong)uVar26;
              memset(pcVar17,0x30,(ulong)uVar20);
            }
            if (bVar6) {
              pcVar17 = pcVar17 + -1;
              *pcVar17 = '-';
            }
                    /* try { // try from 0058a210 to 0058a21b has its CatchHandler @ 0058ad90 */
            FUN_002e4094(param_1,pcVar17,(long)pcVar1 - (long)pcVar17);
          }
LAB_0058a5e4:
          pbVar31 = pbVar23 + 3;
          pbVar32 = pbVar31;
        }
        else if (bVar3 == 0x3a) {
          if (pbVar23 + 1 != pbVar2) {
            bVar3 = pbVar23[1];
            if (bVar3 == 0x3a) {
              if (pbVar23 + 2 == pbVar2) goto joined_r0x00589c3c;
              bVar3 = pbVar23[2];
              if (bVar3 == 0x3a) {
                if ((pbVar23 + 3 == pbVar2) || (pbVar23[3] != 0x7a)) goto joined_r0x00589c3c;
                pbVar31 = pbVar23 + -1;
                uVar16 = (long)pbVar31 - (long)pbVar32;
                if (uVar16 != 0) {
                  local_e8 = 0;
                  local_e0 = (byte *)0x0;
                  local_f0 = 0;
                  if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac68 to 0058ac6f has its CatchHandler @ 0058acb8 */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uVar16 < 0x17) {
                    local_f0 = (ulong)(byte)((int)uVar16 << 1);
                    pbVar22 = pbVar14;
                    if (0x3f < uVar16) goto LAB_0058a618;
LAB_0058a6c4:
                    do {
                      pbVar33 = pbVar32 + 1;
                      pbVar24 = pbVar22 + 1;
                      *pbVar22 = *pbVar32;
                      pbVar22 = pbVar24;
                      pbVar32 = pbVar33;
                    } while (pbVar31 != pbVar33);
                  }
                  else {
                    uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                    pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                    local_f0 = uVar30 | 1;
                    local_e8 = uVar16;
                    local_e0 = pbVar22;
                    if (uVar16 < 0x40) goto LAB_0058a6c4;
LAB_0058a618:
                    if (pbVar22 < pbVar31) {
                      if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_0058a6c4;
                    }
                    uVar10 = uVar16 & 0xffffffffffffffc0;
                    uVar30 = (uVar10 - 0x40 >> 6) + 1;
                    lVar15 = 0;
                    uVar18 = uVar30 & 1;
                    if (uVar10 - 0x40 != 0) {
                      lVar21 = uVar30 - uVar18;
                      do {
                        pbVar24 = pbVar32 + lVar15 + 0x40;
                        pbVar33 = pbVar22 + lVar15 + 0x70;
                        lVar15 = lVar15 + 0x80;
                        uVar35 = *(undefined8 *)(pbVar24 + -0x40);
                        uVar37 = *(undefined8 *)(pbVar24 + -0x28);
                        uVar36 = *(undefined8 *)(pbVar24 + -0x30);
                        uVar39 = *(undefined8 *)(pbVar24 + -0x18);
                        uVar38 = *(undefined8 *)(pbVar24 + -0x20);
                        uVar41 = *(undefined8 *)(pbVar24 + -8);
                        uVar40 = *(undefined8 *)(pbVar24 + -0x10);
                        *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar24 + -0x38);
                        *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                        *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                        *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                        lVar21 = lVar21 + -2;
                        *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                        *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                        *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                        *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                        uVar35 = *(undefined8 *)pbVar24;
                        uVar37 = *(undefined8 *)(pbVar24 + 0x18);
                        uVar36 = *(undefined8 *)(pbVar24 + 0x10);
                        uVar39 = *(undefined8 *)(pbVar24 + 0x28);
                        uVar38 = *(undefined8 *)(pbVar24 + 0x20);
                        uVar41 = *(undefined8 *)(pbVar24 + 0x38);
                        uVar40 = *(undefined8 *)(pbVar24 + 0x30);
                        *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar24 + 8);
                        *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                        *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                        *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                        *(undefined8 *)(pbVar33 + -8) = uVar39;
                        *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                        *(undefined8 *)(pbVar33 + 8) = uVar41;
                        *(undefined8 *)pbVar33 = uVar40;
                      } while (lVar21 != 0);
                    }
                    pbVar24 = pbVar22 + uVar10;
                    if (uVar18 != 0) {
                      pbVar33 = pbVar32 + lVar15;
                      pbVar22 = pbVar22 + lVar15;
                      uVar35 = *(undefined8 *)pbVar33;
                      uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                      uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                      uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                      uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                      uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                      uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                      *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                      *(undefined8 *)pbVar22 = uVar35;
                      *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                      *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                      *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                      *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                      *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                      *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                    }
                    pbVar22 = pbVar24;
                    pbVar32 = pbVar32 + uVar10;
                    if (uVar10 != uVar16) goto LAB_0058a6c4;
                  }
                  *pbVar24 = 0;
                    /* try { // try from 0058a6dc to 0058a6eb has its CatchHandler @ 0058acdc */
                  FUN_0058add0(param_1,&local_f0,&local_c0);
                  if ((local_f0 & 1) != 0) {
                    FUN_002e2ea0(PTR_LAB_04373088,local_e0);
                  }
                }
                uVar20 = -local_70;
                if (-1 < (int)local_70) {
                  uVar20 = local_70;
                }
                uVar26 = uVar20 % 0x3c;
                cVar13 = '-';
                if (-1 < (int)local_70) {
                  cVar13 = '+';
                }
                uVar5 = uVar20 / 0x3c + (uVar20 / 0xe10) * -0x3c;
                if (uVar26 == 0) {
                  cVar4 = '+';
                  if (uVar5 != 0 || 0xe0f < uVar20) {
                    cVar4 = cVar13;
                  }
                  cVar13 = cVar4;
                  pcVar17 = pcVar1;
                  if (uVar5 != 0) goto LAB_0058a7cc;
                }
                else {
                  local_c4[0] = "0123456789"[uVar26 % 10];
                  local_c5 = "0123456789"[uVar26 / 10];
                  local_c6 = ':';
                  pcVar17 = &local_c6;
                  if (uVar5 != 0 || uVar26 != 0) {
LAB_0058a7cc:
                    uVar26 = (uVar5 & 0xff) / 10;
                    cVar4 = "0123456789"[(ulong)(uVar5 + uVar26 * -10) & 0xff];
                    pcVar17[-3] = ':';
                    pcVar17[-1] = cVar4;
                    pcVar17[-2] = "0123456789"[uVar26 + ((uVar5 & 0xff) / 100) * -10];
                    pcVar17 = pcVar17 + -3;
                  }
                }
                pcVar9 = pcVar17 + -3;
                *pcVar9 = cVar13;
                cVar13 = "0123456789"[uVar20 / 0xe10 + (uVar20 / 36000) * -10];
                pcVar17[-2] = "0123456789"[uVar20 / 36000 + (uVar20 / 360000) * -10];
                pcVar17[-1] = cVar13;
                    /* try { // try from 0058a848 to 0058a84f has its CatchHandler @ 0058ad90 */
                FUN_002e4094(param_1,pcVar9,(long)pcVar1 - (long)pcVar9);
                pbVar31 = pbVar23 + 4;
                pbVar32 = pbVar31;
                goto joined_r0x00589c3c;
              }
              if (bVar3 != 0x7a) goto joined_r0x00589c3c;
              pbVar31 = pbVar23 + -1;
              uVar16 = (long)pbVar31 - (long)pbVar32;
              if (uVar16 != 0) {
                local_e8 = 0;
                local_e0 = (byte *)0x0;
                local_f0 = 0;
                if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac60 to 0058ac67 has its CatchHandler @ 0058acbc */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar16 < 0x17) {
                  local_f0 = (ulong)(byte)((int)uVar16 << 1);
                  pbVar22 = pbVar14;
                  if (0x3f < uVar16) goto LAB_0058a24c;
LAB_0058a2f8:
                  do {
                    pbVar33 = pbVar32 + 1;
                    pbVar24 = pbVar22 + 1;
                    *pbVar22 = *pbVar32;
                    pbVar22 = pbVar24;
                    pbVar32 = pbVar33;
                  } while (pbVar31 != pbVar33);
                }
                else {
                  uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                  pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                  local_f0 = uVar30 | 1;
                  local_e8 = uVar16;
                  local_e0 = pbVar22;
                  if (uVar16 < 0x40) goto LAB_0058a2f8;
LAB_0058a24c:
                  if (pbVar22 < pbVar31) {
                    if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_0058a2f8;
                  }
                  uVar10 = uVar16 & 0xffffffffffffffc0;
                  uVar30 = (uVar10 - 0x40 >> 6) + 1;
                  lVar15 = 0;
                  uVar18 = uVar30 & 1;
                  if (uVar10 - 0x40 != 0) {
                    lVar21 = uVar30 - uVar18;
                    do {
                      pbVar24 = pbVar32 + lVar15 + 0x40;
                      pbVar33 = pbVar22 + lVar15 + 0x70;
                      lVar15 = lVar15 + 0x80;
                      uVar35 = *(undefined8 *)(pbVar24 + -0x40);
                      uVar37 = *(undefined8 *)(pbVar24 + -0x28);
                      uVar36 = *(undefined8 *)(pbVar24 + -0x30);
                      uVar39 = *(undefined8 *)(pbVar24 + -0x18);
                      uVar38 = *(undefined8 *)(pbVar24 + -0x20);
                      uVar41 = *(undefined8 *)(pbVar24 + -8);
                      uVar40 = *(undefined8 *)(pbVar24 + -0x10);
                      *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar24 + -0x38);
                      *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                      *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                      *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                      lVar21 = lVar21 + -2;
                      *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                      *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                      *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                      *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                      uVar35 = *(undefined8 *)pbVar24;
                      uVar37 = *(undefined8 *)(pbVar24 + 0x18);
                      uVar36 = *(undefined8 *)(pbVar24 + 0x10);
                      uVar39 = *(undefined8 *)(pbVar24 + 0x28);
                      uVar38 = *(undefined8 *)(pbVar24 + 0x20);
                      uVar41 = *(undefined8 *)(pbVar24 + 0x38);
                      uVar40 = *(undefined8 *)(pbVar24 + 0x30);
                      *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar24 + 8);
                      *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                      *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                      *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                      *(undefined8 *)(pbVar33 + -8) = uVar39;
                      *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                      *(undefined8 *)(pbVar33 + 8) = uVar41;
                      *(undefined8 *)pbVar33 = uVar40;
                    } while (lVar21 != 0);
                  }
                  pbVar24 = pbVar22 + uVar10;
                  if (uVar18 != 0) {
                    pbVar33 = pbVar32 + lVar15;
                    pbVar22 = pbVar22 + lVar15;
                    uVar35 = *(undefined8 *)pbVar33;
                    uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                    uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                    uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                    uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                    uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                    uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                    *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                    *(undefined8 *)pbVar22 = uVar35;
                    *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                    *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                    *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                    *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                    *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                    *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                  }
                  pbVar22 = pbVar24;
                  pbVar32 = pbVar32 + uVar10;
                  if (uVar10 != uVar16) goto LAB_0058a2f8;
                }
                *pbVar24 = 0;
                    /* try { // try from 0058a310 to 0058a31f has its CatchHandler @ 0058acec */
                FUN_0058add0(param_1,&local_f0,&local_c0);
                if ((local_f0 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_e0);
                }
              }
              local_c6 = ':';
              local_c9 = 0x3a;
              uVar20 = -local_70;
              if (-1 < (int)local_70) {
                uVar20 = local_70;
              }
              uVar26 = uVar20 / 0x3c + (uVar20 / 0xe10) * -0x3c & 0xff;
              local_ca = "0123456789"[uVar20 / 0xe10 + (uVar20 / 36000) * -10];
              local_c4[0] = "0123456789"[(uVar20 % 0x3c) % 10];
              local_c7 = "0123456789"[uVar26 % 10];
              local_cb = "0123456789"[uVar20 / 36000 + (uVar20 / 360000) * -10];
              local_c5 = "0123456789"[(uVar20 % 0x3c) / 10];
              local_c8 = "0123456789"[uVar26 / 10 + (uVar26 / 100) * -10];
              local_cc = 0x2d;
              if (-1 < (int)local_70) {
                local_cc = 0x2b;
              }
                    /* try { // try from 0058a440 to 0058a44f has its CatchHandler @ 0058ad90 */
              FUN_002e4094(param_1,&local_cc,9);
              goto LAB_0058a5e4;
            }
            if (bVar3 != 0x7a) goto joined_r0x00589c3c;
            pbVar31 = pbVar23 + -1;
            uVar16 = (long)pbVar31 - (long)pbVar32;
            if (uVar16 != 0) {
              local_e8 = 0;
              local_e0 = (byte *)0x0;
              local_f0 = 0;
              if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac58 to 0058ac5f has its CatchHandler @ 0058acc0 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar16 < 0x17) {
                local_f0 = (ulong)(byte)((int)uVar16 << 1);
                pbVar22 = pbVar14;
                if (0x3f < uVar16) goto LAB_005899f8;
LAB_00589aa4:
                do {
                  pbVar33 = pbVar32 + 1;
                  pbVar24 = pbVar22 + 1;
                  *pbVar22 = *pbVar32;
                  pbVar22 = pbVar24;
                  pbVar32 = pbVar33;
                } while (pbVar31 != pbVar33);
              }
              else {
                uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
                pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
                local_f0 = uVar30 | 1;
                local_e8 = uVar16;
                local_e0 = pbVar22;
                if (uVar16 < 0x40) goto LAB_00589aa4;
LAB_005899f8:
                if (pbVar22 < pbVar31) {
                  if (pbVar32 < pbVar22 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_00589aa4;
                }
                uVar10 = uVar16 & 0xffffffffffffffc0;
                uVar30 = (uVar10 - 0x40 >> 6) + 1;
                lVar15 = 0;
                uVar18 = uVar30 & 1;
                if (uVar10 - 0x40 != 0) {
                  lVar21 = uVar30 - uVar18;
                  do {
                    pbVar24 = pbVar32 + lVar15 + 0x40;
                    pbVar33 = pbVar22 + lVar15 + 0x70;
                    lVar15 = lVar15 + 0x80;
                    uVar35 = *(undefined8 *)(pbVar24 + -0x40);
                    uVar37 = *(undefined8 *)(pbVar24 + -0x28);
                    uVar36 = *(undefined8 *)(pbVar24 + -0x30);
                    uVar39 = *(undefined8 *)(pbVar24 + -0x18);
                    uVar38 = *(undefined8 *)(pbVar24 + -0x20);
                    uVar41 = *(undefined8 *)(pbVar24 + -8);
                    uVar40 = *(undefined8 *)(pbVar24 + -0x10);
                    *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar24 + -0x38);
                    *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                    *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                    *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                    lVar21 = lVar21 + -2;
                    *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                    *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                    *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                    *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                    uVar35 = *(undefined8 *)pbVar24;
                    uVar37 = *(undefined8 *)(pbVar24 + 0x18);
                    uVar36 = *(undefined8 *)(pbVar24 + 0x10);
                    uVar39 = *(undefined8 *)(pbVar24 + 0x28);
                    uVar38 = *(undefined8 *)(pbVar24 + 0x20);
                    uVar41 = *(undefined8 *)(pbVar24 + 0x38);
                    uVar40 = *(undefined8 *)(pbVar24 + 0x30);
                    *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar24 + 8);
                    *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                    *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                    *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                    *(undefined8 *)(pbVar33 + -8) = uVar39;
                    *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                    *(undefined8 *)(pbVar33 + 8) = uVar41;
                    *(undefined8 *)pbVar33 = uVar40;
                  } while (lVar21 != 0);
                }
                pbVar24 = pbVar22 + uVar10;
                if (uVar18 != 0) {
                  pbVar33 = pbVar32 + lVar15;
                  pbVar22 = pbVar22 + lVar15;
                  uVar35 = *(undefined8 *)pbVar33;
                  uVar37 = *(undefined8 *)(pbVar33 + 0x18);
                  uVar36 = *(undefined8 *)(pbVar33 + 0x10);
                  uVar39 = *(undefined8 *)(pbVar33 + 0x28);
                  uVar38 = *(undefined8 *)(pbVar33 + 0x20);
                  uVar41 = *(undefined8 *)(pbVar33 + 0x38);
                  uVar40 = *(undefined8 *)(pbVar33 + 0x30);
                  *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar33 + 8);
                  *(undefined8 *)pbVar22 = uVar35;
                  *(undefined8 *)(pbVar22 + 0x18) = uVar37;
                  *(undefined8 *)(pbVar22 + 0x10) = uVar36;
                  *(undefined8 *)(pbVar22 + 0x28) = uVar39;
                  *(undefined8 *)(pbVar22 + 0x20) = uVar38;
                  *(undefined8 *)(pbVar22 + 0x38) = uVar41;
                  *(undefined8 *)(pbVar22 + 0x30) = uVar40;
                }
                pbVar22 = pbVar24;
                pbVar32 = pbVar32 + uVar10;
                if (uVar10 != uVar16) goto LAB_00589aa4;
              }
              *pbVar24 = 0;
                    /* try { // try from 00589abc to 00589acb has its CatchHandler @ 0058ad30 */
              FUN_0058add0(param_1,&local_f0,&local_c0);
              if ((local_f0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_e0);
              }
            }
            uVar20 = -local_70;
            if (-1 < (int)local_70) {
              uVar20 = local_70;
            }
            uVar5 = uVar20 / 0x3c + (uVar20 / 0xe10) * -0x3c;
            uVar26 = uVar5 & 0xff;
            local_c7 = "0123456789"[uVar20 / 0xe10 + (uVar20 / 36000) * -10];
            local_c4[0] = "0123456789"[uVar26 % 10];
            local_c6 = ':';
            local_c8 = "0123456789"[uVar20 / 36000 + (uVar20 / 360000) * -10];
            local_c5 = "0123456789"[uVar26 / 10 + (uVar26 / 100) * -10];
            uVar27 = 0x2d;
            if (-1 < (int)local_70) {
              uVar27 = 0x2b;
            }
            local_c9 = 0x2b;
            if (uVar5 != 0 || 0xe0f < uVar20) {
              local_c9 = uVar27;
            }
                    /* try { // try from 00589bc4 to 00589bd3 has its CatchHandler @ 0058ad90 */
            FUN_002e4094(param_1,&local_c9,6);
LAB_00589bd4:
            pbVar31 = pbVar23 + 2;
            pbVar32 = pbVar31;
          }
        }
      }
      else {
        pbVar31 = pbVar23 + -1;
        uVar16 = (long)pbVar31 - (long)pbVar32;
        if (uVar16 != 0) {
          local_e8 = 0;
          local_e0 = (byte *)0x0;
          local_f0 = 0;
          if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac50 to 0058ac57 has its CatchHandler @ 0058acc4 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar16 < 0x17) {
            local_f0 = (ulong)(byte)((int)uVar16 << 1);
            pbVar22 = pbVar14;
            pbVar24 = pbVar14;
            if (0x3f < uVar16) goto LAB_00588eec;
LAB_00589034:
            pbVar24 = pbVar22;
            do {
              pbVar33 = pbVar32 + 1;
              pbVar22 = pbVar24 + 1;
              *pbVar24 = *pbVar32;
              pbVar24 = pbVar22;
              pbVar32 = pbVar33;
            } while (pbVar31 != pbVar33);
          }
          else {
            uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
            pbVar22 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
            local_f0 = uVar30 | 1;
            pbVar24 = pbVar22;
            local_e8 = uVar16;
            local_e0 = pbVar22;
            if (uVar16 < 0x40) goto LAB_00589034;
LAB_00588eec:
            if (pbVar24 < pbVar31) {
              pbVar22 = pbVar24;
              if (pbVar32 < pbVar24 + (long)pbVar23 + ~(ulong)pbVar32) goto LAB_00589034;
            }
            uVar10 = uVar16 & 0xffffffffffffffc0;
            uVar30 = (uVar10 - 0x40 >> 6) + 1;
            lVar15 = 0;
            uVar18 = uVar30 & 1;
            if (uVar10 - 0x40 != 0) {
              lVar21 = uVar30 - uVar18;
              do {
                pbVar22 = pbVar32 + lVar15 + 0x40;
                pbVar33 = pbVar24 + lVar15 + 0x70;
                lVar15 = lVar15 + 0x80;
                uVar35 = *(undefined8 *)(pbVar22 + -0x40);
                uVar37 = *(undefined8 *)(pbVar22 + -0x28);
                uVar36 = *(undefined8 *)(pbVar22 + -0x30);
                uVar39 = *(undefined8 *)(pbVar22 + -0x18);
                uVar38 = *(undefined8 *)(pbVar22 + -0x20);
                uVar41 = *(undefined8 *)(pbVar22 + -8);
                uVar40 = *(undefined8 *)(pbVar22 + -0x10);
                *(undefined8 *)(pbVar33 + -0x68) = *(undefined8 *)(pbVar22 + -0x38);
                *(undefined8 *)(pbVar33 + -0x70) = uVar35;
                *(undefined8 *)(pbVar33 + -0x58) = uVar37;
                *(undefined8 *)(pbVar33 + -0x60) = uVar36;
                lVar21 = lVar21 + -2;
                *(undefined8 *)(pbVar33 + -0x48) = uVar39;
                *(undefined8 *)(pbVar33 + -0x50) = uVar38;
                *(undefined8 *)(pbVar33 + -0x38) = uVar41;
                *(undefined8 *)(pbVar33 + -0x40) = uVar40;
                uVar35 = *(undefined8 *)pbVar22;
                uVar37 = *(undefined8 *)(pbVar22 + 0x18);
                uVar36 = *(undefined8 *)(pbVar22 + 0x10);
                uVar39 = *(undefined8 *)(pbVar22 + 0x28);
                uVar38 = *(undefined8 *)(pbVar22 + 0x20);
                uVar41 = *(undefined8 *)(pbVar22 + 0x38);
                uVar40 = *(undefined8 *)(pbVar22 + 0x30);
                *(undefined8 *)(pbVar33 + -0x28) = *(undefined8 *)(pbVar22 + 8);
                *(undefined8 *)(pbVar33 + -0x30) = uVar35;
                *(undefined8 *)(pbVar33 + -0x18) = uVar37;
                *(undefined8 *)(pbVar33 + -0x20) = uVar36;
                *(undefined8 *)(pbVar33 + -8) = uVar39;
                *(undefined8 *)(pbVar33 + -0x10) = uVar38;
                *(undefined8 *)(pbVar33 + 8) = uVar41;
                *(undefined8 *)pbVar33 = uVar40;
              } while (lVar21 != 0);
            }
            pbVar22 = pbVar24 + uVar10;
            if (uVar18 != 0) {
              pbVar33 = pbVar32 + lVar15;
              pbVar24 = pbVar24 + lVar15;
              uVar35 = *(undefined8 *)pbVar33;
              uVar37 = *(undefined8 *)(pbVar33 + 0x18);
              uVar36 = *(undefined8 *)(pbVar33 + 0x10);
              uVar39 = *(undefined8 *)(pbVar33 + 0x28);
              uVar38 = *(undefined8 *)(pbVar33 + 0x20);
              uVar41 = *(undefined8 *)(pbVar33 + 0x38);
              uVar40 = *(undefined8 *)(pbVar33 + 0x30);
              *(undefined8 *)(pbVar24 + 8) = *(undefined8 *)(pbVar33 + 8);
              *(undefined8 *)pbVar24 = uVar35;
              *(undefined8 *)(pbVar24 + 0x18) = uVar37;
              *(undefined8 *)(pbVar24 + 0x10) = uVar36;
              *(undefined8 *)(pbVar24 + 0x28) = uVar39;
              *(undefined8 *)(pbVar24 + 0x20) = uVar38;
              *(undefined8 *)(pbVar24 + 0x38) = uVar41;
              *(undefined8 *)(pbVar24 + 0x30) = uVar40;
            }
            pbVar32 = pbVar32 + uVar10;
            if (uVar10 != uVar16) goto LAB_00589034;
          }
          *pbVar22 = 0;
                    /* try { // try from 0058904c to 0058905b has its CatchHandler @ 0058ad68 */
          FUN_0058add0(param_1,&local_f0,&local_c0);
          if ((local_f0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_e0);
          }
          bVar3 = *pbVar23;
        }
        pcVar17 = local_68;
        switch(bVar3) {
        case 0x25:
          FUN_002e6a9c(param_1,0x25);
          break;
        case 0x48:
          iVar19 = ((int)local_76 / 10 + ((int)local_76 >> 0x1f)) -
                   (int)((long)local_76 * 0x66666667 >> 0x3f);
          local_c4[0] = "0123456789"[(int)local_76 + iVar19 * -10];
          local_c5 = "0123456789"[iVar19 % 10];
          FUN_002e4094(param_1,&local_c5,2);
          break;
        case 0x4d:
          iVar19 = ((int)local_75 / 10 + ((int)local_75 >> 0x1f)) -
                   (int)((long)local_75 * 0x66666667 >> 0x3f);
          local_c4[0] = "0123456789"[(int)local_75 + iVar19 * -10];
          local_c5 = "0123456789"[iVar19 % 10];
          FUN_002e4094(param_1,&local_c5,2);
          break;
        case 0x53:
          iVar19 = ((int)local_74 / 10 + ((int)local_74 >> 0x1f)) -
                   (int)((long)local_74 * 0x66666667 >> 0x3f);
          local_c4[0] = "0123456789"[(int)local_74 + iVar19 * -10];
          local_c5 = "0123456789"[iVar19 % 10];
          FUN_002e4094(param_1,&local_c5,2);
          break;
        case 0x59:
          pcVar17 = pcVar1;
          if ((long)local_80 < 0) {
            uVar20 = 0xffffffff;
            uVar16 = local_80;
            if (local_80 == 0x8000000000000000) {
              local_c4[0] = '8';
              uVar20 = 0xfffffffe;
              uVar16 = 0xf333333333333334;
              pcVar17 = local_c4;
            }
            uVar16 = -uVar16;
            bVar6 = true;
          }
          else {
            uVar20 = 0;
            bVar6 = false;
            uVar16 = local_80;
          }
          pcVar9 = pcVar17 + -1;
          uVar26 = uVar20 - 1;
          do {
            uVar30 = uVar16 + 9;
            uVar20 = uVar20 - 1;
            pcVar9 = pcVar9 + -1;
            pcVar17 = pcVar17 + -1;
            *pcVar17 = "0123456789"[(long)uVar16 % 10];
            uVar26 = uVar26 - 1;
            uVar16 = (long)uVar16 / 10;
          } while (0x12 < uVar30);
          if (0 < (int)uVar20) {
            pcVar17 = pcVar9 + -(ulong)uVar26;
            memset(pcVar17,0x30,(ulong)uVar20);
          }
          if (bVar6) {
            pcVar17 = pcVar17 + -1;
            *pcVar17 = '-';
          }
                    /* try { // try from 005895a8 to 005895b3 has its CatchHandler @ 0058ad90 */
          FUN_002e4094(param_1,pcVar17,(long)pcVar1 - (long)pcVar17);
          break;
        case 0x5a:
          sVar8 = strlen(local_68);
          FUN_002e4094(param_1,pcVar17,sVar8);
          break;
        case 100:
        case 0x65:
          iVar19 = ((int)local_77 / 10 + ((int)local_77 >> 0x1f)) -
                   (int)((long)local_77 * 0x66666667 >> 0x3f);
          local_c4[0] = "0123456789"[(int)local_77 + iVar19 * -10];
          iVar19 = iVar19 % 10;
          local_c5 = ' ';
          if (*pbVar23 != 0x65 || iVar19 != 0) {
            local_c5 = "0123456789"[iVar19];
          }
                    /* try { // try from 005890fc to 005893b7 has its CatchHandler @ 0058ad90 */
          FUN_002e4094(param_1,&local_c5,2);
          break;
        case 0x6d:
          iVar19 = ((int)local_78 / 10 + ((int)local_78 >> 0x1f)) -
                   (int)((long)local_78 * 0x66666667 >> 0x3f);
          local_c4[0] = "0123456789"[(int)local_78 + iVar19 * -10];
          local_c5 = "0123456789"[iVar19 % 10];
                    /* try { // try from 00588d90 to 00588d9f has its CatchHandler @ 0058ad90 */
          FUN_002e4094(param_1,&local_c5,2);
          break;
        case 0x73:
          lVar15 = std::chrono::system_clock::from_time_t(0);
          lVar15 = *param_3 - lVar15 / 1000000;
          pcVar17 = pcVar1;
          if (lVar15 < 0) {
            uVar20 = 0xffffffff;
            if (lVar15 == -0x8000000000000000) {
              local_c4[0] = '8';
              uVar20 = 0xfffffffe;
              lVar15 = -0xccccccccccccccc;
              pcVar17 = local_c4;
            }
            lVar15 = -lVar15;
            bVar6 = true;
          }
          else {
            uVar20 = 0;
            bVar6 = false;
          }
          pcVar9 = pcVar17 + -1;
          uVar26 = uVar20 - 1;
          do {
            uVar16 = lVar15 + 9;
            uVar20 = uVar20 - 1;
            pcVar9 = pcVar9 + -1;
            pcVar17 = pcVar17 + -1;
            *pcVar17 = "0123456789"[lVar15 % 10];
            uVar26 = uVar26 - 1;
            lVar15 = lVar15 / 10;
          } while (0x12 < uVar16);
          if (0 < (int)uVar20) {
            pcVar17 = pcVar9 + -(ulong)uVar26;
            memset(pcVar17,0x30,(ulong)uVar20);
          }
          if (bVar6) {
            pcVar17 = pcVar17 + -1;
            *pcVar17 = '-';
          }
                    /* try { // try from 0058965c to 00589667 has its CatchHandler @ 0058ad90 */
          FUN_002e4094(param_1,pcVar17,(long)pcVar1 - (long)pcVar17);
          break;
        case 0x7a:
          uVar20 = -local_70;
          if (-1 < (int)local_70) {
            uVar20 = local_70;
          }
          uVar5 = uVar20 / 0x3c + (uVar20 / 0xe10) * -0x3c;
          uVar26 = uVar5 & 0xff;
          local_c6 = "0123456789"[uVar20 / 0xe10 + (uVar20 / 36000) * -10];
          local_c4[0] = "0123456789"[uVar26 % 10];
          local_c7 = "0123456789"[uVar20 / 36000 + (uVar20 / 360000) * -10];
          local_c5 = "0123456789"[uVar26 / 10 + (uVar26 / 100) * -10];
          cVar13 = '-';
          if (-1 < (int)local_70) {
            cVar13 = '+';
          }
          local_c8 = '+';
          if (uVar5 != 0 || 0xe0f < uVar20) {
            local_c8 = cVar13;
          }
          FUN_002e4094(param_1,&local_c8,5);
        }
        pbVar31 = pbVar23 + 1;
        pbVar32 = pbVar31;
      }
joined_r0x00589c3c:
    } while (pbVar31 != pbVar2);
  }
  uVar16 = (long)pbVar2 - (long)pbVar32;
  if (uVar16 == 0) {
    return;
  }
  local_e8 = 0;
  local_e0 = (byte *)0x0;
  local_f0 = 0;
  if (0xffffffffffffffef < uVar16) {
                    /* try { // try from 0058ac98 to 0058ac9f has its CatchHandler @ 0058aca0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar16 < 0x17) {
    local_f0 = (ulong)(byte)((int)uVar16 << 1);
    pbVar31 = (byte *)((ulong)&local_f0 | 1);
  }
  else {
    uVar30 = uVar16 + 0x10 & 0xfffffffffffffff0;
    pbVar31 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
    local_f0 = uVar30 | 1;
    local_e8 = uVar16;
    local_e0 = pbVar31;
  }
  pbVar14 = pbVar12 + (uVar28 - (long)pbVar32);
  if ((pbVar14 < &DAT_00000040) ||
     ((pbVar31 < pbVar2 && (pbVar32 < pbVar12 + (long)(pbVar31 + (uVar28 - (long)pbVar32)))))) {
    pbVar12 = pbVar32;
    pbVar22 = pbVar31;
  }
  else {
    pbVar24 = (byte *)((ulong)pbVar14 & 0xffffffffffffffc0);
    pbVar12 = pbVar32 + (long)pbVar24;
    pbVar22 = pbVar31 + (long)pbVar24;
    pbVar31 = pbVar31 + 0x20;
    pbVar23 = pbVar32 + 0x20;
    pbVar32 = pbVar24;
    do {
      uVar35 = *(undefined8 *)(pbVar23 + -0x20);
      uVar37 = *(undefined8 *)(pbVar23 + -8);
      uVar36 = *(undefined8 *)(pbVar23 + -0x10);
      pbVar32 = pbVar32 + -0x40;
      uVar39 = *(undefined8 *)(pbVar23 + 8);
      uVar38 = *(undefined8 *)pbVar23;
      uVar41 = *(undefined8 *)(pbVar23 + 0x18);
      uVar40 = *(undefined8 *)(pbVar23 + 0x10);
      *(undefined8 *)(pbVar31 + -0x18) = *(undefined8 *)(pbVar23 + -0x18);
      *(undefined8 *)(pbVar31 + -0x20) = uVar35;
      *(undefined8 *)(pbVar31 + -8) = uVar37;
      *(undefined8 *)(pbVar31 + -0x10) = uVar36;
      *(undefined8 *)(pbVar31 + 8) = uVar39;
      *(undefined8 *)pbVar31 = uVar38;
      *(undefined8 *)(pbVar31 + 0x18) = uVar41;
      *(undefined8 *)(pbVar31 + 0x10) = uVar40;
      pbVar31 = pbVar31 + 0x40;
      pbVar23 = pbVar23 + 0x40;
    } while (pbVar32 != (byte *)0x0);
    if (pbVar24 == pbVar14) goto LAB_0058abc8;
  }
  do {
    pbVar32 = pbVar12 + 1;
    pbVar31 = pbVar22 + 1;
    *pbVar22 = *pbVar12;
    pbVar12 = pbVar32;
    pbVar22 = pbVar31;
  } while (pbVar2 != pbVar32);
LAB_0058abc8:
  *pbVar22 = 0;
                    /* try { // try from 0058abcc to 0058abdb has its CatchHandler @ 0058ad50 */
  FUN_0058add0(param_1,&local_f0,&local_c0);
  if ((local_f0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_e0);
  }
  return;
}


