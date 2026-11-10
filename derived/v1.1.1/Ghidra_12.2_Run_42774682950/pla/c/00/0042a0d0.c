/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042a0d0; name: FUN_0042a0d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0042a0d0(undefined8 param_1,uint param_2,int param_3,long param_4,long param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  undefined *puVar19;
  long lVar20;
  int iVar21;
  int local_74;
  
  if ((int)param_2 < 0xea3) {
    if ((int)param_2 < 0x541) {
      if ((int)param_2 < 0x1dc) {
        if ((int)param_2 < 400) {
          if ((int)param_2 < 0x15b) {
            if ((int)param_2 < 0x134) {
              if ((int)param_2 < 2) {
                uVar14 = 0x40;
LAB_0042a80c:
                FUN_004014b0(3,0x8d,0x76,"external/openssl/crypto/bn/bn_prime.c",uVar14);
                return 0;
              }
              iVar17 = 0x1b;
              if ((int)param_2 < 0x37) {
                iVar17 = 0x22;
              }
              if ((param_2 == 2) && (param_3 != 0)) {
                uVar14 = 0x44;
                goto LAB_0042a80c;
              }
            }
            else {
              iVar17 = 8;
            }
          }
          else {
            iVar17 = 7;
          }
        }
        else {
          iVar17 = 6;
        }
      }
      else {
        iVar17 = 5;
      }
    }
    else {
      iVar17 = 4;
    }
  }
  else {
    iVar17 = 3;
  }
  lVar11 = FUN_004002a0(0x1000,"external/openssl/crypto/bn/bn_prime.c",0x48);
  if (lVar11 == 0) {
    uVar14 = 0;
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_0040de30();
    if (lVar12 != 0) {
      FUN_0040e090(lVar12);
      lVar13 = FUN_0040e240(lVar12);
      if (lVar13 != 0) {
        iVar2 = 0;
        if (param_2 != 0x20) {
          iVar2 = 1 << (ulong)(param_2 & 0x1f);
        }
        local_74 = 0;
joined_r0x0042a1e0:
        do {
          iVar21 = local_74;
          if (param_4 == 0) {
            iVar5 = FUN_00426dc0(param_1,param_2,1,1);
            if (iVar5 != 0) {
              if ((int)param_2 < 0x21) {
                uVar10 = 0xffffba38;
LAB_0042a554:
                lVar16 = 2;
                do {
                  iVar5 = FUN_0040bbb0(param_1,*(undefined2 *)(&UNK_03a04998 + lVar16));
                  if (iVar5 == -1) goto LAB_0042a760;
                  *(short *)(lVar11 + lVar16) = (short)iVar5;
                  lVar16 = lVar16 + 2;
                } while (lVar16 != 0x1000);
                uVar7 = FUN_0040c680(param_1);
                uVar9 = 0;
                uVar8 = iVar2 + ~uVar7;
                if (uVar10 <= iVar2 + ~uVar7) {
                  uVar8 = uVar10;
                }
LAB_0042a59c:
                uVar10 = uVar8;
                uVar8 = FUN_0040c680(param_1);
                puVar19 = &UNK_03a04998;
                lVar16 = 0;
                uVar3 = DAT_03a0499a;
                do {
                  uVar7 = (uint)uVar3;
                  if (uVar8 <= uVar7) {
LAB_0042a624:
                    iVar5 = FUN_0040bd20(param_1,uVar9);
                    if (iVar5 == 0) goto LAB_0042a760;
                    uVar9 = FUN_0040c070(param_1);
                    if (uVar9 != param_2) goto LAB_0042a644;
                    goto joined_r0x0042a744;
                  }
                  uVar1 = uVar9 + *(ushort *)(lVar11 + 2 + lVar16);
                  uVar18 = 0;
                  if (uVar7 != 0) {
                    uVar18 = uVar1 / uVar7;
                  }
                  if (uVar1 == uVar18 * uVar7) goto LAB_0042a614;
                  if ((lVar16 == 0xffc) || (uVar8 <= *(ushort *)(puVar19 + 4))) goto LAB_0042a624;
                  uVar7 = uVar9 + *(ushort *)(lVar11 + 2 + lVar16 + 2);
                  uVar1 = 0;
                  uVar18 = (uint)*(ushort *)(puVar19 + 4);
                  if (uVar18 != 0) {
                    uVar1 = uVar7 / uVar18;
                  }
                  if (uVar7 == uVar1 * uVar18) goto LAB_0042a614;
                  puVar19 = (undefined *)((long)&DAT_03a0499c + lVar16);
                  uVar3 = *(ushort *)((long)&DAT_03a0499e + lVar16);
                  lVar16 = lVar16 + 4;
                } while( true );
              }
              lVar16 = 1;
              while (iVar5 = FUN_0040bbb0(param_1,*(undefined2 *)(&UNK_03a04998 + lVar16 * 2)),
                    iVar5 != -1) {
                *(short *)(lVar11 + lVar16 * 2) = (short)iVar5;
                lVar16 = lVar16 + 1;
                if (lVar16 == 0x800) {
                  uVar10 = 0;
                  do {
                    lVar16 = 0;
                    while( true ) {
                      uVar9 = uVar10 + *(ushort *)(lVar11 + 4 + lVar16 + -2);
                      uVar3 = *(ushort *)((long)&DAT_03a0499a + lVar16);
                      uVar8 = 0;
                      if (uVar3 != 0) {
                        uVar8 = uVar9 / uVar3;
                      }
                      if (uVar9 - uVar8 * uVar3 < 2) break;
                      if (lVar16 == 0xffc) {
                        iVar5 = FUN_0040bd20(param_1);
                        if (iVar5 == 0) goto LAB_0042a760;
                        uVar10 = FUN_0040c070(param_1);
                        if (uVar10 != param_2) goto LAB_0042a710;
                        goto joined_r0x0042a744;
                      }
                      uVar9 = uVar10 + *(ushort *)(lVar11 + 4 + lVar16);
                      uVar3 = *(ushort *)((long)&DAT_03a0499c + lVar16);
                      uVar8 = 0;
                      if (uVar3 != 0) {
                        uVar8 = uVar9 / uVar3;
                      }
                      if (uVar9 - uVar8 * uVar3 < 2) break;
                      lVar16 = lVar16 + 4;
                    }
                    uVar10 = uVar10 + 2;
                  } while (uVar10 < 0xffffba39);
LAB_0042a710:
                  iVar5 = FUN_00426dc0(param_1,param_2,1,1);
                  lVar16 = 1;
                  if (iVar5 == 0) break;
                }
              }
            }
            goto LAB_0042a760;
          }
          if (param_3 != 0) {
            FUN_0040e090(lVar12);
            uVar14 = FUN_0040e240(lVar12);
            uVar15 = FUN_0040e240(lVar12);
            lVar16 = FUN_0040e240(lVar12);
            if ((((lVar16 != 0) && (iVar5 = FUN_004104e0(lVar16,param_4), iVar5 != 0)) &&
                (iVar5 = FUN_00426b40(uVar15,param_2 - 1,0,1), iVar5 != 0)) &&
               ((iVar5 = FUN_0040e5a0(0,uVar14,uVar15,lVar16,lVar12), iVar5 != 0 &&
                (iVar5 = FUN_00411b00(uVar15,uVar15,uVar14), iVar5 != 0)))) {
              if (param_5 == 0) {
                iVar5 = FUN_0040bd20(uVar15,1);
              }
              else {
                iVar5 = FUN_004104e0(uVar14);
                if (iVar5 == 0) goto LAB_0042a758;
                iVar5 = FUN_00411730(uVar15,uVar15,uVar14);
              }
              if (((iVar5 != 0) && (iVar5 = FUN_00410400(param_1,uVar15), iVar5 != 0)) &&
                 (iVar5 = FUN_0040bd20(param_1,1), iVar5 != 0)) {
                lVar20 = 1;
                do {
                  while( true ) {
                    uVar4 = *(undefined2 *)(&UNK_03a04998 + lVar20 * 2);
                    iVar5 = FUN_0040bbb0(param_1,uVar4);
                    iVar6 = FUN_0040bbb0(uVar15,uVar4);
                    if (iVar5 == -1 || iVar6 == -1) goto LAB_0042a758;
                    if (iVar5 != 0 && iVar6 != 0) break;
                    iVar5 = FUN_00411730(param_1,param_1,param_4);
                    if (iVar5 == 0) goto LAB_0042a758;
                    iVar5 = FUN_00411730(uVar15,uVar15,lVar16);
                    lVar20 = 1;
                    if (iVar5 == 0) goto LAB_0042a758;
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x800);
                FUN_0040e1b0(lVar12);
                goto joined_r0x0042a744;
              }
            }
LAB_0042a758:
            FUN_0040e1b0(lVar12);
            goto LAB_0042a760;
          }
          iVar5 = FUN_0042a830(param_1,param_2,param_4,param_5,lVar12);
          if (iVar5 == 0) goto LAB_0042a760;
joined_r0x0042a744:
          if (param_6 != (int *)0x0) {
            if (*param_6 == 2) {
              iVar5 = (**(code **)(param_6 + 4))(0,iVar21,param_6);
              if (iVar5 == 0) goto LAB_0042a760;
            }
            else {
              if (*param_6 != 1) goto LAB_0042a760;
              if (*(code **)(param_6 + 4) != (code *)0x0) {
                (**(code **)(param_6 + 4))(0,iVar21,*(undefined8 *)(param_6 + 2));
              }
            }
          }
          if (param_3 != 0) {
            local_74 = iVar21 + 1;
            iVar5 = FUN_004104e0(lVar13,param_1);
            if (iVar5 == 0) goto LAB_0042a760;
            iVar5 = iVar17;
            if (param_6 == (int *)0x0) {
              iVar21 = iVar17;
              while( true ) {
                iVar5 = FUN_0042a960(param_1,1,lVar12,0,0);
                if (iVar5 == -1) goto LAB_0042a760;
                if (iVar5 == 0) break;
                iVar5 = FUN_0042a960(lVar13,1,lVar12,0,0);
                if (iVar5 == -1) goto LAB_0042a760;
                if (iVar5 == 0) break;
                iVar21 = iVar21 + -1;
                uVar14 = 1;
                if (iVar21 == 0) goto LAB_0042a764;
              }
            }
            else {
              while( true ) {
                iVar6 = FUN_0042a960(param_1,1,lVar12,0,param_6);
                if (iVar6 == -1) goto LAB_0042a760;
                if (iVar6 == 0) break;
                iVar6 = FUN_0042a960(lVar13,1,lVar12,0,param_6);
                if (iVar6 == -1) goto LAB_0042a760;
                if (iVar6 == 0) break;
                if (*param_6 == 2) {
                  iVar6 = (**(code **)(param_6 + 4))(2,iVar21,param_6);
                  if (iVar6 == 0) goto LAB_0042a760;
                }
                else {
                  if (*param_6 != 1) goto LAB_0042a760;
                  if (*(code **)(param_6 + 4) != (code *)0x0) {
                    (**(code **)(param_6 + 4))(2,iVar21,*(undefined8 *)(param_6 + 2));
                  }
                }
                uVar14 = 1;
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) goto LAB_0042a764;
              }
            }
            goto joined_r0x0042a1e0;
          }
          iVar5 = FUN_0042a960(param_1,iVar17,lVar12,0,param_6);
          local_74 = iVar21 + 1;
        } while (iVar5 == 0);
        if (iVar5 != -1) {
          uVar14 = 1;
          goto LAB_0042a764;
        }
      }
    }
LAB_0042a760:
    uVar14 = 0;
  }
LAB_0042a764:
  FUN_00400420(lVar11,"external/openssl/crypto/bn/bn_prime.c",0x89);
  FUN_0040e1b0(lVar12);
  FUN_0040def0(lVar12);
  return uVar14;
LAB_0042a614:
  uVar9 = uVar9 + 2;
  uVar8 = uVar10;
  if (uVar10 < uVar9) goto LAB_0042a644;
  goto LAB_0042a59c;
LAB_0042a644:
  iVar5 = FUN_00426dc0(param_1,param_2,1,1);
  if (iVar5 == 0) goto LAB_0042a760;
  goto LAB_0042a554;
}


