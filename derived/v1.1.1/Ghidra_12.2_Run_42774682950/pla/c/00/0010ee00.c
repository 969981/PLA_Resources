/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010ee00; name: FUN_0010ee00
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0010ee00(ushort *param_1,ushort *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  byte *pbVar14;
  ushort *puVar15;
  ushort *puVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long lVar26;
  undefined *puVar27;
  ushort *puVar28;
  ushort *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  size_t sVar32;
  ushort *puVar33;
  undefined8 *puVar34;
  ushort *local_e8;
  ushort local_e0 [25];
  ushort auStack_ae [31];
  ushort auStack_70 [8];
  
  puVar2 = (undefined8 *)((long)param_3 + param_4);
  if (0x13 < param_4) {
    param_4 = 0x14;
  }
  puVar34 = (undefined8 *)((long)puVar2 - param_4);
  puVar33 = param_2 + -0x1f;
  local_e8 = param_1;
  if ((long)param_3 - param_5 < 0x10000) {
    if (param_3 < puVar34) {
      puVar8 = PTR_DAT_04372348;
      puVar27 = PTR_DAT_04372340;
LAB_0010ee9c:
      if (puVar33 <= param_1) {
        if (param_1 < param_2) {
          if (param_2 != auStack_70 + 8) {
            memmove(local_e0,param_1,(long)param_2 - (long)param_1);
            local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
            param_1 = local_e0;
            puVar8 = PTR_DAT_04372348;
            param_2 = auStack_70;
            puVar33 = auStack_ae;
            goto LAB_0010eea4;
          }
          FUN_0010a430();
          pcVar18 = *(code **)PTR_PTR_043722f8;
          if (pcVar18 == (code *)0x0) goto LAB_00112154;
          pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
        }
        else {
          FUN_0010a430();
          pcVar18 = *(code **)PTR_PTR_043722f8;
          if (pcVar18 == (code *)0x0) goto LAB_00112154;
          pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
        }
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        uVar12 = 0x65e;
        goto LAB_00112150;
      }
LAB_0010eea4:
      pbVar14 = (byte *)((long)param_1 + 1);
      bVar3 = (byte)*param_1;
      uVar19 = (ulong)bVar3 & 0xf;
      if (8 < uVar19) {
        if (uVar19 == 0xf) {
          bVar4 = *(byte *)((long)param_1 + 1);
          if ((ulong)bVar4 < 0xc0) {
            puVar15 = param_1 + 1;
            lVar26 = (ulong)bVar4 + 0xf;
            puVar16 = (ushort *)((long)puVar15 + lVar26);
          }
          else {
            puVar15 = (ushort *)((long)param_1 + 3);
            lVar26 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_1[1];
            puVar16 = (ushort *)((long)puVar15 + lVar26);
          }
          if ((puVar33 < puVar16) || ((long)puVar34 - (long)param_3 <= lVar26))
          goto joined_r0x00111864;
          puVar10 = (undefined8 *)((long)param_3 + lVar26);
          do {
            puVar9 = param_3 + 1;
            *param_3 = *(undefined8 *)puVar15;
            puVar15 = puVar15 + 4;
            param_3 = puVar9;
          } while (puVar9 < puVar10);
          if (puVar16 < puVar33) {
            param_1 = puVar16;
          }
          else {
            if (param_2 <= puVar16) goto LAB_00112788;
            if (param_2 == auStack_70 + 8) goto LAB_001127b4;
            memmove(local_e0,puVar16,(long)param_2 - (long)puVar16);
            param_1 = local_e0;
            local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar16));
            param_2 = auStack_70;
            puVar33 = auStack_ae;
          }
          uVar5 = *param_1;
          puVar27 = PTR_DAT_04372340;
          puVar8 = PTR_DAT_04372348;
        }
        else {
          if ((long)puVar34 - (long)param_3 <= (long)uVar19) goto joined_r0x00111864;
          uVar12 = *(undefined8 *)((long)param_1 + 9);
          puVar10 = (undefined8 *)((long)param_3 + uVar19);
          param_1 = (ushort *)(pbVar14 + uVar19);
          *param_3 = *(undefined8 *)pbVar14;
          param_3[1] = uVar12;
          uVar5 = *param_1;
        }
        uVar19 = (ulong)(bVar3 >> 4);
        uVar20 = (ulong)uVar5;
        if (bVar3 < 0x90) {
          if ((ulong)((long)puVar10 - param_5) < uVar20) goto LAB_001117a0;
          uVar19 = uVar19 + 4;
          puVar15 = param_1 + 1;
          puVar9 = (undefined8 *)((long)puVar10 - uVar20);
          if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010ee88;
          if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_001120b4;
          if (7 < uVar19) {
            puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
            *puVar10 = *puVar9;
            puVar9 = puVar34;
            do {
              puVar31 = puVar9 + 1;
              *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
              puVar9 = puVar31;
            } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            goto LAB_00111920;
          }
          goto LAB_00111850;
        }
        if (uVar19 != 0xf) {
          if ((ulong)((long)puVar10 - param_5) < uVar20) goto LAB_001117cc;
          uVar19 = uVar19 + 4;
          puVar15 = param_1 + 1;
          puVar9 = (undefined8 *)((long)puVar10 - uVar20);
          if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010ef2c;
          if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
          if (7 < uVar19) {
            puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
            *puVar10 = *puVar9;
            puVar9 = puVar34;
            do {
              puVar31 = puVar9 + 1;
              *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
              puVar9 = puVar31;
            } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            goto LAB_00111920;
          }
          goto LAB_00111850;
        }
        uVar17 = uVar20 & 0x7f;
        if ((uVar5 >> 7 & 1) == 0) {
          uVar20 = (ulong)*(ushort *)((long)param_1 + 1);
          if ((ulong)((long)puVar10 - param_5) < uVar20) goto LAB_00111e38;
          uVar19 = uVar17 + 0x13;
          if (uVar17 == 0x7f) {
            bVar3 = *(byte *)((long)param_1 + 3);
            if ((ulong)bVar3 < 0xc0) {
              puVar15 = param_1 + 2;
              uVar19 = (ulong)bVar3 + 0x92;
              if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f208;
LAB_00112670:
              if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
              puVar9 = (undefined8 *)((long)puVar10 - uVar20);
              if (7 < uVar19) {
                puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                *puVar10 = *puVar9;
                puVar9 = puVar34;
                do {
                  puVar31 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                  puVar9 = puVar31;
                } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)));
                goto LAB_00111920;
              }
              goto LAB_00111850;
            }
            puVar15 = (ushort *)((long)param_1 + 5);
            uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)param_1[2];
            if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00112670;
          }
          else {
            puVar15 = (ushort *)((long)param_1 + 3);
            if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00112670;
          }
LAB_0010f208:
          param_3 = (undefined8 *)((long)puVar10 + uVar19);
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
            param_1 = puVar15;
            puVar10 = puVar9;
          } while (puVar9 < param_3);
          goto LAB_0010ee9c;
        }
        uVar19 = (uVar17 >> 3) + 4;
        if (uVar17 >> 3 == 0xf) {
          uVar17 = (ulong)*(byte *)((long)param_1 + 1);
          if (uVar17 < 0xc0) {
            param_1 = param_1 + 1;
            uVar19 = 0x13;
          }
          else {
            uVar19 = (ulong)((uint)*(byte *)((long)param_1 + 1) * 0x100 - 0xc000) | 0x13;
            uVar17 = (ulong)(byte)param_1[1];
            param_1 = (ushort *)((long)param_1 + 3);
          }
          uVar19 = uVar19 + uVar17;
          if ((ulong)((long)puVar10 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
        }
        else {
          param_1 = (ushort *)((long)param_1 + 1);
          if ((ulong)((long)puVar10 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
        }
        uVar20 = uVar20 & 7;
        if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
          puVar24 = (undefined1 *)((long)puVar10 - uVar20);
          *(undefined1 *)puVar10 = *puVar24;
          *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
          *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
          iVar6 = *(int *)(puVar27 + uVar20 * 4);
          *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
          *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
          if (8 < uVar19) {
            iVar7 = *(int *)(puVar8 + uVar20 * 4);
            puVar9 = puVar10 + 1;
            do {
              puVar31 = puVar9 + 1;
              *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20));
              puVar9 = puVar31;
            } while (puVar31 < (undefined8 *)((long)puVar10 + uVar19));
          }
          param_3 = (undefined8 *)((long)puVar10 + uVar19);
          goto LAB_0010ee9c;
        }
        if ((long)puVar2 - (long)puVar10 < (long)uVar19) goto LAB_0011232c;
        uVar17 = uVar19;
        if ((uVar19 & 3) == 0) {
          puVar24 = (undefined1 *)((long)puVar10 - uVar20);
          puVar34 = puVar10;
          if (uVar19 - 1 < 3) goto LAB_001123d8;
          goto LAB_00112980;
        }
        lVar26 = -(uVar19 & 3);
        puVar9 = puVar10;
        do {
          uVar17 = uVar17 - 1;
          puVar34 = (undefined8 *)((long)puVar9 + 1);
          *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + -uVar20);
          lVar26 = lVar26 + 1;
          puVar9 = puVar34;
        } while (lVar26 != 0);
        puVar24 = (undefined1 *)((long)puVar34 + -uVar20);
        if (2 < uVar19 - 1) {
LAB_00112980:
          do {
            *(undefined1 *)puVar34 = *puVar24;
            *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
            *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
            puVar1 = puVar24 + 3;
            uVar17 = uVar17 - 4;
            puVar24 = puVar24 + 4;
            *(undefined1 *)((long)puVar34 + 3) = *puVar1;
            puVar34 = (undefined8 *)((long)puVar34 + 4);
          } while (uVar17 != 0);
        }
LAB_001123d8:
        param_3 = (undefined8 *)((long)puVar10 + uVar19);
        goto joined_r0x00111864;
      }
      *param_3 = *(undefined8 *)pbVar14;
      puVar16 = (ushort *)(pbVar14 + uVar19);
      puVar10 = (undefined8 *)((long)param_3 + uVar19);
      uVar20 = (ulong)*puVar16;
      uVar19 = (ulong)(bVar3 >> 4);
      if (0x8f < bVar3) {
        if (uVar19 != 0xf) {
          if ((ulong)((long)puVar10 - param_5) < uVar20) goto LAB_001117cc;
          uVar19 = uVar19 + 4;
          puVar15 = puVar16 + 1;
          puVar9 = (undefined8 *)((long)puVar10 - uVar20);
          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
            if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
            if (7 < uVar19) {
              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar34;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                puVar9 = puVar31;
              } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
              goto LAB_00111920;
            }
            goto LAB_00111850;
          }
LAB_0010ef2c:
          *puVar10 = *puVar9;
          puVar10[1] = puVar9[1];
          *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar9 + 2);
          param_3 = (undefined8 *)((long)puVar10 + uVar19);
          param_1 = puVar15;
          goto LAB_0010ee9c;
        }
        uVar17 = uVar20 & 0x7f;
        param_1 = (ushort *)((long)puVar16 + 1);
        if ((*puVar16 >> 7 & 1) == 0) {
          puVar28 = (ushort *)((long)puVar16 + 3);
          uVar20 = (ulong)*param_1;
          if ((ulong)((long)puVar10 - param_5) < uVar20) goto LAB_00111e38;
          uVar19 = uVar17 + 0x13;
          if (uVar17 == 0x7f) {
            puVar15 = puVar16 + 2;
            bVar3 = *(byte *)puVar28;
            if ((ulong)bVar3 < 0xc0) {
              uVar19 = (ulong)bVar3 + 0x92;
              param_1 = puVar15;
              if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_00111edc:
                if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
                puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                if (7 < uVar19) {
                  puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                  *puVar10 = *puVar9;
                  puVar9 = puVar34;
                  do {
                    puVar31 = puVar9 + 1;
                    *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                    puVar9 = puVar31;
                  } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)));
                  goto LAB_00111920;
                }
                goto LAB_00111850;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar16 + 5);
              uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)*puVar15;
              puVar15 = param_1;
              if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111edc;
            }
          }
          else {
            param_1 = puVar28;
            puVar15 = puVar28;
            if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111edc;
          }
          param_3 = (undefined8 *)((long)puVar10 + uVar19);
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
            puVar10 = puVar9;
          } while (puVar9 < param_3);
          goto LAB_0010ee9c;
        }
        uVar19 = (uVar17 >> 3) + 4;
        if (uVar17 >> 3 == 0xf) {
          bVar3 = *(byte *)param_1;
          uVar17 = (ulong)bVar3;
          uVar19 = 0x13;
          param_1 = puVar16 + 1;
          if (0xbf < uVar17) {
            uVar19 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
            param_1 = (ushort *)((long)puVar16 + 3);
            uVar17 = (ulong)(byte)puVar16[1];
          }
          uVar19 = uVar19 + uVar17;
          if ((ulong)((long)puVar10 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
        }
        else if ((ulong)((long)puVar10 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
        uVar20 = uVar20 & 7;
        if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
          puVar24 = (undefined1 *)((long)puVar10 - uVar20);
          *(undefined1 *)puVar10 = *puVar24;
          *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
          *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
          iVar6 = *(int *)(puVar27 + uVar20 * 4);
          *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
          *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
          if (8 < uVar19) {
            iVar7 = *(int *)(puVar8 + uVar20 * 4);
            puVar9 = puVar10 + 1;
            do {
              puVar31 = puVar9 + 1;
              *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20));
              puVar9 = puVar31;
            } while (puVar31 < (undefined8 *)((long)(puVar10 + 1) + (uVar19 - 8)));
          }
          param_3 = (undefined8 *)((long)puVar10 + uVar19);
          goto LAB_0010ee9c;
        }
        if ((long)puVar2 - (long)puVar10 < (long)uVar19) goto LAB_0011232c;
        uVar17 = uVar19;
        if ((uVar19 & 3) == 0) {
          puVar24 = (undefined1 *)((long)puVar10 - uVar20);
          puVar34 = puVar10;
        }
        else {
          lVar26 = -(uVar19 & 3);
          puVar9 = puVar10;
          do {
            uVar17 = uVar17 - 1;
            puVar34 = (undefined8 *)((long)puVar9 + 1);
            *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + -uVar20);
            lVar26 = lVar26 + 1;
            puVar9 = puVar34;
          } while (lVar26 != 0);
          puVar24 = (undefined1 *)((long)puVar34 + -uVar20);
        }
        if (2 < uVar19 - 1) {
          do {
            *(undefined1 *)puVar34 = *puVar24;
            *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
            *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
            puVar1 = puVar24 + 3;
            uVar17 = uVar17 - 4;
            puVar24 = puVar24 + 4;
            *(undefined1 *)((long)puVar34 + 3) = *puVar1;
            puVar34 = (undefined8 *)((long)puVar34 + 4);
          } while (uVar17 != 0);
        }
        goto LAB_001123d8;
      }
      if ((ulong)((long)puVar10 - param_5) < uVar20) goto LAB_001117a0;
      uVar19 = uVar19 + 4;
      puVar15 = puVar16 + 1;
      puVar9 = (undefined8 *)((long)puVar10 - uVar20);
      if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_0010ee88:
        *puVar10 = *puVar9;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
        param_3 = (undefined8 *)((long)puVar10 + uVar19);
        param_1 = puVar15;
        goto LAB_0010ee9c;
      }
      if ((long)puVar2 - (long)puVar10 <= (long)uVar19) {
LAB_001120b4:
        FUN_0010a430();
        pcVar18 = *(code **)PTR_PTR_043722f8;
        if (pcVar18 == (code *)0x0) goto LAB_00112154;
        pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
        uVar12 = 0x29;
        goto LAB_00112150;
      }
      if (uVar19 < 8) {
LAB_00111850:
        memmove(puVar10,puVar9,uVar19);
        param_3 = (undefined8 *)((long)puVar10 + uVar19);
        param_1 = puVar15;
      }
      else {
        puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
        *puVar10 = *puVar9;
        puVar9 = puVar34;
        do {
          puVar31 = puVar9 + 1;
          *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
          puVar9 = puVar31;
        } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
LAB_00111920:
        param_3 = (undefined8 *)((long)puVar10 + uVar19);
        param_1 = puVar15;
      }
    }
