/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00416e30; name: FUN_00416e30
 */


/* WARNING: Removing unreachable block (ram,0x004170ec) */

undefined8 FUN_00416e30(long param_1,byte *param_2,long *param_3,byte *param_4)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  long *plVar5;
  size_t sVar6;
  long lVar7;
  char *__s;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  int iVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  plVar5 = (long *)FUN_00417420();
  if (plVar5 != (long *)0x0) {
    sVar6 = strlen((char *)param_4);
    lVar7 = FUN_004174d0(plVar5,(long)((sVar6 << 0x20) + 0x100000000) >> 0x20);
    if (lVar7 != 0) {
      uVar19 = 0;
      bVar4 = 0;
      bVar17 = *param_4;
      uVar11 = (uint)(char)bVar17;
      if (-1 < (char)bVar17) goto LAB_00416f08;
LAB_00416ee4:
      pbVar12 = param_4 + 1;
LAB_00416ee8:
      *(char *)(plVar5[1] + (long)(int)uVar19) = (char)uVar11;
      uVar19 = (ulong)((int)uVar19 + 1);
      bVar17 = *pbVar12;
      param_4 = pbVar12;
joined_r0x00416f04:
      do {
        while( true ) {
          uVar11 = (uint)(char)bVar17;
          if ((char)bVar17 < '\0') goto LAB_00416ee4;
LAB_00416f08:
          lVar7 = *(long *)(param_1 + 8);
          uVar3 = *(ushort *)(lVar7 + (ulong)bVar17 * 2);
          iVar18 = (int)uVar19;
          if ((uVar3 >> 6 & 1) == 0) break;
          uVar19 = (ulong)iVar18;
          pbVar12 = param_4 + 1;
          uVar14 = (ulong)(char)*pbVar12;
          if (-1 < (char)*pbVar12) goto LAB_00416f60;
          while (pbVar15 = pbVar12, (uint)uVar14 != uVar11) {
            while( true ) {
              *(char *)(plVar5[1] + uVar19) = (char)uVar14;
              uVar19 = uVar19 + 1;
              pbVar12 = pbVar15 + 1;
              uVar14 = (ulong)(char)*pbVar12;
              param_4 = pbVar15;
              if ((char)*pbVar12 < '\0') break;
LAB_00416f60:
              pbVar15 = pbVar12;
              uVar13 = (uint)uVar14;
              if ((uVar13 == uVar11) ||
                 ((*(ushort *)(*(long *)(param_1 + 8) + (uVar14 & 0xff) * 2) >> 3 & 1) != 0))
              goto LAB_00416ed0;
              if ((*(ushort *)(*(long *)(param_1 + 8) + (uVar14 & 0xff) * 2) >> 5 & 1) != 0) {
                pbVar15 = param_4 + 2;
                bVar17 = *pbVar15;
                uVar14 = (ulong)(char)bVar17;
                uVar13 = (uint)(char)bVar17;
                if ((-1 < (int)uVar13) &&
                   ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) >> 3 & 1) != 0))
                goto LAB_00416ed0;
              }
            }
          }
          uVar13 = uVar11;
LAB_00416ed0:
          if (uVar13 == uVar11) {
            pbVar15 = pbVar15 + 1;
          }
          bVar17 = *pbVar15;
          param_4 = pbVar15;
        }
        if ((uVar3 >> 10 & 1) == 0) {
          if ((uVar3 >> 5 & 1) != 0) {
            bVar17 = param_4[1];
            if ((-1 < (char)bVar17) && ((*(ushort *)(lVar7 + (ulong)bVar17 * 2) >> 3 & 1) != 0)) {
LAB_004172b4:
              *(undefined1 *)(plVar5[1] + (long)iVar18) = 0;
              FUN_00400420(*param_3,"external/openssl/crypto/conf/conf_def.c",0x28e);
              *param_3 = plVar5[1];
              FUN_00400420(plVar5,"external/openssl/crypto/conf/conf_def.c",0x290);
              return 1;
            }
            uVar11 = (int)(char)bVar17 - 0x62;
            uVar13 = uVar11 * 0x80;
            uVar11 = uVar11 >> 1 & 0x7f;
            if ((uVar13 & 0xff | uVar11) < 10) {
                    /* WARNING: Could not recover jumptable at 0x00417060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar8 = (*(code *)(&UNK_00417064 +
                                (ulong)(byte)(&DAT_03a0440b)[(ulong)(uVar13 | uVar11) & 0xff] * 4))
                                (9);
              return uVar8;
            }
            *(byte *)(plVar5[1] + (long)iVar18) = bVar17;
            uVar19 = (ulong)(iVar18 + 1);
            bVar17 = param_4[2];
            param_4 = param_4 + 2;
            goto joined_r0x00416f04;
          }
          if ((uVar3 >> 3 & 1) != 0) goto LAB_004172b4;
          pbVar12 = param_4 + 1;
          if (uVar11 == 0x24) {
            bVar17 = 0x29;
            if (param_4[1] != 0x28) {
              bVar17 = 0;
            }
            bVar2 = 0x7d;
            if (param_4[1] != 0x7b) {
              bVar2 = bVar17;
            }
            lVar1 = 1;
            if (bVar2 != 0) {
              lVar1 = 2;
            }
            bVar17 = param_4[lVar1];
            pbVar15 = param_4 + 2;
            if (bVar2 == 0) {
              pbVar15 = pbVar12;
            }
            if ((char)bVar17 < '\0') {
              pbVar16 = (byte *)0x0;
              *pbVar15 = 0;
              pbVar12 = pbVar15;
              pbVar15 = param_2;
joined_r0x00417110:
              pbVar21 = pbVar12;
              pbVar20 = pbVar12;
              if (bVar2 != 0) goto LAB_00417114;
LAB_00417120:
              __s = (char *)FUN_00417bd0(param_1,pbVar15,pbVar12);
              if (pbVar16 != (byte *)0x0) {
                *pbVar16 = bVar4;
              }
              *pbVar20 = bVar17;
              if (__s == (char *)0x0) {
                uVar8 = 0x68;
                uVar9 = 0x26e;
              }
              else {
                sVar6 = strlen(__s);
                if (param_4 + *plVar5 + (sVar6 - (long)pbVar21) < (byte *)0x10001) {
                  lVar7 = FUN_00417620(plVar5);
                  if (lVar7 != 0) {
                    cVar10 = *__s;
                    param_4 = pbVar21;
                    if (cVar10 == '\0') {
                      *pbVar20 = bVar17;
                      bVar17 = *pbVar21;
                    }
                    else {
                      lVar7 = (long)iVar18;
                      do {
                        __s = __s + 1;
                        *(char *)(plVar5[1] + lVar7) = cVar10;
                        cVar10 = *__s;
                        lVar7 = lVar7 + 1;
                        uVar19 = (ulong)((int)uVar19 + 1);
                      } while (cVar10 != '\0');
                      *pbVar20 = bVar17;
                      bVar17 = *pbVar21;
                    }
                    goto joined_r0x00416f04;
                  }
                  uVar8 = 0x41;
                  uVar9 = 0x277;
                }
                else {
                  uVar8 = 0x74;
                  uVar9 = 0x273;
                }
              }
            }
            else {
              pbVar12 = pbVar15 + 2;
              while ((*(ushort *)(lVar7 + (ulong)bVar17 * 2) & 0x107) != 0) {
                bVar17 = pbVar12[-1];
                pbVar12 = pbVar12 + 1;
              }
              pbVar16 = pbVar12 + -2;
              if (bVar17 == 0x3a) {
                if (pbVar12[-1] != 0x3a) {
                  bVar17 = 0x3a;
                  goto LAB_0041727c;
                }
                bVar17 = *pbVar12;
                pbVar12[-2] = 0;
                if ((char)bVar17 < '\0') {
                  bVar4 = 0x3a;
                  *pbVar12 = 0;
                  goto joined_r0x00417110;
                }
                pbVar21 = pbVar12;
                do {
                  if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) & 0x107) == 0) break;
                  pbVar21 = pbVar21 + 1;
                  bVar17 = *pbVar21;
                } while (-1 < (char)bVar17);
                bVar4 = 0x3a;
                *pbVar21 = 0;
              }
              else {
LAB_0041727c:
                *pbVar16 = 0;
                pbVar21 = pbVar16;
                pbVar16 = (byte *)0x0;
                pbVar12 = pbVar15;
                pbVar15 = param_2;
              }
              pbVar20 = pbVar21;
              if (bVar2 == 0) goto LAB_00417120;
LAB_00417114:
              if (bVar2 == bVar17) {
                pbVar21 = pbVar20 + 1;
                goto LAB_00417120;
              }
              uVar8 = 0x66;
              uVar9 = 0x25a;
            }
            FUN_004014b0(0xe,0x65,uVar8,"external/openssl/crypto/conf/conf_def.c",uVar9);
            break;
          }
          goto LAB_00416ee8;
        }
        uVar19 = (ulong)iVar18;
        pbVar12 = param_4 + 1;
        uVar14 = (ulong)(char)*pbVar12;
        if (-1 < (char)*pbVar12) goto LAB_00416fd4;
        do {
          do {
            pbVar15 = pbVar12;
            uVar13 = (uint)uVar14;
            if ((uint)uVar14 == uVar11) {
              pbVar15 = param_4 + 2;
              uVar13 = uVar11;
              if ((uint)*pbVar15 != (uVar11 & 0xff)) goto LAB_00417000;
            }
            *(char *)(plVar5[1] + uVar19) = (char)uVar13;
            uVar19 = uVar19 + 1;
            pbVar12 = pbVar15 + 1;
            uVar14 = (ulong)(char)*pbVar12;
            param_4 = pbVar15;
          } while ((char)*pbVar12 < '\0');
LAB_00416fd4:
          uVar13 = (uint)uVar14;
        } while ((*(ushort *)(*(long *)(param_1 + 8) + (uVar14 & 0xff) * 2) >> 3 & 1) == 0);
LAB_00417000:
        param_4 = param_4 + 2;
        if (uVar13 != uVar11) {
          param_4 = pbVar12;
        }
        bVar17 = *param_4;
      } while( true );
    }
    FUN_00417470(plVar5);
  }
  return 0;
}


