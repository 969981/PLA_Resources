/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001302a0; name: FUN_001302a0
 */


/* WARNING: Control flow encountered bad instruction data */

ulong FUN_001302a0(undefined8 *param_1,ulong param_2,byte *param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  size_t __n;
  undefined8 uVar7;
  byte bVar8;
  undefined2 uVar9;
  uint3 uVar10;
  int iVar11;
  undefined8 uVar12;
  int in_w7;
  long lVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  size_t __n_00;
  byte *pbVar26;
  undefined1 auStack_7ffffffe [2147483534];
  byte abStack_70 [32];
  
  if ((in_w7 != 0) &&
     (iVar11 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\lzblw.cpp",0x863,
                            "LZBLW_DecodeOneQuantum","! isSlidingWindow"), iVar11 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(code **)PTR_DAT_04372300 == (code *)0x0) {
    uVar12 = 0xffffffffffffffff;
  }
  else {
    uVar12 = (**(code **)PTR_DAT_04372300)("Decode_LZBLW_OneChunk",0);
  }
  pbVar26 = param_3;
  if (param_3 < param_4 + -0x10) goto LAB_001306d0;
LAB_00130678:
  memcpy(abStack_70,param_3,(long)param_4 - (long)param_3);
  pbVar26 = pbVar26 + (long)(abStack_70 + -(long)param_3);
  pbVar25 = abStack_70 + 1;
  uVar18 = (ulong)abStack_70[0];
  __n_00 = uVar18 & 0xf;
  param_4 = auStack_7ffffffe + 0x8000038e;
  if (__n_00 < 9) goto LAB_001306e0;
LAB_00130804:
  pbVar24 = pbVar25;
  if (__n_00 == 0xf) {
    do {
      pbVar25 = pbVar24 + 1;
      bVar8 = *pbVar24;
      __n_00 = __n_00 + bVar8;
      pbVar24 = pbVar25;
    } while ((ulong)bVar8 == 0xff);
    if ((long)param_1 + __n_00 < param_2) {
      if (0 < (long)__n_00) {
        lVar13 = 0;
        do {
          *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)(pbVar25 + (int)lVar13);
          lVar13 = (long)((int)lVar13 + 8);
        } while (lVar13 < (long)__n_00);
      }
      goto LAB_001306e8;
    }
    memmove(param_1,pbVar25,__n_00);
    pbVar25 = pbVar25 + __n_00;
  }
  else {
    if ((long)param_1 + __n_00 < param_2) {
      uVar7 = *(undefined8 *)(pbVar25 + 8);
      *param_1 = *(undefined8 *)pbVar25;
      param_1[1] = uVar7;
LAB_001306e8:
      do {
        uVar14 = uVar18 >> 4;
        puVar5 = (undefined8 *)((long)param_1 + __n_00);
        puVar6 = (uint *)(pbVar25 + __n_00);
        if ((uint)uVar18 < 0xa0) {
          param_3 = (byte *)((long)puVar6 + 2);
          uVar22 = (ulong)(ushort)*puVar6;
          uVar14 = uVar14 + 4;
          puVar21 = (undefined8 *)((long)puVar5 - uVar22);
          if ((uint)uVar18 < 0x50) {
            if (uVar22 < uVar14) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar21;
              *(undefined1 *)((long)puVar5 + 1) = *(undefined1 *)((long)puVar21 + 1);
              *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)((long)puVar21 + 2);
              *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)puVar21 + 3);
              *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar21 + 4);
              *(undefined1 *)((long)puVar5 + 5) = *(undefined1 *)((long)puVar21 + 5);
              *(undefined1 *)((long)puVar5 + 6) = *(undefined1 *)((long)puVar21 + 6);
              *(undefined1 *)((long)puVar5 + 7) = *(undefined1 *)((long)puVar21 + 7);
            }
            else {
              *puVar5 = *puVar21;
            }
            param_1 = (undefined8 *)((long)puVar5 + uVar14);
            if (param_4 + -0x10 <= param_3) goto LAB_00130678;
          }
          else {
            if (uVar22 < uVar14) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar21;
              *(undefined1 *)((long)puVar5 + 1) = *(undefined1 *)((long)puVar21 + 1);
              *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)((long)puVar21 + 2);
              *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)puVar21 + 3);
              *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar21 + 4);
              *(undefined1 *)((long)puVar5 + 5) = *(undefined1 *)((long)puVar21 + 5);
              *(undefined1 *)((long)puVar5 + 6) = *(undefined1 *)((long)puVar21 + 6);
              *(undefined1 *)((long)puVar5 + 7) = *(undefined1 *)((long)puVar21 + 7);
              *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar21 + 1);
              *(undefined1 *)((long)puVar5 + 9) = *(undefined1 *)((long)puVar21 + 9);
              *(undefined1 *)((long)puVar5 + 10) = *(undefined1 *)((long)puVar21 + 10);
              uVar15 = *(undefined1 *)((long)puVar21 + 0xb);
              goto LAB_001307d0;
            }
            *puVar5 = *puVar21;
            uVar16 = *(undefined4 *)(puVar21 + 1);