joined_r0x00111864:
    puVar15 = param_1;
    if (param_3 < puVar2) {
LAB_0011082c:
      while( true ) {
        puVar16 = param_1;
        if (puVar33 <= param_1) {
          if (param_2 <= param_1) {
            FUN_0010a430();
            pcVar18 = *(code **)PTR_PTR_043722f8;
            if (pcVar18 == (code *)0x0) goto LAB_00112154;
            pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
            pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
            uVar12 = 0x671;
            goto LAB_00112150;
          }
          if (param_2 == auStack_70 + 8) {
            FUN_0010a430();
            pcVar18 = *(code **)PTR_PTR_043722f8;
            if (pcVar18 == (code *)0x0) goto LAB_00112154;
            pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
            pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
            uVar12 = 0x671;
            goto LAB_00112150;
          }
          memmove(local_e0,param_1,(long)param_2 - (long)param_1);
          puVar16 = local_e0;
          local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
          param_2 = auStack_70;
          puVar33 = auStack_ae;
        }
        pbVar14 = (byte *)((long)puVar16 + 1);
        bVar3 = (byte)*puVar16;
        sVar32 = (ulong)bVar3 & 0xf;
        if (8 < sVar32) break;
        if (((long)puVar2 - (long)param_3 < (long)sVar32) ||
           ((long)param_2 - (long)pbVar14 < (long)sVar32)) goto LAB_00111acc;
        memmove(param_3,pbVar14,sVar32);
        param_3 = (undefined8 *)((long)param_3 + sVar32);
        puVar15 = (ushort *)(pbVar14 + sVar32);
        if (param_3 == puVar2) goto LAB_001119e4;
        uVar20 = (ulong)*puVar15;
        uVar19 = (ulong)(bVar3 >> 4);
        if (bVar3 < 0x90) {
          if ((ulong)((long)param_3 - param_5) < uVar20) goto LAB_001117a0;
          uVar19 = uVar19 + 4;
          if ((long)puVar2 - (long)param_3 <= (long)uVar19) goto LAB_00111af8;
          param_1 = puVar15 + 1;
          if (uVar19 < 8) {
            memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
            param_3 = (undefined8 *)((long)param_3 + uVar19);
          }
          else {
            *param_3 = *(undefined8 *)((long)param_3 - uVar20);
            puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
            puVar10 = puVar34;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            param_3 = (undefined8 *)((long)param_3 + uVar19);
          }
        }
        else if (uVar19 == 0xf) {
          uVar19 = uVar20 & 0x7f;
          param_1 = (ushort *)((long)puVar15 + 1);
          if ((*puVar15 >> 7 & 1) == 0) {
            uVar20 = (ulong)*param_1;
            if ((ulong)((long)param_3 - param_5) < uVar20) goto LAB_00111e38;
            uVar17 = uVar19 + 0x13;
            if (uVar19 == 0x7f) {
              bVar3 = *(byte *)((long)puVar15 + 3);
              if ((ulong)bVar3 < 0xc0) {
                uVar17 = (ulong)bVar3 + 0x92;
                param_1 = puVar15 + 2;
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00112534;
              }
              else {
                param_1 = (ushort *)((long)puVar15 + 5);
                uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar15[2];
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00112534;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar15 + 3);
              if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00112534;
            }
            if (uVar17 < 8) {
              memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar17);
              param_3 = (undefined8 *)((long)param_3 + uVar17);
            }
            else {
              *param_3 = *(undefined8 *)((long)param_3 - uVar20);
              puVar34 = (undefined8 *)((long)param_3 + (uVar17 & 7));
              puVar10 = puVar34;
              do {
                puVar9 = puVar10 + 1;
                *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                puVar10 = puVar9;
              } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar17 & 0x1fffffff8)));
              param_3 = (undefined8 *)((long)param_3 + uVar17);
            }
          }
          else {
            uVar17 = (uVar19 >> 3) + 4;
            if (uVar19 >> 3 == 0xf) {
              bVar3 = *(byte *)param_1;
              uVar19 = (ulong)bVar3;
              uVar17 = 0x13;
              param_1 = puVar15 + 1;
              if (0xbf < uVar19) {
                uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                param_1 = (ushort *)((long)puVar15 + 3);
                uVar19 = (ulong)(byte)puVar15[1];
              }
              uVar17 = uVar17 + uVar19;
              if ((ulong)((long)param_3 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
            }
            else if ((ulong)((long)param_3 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
            uVar19 = uVar17;
            if ((uVar17 & 7) == 0) {
              puVar24 = (undefined1 *)((long)param_3 - (uVar20 & 7));
              puVar34 = param_3;
            }
            else {
              lVar23 = -(uVar20 & 7);
              lVar26 = -(uVar17 & 7);
              puVar10 = param_3;
              do {
                uVar19 = uVar19 - 1;
                puVar34 = (undefined8 *)((long)puVar10 + 1);
                *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar23);
                lVar26 = lVar26 + 1;
                puVar10 = puVar34;
              } while (lVar26 != 0);
              puVar24 = (undefined1 *)((long)puVar34 + lVar23);
            }
            if (6 < uVar17 - 1) {
              do {
                *(undefined1 *)puVar34 = *puVar24;
                *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                *(undefined1 *)((long)puVar34 + 3) = puVar24[3];
                *(undefined1 *)((long)puVar34 + 4) = puVar24[4];
                *(undefined1 *)((long)puVar34 + 5) = puVar24[5];
                *(undefined1 *)((long)puVar34 + 6) = puVar24[6];
                puVar1 = puVar24 + 7;
                uVar19 = uVar19 - 8;
                puVar24 = puVar24 + 8;
                *(undefined1 *)((long)puVar34 + 7) = *puVar1;
                puVar34 = puVar34 + 1;
              } while (uVar19 != 0);
            }
            param_3 = (undefined8 *)((long)param_3 + uVar17);
          }
        }
        else {
          if ((ulong)((long)param_3 - param_5) < uVar20) goto LAB_001117cc;
          uVar19 = uVar19 + 4;
          if ((long)puVar2 - (long)param_3 <= (long)uVar19) goto LAB_00111774;
          param_1 = puVar15 + 1;
          if (uVar19 < 8) {
            memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
            param_3 = (undefined8 *)((long)param_3 + uVar19);
          }
          else {
            *param_3 = *(undefined8 *)((long)param_3 - uVar20);
            puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
            puVar10 = puVar34;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            param_3 = (undefined8 *)((long)param_3 + uVar19);
          }
        }
      }
      if (sVar32 == 0xf) {
        bVar4 = *(byte *)((long)puVar16 + 1);
        if ((ulong)bVar4 < 0xc0) {
          puVar15 = puVar16 + 1;
          sVar32 = (ulong)bVar4 + 0xf;
          if ((long)param_2 - (long)puVar15 < (long)sVar32) goto LAB_00112560;
        }
        else {
          puVar15 = (ushort *)((long)puVar16 + 3);
          sVar32 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)puVar16[1];
          if ((long)param_2 - (long)puVar15 < (long)sVar32) goto LAB_00112560;
        }
        if ((long)puVar2 - (long)param_3 < (long)sVar32) goto LAB_00112560;
        memmove(param_3,puVar15,sVar32);
        param_3 = (undefined8 *)((long)param_3 + sVar32);
        puVar15 = (ushort *)((long)puVar15 + sVar32);
        if (param_3 == puVar2) goto LAB_001119e4;
        if (puVar15 < puVar33) goto LAB_00110a04;
        if (param_2 <= puVar15) goto LAB_00112a2c;
        if (param_2 == auStack_70 + 8) goto LAB_00112a58;
        memmove(local_e0,puVar15,(long)param_2 - (long)puVar15);
        local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar15));
        param_2 = auStack_70;
        puVar33 = auStack_ae;
        puVar15 = local_e0;
        uVar5 = local_e0[0];
      }
      else {
        if ((long)puVar2 - (long)param_3 < (long)sVar32) {
          sVar32 = (size_t)(int)((long)puVar2 - (long)param_3);
          if ((long)param_2 - (long)pbVar14 < (long)sVar32) goto LAB_00112470;
        }
        else if ((long)param_2 - (long)pbVar14 < (long)sVar32) goto LAB_00112470;
        memmove(param_3,pbVar14,sVar32);
        param_3 = (undefined8 *)((long)param_3 + sVar32);
        puVar15 = (ushort *)(pbVar14 + sVar32);
        if (param_3 == puVar2) goto LAB_001119e4;
LAB_00110a04:
        uVar5 = *puVar15;
      }
      uVar19 = (ulong)(bVar3 >> 4);
      uVar20 = (ulong)uVar5;
      if (0x8f < bVar3) {
        if (uVar19 == 0xf) {
          uVar19 = uVar20 & 0x7f;
          if ((uVar5 >> 7 & 1) == 0) {
            uVar20 = (ulong)*(ushort *)((long)puVar15 + 1);
            if ((ulong)((long)param_3 - param_5) < uVar20) goto LAB_00111e38;
            uVar17 = uVar19 + 0x13;
            if (uVar19 == 0x7f) {
              bVar3 = *(byte *)((long)puVar15 + 3);
              if ((ulong)bVar3 < 0xc0) {
                param_1 = puVar15 + 2;
                uVar17 = (ulong)bVar3 + 0x92;
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00112534;
              }
              else {
                param_1 = (ushort *)((long)puVar15 + 5);
                uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar15[2];
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00112534;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar15 + 3);
              if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00112534;
            }
            if (uVar17 < 8) {
              memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar17);
              param_3 = (undefined8 *)((long)param_3 + uVar17);
            }
            else {
              *param_3 = *(undefined8 *)((long)param_3 - uVar20);
              puVar34 = (undefined8 *)((long)param_3 + (uVar17 & 7));
              puVar10 = puVar34;
              do {
                puVar9 = puVar10 + 1;
                *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                puVar10 = puVar9;
              } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar17 & 0x1fffffff8)));
              param_3 = (undefined8 *)((long)param_3 + uVar17);
            }
          }
          else {
            uVar17 = (uVar19 >> 3) + 4;
            if (uVar19 >> 3 == 0xf) {
              uVar19 = (ulong)*(byte *)((long)puVar15 + 1);
              if (uVar19 < 0xc0) {
                param_1 = puVar15 + 1;
                uVar17 = 0x13;
              }
              else {
                uVar17 = (ulong)((uint)*(byte *)((long)puVar15 + 1) * 0x100 - 0xc000) | 0x13;
                uVar19 = (ulong)(byte)puVar15[1];
                param_1 = (ushort *)((long)puVar15 + 3);
              }
              uVar17 = uVar17 + uVar19;
              if ((ulong)((long)param_3 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
            }
            else {
              param_1 = (ushort *)((long)puVar15 + 1);
              if ((ulong)((long)param_3 - param_5) < (uVar20 & 7)) goto LAB_00111e64;
            }
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
            uVar19 = uVar17;
            if ((uVar17 & 7) == 0) {
              puVar24 = (undefined1 *)((long)param_3 - (uVar20 & 7));
              puVar34 = param_3;
            }
            else {
              lVar23 = -(uVar20 & 7);
              lVar26 = -(uVar17 & 7);
              puVar10 = param_3;
              do {
                uVar19 = uVar19 - 1;
                puVar34 = (undefined8 *)((long)puVar10 + 1);
                *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar23);
                lVar26 = lVar26 + 1;
                puVar10 = puVar34;
              } while (lVar26 != 0);
              puVar24 = (undefined1 *)((long)puVar34 + lVar23);
            }
            if (6 < uVar17 - 1) {
              do {
                *(undefined1 *)puVar34 = *puVar24;
                *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                *(undefined1 *)((long)puVar34 + 3) = puVar24[3];
                *(undefined1 *)((long)puVar34 + 4) = puVar24[4];
                *(undefined1 *)((long)puVar34 + 5) = puVar24[5];
                *(undefined1 *)((long)puVar34 + 6) = puVar24[6];
                puVar1 = puVar24 + 7;
                uVar19 = uVar19 - 8;
                puVar24 = puVar24 + 8;
                *(undefined1 *)((long)puVar34 + 7) = *puVar1;
                puVar34 = puVar34 + 1;
              } while (uVar19 != 0);
            }
            param_3 = (undefined8 *)((long)param_3 + uVar17);
          }
        }
        else {
          if ((ulong)((long)param_3 - param_5) < uVar20) goto LAB_001117cc;
          uVar19 = uVar19 + 4;
          if ((long)puVar2 - (long)param_3 <= (long)uVar19) goto LAB_00111774;
          param_1 = puVar15 + 1;
          if (uVar19 < 8) {
            memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
            param_3 = (undefined8 *)((long)param_3 + uVar19);
          }
          else {
            *param_3 = *(undefined8 *)((long)param_3 - uVar20);
            puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
            puVar10 = puVar34;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            param_3 = (undefined8 *)((long)param_3 + uVar19);
          }
        }
        goto LAB_0011082c;
      }
      if ((ulong)((long)param_3 - param_5) < uVar20) goto LAB_001117a0;
      uVar19 = uVar19 + 4;
      if ((long)uVar19 < (long)puVar2 - (long)param_3) {
        param_1 = puVar15 + 1;
        if (uVar19 < 8) {
          memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
          param_3 = (undefined8 *)((long)param_3 + uVar19);
        }
        else {
          *param_3 = *(undefined8 *)((long)param_3 - uVar20);
          puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
          puVar10 = puVar34;
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
            puVar10 = puVar9;
          } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
          param_3 = (undefined8 *)((long)param_3 + uVar19);
        }
        goto LAB_0011082c;
      }
