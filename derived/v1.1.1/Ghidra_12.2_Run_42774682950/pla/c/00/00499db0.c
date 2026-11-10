/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00499db0; name: FUN_00499db0
 */


undefined8
FUN_00499db0(long param_1,ulong param_2,ulong param_3,long param_4,void *param_5,size_t param_6,
            int param_7,void *param_8,int *param_9,ulong *param_10,undefined8 param_11)

{
  bool bVar1;
  byte *__s;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  void *__dest;
  void *__dest_00;
  int iVar24;
  uint uVar25;
  size_t __n;
  int local_14c;
  long local_e0;
  byte local_a0 [64];
  
  lVar7 = FUN_00444930();
  if (lVar7 == 0) {
LAB_00499e3c:
    lVar9 = 0;
    lVar10 = 0;
    __dest_00 = (void *)0x0;
    __dest = (void *)0x0;
  }
  else {
    if (param_2 <= param_3) {
      FUN_004014b0(10,0x7e,0x70,"external/openssl/crypto/dsa/dsa_gen.c",0x14b);
      goto LAB_00499e3c;
    }
    if (param_4 == 0) {
      if (param_3 == 0xe0) {
        param_4 = FUN_0044f840();
      }
      else if (param_3 == 0xa0) {
        param_4 = FUN_0044f830();
      }
      else {
        param_4 = FUN_0044f850();
      }
    }
    uVar8 = FUN_0041ccc0(param_4);
    iVar5 = (int)uVar8;
    if (((*(long *)(param_1 + 8) == 0) || (-1 < param_7)) || (*(long *)(param_1 + 0x10) == 0)) {
      __n = (long)iVar5;
      if (param_6 != 0) {
        __n = param_6;
      }
      __dest_00 = (void *)FUN_00400260(__n,"external/openssl/crypto/dsa/dsa_gen.c",0x15e);
      __dest = param_8;
      if (param_8 == (void *)0x0) {
        __dest = (void *)FUN_00400260(__n,"external/openssl/crypto/dsa/dsa_gen.c",0x163);
      }
      lVar9 = 0;
      uVar17 = 0xffffffff;
      if ((__dest_00 == (void *)0x0) || (__dest == (void *)0x0)) {
        lVar10 = 0;
        goto LAB_00499e50;
      }
      if (param_5 != (void *)0x0) {
        memcpy(__dest_00,param_5,__n);
      }
      lVar9 = FUN_0040de30();
      if (lVar9 != 0) goto LAB_00499f10;
LAB_0049a074:
      lVar10 = 0;
    }
    else {
      __dest = (void *)0x0;
      __dest_00 = (void *)0x0;
      lVar9 = FUN_0040de30();
      __n = param_6;
      if (lVar9 == 0) goto LAB_0049a074;
LAB_00499f10:
      lVar10 = FUN_0040d8e0();
      if (lVar10 == 0) goto LAB_0049a074;
      FUN_0040e090(lVar9);
      uVar11 = FUN_0040e240(lVar9);
      uVar12 = FUN_0040e240(lVar9);
      uVar13 = FUN_0040e240(lVar9);
      uVar14 = FUN_0040e240(lVar9);
      uVar15 = FUN_0040e240(lVar9);
      lVar16 = FUN_0040e240(lVar9);
      if (lVar16 != 0) {
        local_e0 = *(long *)(param_1 + 8);
        if ((local_e0 == 0) || (lVar23 = *(long *)(param_1 + 0x10), lVar23 == 0)) {
          local_e0 = FUN_0040e240(lVar9);
          lVar23 = FUN_0040e240(lVar9);
          if (lVar23 != 0) {
            uVar17 = FUN_0040bfc0();
            iVar6 = FUN_00410600(lVar16,uVar17);
            if (iVar6 != 0) {
              param_3 = param_3 >> 3;
              __s = local_a0 + iVar5;
              iVar6 = (int)param_3;
              pbVar2 = __s + -(long)iVar6;
              if (iVar5 <= iVar6) {
                pbVar2 = local_a0;
              }
              lVar20 = (long)((param_3 << 0x20) + -0x100000000) >> 0x20;
              iVar3 = iVar5 * 8;
              iVar4 = 0;
              if ((long)iVar3 != 0) {
                iVar4 = (int)((param_2 - 1) / (ulong)(long)iVar3);
              }
              iVar21 = 0;
              uVar17 = 0xffffffff;
              do {
                if (param_5 == (void *)0x0) {
                  while( true ) {
                    iVar22 = FUN_0042a060(param_11,0,iVar21);
                    if (((iVar22 == 0) ||
                        (iVar22 = FUN_00427c60(__dest_00,__n & 0xffffffff), iVar22 < 1)) ||
                       (iVar22 = FUN_00444ea0(__dest_00,__n,local_a0,0,param_4,0), iVar22 == 0))
                    goto LAB_00499e50;
                    if (iVar5 < iVar6) {
                      memset(__s,0,(long)(iVar6 - iVar5));
                    }
                    *pbVar2 = *pbVar2 | 0x80;
                    pbVar2[lVar20] = pbVar2[lVar20] | 1;
                    lVar18 = FUN_0040c710(pbVar2,param_3,lVar23);
                    if (lVar18 == 0) goto LAB_00499e50;
                    iVar22 = FUN_0042a960(lVar23,0x40,lVar9,0,param_11);
                    if (0 < iVar22) break;
                    iVar21 = iVar21 + 1;
                    if (iVar22 != 0) goto LAB_00499e50;
                  }
                }
                else {
                  while( true ) {
                    iVar22 = FUN_0042a060(param_11,0,iVar21);
                    if ((iVar22 == 0) ||
                       (iVar22 = FUN_00444ea0(__dest_00,__n,local_a0,0,param_4,0), iVar22 == 0))
                    goto LAB_00499e50;
                    if (iVar5 < iVar6) {
                      memset(__s,0,(long)(iVar6 - iVar5));
                    }
                    *pbVar2 = *pbVar2 | 0x80;
                    pbVar2[lVar20] = pbVar2[lVar20] | 1;
                    lVar18 = FUN_0040c710(pbVar2,param_3,lVar23);
                    if (lVar18 == 0) goto LAB_00499e50;
                    iVar22 = FUN_0042a960(lVar23,0x40,lVar9,param_5 != (void *)0x0,param_11);
                    if (0 < iVar22) break;
                    if (iVar22 == 0 && param_5 != (void *)0x0) {
                      uVar8 = 0x71;
                      uVar17 = 0x1b4;
                      goto LAB_0049a638;
                    }
                    iVar21 = iVar21 + 1;
                    if (iVar22 != 0) goto LAB_00499e50;
                  }
                }
                iVar21 = iVar21 + 1;
                if (param_8 != (void *)0x0) {
                  memcpy(param_8,__dest_00,__n);
                }
                iVar22 = FUN_0042a060(param_11,2,0);
                if ((iVar22 == 0) || (iVar22 = FUN_0042a060(param_11,3,0), iVar22 == 0))
                goto LAB_00499e50;
                local_14c = 0;
                do {
                  if ((local_14c != 0) && (iVar22 = FUN_0042a060(param_11,0,local_14c), iVar22 == 0)
                     ) goto LAB_00499e50;
                  FUN_0040c6b0(uVar13,0);
                  if (-1 < iVar4) {
                    iVar22 = (int)__n;
                    iVar24 = 0;
LAB_0049a34c:
                    do {
                      iVar22 = iVar22 + -1;
                      if (-1 < iVar22) {
                        uVar25 = *(byte *)((long)__dest_00 + (long)iVar22) + 1;
                        *(char *)((long)__dest_00 + (long)iVar22) = (char)uVar25;
                        if (uVar25 >> 8 != 0) goto LAB_0049a34c;
                      }
                      iVar22 = FUN_00444ea0(__dest_00,__n,local_a0,0,param_4,0);
                      if ((((iVar22 == 0) ||
                           (lVar18 = FUN_0040c710(local_a0,uVar8,uVar11), lVar18 == 0)) ||
                          (iVar22 = FUN_00410600(uVar11,uVar11,iVar24 * iVar3), iVar22 == 0)) ||
                         (iVar22 = FUN_00411730(uVar13,uVar13,uVar11), iVar22 == 0))
                      goto LAB_00499e50;
                      bVar1 = iVar24 < iVar4;
                      iVar22 = (int)__n;
                      iVar24 = iVar24 + 1;
                    } while (bVar1);
                  }
                  iVar22 = FUN_0040cdf0(uVar13,param_2 - 1);
                  if (((iVar22 == 0) || (lVar18 = FUN_0040c5d0(uVar14,uVar13), lVar18 == 0)) ||
                     ((iVar22 = FUN_00411730(uVar14,uVar14,lVar16), iVar22 == 0 ||
                      ((iVar22 = FUN_00410400(uVar11,lVar23), iVar22 == 0 ||
                       (iVar22 = FUN_0040e5a0(0,uVar15,uVar14,uVar11,lVar9), iVar22 == 0))))))
                  goto LAB_00499e50;
                  uVar19 = FUN_0040bfc0();
                  iVar22 = FUN_00411b00(uVar11,uVar15,uVar19);
                  if ((iVar22 == 0) || (iVar22 = FUN_00411b00(local_e0,uVar14,uVar11), iVar22 == 0))
                  goto LAB_00499e50;
                  iVar22 = FUN_0040cc60(local_e0,lVar16);
                  if (-1 < iVar22) {
                    iVar22 = FUN_0042a960(local_e0,0x40,lVar9,1,param_11);
                    if (0 < iVar22) {
                      iVar5 = FUN_0042a060(param_11,2,1);
                      if (iVar5 == 0) goto LAB_00499e4c;
                      goto LAB_00499fb4;
                    }
                    if (iVar22 != 0) goto LAB_00499e50;
                  }
                  local_14c = local_14c + 1;
                } while (local_14c < (int)param_2 << 2);
              } while (param_5 == (void *)0x0);
              uVar17 = 0x20d;
              uVar8 = 0x70;
LAB_0049a638:
              FUN_004014b0(10,0x7e,uVar8,"external/openssl/crypto/dsa/dsa_gen.c",uVar17);
              uVar17 = 0;
              goto LAB_00499e50;
            }
          }
        }
        else {
          if (-1 < param_7) {
            memcpy(__dest,__dest_00,__n);
          }
          local_14c = 0;
LAB_00499fb4:
          uVar17 = FUN_0040bfc0();
          iVar5 = FUN_00411b00(lVar16,local_e0,uVar17);
          if ((iVar5 != 0) && (iVar5 = FUN_0040e5a0(uVar11,0,lVar16,lVar23,lVar9), iVar5 != 0)) {
            if (param_7 < 0) {
              uVar25 = 2;
              iVar5 = FUN_0040c6b0(lVar16,2);
              if (iVar5 == 0) goto LAB_00499e4c;
            }
            else {
              uVar25 = 1;
            }
            iVar5 = FUN_0040d9b0(lVar10,local_e0,lVar9);
            if (iVar5 != 0) {
              if (-1 < param_7) {
                uVar17 = 0xffffffff;
                do {
                  local_a0[0] = (byte)param_7;
                  local_a0[2] = (byte)uVar25;
                  local_a0[1] = (byte)(uVar25 >> 8);
                  iVar5 = FUN_004449b0(lVar7,param_4,0);
                  if ((((iVar5 == 0) || (iVar5 = FUN_00444ad0(lVar7,__dest,__n), iVar5 == 0)) ||
                      (iVar5 = FUN_00444ad0(lVar7,&DAT_03a1c1a5,4), iVar5 == 0)) ||
                     (((iVar5 = FUN_00444ad0(lVar7,local_a0,3), iVar5 == 0 ||
                       (iVar5 = FUN_00444b90(lVar7,local_a0,0), iVar5 == 0)) ||
                      ((lVar20 = FUN_0040c710(local_a0,uVar8,lVar16), lVar20 == 0 ||
                       (iVar5 = FUN_004250f0(uVar12,lVar16,uVar11,local_e0,lVar9,lVar10), iVar5 == 0
                       )))))) break;
                  iVar5 = FUN_0040d220(uVar12);
                  if (iVar5 == 0) goto LAB_0049a6dc;
                  if (param_7 < 0) {
                    uVar13 = FUN_0040bfc0();
                    iVar5 = FUN_00411730(lVar16,lVar16,uVar13);
                    if (iVar5 == 0) break;
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar25 != 0x10000);
                goto LAB_00499e50;
              }
              iVar5 = FUN_004250f0(uVar12,lVar16,uVar11,local_e0,lVar9,lVar10);
              if (iVar5 != 0) {
                uVar17 = 0xffffffff;
                iVar5 = FUN_0040d220(uVar12);
                while (iVar5 != 0) {
                  if (param_7 < 0) {
                    uVar8 = FUN_0040bfc0();
                    iVar5 = FUN_00411730(lVar16,lVar16,uVar8);
                    if (iVar5 == 0) goto LAB_00499e50;
                  }
                  uVar25 = uVar25 + 1;
                  iVar5 = FUN_004250f0(uVar12,lVar16,uVar11,local_e0,lVar9,lVar10);
                  if (iVar5 == 0) goto LAB_00499e50;
                  iVar5 = FUN_0040d220(uVar12);
                }
LAB_0049a6dc:
                iVar5 = FUN_0042a060(param_11,3,1);
                if (iVar5 != 0) {
                  if (local_e0 != *(long *)(param_1 + 8)) {
                    FUN_0040c1e0();
                    uVar8 = FUN_0040c480(local_e0);
                    *(undefined8 *)(param_1 + 8) = uVar8;
                  }
                  if (lVar23 != *(long *)(param_1 + 0x10)) {
                    FUN_0040c1e0();
                    uVar8 = FUN_0040c480(lVar23);
                    *(undefined8 *)(param_1 + 0x10) = uVar8;
                  }
                  FUN_0040c1e0(*(undefined8 *)(param_1 + 0x18));
                  lVar16 = FUN_0040c480(uVar12);
                  *(long *)(param_1 + 0x18) = lVar16;
                  if (*(long *)(param_1 + 8) != 0) {
                    uVar17 = 0xffffffff;
                    if ((lVar16 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
                      if (param_9 != (int *)0x0) {
                        *param_9 = local_14c;
                      }
                      if (param_10 != (ulong *)0x0) {
                        *param_10 = (ulong)uVar25;
                      }
                      uVar17 = 1;
                    }
                    goto LAB_00499e50;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00499e4c:
  uVar17 = 0xffffffff;
LAB_00499e50:
  FUN_00400420(__dest_00,"external/openssl/crypto/dsa/dsa_gen.c",0x25e);
  if (__dest != param_8) {
    FUN_00400420(__dest,"external/openssl/crypto/dsa/dsa_gen.c",0x260);
  }
  FUN_0040e1b0(lVar9);
  FUN_0040def0(lVar9);
  FUN_0040d960(lVar10);
  FUN_00444950(lVar7);
  return uVar17;
}