LAB_001306bc:
            *(undefined4 *)(puVar5 + 1) = uVar16;
            param_1 = (undefined8 *)((long)puVar5 + uVar14);
            if (param_4 + -0x10 <= param_3) goto LAB_00130678;
          }
        }
        else if (uVar14 == 0xf) {
          uVar18 = 0;
          pbVar25 = (byte *)((long)puVar6 + 2);
          do {
            pbVar24 = pbVar25;
            pbVar25 = pbVar24 + 1;
            uVar18 = uVar18 + pbVar24[-2];
          } while ((ulong)pbVar24[-2] == 0xff);
          uVar14 = (ulong)*(ushort *)(pbVar24 + -1);
          lVar13 = (uVar18 >> 2) + 0xd;
          param_3 = pbVar25;
          if ((uVar18 & 3) == 0) {
joined_r0x00130644:
            puVar17 = (undefined1 *)((long)puVar5 - uVar14);
            if (7 < uVar14) goto LAB_00130648;
LAB_0013038c:
            if (uVar14 == 1) {
              uVar9 = CONCAT11(*puVar17,*puVar17);
              uVar16 = CONCAT22(uVar9,uVar9);
              *(undefined4 *)puVar5 = uVar16;
              for (puVar19 = (undefined4 *)((long)puVar5 + 4);
                  puVar19 < (undefined4 *)((long)puVar5 + lVar13); puVar19 = puVar19 + 1) {
                *puVar19 = uVar16;
              }
            }
            else {
              uVar18 = (uVar18 >> 2) + 0xc;
              if (uVar14 < 4) {
                uVar18 = uVar18 >> 2;
                uVar1 = (int)uVar18 + 1;
                uVar14 = 0;
                if (uVar18 != 0) {
                  lVar23 = (((ulong)uVar1 & 1) - 1) - uVar18;
                  do {
                    puVar2 = puVar17 + uVar14;
                    puVar3 = (undefined1 *)((long)puVar5 + uVar14);
                    uVar14 = uVar14 + 8;
                    *puVar3 = *puVar2;
                    puVar3[1] = puVar2[1];
                    puVar3[2] = puVar2[2];
                    puVar3[3] = puVar2[3];
                    puVar3[4] = puVar2[4];
                    puVar3[5] = puVar2[5];
                    puVar3[6] = puVar2[6];
                    lVar23 = lVar23 + 2;
                    puVar3[7] = puVar2[7];
                  } while (lVar23 != 0);
                }
                if ((uVar1 & 1) != 0) {
                  param_1 = (undefined8 *)((long)puVar5 + lVar13);
                  *(undefined1 *)((long)puVar5 + uVar14) = puVar17[uVar14];
                  *(undefined1 *)((long)puVar5 + (uVar14 | 1)) = puVar17[uVar14 | 1];
                  *(undefined1 *)((long)puVar5 + (uVar14 | 2)) = puVar17[uVar14 | 2];
                  *(undefined1 *)((long)puVar5 + (uVar14 | 3)) = puVar17[uVar14 | 3];
                  if (param_3 < param_4 + -0x10) goto LAB_001306d0;
                  goto LAB_00130678;
                }
              }
              else {
                uVar1 = (int)(uVar18 >> 3) + 1;
                uVar22 = (ulong)uVar1 & 3;
                if (uVar18 < 0x18) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = 0;
                  lVar20 = (uVar22 - 1) - (uVar18 >> 3);
                  do {
                    puVar19 = (undefined4 *)(puVar17 + lVar23);
                    puVar4 = (undefined4 *)((long)puVar5 + lVar23);
                    lVar23 = lVar23 + 0x20;
                    *puVar4 = *puVar19;
                    puVar4[1] = puVar19[1];
                    puVar4[2] = puVar19[2];
                    puVar4[3] = puVar19[3];
                    puVar4[4] = puVar19[4];
                    puVar4[5] = puVar19[5];
                    puVar4[6] = puVar19[6];
                    lVar20 = lVar20 + 4;
                    puVar4[7] = puVar19[7];
                  } while (lVar20 != 0);
                }
                if ((uVar1 & 3) != 0) {
                  lVar20 = -uVar22;
                  puVar19 = (undefined4 *)((long)param_1 + __n_00 + lVar23);
                  do {
                    *puVar19 = *(undefined4 *)((long)puVar19 - uVar14);
                    puVar19[1] = ((undefined4 *)((long)puVar19 - uVar14))[1];
                    lVar20 = lVar20 + 1;
                    puVar19 = puVar19 + 2;
                  } while (lVar20 != 0);
                }
              }
            }
          }
          else {
            param_3 = pbVar24 + 2;
            uVar10 = CONCAT12(*pbVar25,*(ushort *)(pbVar24 + -1));
            uVar14 = (ulong)uVar10;
            if ((uVar18 & 3) != 1) {
              uVar14 = (ulong)CONCAT13(pbVar24[2],uVar10);
              param_3 = pbVar24 + 3;
              goto joined_r0x00130644;
            }
            puVar17 = (undefined1 *)((long)puVar5 - uVar14);
            if (uVar14 < 8) goto LAB_0013038c;
LAB_00130648:
            lVar23 = 0;
            iVar11 = 8;
            do {
              *(undefined8 *)((long)puVar5 + lVar23) = *(undefined8 *)(puVar17 + lVar23);
              lVar23 = (long)iVar11;
              iVar11 = iVar11 + 8;
            } while (lVar23 < lVar13);
          }
          param_1 = (undefined8 *)((long)puVar5 + lVar13);
          if (param_4 + -0x10 <= param_3) goto LAB_00130678;
        }
        else {
          param_3 = (byte *)((long)puVar6 + 3);
          uVar14 = uVar14 - 1;
          puVar21 = (undefined8 *)((long)puVar5 - ((ulong)*puVar6 & 0xffffff));
          if (uVar14 <= ((ulong)*puVar6 & 0xffffff)) {
            *puVar5 = *puVar21;
            uVar16 = *(undefined4 *)(puVar21 + 1);
            goto LAB_001306bc;
          }
          *(undefined1 *)puVar5 = *(undefined1 *)puVar21;
          *(undefined1 *)((long)puVar5 + 1) = *(undefined1 *)((long)puVar21 + 1);
          *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)((long)puVar21 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)puVar21 + 3);
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar21 + 4);
          *(undefined1 *)((long)puVar5 + 5) = *(undefined1 *)((long)puVar21 + 5);
          *(undefined1 *)((long)puVar5 + 6) = *(undefined1 *)((long)puVar21 + 6);
          *(undefined1 *)((long)puVar5 + 7) = *(undefined1 *)((long)puVar21 + 7);
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar21 + 1);
          *(undefined1 *)((long)puVar5 + 9) = *(undefined1 *)((long)puVar21 + 9);
          *(undefined1 *)((long)puVar5 + 10) = *(undefined1 *)((long)puVar21 + 10);
          uVar15 = *(undefined1 *)((long)puVar21 + 0xb);
LAB_001307d0:
          *(undefined1 *)((long)puVar5 + 0xb) = uVar15;
          param_1 = (undefined8 *)((long)puVar5 + uVar14);
          if (param_4 + -0x10 <= param_3) goto LAB_00130678;
        }
LAB_001306d0:
        pbVar25 = param_3 + 1;
        uVar18 = (ulong)*param_3;
        __n_00 = uVar18 & 0xf;
        if (8 < __n_00) goto LAB_00130804;
LAB_001306e0:
        *param_1 = *(undefined8 *)pbVar25;
      } while( true );
    }
    __n = (long)((int)param_2 - (int)param_1);
    if (__n_00 != 9) {
      __n = __n_00;
    }
    memmove(param_1,pbVar25,__n);
    pbVar25 = pbVar25 + __n;
  }
  if (*(code **)PTR_DAT_04372308 != (code *)0x0) {
    (**(code **)PTR_DAT_04372308)(uVar12);
  }
  return (long)pbVar25 - (long)pbVar26 & 0xffffffff;
}