LAB_00111af8:
      FUN_0010a430();
      pcVar18 = *(code **)PTR_PTR_043722f8;
      if (pcVar18 == (code *)0x0) goto LAB_00112154;
      pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
      pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
      uVar12 = 0x39;
    }
    else {
joined_r0x001119e0:
      if (param_3 == puVar2) {
LAB_001119e4:
        return (long)puVar15 - (long)local_e8;
      }
      FUN_0010a430();
      pcVar18 = *(code **)PTR_PTR_043722f8;
      if (pcVar18 == (code *)0x0) goto LAB_00112154;
      pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
      pcVar13 = "OODLE ERROR : LZ corruption : LZB didn\'t stop at end\n";
      uVar12 = 0x6ca;
    }
  }
  else if (param_3 < puVar34) {
    puVar15 = auStack_70 + 8;
    if (param_1 < puVar33) goto LAB_0010f444;
LAB_0010f5ac:
    if (param_1 < param_2) {
      if (param_2 == puVar15) {
        FUN_0010a430();
        pcVar18 = *(code **)PTR_PTR_043722f8;
        if (pcVar18 == (code *)0x0) goto LAB_00112154;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
        uVar12 = 0x688;
      }
      else {
        memmove(local_e0,param_1,(long)param_2 - (long)param_1);
        local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
        param_1 = local_e0;
        param_2 = auStack_70;
        puVar33 = auStack_ae;
        if (0x4f < (long)puVar2 - (long)param_3) goto LAB_0010f450;
LAB_0010f610:
        if (param_3 < puVar2) {
LAB_0010f544:
          pbVar14 = (byte *)((long)param_1 + 1);
          bVar3 = (byte)*param_1;
          uVar19 = (ulong)bVar3 & 0xf;
          if (uVar19 < 9) {
            *param_3 = *(undefined8 *)pbVar14;
            puVar16 = (ushort *)(pbVar14 + uVar19);
            puVar10 = (undefined8 *)((long)param_3 + uVar19);
            uVar20 = (ulong)*puVar16;
            uVar19 = (ulong)(bVar3 >> 4);
            if (bVar3 < 0x90) {
              uVar19 = uVar19 + 4;
              puVar28 = puVar16 + 1;
              puVar9 = (undefined8 *)((long)puVar10 - uVar20);
              param_1 = puVar28;
              if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f590;
              if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_001120b4;
              if (uVar19 < 8) goto LAB_001119c0;
              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar34;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                puVar9 = puVar31;
              } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            }
            else if (uVar19 == 0xf) {
              uVar17 = uVar20 & 0x7f;
              param_1 = (ushort *)((long)puVar16 + 1);
              if ((*puVar16 >> 7 & 1) != 0) {
                uVar19 = (uVar17 >> 3) + 4;
                if (uVar17 >> 3 == 0xf) {
                  bVar3 = *(byte *)param_1;
                  uVar17 = (ulong)bVar3;
                  uVar19 = 0x13;
                  param_1 = puVar16 + 1;
                  if (0xbf < uVar17) {
                    uVar19 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                    param_1 = (ushort *)((long)puVar16 + 3);
                    uVar17 = (ulong)(byte)puVar16[1];
                  }
                  uVar19 = uVar19 + uVar17;
                  if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010fb10;
                }
                else if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_0010fb10:
                  uVar20 = uVar20 & 7;
                  puVar24 = (undefined1 *)((long)puVar10 - uVar20);
                  *(undefined1 *)puVar10 = *puVar24;
                  *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                  *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                  iVar6 = *(int *)(PTR_DAT_04372340 + uVar20 * 4);
                  *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
                  *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
                  if (uVar19 < 9) goto LAB_0010fb80;
                  iVar7 = *(int *)(PTR_DAT_04372348 + uVar20 * 4);
                  puVar9 = puVar10 + 1;
                  do {
                    puVar31 = puVar9 + 1;
                    *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20))
                    ;
                    puVar9 = puVar31;
                    if ((undefined8 *)((long)(puVar10 + 1) + (uVar19 - 8)) <= puVar31)
                    goto LAB_0010fb80;
                  } while( true );
                }
                if ((long)uVar19 <= (long)puVar2 - (long)puVar10) {
                  uVar17 = uVar19;
                  if ((uVar19 & 3) == 0) {
                    puVar24 = (undefined1 *)((long)puVar10 - (uVar20 & 7));
                    puVar34 = puVar10;
                  }
                  else {
                    lVar23 = -(uVar20 & 7);
                    lVar26 = -(uVar19 & 3);
                    puVar9 = puVar10;
                    do {
                      uVar17 = uVar17 - 1;
                      puVar34 = (undefined8 *)((long)puVar9 + 1);
                      *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar23);
                      lVar26 = lVar26 + 1;
                      puVar9 = puVar34;
                    } while (lVar26 != 0);
                    puVar24 = (undefined1 *)((long)puVar34 + lVar23);
                  }
                  if (2 < uVar19 - 1) {
                    do {
                      *(undefined1 *)puVar34 = *puVar24;
                      *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                      *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                      puVar1 = puVar24 + 3;
                      uVar17 = uVar17 - 4;
                      puVar24 = puVar24 + 4;
                      *(undefined1 *)((long)puVar34 + 3) = *puVar1;
                      puVar34 = (undefined8 *)((long)puVar34 + 4);
                    } while (uVar17 != 0);
                  }
                  goto LAB_00112524;
                }
                goto LAB_0011232c;
              }
              puVar29 = (ushort *)((long)puVar16 + 3);
              uVar20 = (ulong)*param_1;
              uVar19 = uVar17 + 0x13;
              if (uVar17 == 0x7f) {
                puVar28 = puVar16 + 2;
                bVar3 = *(byte *)puVar29;
                if ((ulong)bVar3 < 0xc0) {
                  uVar19 = (ulong)bVar3 + 0x92;
                  param_1 = puVar28;
                  if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_0010fa40:
                    param_3 = (undefined8 *)((long)puVar10 + uVar19);
                    do {
                      puVar9 = puVar10 + 1;
                      *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                      puVar10 = puVar9;
                    } while (puVar9 < param_3);
                    goto LAB_0010f43c;
                  }
                }
                else {
                  param_1 = (ushort *)((long)puVar16 + 5);
                  uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)*puVar28;
                  puVar28 = param_1;
                  if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010fa40;
                }
              }
              else {
                param_1 = puVar29;
                puVar28 = puVar29;
                if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010fa40;
              }
              if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
              puVar9 = (undefined8 *)((long)puVar10 - uVar20);
              if (uVar19 < 8) goto LAB_001119c0;
              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar34;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                puVar9 = puVar31;
              } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)));
            }
            else {
              uVar19 = uVar19 + 4;
              puVar28 = puVar16 + 1;
              puVar9 = (undefined8 *)((long)puVar10 - uVar20);
              param_1 = puVar28;
              if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f420;
              if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
              if (uVar19 < 8) goto LAB_001119c0;
              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar34;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                puVar9 = puVar31;
              } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
            }
