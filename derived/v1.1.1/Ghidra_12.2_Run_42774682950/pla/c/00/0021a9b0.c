/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021a9b0; name: FUN_0021a9b0
 */


void FUN_0021a9b0(long param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  bool bVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  short *psVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  ushort uVar33;
  uint uVar34;
  int iVar35;
  ushort *puVar36;
  int *piVar37;
  ushort *puVar38;
  uint uVar39;
  ushort auStack_20 [5];
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  uVar39 = *(uint *)(param_2[2] + 0x14);
  psVar18 = (short *)*param_2;
  lVar23 = *(long *)param_2[2];
  *(undefined8 *)(param_1 + 0x14b4) = 0x23d00000000;
  if ((int)uVar39 < 1) {
    iVar24 = 0;
    uVar20 = 0xffffffff;
  }
  else {
    uVar26 = 0;
    uVar20 = 0xffffffff;
    sVar10 = *psVar18;
    psVar13 = psVar18 + 1;
    while( true ) {
      if (sVar10 == 0) {
        *psVar13 = 0;
      }
      else {
        lVar31 = (long)*(int *)(param_1 + 0x14b4) + 1;
        *(int *)(param_1 + 0x14b4) = (int)lVar31;
        *(int *)(param_1 + lVar31 * 4 + 0xbc0) = (int)uVar26;
        uVar20 = uVar26 & 0xffffffff;
        *(undefined1 *)(param_1 + 0x14bc + uVar26) = 0;
      }
      uVar26 = uVar26 + 1;
      if (uVar39 == uVar26) break;
      sVar10 = psVar13[1];
      psVar13 = psVar13 + 2;
    }
    uVar19 = (uint)uVar20;
    iVar24 = *(int *)(param_1 + 0x14b4);
    if (1 < iVar24) goto LAB_0021ab1c;
  }
  if (lVar23 == 0) {
    do {
      uVar25 = (uint)uVar20;
      uVar19 = uVar25;
      if ((int)uVar25 < 2) {
        uVar19 = uVar25 + 1;
      }
      uVar20 = (ulong)uVar19;
      *(int *)(param_1 + 0x14b4) = (int)((long)iVar24 + 1);
      uVar30 = 0;
      if ((int)uVar25 < 2) {
        uVar30 = uVar25 + 1;
      }
      *(uint *)(param_1 + ((long)iVar24 + 1) * 4 + 0xbc0) = uVar30;
      *(undefined2 *)
       ((long)psVar18 + (-(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2)) = 1;
      *(undefined1 *)(param_1 + (int)uVar30 + 0x14bc) = 0;
      *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
      iVar24 = *(int *)(param_1 + 0x14b4);
    } while (iVar24 < 2);
  }
  else {
    do {
      uVar25 = (uint)uVar20;
      uVar19 = uVar25;
      if ((int)uVar25 < 2) {
        uVar19 = uVar25 + 1;
      }
      uVar20 = (ulong)uVar19;
      *(int *)(param_1 + 0x14b4) = (int)((long)iVar24 + 1);
      uVar30 = 0;
      if ((int)uVar25 < 2) {
        uVar30 = uVar25 + 1;
      }
      *(uint *)(param_1 + ((long)iVar24 + 1) * 4 + 0xbc0) = uVar30;
      uVar26 = -(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2;
      *(undefined2 *)((long)psVar18 + uVar26) = 1;
      *(undefined1 *)(param_1 + (int)uVar30 + 0x14bc) = 0;
      *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
      *(ulong *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar23 + uVar26 + 2);
      iVar24 = *(int *)(param_1 + 0x14b4);
    } while (iVar24 < 2);
  }
LAB_0021ab1c:
  *(uint *)(param_2 + 1) = uVar19;
  uVar25 = *(uint *)(param_1 + 0x14b4);
  if (1 < (int)uVar25) {
    uVar20 = (ulong)(uVar25 >> 1);
    do {
      iVar24 = *(int *)(param_1 + uVar20 * 4 + 0xbc0);
      uVar30 = (int)uVar20 * 2;
      uVar26 = uVar20;
      if ((int)uVar30 <= (int)uVar25) {
        uVar26 = uVar20 & 0xffffffff;
        if ((int)uVar30 < (int)uVar25) goto LAB_0021abb4;
LAB_0021abec:
        uVar32 = (ulong)(int)uVar30;
        do {
          uVar25 = uVar30;
LAB_0021abf4:
          uVar34 = (uint)uVar26;
          uVar30 = *(uint *)(param_1 + uVar32 * 4 + 0xbc0);
          uVar8 = *(ushort *)
                   ((long)psVar18 +
                   (-(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2));
          if (((ushort)psVar18[(long)iVar24 * 2] < uVar8) ||
             ((psVar18[(long)iVar24 * 2] == uVar8 &&
              (*(byte *)(param_1 + iVar24 + 0x14bc) <= *(byte *)(param_1 + (int)uVar30 + 0x14bc)))))
          {
LAB_0021ab3c:
            uVar26 = (ulong)(int)uVar34;
            break;
          }
          *(uint *)(param_1 + (long)(int)uVar34 * 4 + 0xbc0) = uVar30;
          uVar30 = uVar25 * 2;
          uVar26 = (ulong)uVar25;
          uVar34 = uVar25;
          if (*(int *)(param_1 + 0x14b4) < (int)uVar30) goto LAB_0021ab3c;
          if (*(int *)(param_1 + 0x14b4) <= (int)uVar30) goto LAB_0021abec;
LAB_0021abb4:
          uVar32 = (ulong)(int)uVar30;
          uVar17 = uVar32 | 1;
          lVar23 = (long)*(int *)(param_1 + 0xbc0 + uVar17 * 4);
          lVar31 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar30 * 4);
          if ((ushort)psVar18[lVar23 * 2] < (ushort)psVar18[lVar31 * 2]) goto LAB_0021abe0;
          if (psVar18[lVar23 * 2] == psVar18[lVar31 * 2]) goto code_r0x0021ac34;
        } while( true );
      }
      *(int *)(param_1 + uVar26 * 4 + 0xbc0) = iVar24;
      uVar25 = *(uint *)(param_1 + 0x14b4);
      uVar20 = uVar20 - 1;
    } while (0 < (long)uVar20);
  }
  lVar23 = (long)(int)uVar39;
  do {
    iVar24 = *(int *)(param_1 + 0xbc4);
    *(uint *)(param_1 + 0x14b4) = uVar25 - 1;
    iVar35 = *(int *)(param_1 + (long)(int)uVar25 * 4 + 0xbc0);
    *(int *)(param_1 + 0xbc4) = iVar35;
    if (2 < (int)uVar25) {
      uVar34 = 1;
      uVar39 = 2;
      uVar30 = uVar34;
      if (2 < (int)(uVar25 - 1)) goto LAB_0021acec;
LAB_0021ad24:
      uVar20 = (ulong)(int)uVar39;
      uVar30 = uVar34;
      do {
        uVar34 = uVar39;
LAB_0021ad2c:
        uVar39 = *(uint *)(param_1 + uVar20 * 4 + 0xbc0);
        uVar8 = *(ushort *)
                 ((long)psVar18 +
                 (-(ulong)(uVar39 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar39 << 2));
        if (((ushort)psVar18[(long)iVar35 * 2] < uVar8) ||
           ((psVar18[(long)iVar35 * 2] == uVar8 &&
            (*(byte *)(param_1 + iVar35 + 0x14bc) <= *(byte *)(param_1 + (int)uVar39 + 0x14bc))))) {
LAB_0021ad8c:
          lVar31 = (long)(int)uVar30;
          goto LAB_0021ad90;
        }
        *(uint *)(param_1 + (long)(int)uVar30 * 4 + 0xbc0) = uVar39;
        uVar39 = uVar34 * 2;
        uVar30 = uVar34;
        if (*(int *)(param_1 + 0x14b4) < (int)uVar39) goto LAB_0021ad8c;
        if (*(int *)(param_1 + 0x14b4) <= (int)uVar39) goto LAB_0021ad24;
LAB_0021acec:
        uVar20 = (ulong)(int)uVar39;
        lVar31 = (long)*(int *)(param_1 + 0xbc0 + (uVar20 | 1) * 4);
        lVar28 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar39 * 4);
        if ((ushort)psVar18[lVar31 * 2] < (ushort)psVar18[lVar28 * 2]) goto LAB_0021ad18;
        if (psVar18[lVar31 * 2] == psVar18[lVar28 * 2]) goto code_r0x0021ad6c;
      } while( true );
    }
    lVar31 = 1;
LAB_0021ad90:
    lVar28 = param_1 + 0xbc0;
    *(int *)(lVar28 + lVar31 * 4) = iVar35;
    lVar31 = (long)*(int *)(param_1 + 0x14b8) + -1;
    iVar35 = *(int *)(param_1 + 0xbc4);
    *(int *)(param_1 + 0x14b8) = (int)lVar31;
    *(int *)(lVar28 + lVar31 * 4) = iVar24;
    lVar31 = (long)*(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = (int)lVar31;
    *(int *)(lVar28 + lVar31 * 4) = iVar35;
    lVar28 = lVar23 * 2;
    psVar18[lVar28] = psVar18[(long)iVar35 * 2] + psVar18[(long)iVar24 * 2];
    lVar31 = param_1 + 0x14bc;
    bVar6 = *(byte *)(lVar31 + iVar24);
    bVar7 = *(byte *)(lVar31 + iVar35);
    if (bVar7 <= bVar6) {
      bVar7 = bVar6;
    }
    pbVar1 = (byte *)(lVar31 + lVar23);
    *pbVar1 = bVar7 + 1;
    uVar22 = (undefined4)lVar23;
    (psVar18 + (long)iVar35 * 2)[1] = (short)lVar23;
    (psVar18 + (long)iVar24 * 2)[1] = (short)lVar23;
    lVar23 = lVar23 + 1;
    *(undefined4 *)(param_1 + 0xbc4) = uVar22;
    if (1 < *(int *)(param_1 + 0x14b4)) {
      uVar30 = 1;
      uVar39 = 2;
      uVar25 = uVar30;
      if (2 < *(int *)(param_1 + 0x14b4)) goto LAB_0021ae4c;
LAB_0021ae84:
      uVar20 = (ulong)(int)uVar39;
      uVar25 = uVar30;
      do {
        uVar30 = uVar39;
LAB_0021ae8c:
        uVar39 = *(uint *)(param_1 + uVar20 * 4 + 0xbc0);
        uVar33 = *(ushort *)
                  ((long)psVar18 +
                  (-(ulong)(uVar39 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar39 << 2));
        uVar8 = psVar18[lVar28];
        if ((uVar8 < uVar33) ||
           ((uVar8 == uVar33 && (*pbVar1 <= *(byte *)(param_1 + (int)uVar39 + 0x14bc))))) {
LAB_0021aeec:
          lVar31 = (long)(int)uVar25;
          goto LAB_0021ac60;
        }
        *(uint *)(param_1 + (long)(int)uVar25 * 4 + 0xbc0) = uVar39;
        uVar39 = uVar30 * 2;
        uVar25 = uVar30;
        if (*(int *)(param_1 + 0x14b4) < (int)uVar39) goto LAB_0021aeec;
        if (*(int *)(param_1 + 0x14b4) <= (int)uVar39) goto LAB_0021ae84;
LAB_0021ae4c:
        uVar20 = (ulong)(int)uVar39;
        lVar21 = (long)*(int *)(param_1 + 0xbc0 + (uVar20 | 1) * 4);
        lVar31 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar39 * 4);
        if ((ushort)psVar18[lVar21 * 2] < (ushort)psVar18[lVar31 * 2]) goto LAB_0021ae78;
        if (psVar18[lVar21 * 2] == psVar18[lVar31 * 2]) goto code_r0x0021aecc;
      } while( true );
    }
    lVar31 = 1;
LAB_0021ac60:
    *(undefined4 *)(param_1 + lVar31 * 4 + 0xbc0) = uVar22;
    uVar25 = *(uint *)(param_1 + 0x14b4);
    if ((int)uVar25 < 2) {
      lVar23 = (long)*(int *)(param_1 + 0x14b8) + -1;
      *(int *)(param_1 + 0x14b8) = (int)lVar23;
      *(undefined4 *)(param_1 + 0xbc0 + lVar23 * 4) = *(undefined4 *)(param_1 + 0xbc4);
      plVar27 = (long *)param_2[2];
      lVar21 = *param_2;
      iVar4 = (int)param_2[1];
      lVar23 = *plVar27;
      lVar31 = plVar27[1];
      iVar5 = (int)plVar27[2];
      iVar9 = (int)plVar27[3];
      lVar28 = (long)iVar9;
      *(undefined8 *)(param_1 + 3000) = 0;
      *(undefined8 *)(param_1 + 0xbb0) = 0;
      *(undefined8 *)(param_1 + 0xba8) = 0;
      *(undefined8 *)(param_1 + 0xba0) = 0;
      *(undefined2 *)
       (lVar21 + (long)*(int *)(param_1 + 0xbc0 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4 + 2) = 0
      ;
      iVar35 = *(int *)(param_1 + 0x14b8);
      iVar24 = iVar35 + 1;
      if (iVar24 < 0x23d) {
        iVar29 = 0;
        if (lVar23 == 0) {
          iVar35 = iVar35 + -0x23c;
          piVar37 = (int *)(param_1 + (long)iVar24 * 4 + 0xbc0);
          do {
            iVar24 = *piVar37;
            lVar23 = lVar21 + (long)iVar24 * 4;
            uVar8 = *(ushort *)(lVar21 + (ulong)*(ushort *)(lVar23 + 2) * 4 + 2);
            if ((int)(uint)uVar8 < iVar9) {
              iVar12 = uVar8 + 1;
            }
            else {
              iVar29 = iVar29 + 1;
              iVar12 = iVar9;
            }
            *(short *)(lVar23 + 2) = (short)iVar12;
            if (iVar24 <= iVar4) {
              lVar23 = param_1 + (long)iVar12 * 2;
              *(short *)(lVar23 + 0xba0) = *(short *)(lVar23 + 0xba0) + 1;
              if (iVar24 < iVar5) {
                iVar16 = 0;
              }
              else {
                iVar16 = *(int *)(lVar31 + (long)(iVar24 - iVar5) * 4);
              }
              *(ulong *)(param_1 + 0x1718) =
                   *(long *)(param_1 + 0x1718) +
                   (ulong)*(ushort *)(lVar21 + (long)iVar24 * 4) * (ulong)(uint)(iVar16 + iVar12);
            }
            bVar14 = iVar35 != -1;
            iVar35 = iVar35 + 1;
            piVar37 = piVar37 + 1;
          } while (bVar14);
        }
        else {
          iVar35 = iVar35 + -0x23c;
          piVar37 = (int *)(param_1 + (long)iVar24 * 4 + 0xbc0);
          do {
            iVar24 = *piVar37;
            lVar15 = lVar21 + (long)iVar24 * 4;
            uVar8 = *(ushort *)(lVar21 + (ulong)*(ushort *)(lVar15 + 2) * 4 + 2);
            if ((int)(uint)uVar8 < iVar9) {
              iVar12 = uVar8 + 1;
            }
            else {
              iVar29 = iVar29 + 1;
              iVar12 = iVar9;
            }
            *(short *)(lVar15 + 2) = (short)iVar12;
            if (iVar24 <= iVar4) {
              lVar15 = param_1 + (long)iVar12 * 2;
              *(short *)(lVar15 + 0xba0) = *(short *)(lVar15 + 0xba0) + 1;
              if (iVar24 < iVar5) {
                iVar16 = 0;
              }
              else {
                iVar16 = *(int *)(lVar31 + (long)(iVar24 - iVar5) * 4);
              }
              lVar15 = (long)iVar24 * 4;
              uVar20 = (ulong)*(ushort *)(lVar21 + lVar15);
              *(ulong *)(param_1 + 0x1718) =
                   *(long *)(param_1 + 0x1718) + uVar20 * (uint)(iVar16 + iVar12);
              *(ulong *)(param_1 + 0x1720) =
                   *(long *)(param_1 + 0x1720) +
                   (iVar16 + (uint)*(ushort *)(lVar23 + lVar15 + 2)) * uVar20;
            }
            bVar14 = iVar35 != -1;
            iVar35 = iVar35 + 1;
            piVar37 = piVar37 + 1;
          } while (bVar14);
        }
        if (iVar29 != 0) {
          puVar38 = (ushort *)(param_1 + lVar28 * 2 + 0xba0);
          do {
            puVar36 = puVar38;
            lVar23 = (lVar28 << 0x20) + 0x100000000;
            do {
              puVar36 = puVar36 + -1;
              lVar23 = lVar23 + -0x100000000;
            } while (*puVar36 == 0);
            *puVar36 = *puVar36 - 1;
            lVar23 = param_1 + (lVar23 >> 0x1f);
            *(short *)(lVar23 + 0xba0) = *(short *)(lVar23 + 0xba0) + 2;
            uVar8 = *puVar38;
            iVar29 = iVar29 + -2;
            uVar33 = uVar8 - 1;
            *puVar38 = uVar33;
          } while (0 < iVar29);
          if (iVar9 != 0) {
            iVar24 = 0x23d;
            if (uVar8 != 1) goto LAB_0021b10c;
            while (lVar28 = lVar28 + -1, lVar28 != 0) {
              uVar33 = *(ushort *)(param_1 + lVar28 * 2 + 0xba0);
              if (uVar33 != 0) {
LAB_0021b10c:
                uVar39 = (uint)uVar33;
                do {
                  piVar37 = (int *)(param_1 + 0xbbc + (long)iVar24 * 4);
                  do {
                    iVar35 = *piVar37;
                    iVar24 = iVar24 + -1;
                    piVar37 = piVar37 + -1;
                  } while (iVar4 < iVar35);
                  puVar38 = (ushort *)(lVar21 + (long)iVar35 * 4 + 2);
                  uVar8 = *puVar38;
                  if ((uint)lVar28 != (uint)uVar8) {
                    *(ulong *)(param_1 + 0x1718) =
                         *(long *)(param_1 + 0x1718) +
                         (lVar28 - (ulong)uVar8) * (ulong)*(ushort *)(lVar21 + (long)iVar35 * 4);
                    *puVar38 = (ushort)lVar28;
                  }
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
            }
          }
        }
      }
      auStack_20[1] = *(short *)(param_1 + 0xba0) * 2;
      auStack_20[2] = (auStack_20[1] + *(short *)(param_1 + 0xba2)) * 2;
      auStack_20[3] = (auStack_20[2] + *(short *)(param_1 + 0xba4)) * 2;
      auStack_20[4] = (auStack_20[3] + *(short *)(param_1 + 0xba6)) * 2;
      local_16 = (auStack_20[4] + *(short *)(param_1 + 0xba8)) * 2;
      local_14 = (local_16 + *(short *)(param_1 + 0xbaa)) * 2;
      local_12 = (local_14 + *(short *)(param_1 + 0xbac)) * 2;
      local_10 = (local_12 + *(short *)(param_1 + 0xbae)) * 2;
      local_e = (local_10 + *(short *)(param_1 + 0xbb0)) * 2;
      local_c = (local_e + *(short *)(param_1 + 0xbb2)) * 2;
      local_a = (local_c + *(short *)(param_1 + 0xbb4)) * 2;
      local_8 = (local_a + *(short *)(param_1 + 0xbb6)) * 2;
      local_6 = (*(short *)(param_1 + 3000) + local_8) * 2;
      local_4 = (*(short *)(param_1 + 0xbba) + local_6) * 2;
      local_2 = (local_4 + *(short *)(param_1 + 0xbbc)) * 2;
      if (-1 < (int)uVar19) {
        uVar20 = 0;
        uVar8 = psVar18[1];
        while( true ) {
          uVar26 = (ulong)uVar8;
          if (uVar26 != 0) {
            uVar25 = (uint)auStack_20[uVar26];
            auStack_20[uVar26] = auStack_20[uVar26] + 1;
            uVar30 = (uint)uVar8;
            uVar39 = uVar30 & 3;
            if (uVar30 - 1 < 3) {
              uVar34 = 0;
              uVar33 = uVar8;
            }
            else {
              uVar34 = 0;
              iVar24 = uVar39 - uVar30;
              do {
                uVar30 = uVar25 & 1;
                uVar2 = uVar25 & 2;
                uVar3 = uVar25 >> 2;
                uVar11 = uVar25 >> 3;
                uVar25 = uVar25 >> 4;
                uVar34 = uVar11 & 1 | (uVar2 | (uVar34 & 0x1fffffff | uVar30) << 2 | uVar3 & 1) << 1
                ;
                uVar33 = (ushort)uVar34;
                uVar34 = uVar34 << 1;
                iVar24 = iVar24 + 4;
              } while (iVar24 != 0);
            }
            if ((uVar8 & 3) != 0) {
              do {
                uVar30 = uVar25 & 1;
                uVar25 = uVar25 >> 1;
                uVar34 = uVar34 | uVar30;
                uVar33 = (ushort)uVar34;
                uVar34 = uVar34 << 1;
                uVar39 = uVar39 - 1;
              } while (uVar39 != 0);
            }
            psVar18[uVar20 * 2] = uVar33;
          }
          uVar20 = uVar20 + 1;
          if (uVar20 == uVar19 + 1) break;
          uVar8 = psVar18[uVar20 * 2 + 1];
        }
      }
      return;
    }
  } while( true );
code_r0x0021ac34:
  uVar25 = uVar30;
  if (*(byte *)(param_1 + 0x14bc + lVar23) <= *(byte *)(param_1 + 0x14bc + lVar31)) {
LAB_0021abe0:
    uVar32 = uVar17;
    uVar25 = (uint)uVar17;
  }
  goto LAB_0021abf4;
code_r0x0021ad6c:
  uVar34 = uVar39;
  if (*(byte *)(param_1 + 0x14bc + lVar31) <= *(byte *)(param_1 + 0x14bc + lVar28)) {
LAB_0021ad18:
    uVar20 = uVar20 | 1;
    uVar34 = uVar39 | 1;
  }
  goto LAB_0021ad2c;
code_r0x0021aecc:
  uVar30 = uVar39;
  if (*(byte *)(param_1 + 0x14bc + lVar21) <= *(byte *)(param_1 + 0x14bc + lVar31)) {
LAB_0021ae78:
    uVar20 = uVar20 | 1;
    uVar30 = uVar39 | 1;
  }
  goto LAB_0021ae8c;
}


