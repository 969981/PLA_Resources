/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02def170; name: FUN_02def170
 */


uint * FUN_02def170(long *param_1,long *param_2,uint *param_3)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  
  bVar4 = *(byte *)(param_1 + 1);
  uVar18 = (ulong)bVar4 + 1;
  lVar13 = *(long *)(param_1[3] + 0x40);
  lVar14 = param_2[7];
  uVar15 = (uint)uVar18 & 0x1f;
  uVar18 = uVar18 >> 5;
  iVar16 = *(int *)((long)param_1 + 0xc) - (int)uVar18;
  uVar21 = *(uint *)*param_1;
  puVar1 = (ulong *)((uint *)*param_1 + uVar18);
  *(char *)(param_1 + 1) = (char)uVar15;
  *(int *)((long)param_1 + 0xc) = iVar16;
  *param_1 = (long)puVar1;
  if ((1 << (ulong)(bVar4 & 0x1f) & uVar21) == 0) {
    param_3 = (uint *)0x0;
  }
  else {
    iVar3 = *(int *)(&DAT_0388a0dc + (long)(int)lVar14 * 4);
    iVar11 = iVar3 + -1;
    uVar21 = 0;
    if (iVar11 != 0) {
      uVar21 = 0x20 - (int)LZCOUNT(iVar11);
    }
    uVar18 = (ulong)uVar21;
    uVar19 = *puVar1;
    uVar24 = (&DAT_0429f280)[uVar18];
    uVar23 = uVar21 + uVar15 >> 5;
    *(byte *)(param_1 + 1) = (byte)(uVar21 + uVar15) & 0x1f;
    *(uint *)((long)param_1 + 0xc) = iVar16 - uVar23;
    *param_1 = (long)((long)puVar1 + (ulong)uVar23 * 4);
    *param_3 = uVar24 & (uint)(uVar19 >> uVar15);
    uVar15 = (&DAT_0429f280)[uVar18];
    bVar4 = *(byte *)(param_1 + 1);
    uVar19 = *(ulong *)*param_1;
    uVar18 = uVar18 + bVar4;
    uVar17 = uVar18 >> 5;
    *(byte *)(param_1 + 1) = (byte)uVar18 & 0x1f;
    *param_1 = *param_1 + uVar17 * 4;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar17;
    param_3[1] = uVar15 & (uint)(uVar19 >> ((ulong)bVar4 & 0x3f));
    if (0 < (int)param_2[6]) {
      lVar14 = 0;
      uVar15 = 2;
      do {
        uVar18 = (ulong)*(byte *)(param_2[1] + lVar14);
        pbVar20 = (byte *)(*param_2 + uVar18 * 0xb);
        bVar4 = *pbVar20;
        bVar5 = pbVar20[1];
        if (bVar5 == 0) {
          uVar21 = 0;
        }
        else {
          plVar2 = (long *)(lVar13 + (ulong)*(byte *)(*param_2 + uVar18 * 0xb + 2) * 0x20);
          uVar19 = (ulong)(int)(DAT_0429f2e0 &
                               (uint)(*(ulong *)*param_1 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f)))
          ;
          if (*(char *)((long)plVar2 + 0x1b) == '\x01') {
            lVar22 = *plVar2;
            uVar8 = *(ushort *)(lVar22 + (*(ushort *)(plVar2 + 3) & uVar19) * 2);
            bVar6 = *(byte *)(plVar2[1] + (*(ushort *)(plVar2 + 3) & uVar19));
            uVar24 = (uint)bVar6;
            uVar21 = (uint)uVar8;
            if ((short)uVar8 < 0) {
LAB_02def314:
              uVar21 = uVar21 & 0x7fff;
            }
            else {
              uVar19 = uVar19 >> ((ulong)bVar6 & 0x3f);
              lVar12 = lVar22 + (ulong)uVar21 * 2;
              Hint_Prefetch(lVar22 + (ulong)uVar8 * 2,0,0,0);
              cVar7 = *(char *)(lVar12 + (uVar19 & 1));
              uVar21 = (uint)cVar7;
              uVar24 = bVar6 + 1;
              if (-1 < cVar7) {
                do {
                  lVar12 = lVar12 + (ulong)(byte)uVar21 * 2;
                  uVar17 = uVar19 >> 1;
                  uVar19 = uVar19 >> 1;
                  uVar21 = (uint)*(char *)(lVar12 + (uVar17 & 1));
                  uVar24 = uVar24 + 1;
                } while (-1 < (int)uVar21);
              }
              uVar21 = uVar21 & 0x7f;
            }
          }
          else if (*(char *)((long)plVar2 + 0x1b) == '\x02') {
            lVar22 = *plVar2;
            uVar8 = *(ushort *)(lVar22 + (*(ushort *)(plVar2 + 3) & uVar19) * 2);
            bVar6 = *(byte *)(plVar2[1] + (*(ushort *)(plVar2 + 3) & uVar19));
            uVar24 = (uint)bVar6;
            uVar21 = (uint)uVar8;
            if ((short)uVar8 < 0) goto LAB_02def314;
            uVar19 = uVar19 >> ((ulong)bVar6 & 0x3f);
            Hint_Prefetch(lVar22 + (ulong)uVar8 * 2,0,0,0);
            lVar22 = lVar22 + (ulong)uVar21 * 2;
            bVar6 = *(byte *)(lVar22 + (uVar19 & 1));
            uVar17 = (ulong)(char)bVar6;
            if ((char)bVar6 < '\0') {
              uVar24 = uVar24 + 1;
            }
            else {
              lVar22 = lVar22 + (ulong)bVar6 * 2;
              cVar7 = *(char *)(lVar22 + (uVar19 >> 1 & 1));
              uVar17 = (ulong)cVar7;
              uVar24 = uVar24 + 2;
              if (-1 < cVar7) {
                uVar19 = uVar19 >> 2;
                do {
                  lVar22 = lVar22 + (uVar17 & 0xff) * 2;
                  uVar17 = uVar19 & 1;
                  uVar19 = uVar19 >> 1;
                  cVar7 = *(char *)(lVar22 + uVar17);
                  uVar17 = (ulong)cVar7;
                  uVar24 = uVar24 + 1;
                } while (-1 < cVar7);
              }
            }
            uVar21 = (uint)*(ushort *)(lVar22 + (uVar17 & 0x7f) * 2);
          }
          else {
            uVar24 = 0;
            uVar21 = 0;
          }
          iVar16 = uVar24 + *(byte *)(param_1 + 1);
          iVar11 = iVar16 >> 5;
          *(byte *)(param_1 + 1) = (byte)iVar16 & 0x1f;
          *param_1 = *param_1 + (long)iVar11 * 4;
          *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar11;
        }
        if (bVar4 != 0) {
          uVar19 = 0;
          do {
            uVar24 = uVar21 & ~(-1 << (ulong)(bVar5 & 0x1f));
            uVar21 = (int)uVar21 >> (bVar5 & 0x1f);
            uVar17 = (ulong)*(byte *)(*param_2 + uVar18 * 0xb + (long)(int)uVar24 + 3);
            if (uVar17 == 0xff) {
              uVar24 = 0;
            }
            else {
              plVar2 = (long *)(lVar13 + uVar17 * 0x20);
              uVar17 = (ulong)(int)(DAT_0429f2e0 &
                                   (uint)(*(ulong *)*param_1 >>
                                         ((ulong)*(byte *)(param_1 + 1) & 0x3f)));
              if (*(char *)((long)plVar2 + 0x1b) == '\x01') {
                lVar22 = *plVar2;
                uVar8 = *(ushort *)(lVar22 + (*(ushort *)(plVar2 + 3) & uVar17) * 2);
                bVar6 = *(byte *)(plVar2[1] + (*(ushort *)(plVar2 + 3) & uVar17));
                uVar23 = (uint)bVar6;
                uVar24 = (uint)uVar8;
                if ((short)uVar8 < 0) {
LAB_02def3bc:
                  uVar24 = uVar24 & 0x7fff;
                }
                else {
                  uVar17 = uVar17 >> ((ulong)bVar6 & 0x3f);
                  lVar12 = lVar22 + (ulong)uVar24 * 2;
                  Hint_Prefetch(lVar22 + (ulong)uVar8 * 2,0,0,0);
                  cVar7 = *(char *)(lVar12 + (uVar17 & 1));
                  uVar24 = (uint)cVar7;
                  uVar23 = bVar6 + 1;
                  if (-1 < cVar7) {
                    do {
                      lVar12 = lVar12 + (ulong)(byte)uVar24 * 2;
                      uVar25 = uVar17 >> 1;
                      uVar17 = uVar17 >> 1;
                      uVar24 = (uint)*(char *)(lVar12 + (uVar25 & 1));
                      uVar23 = uVar23 + 1;
                    } while (-1 < (int)uVar24);
                  }
                  uVar24 = uVar24 & 0x7f;
                }
              }
              else if (*(char *)((long)plVar2 + 0x1b) == '\x02') {
                lVar22 = *plVar2;
                uVar8 = *(ushort *)(lVar22 + (*(ushort *)(plVar2 + 3) & uVar17) * 2);
                bVar6 = *(byte *)(plVar2[1] + (*(ushort *)(plVar2 + 3) & uVar17));
                uVar23 = (uint)bVar6;
                uVar24 = (uint)uVar8;
                if ((short)uVar8 < 0) goto LAB_02def3bc;
                uVar17 = uVar17 >> ((ulong)bVar6 & 0x3f);
                Hint_Prefetch(lVar22 + (ulong)uVar8 * 2,0,0,0);
                lVar22 = lVar22 + (ulong)uVar24 * 2;
                bVar6 = *(byte *)(lVar22 + (uVar17 & 1));
                uVar25 = (ulong)(char)bVar6;
                if ((char)bVar6 < '\0') {
                  uVar23 = uVar23 + 1;
                }
                else {
                  lVar22 = lVar22 + (ulong)bVar6 * 2;
                  cVar7 = *(char *)(lVar22 + (uVar17 >> 1 & 1));
                  uVar25 = (ulong)cVar7;
                  uVar23 = uVar23 + 2;
                  if (-1 < cVar7) {
                    uVar17 = uVar17 >> 2;
                    do {
                      lVar22 = lVar22 + (uVar25 & 0xff) * 2;
                      uVar25 = uVar17 & 1;
                      uVar17 = uVar17 >> 1;
                      cVar7 = *(char *)(lVar22 + uVar25);
                      uVar25 = (ulong)cVar7;
                      uVar23 = uVar23 + 1;
                    } while (-1 < cVar7);
                  }
                }
                uVar24 = (uint)*(ushort *)(lVar22 + (uVar25 & 0x7f) * 2);
              }
              else {
                uVar23 = 0;
                uVar24 = 0;
              }
              iVar16 = uVar23 + *(byte *)(param_1 + 1);
              iVar11 = iVar16 >> 5;
              *(byte *)(param_1 + 1) = (byte)iVar16 & 0x1f;
              *param_1 = *param_1 + (long)iVar11 * 4;
              *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar11;
            }
            lVar22 = uVar19 + uVar15;
            uVar19 = uVar19 + 1;
            param_3[lVar22] = uVar24;
          } while (uVar19 != bVar4);
        }
        lVar14 = lVar14 + 1;
        uVar15 = uVar15 + bVar4;
      } while (lVar14 < (int)param_2[6]);
    }
    if (2 < *(int *)((long)param_2 + 0x34)) {
      lVar14 = 0;
      do {
        lVar13 = param_2[2];
        iVar11 = (param_3[*(byte *)(param_2[4] + lVar14)] & 0x7fff) -
                 (param_3[*(byte *)(param_2[5] + lVar14)] & 0x7fff);
        uVar15 = (uint)*(ushort *)(lVar13 + (ulong)*(byte *)(param_2[5] + lVar14) * 2);
        iVar10 = *(ushort *)(lVar13 + (ulong)*(byte *)(param_2[4] + lVar14) * 2) - uVar15;
        iVar16 = -iVar11;
        if (-1 < iVar11) {
          iVar16 = iVar11;
        }
        iVar9 = 0;
        if (iVar10 != 0) {
          iVar9 = (int)(iVar16 * (*(ushort *)(lVar13 + lVar14 * 2 + 4) - uVar15)) / iVar10;
        }
        iVar16 = -iVar9;
        if (-1 < iVar11) {
          iVar16 = iVar9;
        }
        uVar15 = iVar16 + (param_3[*(byte *)(param_2[5] + lVar14)] & 0x7fff);
        uVar21 = param_3[lVar14 + 2];
        if (uVar21 == 0) {
          param_3[lVar14 + 2] = uVar15 | 0x8000;
        }
        else {
          uVar23 = iVar3 - uVar15;
          uVar24 = uVar23;
          if ((int)uVar15 <= (int)uVar23) {
            uVar24 = uVar15;
          }
          if ((int)uVar21 < (int)(uVar24 * 2)) {
            if ((uVar21 & 1) == 0) {
              iVar16 = (int)uVar21 >> 1;
            }
            else {
              iVar16 = -((int)(uVar21 + 1) >> 1);
            }
          }
          else {
            iVar16 = uVar23 + ~uVar21;
            if ((int)uVar15 < (int)uVar23) {
              iVar16 = uVar21 - uVar15;
            }
          }
          param_3[lVar14 + 2] = iVar16 + uVar15;
          param_3[*(byte *)(param_2[5] + lVar14)] = param_3[*(byte *)(param_2[5] + lVar14)] & 0x7fff
          ;
          param_3[*(byte *)(param_2[4] + lVar14)] = param_3[*(byte *)(param_2[4] + lVar14)] & 0x7fff
          ;
        }
        lVar13 = lVar14 + 3;
        lVar14 = lVar14 + 1;
      } while (lVar13 < *(int *)((long)param_2 + 0x34));
    }
  }
  return param_3;
}