LAB_001119cc:
            param_3 = (undefined8 *)((long)puVar10 + uVar19);
            param_1 = puVar28;
            goto joined_r0x00112068;
          }
          if (uVar19 == 0xf) {
            bVar4 = *(byte *)((long)param_1 + 1);
            if ((ulong)bVar4 < 0xc0) {
              puVar16 = param_1 + 1;
              lVar26 = (ulong)bVar4 + 0xf;
              puVar28 = (ushort *)((long)puVar16 + lVar26);
            }
            else {
              puVar16 = (ushort *)((long)param_1 + 3);
              lVar26 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_1[1];
              puVar28 = (ushort *)((long)puVar16 + lVar26);
            }
            if ((puVar33 < puVar28) || ((long)puVar34 - (long)param_3 <= lVar26))
            goto joined_r0x00111e30;
            puVar10 = (undefined8 *)((long)param_3 + lVar26);
            do {
              puVar9 = param_3 + 1;
              *param_3 = *(undefined8 *)puVar16;
              puVar16 = puVar16 + 4;
              param_3 = puVar9;
            } while (puVar9 < puVar10);
            if (puVar28 < puVar33) {
              uVar5 = *puVar28;
            }
            else {
              if (param_2 <= puVar28) goto LAB_00112788;
              if (param_2 == puVar15) goto LAB_001127b4;
              memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
              local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar28));
              param_2 = auStack_70;
              puVar33 = auStack_ae;
              puVar28 = local_e0;
              uVar5 = local_e0[0];
            }
          }
          else {
            if ((long)puVar34 - (long)param_3 <= (long)uVar19) goto joined_r0x00111e30;
            uVar12 = *(undefined8 *)((long)param_1 + 9);
            puVar10 = (undefined8 *)((long)param_3 + uVar19);
            puVar28 = (ushort *)(pbVar14 + uVar19);
            *param_3 = *(undefined8 *)pbVar14;
            param_3[1] = uVar12;
            uVar5 = *puVar28;
          }
          uVar19 = (ulong)(bVar3 >> 4);
          uVar20 = (ulong)uVar5;
          if (bVar3 < 0x90) {
            uVar19 = uVar19 + 4;
            puVar28 = puVar28 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar20);
            param_1 = puVar28;
            if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f590;
            if ((long)uVar19 < (long)puVar2 - (long)puVar10) {
              if (uVar19 < 8) {
LAB_001119c0:
                memmove(puVar10,puVar9,uVar19);
              }
              else {
                puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                *puVar10 = *puVar9;
                puVar9 = puVar34;
                do {
                  puVar31 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                  puVar9 = puVar31;
                } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
              }
              goto LAB_001119cc;
            }
            goto LAB_001120b4;
          }
          if (uVar19 != 0xf) {
            uVar19 = uVar19 + 4;
            puVar28 = puVar28 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar20);
            param_1 = puVar28;
            if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f420;
            if ((long)uVar19 < (long)puVar2 - (long)puVar10) {
              if (uVar19 < 8) goto LAB_001119c0;
              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar34;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                puVar9 = puVar31;
              } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
              goto LAB_001119cc;
            }
            goto LAB_00112124;
          }
          uVar17 = uVar20 & 0x7f;
          if ((uVar5 >> 7 & 1) == 0) {
            uVar20 = (ulong)*(ushort *)((long)puVar28 + 1);
            uVar19 = uVar17 + 0x13;
            if (uVar17 == 0x7f) {
              bVar3 = *(byte *)((long)puVar28 + 3);
              if ((ulong)bVar3 < 0xc0) {
                param_1 = puVar28 + 2;
                uVar19 = (ulong)bVar3 + 0x92;
                puVar28 = param_1;
                if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_001101a4:
                  param_3 = (undefined8 *)((long)puVar10 + uVar19);
                  do {
                    puVar9 = puVar10 + 1;
                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                    puVar10 = puVar9;
                  } while (puVar9 < param_3);
LAB_0010f43c:
                  do {
                    if (puVar33 <= param_1) goto LAB_0010f5ac;
LAB_0010f444:
                    if ((long)puVar2 - (long)param_3 < 0x50) goto LAB_0010f610;
LAB_0010f450:
                    pbVar14 = (byte *)((long)param_1 + 1);
                    bVar3 = (byte)*param_1;
                    uVar20 = (ulong)bVar3;
                    uVar19 = uVar20 & 0xf;
                    if (8 < uVar19) {
                      if (uVar19 == 0xf) {
                        bVar4 = *(byte *)((long)param_1 + 1);
                        if ((ulong)bVar4 < 0xc0) {
                          puVar16 = param_1 + 1;
                          lVar26 = (ulong)bVar4 + 0xf;
                          puVar29 = (ushort *)((long)puVar16 + lVar26);
                        }
                        else {
                          puVar16 = (ushort *)((long)param_1 + 3);
                          lVar26 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) +
                                   (ulong)(byte)param_1[1];
                          puVar29 = (ushort *)((long)puVar16 + lVar26);
                        }
                        if ((puVar33 < puVar29) || ((long)puVar34 - (long)param_3 <= lVar26))
                        goto joined_r0x00111e30;
                        puVar10 = (undefined8 *)((long)param_3 + lVar26);
                        do {
                          puVar9 = param_3 + 1;
                          *param_3 = *(undefined8 *)puVar16;
                          puVar16 = puVar16 + 4;
                          param_3 = puVar9;
                        } while (puVar9 < puVar10);
                        if (puVar29 < puVar33) {
                          puVar28 = puVar29;
                          uVar5 = *puVar29;
                        }
                        else {
                          if (param_2 <= puVar29) goto LAB_00112788;
                          if (param_2 == puVar15) goto LAB_001127b4;
                          memmove(local_e0,puVar29,(long)param_2 - (long)puVar29);
                          puVar28 = local_e0;
                          local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar29));
                          param_2 = auStack_70;
                          puVar33 = auStack_ae;
                          uVar5 = local_e0[0];
                        }
                      }
                      else {
                        if ((long)puVar34 - (long)param_3 <= (long)uVar19) goto joined_r0x00111e30;
                        uVar12 = *(undefined8 *)((long)param_1 + 9);
                        puVar10 = (undefined8 *)((long)param_3 + uVar19);
                        puVar28 = (ushort *)(pbVar14 + uVar19);
                        *param_3 = *(undefined8 *)pbVar14;
                        param_3[1] = uVar12;
                        uVar5 = *puVar28;
                      }
                      uVar19 = (ulong)(bVar3 >> 4);
                      uVar20 = (ulong)uVar5;
                      if (bVar3 < 0x90) {
                        uVar19 = uVar19 + 4;
                        puVar28 = puVar28 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                        param_1 = puVar28;
                        if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_0010f590:
                          *puVar10 = *puVar9;
                          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
                          param_3 = (undefined8 *)((long)puVar10 + uVar19);
                          if (puVar33 <= param_1) goto LAB_0010f5ac;
                          goto LAB_0010f444;
                        }
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_001120b4;
                        if (uVar19 < 8) goto LAB_001119c0;
                        puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                        *puVar10 = *puVar9;
                        puVar9 = puVar34;
                        do {
                          puVar31 = puVar9 + 1;
                          *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                          puVar9 = puVar31;
                        } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                        goto LAB_001119cc;
                      }
                      if (uVar19 != 0xf) {
                        uVar19 = uVar19 + 4;
                        puVar28 = puVar28 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                        param_1 = puVar28;
                        if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f420;
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
                        if (7 < uVar19) {
                          puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar34;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                          goto LAB_001119cc;
                        }
                        goto LAB_001119c0;
                      }
                      uVar17 = uVar20 & 0x7f;
                      if ((uVar5 >> 7 & 1) != 0) {
                        uVar19 = (uVar17 >> 3) + 4;
                        if (uVar17 >> 3 == 0xf) {
                          uVar17 = (ulong)*(byte *)((long)puVar28 + 1);
                          if (uVar17 < 0xc0) {
                            param_1 = puVar28 + 1;
                            uVar19 = 0x13;
                          }
                          else {
                            uVar19 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000) |
                                     0x13;
                            uVar17 = (ulong)(byte)puVar28[1];
                            param_1 = (ushort *)((long)puVar28 + 3);
                          }
                          uVar19 = uVar19 + uVar17;
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_001125d8;
                        }
                        else {
                          param_1 = (ushort *)((long)puVar28 + 1);
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_001125d8:
                            if ((long)puVar2 - (long)puVar10 < (long)uVar19) goto LAB_0011232c;
                            uVar17 = uVar19;
                            if ((uVar19 & 3) == 0) {
                              puVar24 = (undefined1 *)((long)puVar10 - (uVar20 & 7));
                              puVar34 = puVar10;
                              if (uVar19 - 1 < 3) goto LAB_00112524;
                              goto LAB_001128c4;
                            }
                            lVar23 = -(uVar20 & 7);
                            lVar26 = -(uVar19 & 3);
                            puVar9 = puVar10;
                            do {
                              uVar17 = uVar17 - 1;
                              puVar34 = (undefined8 *)((long)puVar9 + 1);
                              *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar23);
                              lVar26 = lVar26 + 1;
                              puVar9 = puVar34;
                            } while (lVar26 != 0);
                            puVar24 = (undefined1 *)((long)puVar34 + lVar23);
                            if (2 < uVar19 - 1) {
LAB_001128c4:
                              do {
                                *(undefined1 *)puVar34 = *puVar24;
                                *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                                *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                                puVar1 = puVar24 + 3;
                                uVar17 = uVar17 - 4;
                                puVar24 = puVar24 + 4;
                                *(undefined1 *)((long)puVar34 + 3) = *puVar1;
                                puVar34 = (undefined8 *)((long)puVar34 + 4);
                              } while (uVar17 != 0);
                            }
                            goto LAB_00112524;
                          }
                        }
                        uVar20 = uVar20 & 7;
                        puVar24 = (undefined1 *)((long)puVar10 - uVar20);
                        *(undefined1 *)puVar10 = *puVar24;
                        *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                        *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                        iVar6 = *(int *)(PTR_DAT_04372340 + uVar20 * 4);
                        *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
                        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
                        if (8 < uVar19) {
                          iVar7 = *(int *)(PTR_DAT_04372348 + uVar20 * 4);
                          puVar9 = puVar10 + 1;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)
                                       ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20));
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)puVar10 + uVar19));
                        }
                        goto LAB_0010fb80;
                      }
                      uVar20 = (ulong)*(ushort *)((long)puVar28 + 1);
                      uVar19 = uVar17 + 0x13;
                      if (uVar17 == 0x7f) {
                        bVar3 = *(byte *)((long)puVar28 + 3);
                        if ((ulong)bVar3 < 0xc0) {
                          param_1 = puVar28 + 2;
                          uVar19 = (ulong)bVar3 + 0x92;
                          puVar28 = param_1;
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_00112590:
                            if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
                            puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                            if (7 < uVar19) {
                              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                              *puVar10 = *puVar9;
                              puVar9 = puVar34;
                              do {
                                puVar31 = puVar9 + 1;
                                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                                puVar9 = puVar31;
                              } while (puVar31 < (undefined8 *)
                                                 ((long)puVar34 + (uVar19 & 0x1fffffff8)));
                              goto LAB_001119cc;
                            }
                            goto LAB_001119c0;
                          }
                        }
                        else {
                          param_1 = (ushort *)((long)puVar28 + 5);
                          uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                   (ulong)(byte)puVar28[2];
                          puVar28 = param_1;
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00112590;
                        }
                      }
                      else {
                        param_1 = (ushort *)((long)puVar28 + 3);
                        puVar28 = param_1;
                        if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00112590;
                      }
                      param_3 = (undefined8 *)((long)puVar10 + uVar19);
                      do {
                        puVar9 = puVar10 + 1;
                        *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                        puVar10 = puVar9;
                      } while (puVar9 < param_3);
                      goto LAB_0010f43c;
                    }
                    *param_3 = *(undefined8 *)pbVar14;
                    puVar16 = (ushort *)(pbVar14 + uVar19);
                    uVar21 = (ulong)*puVar16;
                    puVar10 = (undefined8 *)((long)param_3 + uVar19);
                    uVar17 = (ulong)(bVar3 >> 4);
                    if (0x8f < bVar3) {
                      if (uVar17 != 0xf) {
                        uVar19 = uVar17 + 4;
                        puVar28 = puVar16 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar21);
                        param_1 = puVar28;
                        if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f420;
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
                        if (7 < uVar19) {
                          puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar34;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar21);
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                          goto LAB_001119cc;
                        }
                        goto LAB_001119c0;
                      }
                      uVar20 = uVar21 & 0x7f;
                      param_1 = (ushort *)((long)puVar16 + 1);
                      if ((*puVar16 >> 7 & 1) == 0) goto code_r0x0010f774;
                      uVar19 = (uVar20 >> 3) + 4;
                      if (uVar20 >> 3 == 0xf) {
                        bVar3 = *(byte *)param_1;
                        uVar20 = (ulong)bVar3;
                        uVar19 = 0x13;
                        param_1 = puVar16 + 1;
                        if (0xbf < uVar20) {
                          uVar19 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                          param_1 = (ushort *)((long)puVar16 + 3);
                          uVar20 = (ulong)(byte)puVar16[1];
                        }
                        uVar19 = uVar19 + uVar20;
                        if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f7cc;
                      }
                      else if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_0010f7cc:
                        uVar21 = uVar21 & 7;
                        puVar24 = (undefined1 *)((long)puVar10 - uVar21);
                        *(undefined1 *)puVar10 = *puVar24;
                        *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                        *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                        iVar6 = *(int *)(PTR_DAT_04372340 + uVar21 * 4);
                        *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
                        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
                        if (8 < uVar19) {
                          iVar7 = *(int *)(PTR_DAT_04372348 + uVar21 * 4);
                          puVar9 = puVar10 + 1;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)
                                       ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar21));
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)(puVar10 + 1) + (uVar19 - 8)));
                        }
                        goto LAB_0010fb80;
                      }
                      if ((long)puVar2 - (long)puVar10 < (long)uVar19) goto LAB_0011232c;
                      uVar20 = uVar19;
                      if ((uVar19 & 3) == 0) {
                        puVar24 = (undefined1 *)((long)puVar10 - (uVar21 & 7));
                        puVar34 = puVar10;
                        if (uVar19 - 1 < 3) goto LAB_00112524;
                        goto LAB_001122a4;
                      }
                      lVar23 = -(uVar21 & 7);
                      lVar26 = -(uVar19 & 3);
                      puVar9 = puVar10;
                      do {
                        uVar20 = uVar20 - 1;
                        puVar34 = (undefined8 *)((long)puVar9 + 1);
                        *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar23);
                        lVar26 = lVar26 + 1;
                        puVar9 = puVar34;
                      } while (lVar26 != 0);
                      puVar24 = (undefined1 *)((long)puVar34 + lVar23);
                      if (2 < uVar19 - 1) {
LAB_001122a4:
                        do {
                          *(undefined1 *)puVar34 = *puVar24;
                          *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                          *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                          puVar1 = puVar24 + 3;
                          uVar20 = uVar20 - 4;
                          puVar24 = puVar24 + 4;
                          *(undefined1 *)((long)puVar34 + 3) = *puVar1;
                          puVar34 = (undefined8 *)((long)puVar34 + 4);
                        } while (uVar20 != 0);
                      }
                      goto LAB_00112524;
                    }
                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar21);
                    *(undefined4 *)(puVar10 + 1) =
                         *(undefined4 *)((undefined8 *)((long)puVar10 - uVar21) + 1);
                    bVar4 = (byte)puVar16[1];
                    uVar21 = (ulong)bVar4;
                    puVar9 = (undefined8 *)((long)puVar10 + uVar17 + 4);
                    pbVar14 = (byte *)((long)puVar16 + 3);
                    uVar19 = uVar21 & 0xf;
                    if (uVar19 < 9) {
                      *puVar9 = *(undefined8 *)pbVar14;
                      puVar16 = (ushort *)(pbVar14 + uVar19);
                      puVar10 = (undefined8 *)((long)puVar9 + uVar19);
                      uVar22 = (ulong)*puVar16;
                      uVar19 = (ulong)(bVar4 >> 4);
                      if (bVar4 < 0x90) {
                        *puVar10 = *(undefined8 *)((long)puVar10 - uVar22);
                        *(undefined4 *)(puVar10 + 1) =
                             *(undefined4 *)((undefined8 *)((long)puVar10 - uVar22) + 1);
                        bVar3 = (byte)puVar16[1];
                        uVar30 = (ulong)bVar3;
                        puVar9 = (undefined8 *)((long)puVar10 + uVar19 + 4);
                        pbVar14 = (byte *)((long)puVar16 + 3);
                        uVar22 = uVar30 & 0xf;
                        if (8 < uVar22) {
                          if (uVar22 == 0xf) {
                            puVar29 = puVar16 + 2;
                            bVar4 = *pbVar14;
                            if ((ulong)bVar4 < 0xc0) {
                              lVar26 = (ulong)bVar4 + 0xf;
                              puVar28 = (ushort *)((long)puVar29 + lVar26);
                            }
                            else {
                              lVar26 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) +
                                       (ulong)(byte)*puVar29;
                              puVar28 = (ushort *)((long)puVar16 + 5 + lVar26);
                              puVar29 = (ushort *)((long)puVar16 + 5);
                            }
                            if ((puVar33 < puVar28) || ((long)puVar34 - (long)puVar9 <= lVar26))
                            goto LAB_00111b60;
                            puVar31 = (undefined8 *)((long)puVar9 + lVar26);
                            do {
                              puVar10 = puVar9 + 1;
                              *puVar9 = *(undefined8 *)puVar29;
                              puVar29 = puVar29 + 4;
                              puVar9 = puVar10;
                            } while (puVar10 < puVar31);
                            if (puVar28 < puVar33) {
                              uVar5 = *puVar28;
                            }
                            else {
                              if (param_2 <= puVar28) goto LAB_00112788;
                              if (param_2 == puVar15) goto LAB_001127b4;
                              memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
                              local_e8 = (ushort *)
                                         ((long)local_e8 + ((long)local_e0 - (long)puVar28));
                              param_2 = auStack_70;
                              puVar33 = auStack_ae;
                              puVar28 = local_e0;
                              uVar5 = local_e0[0];
                            }
                          }
                          else {
                            if ((long)puVar34 - (long)puVar9 <= (long)uVar22) goto LAB_00111b60;
                            uVar12 = *(undefined8 *)((long)puVar16 + 0xb);
                            puVar31 = (undefined8 *)((long)puVar9 + uVar22);
                            puVar28 = (ushort *)(pbVar14 + uVar22);
                            *puVar9 = *(undefined8 *)pbVar14;
                            *(undefined8 *)((long)puVar10 + uVar19 + 0xc) = uVar12;
                            uVar5 = *puVar28;
                          }
                          uVar19 = (ulong)(bVar3 >> 4);
                          uVar20 = (ulong)uVar5;
                          if (bVar3 < 0x90) {
                            uVar19 = uVar19 + 4;
                            param_1 = puVar28 + 1;
                            puVar10 = (undefined8 *)((long)puVar31 - uVar20);
                            if ((long)puVar34 - (long)puVar31 <= (long)uVar19) {
                              if ((long)puVar2 - (long)puVar31 <= (long)uVar19) goto LAB_001120b4;
                              if (7 < uVar19) {
                                puVar34 = (undefined8 *)((long)puVar31 + (uVar19 & 7));
                                *puVar31 = *puVar10;
                                puVar10 = puVar34;
                                do {
                                  puVar9 = puVar10 + 1;
                                  *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                                  puVar10 = puVar9;
                                } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
LAB_00112384:
                                param_3 = (undefined8 *)((long)puVar31 + uVar19);
                                goto joined_r0x00111e30;
                              }
LAB_00112054:
                              memmove(puVar31,puVar10,uVar19);
                              param_3 = (undefined8 *)((long)puVar31 + uVar19);
                              goto joined_r0x00112068;
                            }
                            *puVar31 = *puVar10;
                            *(undefined4 *)(puVar31 + 1) = *(undefined4 *)(puVar10 + 1);
joined_r0x0010f8a4:
                            param_3 = (undefined8 *)((long)puVar31 + uVar19);
                            if (puVar33 <= param_1) goto LAB_0010f5ac;
                            goto LAB_0010f444;
                          }
                          if (uVar19 != 0xf) {
                            uVar19 = uVar19 + 4;
                            param_1 = puVar28 + 1;
                            puVar10 = (undefined8 *)((long)puVar31 - uVar20);
                            if ((long)uVar19 < (long)puVar34 - (long)puVar31) {
                              *puVar31 = *puVar10;
                              puVar31[1] = puVar10[1];
                              *(undefined2 *)(puVar31 + 2) = *(undefined2 *)(puVar10 + 2);
                              goto joined_r0x0010f8a4;
                            }
                            if ((long)uVar19 < (long)puVar2 - (long)puVar31) {
                              if (uVar19 < 8) goto LAB_00112054;
                              puVar34 = (undefined8 *)((long)puVar31 + (uVar19 & 7));
                              *puVar31 = *puVar10;
                              puVar10 = puVar34;
                              do {
                                puVar9 = puVar10 + 1;
                                *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                                puVar10 = puVar9;
                              } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                              goto LAB_00112384;
                            }
                            goto LAB_00112124;
                          }
                          uVar17 = uVar20 & 0x7f;
                          if ((uVar5 >> 7 & 1) != 0) {
                            uVar19 = (uVar17 >> 3) + 4;
                            if (uVar17 >> 3 == 0xf) {
                              uVar17 = (ulong)*(byte *)((long)puVar28 + 1);
                              if (uVar17 < 0xc0) {
                                param_1 = puVar28 + 1;
                                uVar19 = 0x13;
                              }
                              else {
                                uVar19 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000
                                                ) | 0x13;
                                uVar17 = (ulong)(byte)puVar28[1];
                                param_1 = (ushort *)((long)puVar28 + 3);
                              }
                              uVar19 = uVar19 + uVar17;
                              if ((long)uVar19 < (long)puVar34 - (long)puVar31) {
LAB_0011025c:
                                uVar20 = uVar20 & 7;
                                puVar24 = (undefined1 *)((long)puVar31 - uVar20);
                                *(undefined1 *)puVar31 = *puVar24;
                                *(undefined1 *)((long)puVar31 + 1) = puVar24[1];
                                *(undefined1 *)((long)puVar31 + 2) = puVar24[2];
                                iVar6 = *(int *)(PTR_DAT_04372340 + uVar20 * 4);
                                *(undefined1 *)((long)puVar31 + 3) = puVar24[3];
                                *(undefined4 *)((long)puVar31 + 4) =
                                     *(undefined4 *)(puVar24 + iVar6);
                                if (8 < uVar19) {
                                  iVar7 = *(int *)(PTR_DAT_04372348 + uVar20 * 4);
                                  puVar10 = puVar31 + 1;
                                  do {
                                    puVar9 = puVar10 + 1;
                                    *puVar10 = *(undefined8 *)
                                                ((long)puVar10 +
                                                (((long)iVar6 - (long)iVar7) - uVar20));
                                    puVar10 = puVar9;
                                  } while (puVar9 < (undefined8 *)((long)puVar31 + uVar19));
                                }
                                goto joined_r0x0010f8a4;
                              }
                            }
                            else {
                              param_1 = (ushort *)((long)puVar28 + 1);
                              if ((long)uVar19 < (long)puVar34 - (long)puVar31) goto LAB_0011025c;
                            }
                            if ((long)puVar2 - (long)puVar31 < (long)uVar19) goto LAB_0011232c;
                            uVar17 = uVar19;
                            if ((uVar19 & 3) == 0) {
                              puVar24 = (undefined1 *)((long)puVar31 - (uVar20 & 7));
                              puVar10 = puVar31;
                            }
                            else {
                              lVar23 = -(uVar20 & 7);
                              lVar26 = -(uVar19 & 3);
                              puVar34 = puVar31;
                              do {
                                uVar17 = uVar17 - 1;
                                puVar10 = (undefined8 *)((long)puVar34 + 1);
                                *(undefined1 *)puVar34 = *(undefined1 *)((long)puVar34 + lVar23);
                                lVar26 = lVar26 + 1;
                                puVar34 = puVar10;
                              } while (lVar26 != 0);
                              puVar24 = (undefined1 *)((long)puVar10 + lVar23);
                            }
                            if (2 < uVar19 - 1) {
                              do {
                                *(undefined1 *)puVar10 = *puVar24;
                                *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                                *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                                puVar1 = puVar24 + 3;
                                uVar17 = uVar17 - 4;
                                puVar24 = puVar24 + 4;
                                *(undefined1 *)((long)puVar10 + 3) = *puVar1;
                                puVar10 = (undefined8 *)((long)puVar10 + 4);
                              } while (uVar17 != 0);
                            }
                            param_3 = (undefined8 *)((long)puVar31 + uVar19);
                            goto joined_r0x00111e30;
                          }
                          uVar20 = (ulong)*(ushort *)((long)puVar28 + 1);
                          uVar19 = uVar17 + 0x13;
                          if (uVar17 == 0x7f) {
                            bVar3 = *(byte *)((long)puVar28 + 3);
                            if ((ulong)bVar3 < 0xc0) {
                              param_1 = puVar28 + 2;
                              uVar19 = (ulong)bVar3 + 0x92;
                              if ((long)puVar34 - (long)puVar31 <= (long)uVar19) {
LAB_001127e0:
                                if ((long)uVar19 < (long)puVar2 - (long)puVar31) {
                                  puVar10 = (undefined8 *)((long)puVar31 - uVar20);
                                  if (uVar19 < 8) goto LAB_00112054;
                                  puVar34 = (undefined8 *)((long)puVar31 + (uVar19 & 7));
                                  *puVar31 = *puVar10;
                                  puVar10 = puVar34;
                                  do {
                                    puVar9 = puVar10 + 1;
                                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                                    puVar10 = puVar9;
                                  } while (puVar9 < (undefined8 *)
                                                    ((long)puVar34 + (uVar19 & 0x1fffffff8)));
                                  goto LAB_00112384;
                                }
                                goto LAB_00112940;
                              }
                            }
                            else {
                              param_1 = (ushort *)((long)puVar28 + 5);
                              uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                       (ulong)(byte)puVar28[2];
                              if ((long)puVar34 - (long)puVar31 <= (long)uVar19) goto LAB_001127e0;
                            }
                          }
                          else {
                            param_1 = (ushort *)((long)puVar28 + 3);
                            if ((long)puVar34 - (long)puVar31 <= (long)uVar19) goto LAB_001127e0;
                          }
                          param_3 = (undefined8 *)((long)puVar31 + uVar19);
                          do {
                            puVar10 = puVar31 + 1;
                            *puVar31 = *(undefined8 *)((long)puVar31 - uVar20);
                            puVar31 = puVar10;
                          } while (puVar10 < param_3);
                          goto LAB_0010f43c;
                        }
                        *puVar9 = *(undefined8 *)pbVar14;
                        puVar16 = (ushort *)(pbVar14 + uVar22);
                        puVar10 = (undefined8 *)((long)puVar9 + uVar22);
                        uVar22 = (ulong)*puVar16;
                        uVar19 = (ulong)(bVar3 >> 4);
                        if (bVar3 < 0x90) {
                          *puVar10 = *(undefined8 *)((long)puVar10 - uVar22);
                          param_1 = puVar16 + 1;
                          param_3 = (undefined8 *)((long)puVar10 + uVar19 + 4);
                          *(undefined4 *)(puVar10 + 1) =
                               *(undefined4 *)((undefined8 *)((long)puVar10 - uVar22) + 1);
                          goto LAB_0010f544;
                        }
                        if (uVar19 != 0xf) {
                          uVar19 = uVar19 + 4;
                          puVar28 = puVar16 + 1;
                          puVar9 = (undefined8 *)((long)puVar10 - uVar22);
                          param_1 = puVar28;
                          if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f420;
                          if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
                          if (7 < uVar19) {
                            puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                            *puVar10 = *puVar9;
                            puVar9 = puVar34;
                            do {
                              puVar31 = puVar9 + 1;
                              *puVar9 = *(undefined8 *)((long)puVar9 - uVar22);
                              puVar9 = puVar31;
                            } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                            goto LAB_001119cc;
                          }
                          goto LAB_001119c0;
                        }
                        uVar25 = uVar22 & 0x7f;
                        param_1 = (ushort *)((long)puVar16 + 1);
                        if ((*puVar16 >> 7 & 1) != 0) {
                          uVar19 = (uVar25 >> 3) + 4;
                          if (uVar25 >> 3 == 0xf) {
                            bVar3 = *(byte *)param_1;
                            uVar25 = (ulong)bVar3;
                            uVar19 = 0x13;
                            param_1 = puVar16 + 1;
                            if (0xbf < uVar25) {
                              uVar19 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                              param_1 = (ushort *)((long)puVar16 + 3);
                              uVar25 = (ulong)(byte)puVar16[1];
                            }
                            uVar19 = uVar19 + uVar25;
                            if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_001121c4:
                              if ((long)puVar2 - (long)puVar10 < (long)uVar19) goto LAB_0011232c;
                              puVar24 = (undefined1 *)((long)puVar10 - (uVar22 & 7));
                              if ((uVar19 & 3) == 0) {
                                uVar17 = uVar19;
                                puVar34 = puVar10;
                                if (uVar19 - 1 < 3) goto LAB_00112524;
                                goto LAB_001124ac;
                              }
                              lVar26 = uVar17 + (bVar4 >> 4);
                              uVar22 = 0;
                              do {
                                *(undefined1 *)
                                 ((long)param_3 +
                                 uVar22 + lVar26 + (uVar20 & 0xf) + (uVar30 & 0xf) + (uVar21 & 0xf)
                                          + 8) = puVar24[uVar22];
                                uVar22 = uVar22 + 1;
                              } while ((uVar19 & 3) != uVar22);
                              puVar24 = puVar24 + uVar22;
                              uVar17 = uVar19 - uVar22;
                              puVar34 = (undefined8 *)
                                        ((long)param_3 +
                                        uVar22 + lVar26 + (uVar20 & 0xf) + (uVar30 & 0xf) +
                                                 (uVar21 & 0xf) + 8);
                              if (2 < uVar19 - 1) {
LAB_001124ac:
                                do {
                                  *(undefined1 *)puVar34 = *puVar24;
                                  *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                                  *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                                  puVar1 = puVar24 + 3;
                                  uVar17 = uVar17 - 4;
                                  puVar24 = puVar24 + 4;
                                  *(undefined1 *)((long)puVar34 + 3) = *puVar1;
                                  puVar34 = (undefined8 *)((long)puVar34 + 4);
                                } while (uVar17 != 0);
                              }
                              goto LAB_00112524;
                            }
                          }
                          else if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_001121c4;
                          uVar22 = uVar22 & 7;
                          puVar24 = (undefined1 *)((long)puVar10 - uVar22);
                          *(undefined1 *)puVar10 = *puVar24;
                          *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                          *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                          iVar6 = *(int *)(PTR_DAT_04372340 + uVar22 * 4);
                          *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
                          *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
                          if (8 < uVar19) {
                            iVar7 = *(int *)(PTR_DAT_04372348 + uVar22 * 4);
                            puVar9 = puVar10 + 1;
                            do {
                              puVar31 = puVar9 + 1;
                              *puVar9 = *(undefined8 *)
                                         ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar22));
                              puVar9 = puVar31;
                            } while (puVar31 < (undefined8 *)((long)(puVar10 + 1) + (uVar19 - 8)));
                          }
                          goto LAB_0010fb80;
                        }
                        puVar29 = (ushort *)((long)puVar16 + 3);
                        uVar20 = (ulong)*param_1;
                        uVar19 = uVar25 + 0x13;
                        if (uVar25 == 0x7f) {
                          puVar28 = puVar16 + 2;
                          bVar3 = *(byte *)puVar29;
                          if ((ulong)bVar3 < 0xc0) {
                            uVar19 = (ulong)bVar3 + 0x92;
                            param_1 = puVar28;
                            if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_0010f9fc:
                              param_3 = (undefined8 *)((long)puVar10 + uVar19);
                              do {
                                puVar9 = puVar10 + 1;
                                *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                                puVar10 = puVar9;
                              } while (puVar9 < param_3);
                              goto LAB_0010f43c;
                            }
                          }
                          else {
                            param_1 = (ushort *)((long)puVar16 + 5);
                            uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                     (ulong)(byte)*puVar28;
                            puVar28 = param_1;
                            if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f9fc;
                          }
                        }
                        else {
                          param_1 = puVar29;
                          puVar28 = puVar29;
                          if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f9fc;
                        }
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                        if (7 < uVar19) {
                          puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar34;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)))
                          ;
                          goto LAB_001119cc;
                        }
                        goto LAB_001119c0;
                      }
                      if (uVar19 != 0xf) {
                        uVar19 = uVar19 + 4;
                        puVar28 = puVar16 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar22);
                        param_1 = puVar28;
                        if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_0010f420;
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112124;
                        if (7 < uVar19) {
                          puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar34;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar22);
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                          goto LAB_001119cc;
                        }
                        goto LAB_001119c0;
                      }
                      uVar17 = uVar22 & 0x7f;
                      param_1 = (ushort *)((long)puVar16 + 1);
                      if ((*puVar16 >> 7 & 1) != 0) {
                        uVar19 = (uVar17 >> 3) + 4;
                        if (uVar17 >> 3 == 0xf) {
                          bVar4 = *(byte *)param_1;
                          uVar17 = (ulong)bVar4;
                          uVar19 = 0x13;
                          param_1 = puVar16 + 1;
                          if (0xbf < uVar17) {
                            uVar19 = (ulong)((uint)bVar4 * 0x100 - 0xc000) | 0x13;
                            param_1 = (ushort *)((long)puVar16 + 3);
                            uVar17 = (ulong)(byte)puVar16[1];
                          }
                          uVar19 = uVar19 + uVar17;
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111f24;
                        }
                        else if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_00111f24:
                          if ((long)puVar2 - (long)puVar10 < (long)uVar19) goto LAB_0011232c;
                          if ((uVar19 & 3) == 0) {
                            puVar24 = (undefined1 *)((long)puVar10 - (uVar22 & 7));
                            uVar20 = uVar19;
                            puVar34 = puVar10;
                            if (uVar19 - 1 < 3) goto LAB_00112524;
                            goto LAB_001123fc;
                          }
                          lVar26 = (uVar20 & 0xf) + (ulong)(bVar3 >> 4) + (uVar21 & 0xf);
                          uVar17 = 0;
                          do {
                            *(undefined1 *)((long)param_3 + uVar17 + lVar26 + 4) =
                                 *(undefined1 *)
                                  ((long)param_3 + uVar17 + (lVar26 - (uVar22 & 7)) + 4);
                            uVar17 = uVar17 + 1;
                          } while ((uVar19 & 3) != uVar17);
                          lVar26 = (uVar20 & 0xf) + (ulong)(bVar3 >> 4) + (uVar21 & 0xf);
                          puVar24 = (undefined1 *)
                                    ((long)param_3 + uVar17 + (lVar26 - (uVar22 & 7)) + 4);
                          uVar20 = uVar19 - uVar17;
                          puVar34 = (undefined8 *)((long)param_3 + uVar17 + lVar26 + 4);
                          if (2 < uVar19 - 1) {
LAB_001123fc:
                            do {
                              *(undefined1 *)puVar34 = *puVar24;
                              *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
                              *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
                              puVar1 = puVar24 + 3;
                              uVar20 = uVar20 - 4;
                              puVar24 = puVar24 + 4;
                              *(undefined1 *)((long)puVar34 + 3) = *puVar1;
                              puVar34 = (undefined8 *)((long)puVar34 + 4);
                            } while (uVar20 != 0);
                          }
                          goto LAB_00112524;
                        }
                        uVar22 = uVar22 & 7;
                        puVar24 = (undefined1 *)((long)puVar10 - uVar22);
                        *(undefined1 *)puVar10 = *puVar24;
                        *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                        *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                        iVar6 = *(int *)(PTR_DAT_04372340 + uVar22 * 4);
                        *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
                        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
                        if (8 < uVar19) {
                          iVar7 = *(int *)(PTR_DAT_04372348 + uVar22 * 4);
                          puVar9 = puVar10 + 1;
                          do {
                            puVar31 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)
                                       ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar22));
                            puVar9 = puVar31;
                          } while (puVar31 < (undefined8 *)((long)(puVar10 + 1) + (uVar19 - 8)));
                        }
LAB_0010fb80:
                        param_3 = (undefined8 *)((long)puVar10 + uVar19);
                        if (puVar33 <= param_1) goto LAB_0010f5ac;
                        goto LAB_0010f444;
                      }
                      puVar29 = (ushort *)((long)puVar16 + 3);
                      uVar20 = (ulong)*param_1;
                      uVar19 = uVar17 + 0x13;
                      if (uVar17 == 0x7f) {
                        puVar28 = puVar16 + 2;
                        bVar3 = *(byte *)puVar29;
                        if ((ulong)bVar3 < 0xc0) {
                          uVar19 = (ulong)bVar3 + 0x92;
                          param_1 = puVar28;
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_00111fb4:
                            if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
                            puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                            if (7 < uVar19) {
                              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
                              *puVar10 = *puVar9;
                              puVar9 = puVar34;
                              do {
                                puVar31 = puVar9 + 1;
                                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                                puVar9 = puVar31;
                              } while (puVar31 < (undefined8 *)
                                                 ((long)puVar34 + (uVar19 & 0x1fffffff8)));
                              goto LAB_001119cc;
                            }
                            goto LAB_001119c0;
                          }
                        }
                        else {
                          param_1 = (ushort *)((long)puVar16 + 5);
                          uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                   (ulong)(byte)*puVar28;
                          puVar28 = param_1;
                          if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111fb4;
                        }
                      }
                      else {
                        param_1 = puVar29;
                        puVar28 = puVar29;
                        if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111fb4;
                      }
                      param_3 = (undefined8 *)((long)puVar10 + uVar19);
                      do {
                        puVar9 = puVar10 + 1;
                        *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                        puVar10 = puVar9;
                      } while (puVar9 < param_3);
                      goto LAB_0010f43c;
                    }
                    if (uVar19 != 0xf) {
                      if ((long)uVar19 < (long)puVar34 - (long)puVar9) {
                        uVar12 = *(undefined8 *)((long)puVar16 + 0xb);
                        puVar31 = (undefined8 *)((long)puVar9 + uVar19);
                        puVar28 = (ushort *)(pbVar14 + uVar19);
                        *puVar9 = *(undefined8 *)pbVar14;
                        *(undefined8 *)((long)puVar10 + uVar17 + 0xc) = uVar12;
                        uVar5 = *puVar28;
                        goto joined_r0x0010f72c;
                      }
LAB_00111b60:
                      param_3 = puVar9;
                      param_1 = (ushort *)(pbVar14 + -1);
                      goto joined_r0x00112068;
                    }
                    puVar29 = puVar16 + 2;
                    bVar3 = *pbVar14;
                    if ((ulong)bVar3 < 0xc0) {
                      lVar26 = (ulong)bVar3 + 0xf;
                      puVar28 = (ushort *)((long)puVar29 + lVar26);
                    }
                    else {
                      lVar26 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)*puVar29
                      ;
                      puVar28 = (ushort *)((long)puVar16 + 5 + lVar26);
                      puVar29 = (ushort *)((long)puVar16 + 5);
                    }
                    if ((puVar33 < puVar28) || ((long)puVar34 - (long)puVar9 <= lVar26))
                    goto LAB_00111b60;
                    puVar31 = (undefined8 *)((long)puVar9 + lVar26);
                    do {
                      puVar10 = puVar9 + 1;
                      *puVar9 = *(undefined8 *)puVar29;
                      puVar29 = puVar29 + 4;
                      puVar9 = puVar10;
                    } while (puVar10 < puVar31);
                    if (puVar28 < puVar33) {
                      uVar5 = *puVar28;
                    }
                    else {
                      if (param_2 <= puVar28) goto LAB_00112788;
                      if (param_2 == puVar15) goto LAB_001127b4;
                      memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
                      local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar28));
                      param_2 = auStack_70;
                      puVar33 = auStack_ae;
                      puVar28 = local_e0;
                      uVar5 = local_e0[0];
                    }
joined_r0x0010f72c:
                    uVar19 = (ulong)(bVar4 >> 4);
                    uVar20 = (ulong)uVar5;
                    if (bVar4 < 0x90) {
                      uVar19 = uVar19 + 4;
                      param_1 = puVar28 + 1;
                      puVar10 = (undefined8 *)((long)puVar31 - uVar20);
                      if ((long)uVar19 < (long)puVar34 - (long)puVar31) {
                        *puVar31 = *puVar10;
                        *(undefined4 *)(puVar31 + 1) = *(undefined4 *)(puVar10 + 1);
                        goto joined_r0x0010f760;
                      }
                      if ((long)puVar2 - (long)puVar31 <= (long)uVar19) goto LAB_001120b4;
                      if (7 < uVar19) {
                        puVar34 = (undefined8 *)((long)puVar31 + (uVar19 & 7));
                        *puVar31 = *puVar10;
                        puVar10 = puVar34;
                        do {
                          puVar9 = puVar10 + 1;
                          *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                          puVar10 = puVar9;
                        } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                        goto LAB_00112280;
                      }
                      goto LAB_00111e1c;
                    }
                    if (uVar19 != 0xf) {
                      uVar19 = uVar19 + 4;
                      param_1 = puVar28 + 1;
                      puVar10 = (undefined8 *)((long)puVar31 - uVar20);
                      if ((long)puVar34 - (long)puVar31 <= (long)uVar19) {
                        if ((long)puVar2 - (long)puVar31 <= (long)uVar19) goto LAB_00112124;
                        if (7 < uVar19) {
                          puVar34 = (undefined8 *)((long)puVar31 + (uVar19 & 7));
                          *puVar31 = *puVar10;
                          puVar10 = puVar34;
                          do {
                            puVar9 = puVar10 + 1;
                            *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                            puVar10 = puVar9;
                          } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
                          goto LAB_00112280;
                        }
                        goto LAB_00111e1c;
                      }
                      *puVar31 = *puVar10;
                      puVar31[1] = puVar10[1];
                      *(undefined2 *)(puVar31 + 2) = *(undefined2 *)(puVar10 + 2);
joined_r0x0010f760:
                      param_3 = (undefined8 *)((long)puVar31 + uVar19);
                      if (puVar33 <= param_1) goto LAB_0010f5ac;
                      goto LAB_0010f444;
                    }
                    uVar17 = uVar20 & 0x7f;
                    if ((uVar5 >> 7 & 1) != 0) {
                      uVar19 = (uVar17 >> 3) + 4;
                      if (uVar17 >> 3 == 0xf) {
                        uVar17 = (ulong)*(byte *)((long)puVar28 + 1);
                        if (uVar17 < 0xc0) {
                          param_1 = puVar28 + 1;
                          uVar19 = 0x13;
                        }
                        else {
                          uVar19 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000) |
                                   0x13;
                          uVar17 = (ulong)(byte)puVar28[1];
                          param_1 = (ushort *)((long)puVar28 + 3);
                        }
                        uVar19 = uVar19 + uVar17;
                        if ((long)uVar19 < (long)puVar34 - (long)puVar31) {
LAB_00110034:
                          uVar20 = uVar20 & 7;
                          puVar24 = (undefined1 *)((long)puVar31 - uVar20);
                          *(undefined1 *)puVar31 = *puVar24;
                          *(undefined1 *)((long)puVar31 + 1) = puVar24[1];
                          *(undefined1 *)((long)puVar31 + 2) = puVar24[2];
                          iVar6 = *(int *)(PTR_DAT_04372340 + uVar20 * 4);
                          *(undefined1 *)((long)puVar31 + 3) = puVar24[3];
                          *(undefined4 *)((long)puVar31 + 4) = *(undefined4 *)(puVar24 + iVar6);
                          if (8 < uVar19) {
                            iVar7 = *(int *)(PTR_DAT_04372348 + uVar20 * 4);
                            puVar10 = puVar31 + 1;
                            do {
                              puVar9 = puVar10 + 1;
                              *puVar10 = *(undefined8 *)
                                          ((long)puVar10 + (((long)iVar6 - (long)iVar7) - uVar20));
                              puVar10 = puVar9;
                            } while (puVar9 < (undefined8 *)((long)puVar31 + uVar19));
                          }
                          goto joined_r0x0010f760;
                        }
                      }
                      else {
                        param_1 = (ushort *)((long)puVar28 + 1);
                        if ((long)uVar19 < (long)puVar34 - (long)puVar31) goto LAB_00110034;
                      }
                      if ((long)uVar19 <= (long)puVar2 - (long)puVar31) {
                        uVar17 = uVar19;
                        if ((uVar19 & 3) == 0) {
                          puVar24 = (undefined1 *)((long)puVar31 - (uVar20 & 7));
                          puVar10 = puVar31;
                        }
                        else {
                          lVar23 = -(uVar20 & 7);
                          lVar26 = -(uVar19 & 3);
                          puVar34 = puVar31;
                          do {
                            uVar17 = uVar17 - 1;
                            puVar10 = (undefined8 *)((long)puVar34 + 1);
                            *(undefined1 *)puVar34 = *(undefined1 *)((long)puVar34 + lVar23);
                            lVar26 = lVar26 + 1;
                            puVar34 = puVar10;
                          } while (lVar26 != 0);
                          puVar24 = (undefined1 *)((long)puVar10 + lVar23);
                        }
                        if (2 < uVar19 - 1) {
                          do {
                            *(undefined1 *)puVar10 = *puVar24;
                            *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
                            *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
                            puVar1 = puVar24 + 3;
                            uVar17 = uVar17 - 4;
                            puVar24 = puVar24 + 4;
                            *(undefined1 *)((long)puVar10 + 3) = *puVar1;
                            puVar10 = (undefined8 *)((long)puVar10 + 4);
                          } while (uVar17 != 0);
                        }
                        param_3 = (undefined8 *)((long)puVar31 + uVar19);
                        goto joined_r0x00111e30;
                      }
                      goto LAB_0011232c;
                    }
                    uVar20 = (ulong)*(ushort *)((long)puVar28 + 1);
                    uVar19 = uVar17 + 0x13;
                    if (uVar17 == 0x7f) {
                      bVar3 = *(byte *)((long)puVar28 + 3);
                      if (0xbf < (ulong)bVar3) {
                        param_1 = (ushort *)((long)puVar28 + 5);
                        uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                 (ulong)(byte)puVar28[2];
                        if ((long)puVar34 - (long)puVar31 <= (long)uVar19) goto LAB_001126b8;
                        goto LAB_0010fea4;
                      }
                      param_1 = puVar28 + 2;
                      uVar19 = (ulong)bVar3 + 0x92;
                      if ((long)uVar19 < (long)puVar34 - (long)puVar31) goto LAB_0010fea4;
LAB_001126b8:
                      if ((long)puVar2 - (long)puVar31 <= (long)uVar19) goto LAB_00112940;
                      puVar10 = (undefined8 *)((long)puVar31 - uVar20);
                      if (7 < uVar19) {
                        puVar34 = (undefined8 *)((long)puVar31 + (uVar19 & 7));
                        *puVar31 = *puVar10;
                        puVar10 = puVar34;
                        do {
                          puVar9 = puVar10 + 1;
                          *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                          puVar10 = puVar9;
                        } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)));
LAB_00112280:
                        param_3 = (undefined8 *)((long)puVar31 + uVar19);
                        goto joined_r0x00112068;
                      }
LAB_00111e1c:
                      memmove(puVar31,puVar10,uVar19);
                      param_3 = (undefined8 *)((long)puVar31 + uVar19);
                      goto joined_r0x00111e30;
                    }
                    param_1 = (ushort *)((long)puVar28 + 3);
                    if ((long)puVar34 - (long)puVar31 <= (long)uVar19) goto LAB_001126b8;
LAB_0010fea4:
                    param_3 = (undefined8 *)((long)puVar31 + uVar19);
                    do {
                      puVar10 = puVar31 + 1;
                      *puVar31 = *(undefined8 *)((long)puVar31 - uVar20);
                      puVar31 = puVar10;
                    } while (puVar10 < param_3);
                  } while( true );
                }
              }
              else {
                param_1 = (ushort *)((long)puVar28 + 5);
                uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar28[2];
                puVar28 = param_1;
                if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_001101a4;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar28 + 3);
              puVar28 = param_1;
              if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_001101a4;
            }
            if ((long)uVar19 < (long)puVar2 - (long)puVar10) {
              puVar9 = (undefined8 *)((long)puVar10 - uVar20);
              if (uVar19 < 8) goto LAB_001119c0;
              puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar34;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                puVar9 = puVar31;
              } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)));
              goto LAB_001119cc;
            }
            goto LAB_00112940;
          }
          uVar19 = (uVar17 >> 3) + 4;
          if (uVar17 >> 3 == 0xf) {
            uVar17 = (ulong)*(byte *)((long)puVar28 + 1);
            if (uVar17 < 0xc0) {
              param_1 = puVar28 + 1;
              uVar19 = 0x13;
            }
            else {
              uVar19 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000) | 0x13;
              uVar17 = (ulong)(byte)puVar28[1];
              param_1 = (ushort *)((long)puVar28 + 3);
            }
            uVar19 = uVar19 + uVar17;
            if ((long)uVar19 < (long)puVar34 - (long)puVar10) goto LAB_00110350;
          }
          else {
            param_1 = (ushort *)((long)puVar28 + 1);
            if ((long)uVar19 < (long)puVar34 - (long)puVar10) {
LAB_00110350:
              uVar20 = uVar20 & 7;
              puVar24 = (undefined1 *)((long)puVar10 - uVar20);
              *(undefined1 *)puVar10 = *puVar24;
              *(undefined1 *)((long)puVar10 + 1) = puVar24[1];
              *(undefined1 *)((long)puVar10 + 2) = puVar24[2];
              iVar6 = *(int *)(PTR_DAT_04372340 + uVar20 * 4);
              *(undefined1 *)((long)puVar10 + 3) = puVar24[3];
              *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar24 + iVar6);
              if (uVar19 < 9) goto LAB_0010fb80;
              iVar7 = *(int *)(PTR_DAT_04372348 + uVar20 * 4);
              puVar9 = puVar10 + 1;
              do {
                puVar31 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20));
                puVar9 = puVar31;
                if ((undefined8 *)((long)puVar10 + uVar19) <= puVar31) goto LAB_0010fb80;
              } while( true );
            }
          }
          if ((long)uVar19 <= (long)puVar2 - (long)puVar10) {
            uVar17 = uVar19;
            if ((uVar19 & 3) == 0) {
              puVar24 = (undefined1 *)((long)puVar10 - (uVar20 & 7));
              puVar9 = puVar10;
            }
            else {
              lVar23 = -(uVar20 & 7);
              lVar26 = -(uVar19 & 3);
              puVar34 = puVar10;
              do {
                uVar17 = uVar17 - 1;
                puVar9 = (undefined8 *)((long)puVar34 + 1);
                *(undefined1 *)puVar34 = *(undefined1 *)((long)puVar34 + lVar23);
                lVar26 = lVar26 + 1;
                puVar34 = puVar9;
              } while (lVar26 != 0);
              puVar24 = (undefined1 *)((long)puVar9 + lVar23);
            }
            if (2 < uVar19 - 1) {
              do {
                *(undefined1 *)puVar9 = *puVar24;
                *(undefined1 *)((long)puVar9 + 1) = puVar24[1];
                *(undefined1 *)((long)puVar9 + 2) = puVar24[2];
                puVar1 = puVar24 + 3;
                uVar17 = uVar17 - 4;
                puVar24 = puVar24 + 4;
                *(undefined1 *)((long)puVar9 + 3) = *puVar1;
                puVar9 = (undefined8 *)((long)puVar9 + 4);
              } while (uVar17 != 0);
            }
LAB_00112524:
            param_3 = (undefined8 *)((long)puVar10 + uVar19);
joined_r0x00111e30:
            puVar15 = param_1;
            if (param_3 < puVar2) goto LAB_00110fc0;
            goto joined_r0x001119e0;
          }
          goto LAB_0011232c;
        }
        FUN_0010a430();
        pcVar18 = *(code **)PTR_PTR_043722f8;
        if (pcVar18 == (code *)0x0) goto LAB_00112154;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB raw went too far\n";
        uVar12 = 0x695;
      }
      goto LAB_00112150;
    }
    FUN_0010a430();
    pcVar18 = *(code **)PTR_PTR_043722f8;
    if (pcVar18 == (code *)0x0) goto LAB_00112154;
    pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
    pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
    uVar12 = 0x688;
  }
  else {
joined_r0x00112068:
    puVar15 = param_1;
    if (puVar2 <= param_3) goto joined_r0x001119e0;
LAB_00110fc0:
LAB_00110fdc:
    while( true ) {
      puVar16 = param_1;
      if (puVar33 <= param_1) {
        if (param_2 <= param_1) {
          FUN_0010a430();
          pcVar18 = *(code **)PTR_PTR_043722f8;
          if (pcVar18 == (code *)0x0) goto LAB_00112154;
          pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
          pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
          uVar12 = 0x6ba;
          goto LAB_00112150;
        }
        if (param_2 == auStack_70 + 8) {
          FUN_0010a430();
          pcVar18 = *(code **)PTR_PTR_043722f8;
          if (pcVar18 == (code *)0x0) goto LAB_00112154;
          pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
          pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
          uVar12 = 0x6ba;
          goto LAB_00112150;
        }
        memmove(local_e0,param_1,(long)param_2 - (long)param_1);
        puVar16 = local_e0;
        local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
        param_2 = auStack_70;
        puVar33 = auStack_ae;
      }
      pbVar14 = (byte *)((long)puVar16 + 1);
      bVar3 = (byte)*puVar16;
      sVar32 = (ulong)bVar3 & 0xf;
      if (8 < sVar32) break;
      if (((long)puVar2 - (long)param_3 < (long)sVar32) ||
         ((long)param_2 - (long)pbVar14 < (long)sVar32)) goto LAB_00111acc;
      memmove(param_3,pbVar14,sVar32);
      param_3 = (undefined8 *)((long)param_3 + sVar32);
      puVar15 = (ushort *)(pbVar14 + sVar32);
      if (param_3 == puVar2) goto LAB_001119e4;
      uVar20 = (ulong)*puVar15;
      uVar19 = (ulong)(bVar3 >> 4);
      if (bVar3 < 0x90) {
        uVar19 = uVar19 + 4;
        if ((long)puVar2 - (long)param_3 <= (long)uVar19) goto LAB_00111af8;
        param_1 = puVar15 + 1;
        if (uVar19 < 8) {
          memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
          param_3 = (undefined8 *)((long)param_3 + uVar19);
        }
        else {
          *param_3 = *(undefined8 *)((long)param_3 - uVar20);
          puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
          puVar10 = puVar34;
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
            puVar10 = puVar9;
          } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
          param_3 = (undefined8 *)((long)param_3 + uVar19);
        }
      }
      else if (uVar19 == 0xf) {
        uVar19 = uVar20 & 0x7f;
        param_1 = (ushort *)((long)puVar15 + 1);
        if ((*puVar15 >> 7 & 1) == 0) {
          uVar5 = *param_1;
          uVar20 = uVar19 + 0x13;
          if (uVar19 == 0x7f) {
            bVar3 = *(byte *)((long)puVar15 + 3);
            if ((ulong)bVar3 < 0xc0) {
              uVar20 = (ulong)bVar3 + 0x92;
              param_1 = puVar15 + 2;
              if ((long)puVar2 - (long)param_3 <= (long)uVar20) goto LAB_00112534;
            }
            else {
              param_1 = (ushort *)((long)puVar15 + 5);
              uVar20 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar15[2];
              if ((long)puVar2 - (long)param_3 <= (long)uVar20) goto LAB_00112534;
            }
          }
          else {
            param_1 = (ushort *)((long)puVar15 + 3);
            if ((long)puVar2 - (long)param_3 <= (long)uVar20) goto LAB_00112534;
          }
          puVar34 = (undefined8 *)((long)param_3 - (ulong)uVar5);
          if (uVar20 < 8) {
            memmove(param_3,puVar34,uVar20);
            param_3 = (undefined8 *)((long)param_3 + uVar20);
          }
          else {
            *param_3 = *puVar34;
            puVar34 = (undefined8 *)((long)param_3 + (uVar20 & 7));
            puVar10 = puVar34;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - (ulong)uVar5);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar20 & 0x1fffffff8)));
            param_3 = (undefined8 *)((long)param_3 + uVar20);
          }
        }
        else {
          uVar17 = (uVar19 >> 3) + 4;
          if (uVar19 >> 3 == 0xf) {
            bVar3 = *(byte *)param_1;
            uVar19 = (ulong)bVar3;
            uVar17 = 0x13;
            param_1 = puVar15 + 1;
            if (0xbf < uVar19) {
              uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
              param_1 = (ushort *)((long)puVar15 + 3);
              uVar19 = (ulong)(byte)puVar15[1];
            }
            uVar17 = uVar17 + uVar19;
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
          }
          else if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
          uVar19 = uVar17;
          if ((uVar17 & 7) == 0) {
            puVar24 = (undefined1 *)((long)param_3 - (uVar20 & 7));
            puVar34 = param_3;
          }
          else {
            lVar23 = -(uVar20 & 7);
            lVar26 = -(uVar17 & 7);
            puVar10 = param_3;
            do {
              uVar19 = uVar19 - 1;
              puVar34 = (undefined8 *)((long)puVar10 + 1);
              *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar23);
              lVar26 = lVar26 + 1;
              puVar10 = puVar34;
            } while (lVar26 != 0);
            puVar24 = (undefined1 *)((long)puVar34 + lVar23);
          }
          if (6 < uVar17 - 1) {
            do {
              *(undefined1 *)puVar34 = *puVar24;
              *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
              *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
              *(undefined1 *)((long)puVar34 + 3) = puVar24[3];
              *(undefined1 *)((long)puVar34 + 4) = puVar24[4];
              *(undefined1 *)((long)puVar34 + 5) = puVar24[5];
              *(undefined1 *)((long)puVar34 + 6) = puVar24[6];
              puVar1 = puVar24 + 7;
              uVar19 = uVar19 - 8;
              puVar24 = puVar24 + 8;
              *(undefined1 *)((long)puVar34 + 7) = *puVar1;
              puVar34 = puVar34 + 1;
            } while (uVar19 != 0);
          }
          param_3 = (undefined8 *)((long)param_3 + uVar17);
        }
      }
      else {
        uVar19 = uVar19 + 4;
        if ((long)puVar2 - (long)param_3 <= (long)uVar19) goto LAB_00111774;
        param_1 = puVar15 + 1;
        if (uVar19 < 8) {
          memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
          param_3 = (undefined8 *)((long)param_3 + uVar19);
        }
        else {
          *param_3 = *(undefined8 *)((long)param_3 - uVar20);
          puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
          puVar10 = puVar34;
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
            puVar10 = puVar9;
          } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
          param_3 = (undefined8 *)((long)param_3 + uVar19);
        }
      }
    }
    if (sVar32 == 0xf) {
      bVar4 = *(byte *)((long)puVar16 + 1);
      if ((ulong)bVar4 < 0xc0) {
        puVar15 = puVar16 + 1;
        sVar32 = (ulong)bVar4 + 0xf;
        if ((long)param_2 - (long)puVar15 < (long)sVar32) goto LAB_00112560;
      }
      else {
        puVar15 = (ushort *)((long)puVar16 + 3);
        sVar32 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)puVar16[1];
        if ((long)param_2 - (long)puVar15 < (long)sVar32) goto LAB_00112560;
      }
      if ((long)puVar2 - (long)param_3 < (long)sVar32) goto LAB_00112560;
      memmove(param_3,puVar15,sVar32);
      param_3 = (undefined8 *)((long)param_3 + sVar32);
      puVar15 = (ushort *)((long)puVar15 + sVar32);
      if (param_3 == puVar2) goto LAB_001119e4;
      if (puVar15 < puVar33) goto LAB_0011119c;
      if (param_2 <= puVar15) goto LAB_00112a2c;
      if (param_2 == auStack_70 + 8) goto LAB_00112a58;
      memmove(local_e0,puVar15,(long)param_2 - (long)puVar15);
      local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar15));
      param_2 = auStack_70;
      puVar33 = auStack_ae;
      puVar15 = local_e0;
      uVar5 = local_e0[0];
    }
    else {
      if ((long)puVar2 - (long)param_3 < (long)sVar32) {
        sVar32 = (size_t)(int)((long)puVar2 - (long)param_3);
        if ((long)param_2 - (long)pbVar14 < (long)sVar32) goto LAB_00112470;
      }
      else if ((long)param_2 - (long)pbVar14 < (long)sVar32) goto LAB_00112470;
      memmove(param_3,pbVar14,sVar32);
      param_3 = (undefined8 *)((long)param_3 + sVar32);
      puVar15 = (ushort *)(pbVar14 + sVar32);
      if (param_3 == puVar2) goto LAB_001119e4;
LAB_0011119c:
      uVar5 = *puVar15;
    }
    uVar19 = (ulong)(bVar3 >> 4);
    uVar20 = (ulong)uVar5;
    if (bVar3 < 0x90) {
      uVar19 = uVar19 + 4;
      if ((long)puVar2 - (long)param_3 <= (long)uVar19) goto LAB_00111af8;
      param_1 = puVar15 + 1;
      if (uVar19 < 8) {
        memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
        param_3 = (undefined8 *)((long)param_3 + uVar19);
      }
      else {
        *param_3 = *(undefined8 *)((long)param_3 - uVar20);
        puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
        puVar10 = puVar34;
        do {
          puVar9 = puVar10 + 1;
          *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
          puVar10 = puVar9;
        } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
        param_3 = (undefined8 *)((long)param_3 + uVar19);
      }
      goto LAB_00110fdc;
    }
    if (uVar19 == 0xf) {
      uVar19 = uVar20 & 0x7f;
      if ((uVar5 >> 7 & 1) == 0) {
        uVar5 = *(ushort *)((long)puVar15 + 1);
        uVar20 = uVar19 + 0x13;
        if (uVar19 == 0x7f) {
          bVar3 = *(byte *)((long)puVar15 + 3);
          if ((ulong)bVar3 < 0xc0) {
            param_1 = puVar15 + 2;
            uVar20 = (ulong)bVar3 + 0x92;
            if ((long)puVar2 - (long)param_3 <= (long)uVar20) goto LAB_00112534;
          }
          else {
            param_1 = (ushort *)((long)puVar15 + 5);
            uVar20 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar15[2];
            if ((long)puVar2 - (long)param_3 <= (long)uVar20) goto LAB_00112534;
          }
        }
        else {
          param_1 = (ushort *)((long)puVar15 + 3);
          if ((long)puVar2 - (long)param_3 <= (long)uVar20) goto LAB_00112534;
        }
        puVar34 = (undefined8 *)((long)param_3 - (ulong)uVar5);
        if (uVar20 < 8) {
          memmove(param_3,puVar34,uVar20);
          param_3 = (undefined8 *)((long)param_3 + uVar20);
        }
        else {
          *param_3 = *puVar34;
          puVar34 = (undefined8 *)((long)param_3 + (uVar20 & 7));
          puVar10 = puVar34;
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - (ulong)uVar5);
            puVar10 = puVar9;
          } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar20 & 0x1fffffff8)));
          param_3 = (undefined8 *)((long)param_3 + uVar20);
        }
      }
      else {
        uVar17 = (uVar19 >> 3) + 4;
        if (uVar19 >> 3 == 0xf) {
          bVar3 = *(byte *)((long)puVar15 + 1);
          if ((ulong)bVar3 < 0xc0) {
            param_1 = puVar15 + 1;
            uVar17 = (ulong)bVar3 + 0x13;
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
          }
          else {
            param_1 = (ushort *)((long)puVar15 + 3);
            uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13) + (ulong)(byte)puVar15[1];
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
          }
        }
        else {
          param_1 = (ushort *)((long)puVar15 + 1);
          if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_00111704;
        }
        uVar19 = uVar17;
        if ((uVar17 & 7) == 0) {
          puVar24 = (undefined1 *)((long)param_3 - (uVar20 & 7));
          puVar34 = param_3;
        }
        else {
          lVar23 = -(uVar20 & 7);
          lVar26 = -(uVar17 & 7);
          puVar10 = param_3;
          do {
            uVar19 = uVar19 - 1;
            puVar34 = (undefined8 *)((long)puVar10 + 1);
            *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar23);
            lVar26 = lVar26 + 1;
            puVar10 = puVar34;
          } while (lVar26 != 0);
          puVar24 = (undefined1 *)((long)puVar34 + lVar23);
        }
        if (6 < uVar17 - 1) {
          do {
            *(undefined1 *)puVar34 = *puVar24;
            *(undefined1 *)((long)puVar34 + 1) = puVar24[1];
            *(undefined1 *)((long)puVar34 + 2) = puVar24[2];
            *(undefined1 *)((long)puVar34 + 3) = puVar24[3];
            *(undefined1 *)((long)puVar34 + 4) = puVar24[4];
            *(undefined1 *)((long)puVar34 + 5) = puVar24[5];
            *(undefined1 *)((long)puVar34 + 6) = puVar24[6];
            puVar1 = puVar24 + 7;
            uVar19 = uVar19 - 8;
            puVar24 = puVar24 + 8;
            *(undefined1 *)((long)puVar34 + 7) = *puVar1;
            puVar34 = puVar34 + 1;
          } while (uVar19 != 0);
        }
        param_3 = (undefined8 *)((long)param_3 + uVar17);
      }
      goto LAB_00110fdc;
    }
    uVar19 = uVar19 + 4;
    if ((long)uVar19 < (long)puVar2 - (long)param_3) {
      param_1 = puVar15 + 1;
      if (uVar19 < 8) {
        memmove(param_3,(undefined8 *)((long)param_3 - uVar20),uVar19);
        param_3 = (undefined8 *)((long)param_3 + uVar19);
      }
      else {
        *param_3 = *(undefined8 *)((long)param_3 - uVar20);
        puVar34 = (undefined8 *)((long)param_3 + (uVar19 & 7));
        puVar10 = puVar34;
        do {
          puVar9 = puVar10 + 1;
          *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
          puVar10 = puVar9;
        } while (puVar9 < (undefined8 *)((long)puVar34 + (uVar19 & 0x18)));
        param_3 = (undefined8 *)((long)param_3 + uVar19);
      }
      goto LAB_00110fdc;
    }
LAB_00111774:
    FUN_0010a430();
    pcVar18 = *(code **)PTR_PTR_043722f8;
    if (pcVar18 == (code *)0x0) goto LAB_00112154;
    pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
    pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
    uVar12 = 0x6e;
  }
LAB_00112150:
  (*pcVar18)(0,pcVar11,uVar12,pcVar13);
LAB_00112154:
  FUN_0010a450();
  return -1;
code_r0x0010f774:
  puVar29 = (ushort *)((long)puVar16 + 3);
  uVar17 = (ulong)*param_1;
  uVar19 = uVar20 + 0x13;
  if (uVar20 == 0x7f) {
    puVar28 = puVar16 + 2;
    bVar3 = *(byte *)puVar29;
    if ((ulong)bVar3 < 0xc0) {
      uVar19 = (ulong)bVar3 + 0x92;
      param_1 = puVar28;
      if ((long)puVar34 - (long)puVar10 <= (long)uVar19) {
LAB_00111d30:
        if ((long)puVar2 - (long)puVar10 <= (long)uVar19) goto LAB_00112940;
        puVar9 = (undefined8 *)((long)puVar10 - uVar17);
        if (7 < uVar19) {
          puVar34 = (undefined8 *)((long)puVar10 + (uVar19 & 7));
          *puVar10 = *puVar9;
          puVar9 = puVar34;
          do {
            puVar31 = puVar9 + 1;
            *puVar9 = *(undefined8 *)((long)puVar9 - uVar17);
            puVar9 = puVar31;
          } while (puVar31 < (undefined8 *)((long)puVar34 + (uVar19 & 0x1fffffff8)));
          goto LAB_001119cc;
        }
        goto LAB_001119c0;
      }
    }
    else {
      param_1 = (ushort *)((long)puVar16 + 5);
      uVar19 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)*puVar28;
      puVar28 = param_1;
      if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111d30;
    }
  }
  else {
    param_1 = puVar29;
    puVar28 = puVar29;
    if ((long)puVar34 - (long)puVar10 <= (long)uVar19) goto LAB_00111d30;
  }
  param_3 = (undefined8 *)((long)puVar10 + uVar19);
  do {
    puVar9 = puVar10 + 1;
    *puVar10 = *(undefined8 *)((long)puVar10 - uVar17);
    puVar10 = puVar9;
  } while (puVar9 < param_3);
  goto LAB_0010f43c;
LAB_0010f420:
  *puVar10 = *puVar9;
  puVar10[1] = puVar9[1];
  *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar9 + 2);
  param_3 = (undefined8 *)((long)puVar10 + uVar19);
  goto LAB_0010f43c;
LAB_00112788:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
  uVar12 = 0x37;
  goto LAB_00112150;
LAB_001127b4:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
  uVar12 = 0x37;
  goto LAB_00112150;
LAB_00112940:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0xeb;
  goto LAB_00112150;
LAB_0011232c:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0xa1;
  goto LAB_00112150;
LAB_00112124:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0x5c;
  goto LAB_00112150;
LAB_00111acc:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  uVar12 = 0x95;
  goto LAB_00112150;
LAB_00112470:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  uVar12 = 0x69;
  goto LAB_00112150;
LAB_00112560:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  uVar12 = 0x3c;
  goto LAB_00112150;
LAB_00112a2c:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
  uVar12 = 0x49;
  goto LAB_00112150;
LAB_00112a58:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
  uVar12 = 0x49;
  goto LAB_00112150;
LAB_001117cc:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0x48;
  goto LAB_00112150;
LAB_00111e64:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0x98;
  goto LAB_00112150;
LAB_00111704:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0xc2;
  goto LAB_00112150;
LAB_00111e38:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0xd3;
  goto LAB_00112150;
LAB_00112534:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0xfb;
  goto LAB_00112150;
LAB_001117a0:
  FUN_0010a430();
  pcVar18 = *(code **)PTR_PTR_043722f8;
  if (pcVar18 == (code *)0x0) goto LAB_00112154;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0x14;
  goto LAB_00112150;
}


