/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00216d50; name: FUN_00216d50
 */


ulong FUN_00216d50(long *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong __n;
  ulong uVar24;
  ulong uVar25;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((plVar21 = (long *)param_1[7], plVar21 == (long *)0x0 || ((long *)*plVar21 != param_1)))) {
    return 0xfffffffe;
  }
  iVar20 = (int)plVar21[1];
  if (((0x38 < iVar20 - 0x39U) ||
      ((1L << ((ulong)(iVar20 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
     ((iVar20 != 0x29a && (iVar20 != 0x2a)))) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || (((int)param_1[1] != 0 && (*param_1 == 0)))) ||
     ((param_2 != 4 && (iVar20 == 0x29a)))) {
    param_1[6] = *(long *)(PTR_PTR_04372830 + 0x20);
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0) goto LAB_00217250;
  iVar3 = *(int *)((long)plVar21 + 0x4c);
  *(uint *)((long)plVar21 + 0x4c) = param_2;
  if (plVar21[5] == 0) {
    if ((int)param_1[1] == 0) {
      iVar18 = 9;
      if ((int)param_2 < 5) {
        iVar18 = 0;
      }
      iVar19 = 9;
      if (iVar3 < 5) {
        iVar19 = 0;
      }
      if ((param_2 != 4) && ((int)(param_2 * 2 - iVar18) <= iVar3 * 2 - iVar19)) goto LAB_00217250;
    }
    if (iVar20 == 0x2a) goto LAB_00216ef4;
LAB_002170ac:
    if (iVar20 != 0x29a) goto LAB_002170c0;
    if ((int)param_1[1] != 0) {
LAB_00217250:
      param_1[6] = *(long *)(PTR_PTR_04372830 + 0x38);
      return 0xfffffffb;
    }
LAB_00217a5c:
    if ((*(int *)((long)plVar21 + 0xb4) != 0) || ((param_2 != 0 && ((int)plVar21[1] != 0x29a))))
    goto LAB_00217a64;
LAB_00218074:
    if (param_2 == 4) {
      if ((int)plVar21[6] < 1) {
        return 1;
      }
      lVar22 = param_1[0xc];
      if ((int)plVar21[6] == 2) {
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)lVar22;
        lVar22 = param_1[0xc];
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 8);
        lVar22 = param_1[0xc];
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x10);
        lVar22 = param_1[0xc];
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x18);
        lVar14 = plVar21[5];
        lVar22 = param_1[2];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)lVar22;
        lVar22 = param_1[2];
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 8);
        lVar22 = param_1[2];
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x10);
        uVar23 = (ulong)param_1[2] >> 0x18;
      }
      else {
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x18);
        lVar14 = plVar21[5];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x10);
        uVar23 = param_1[0xc];
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(char *)(plVar21[2] + lVar22) = (char)(uVar23 >> 8);
      }
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(char *)(plVar21[2] + lVar22) = (char)uVar23;
      lVar22 = param_1[7];
      FUN_00219ea0(lVar22);
      uVar9 = *(uint *)(param_1 + 4);
      if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
        uVar9 = *(uint *)(lVar22 + 0x28);
      }
      if (uVar9 != 0) {
        uVar23 = (ulong)uVar9;
        memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
        param_1[3] = param_1[3] + uVar23;
        *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
        param_1[5] = param_1[5] + uVar23;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
        lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
        *(long *)(lVar22 + 0x28) = lVar14;
        if (lVar14 == 0) {
          *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
        }
      }
      if (0 < (int)plVar21[6]) {
        *(int *)(plVar21 + 6) = -(int)plVar21[6];
      }
      return (ulong)(plVar21[5] == 0);
    }
  }
  else {
    lVar22 = param_1[7];
    FUN_00219ea0(lVar22);
    uVar11 = *(uint *)(param_1 + 4);
    uVar9 = uVar11;
    if (*(uint *)(lVar22 + 0x28) <= uVar11) {
      uVar9 = *(uint *)(lVar22 + 0x28);
    }
    if (uVar9 != 0) {
      uVar23 = (ulong)uVar9;
      memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
      param_1[3] = param_1[3] + uVar23;
      *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
      param_1[5] = param_1[5] + uVar23;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
      lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
      *(long *)(lVar22 + 0x28) = lVar14;
      if (lVar14 == 0) {
        *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
      }
      uVar11 = *(uint *)(param_1 + 4);
    }
    if (uVar11 == 0) goto LAB_00218428;
    iVar20 = (int)plVar21[1];
    if (iVar20 != 0x2a) goto LAB_002170ac;
LAB_00216ef4:
    if (((int)plVar21[0x19] < 2) && (iVar20 = *(int *)((long)plVar21 + 0xc4), 1 < iVar20)) {
      if (iVar20 < 6) {
        uVar9 = 0x40;
      }
      else {
        uVar9 = 0x80;
        if (iVar20 != 6) {
          uVar9 = 0xc0;
        }
      }
    }
    else {
      uVar9 = 0;
    }
    uVar9 = uVar9 | *(int *)((long)plVar21 + 0x54) * 0x1000 - 0x7800U;
    if (*(int *)((long)plVar21 + 0xac) != 0) {
      uVar9 = uVar9 | 0x20;
    }
    lVar22 = plVar21[5];
    plVar21[5] = lVar22 + 1;
    *(char *)(plVar21[2] + lVar22) = (char)(uVar9 >> 8);
    lVar22 = plVar21[5];
    plVar21[5] = lVar22 + 1;
    *(byte *)(plVar21[2] + lVar22) =
         ((byte)uVar9 + (char)(uVar9 / 0x1f) * -0x1f | (byte)uVar9) ^ 0x1f;
    if (*(int *)((long)plVar21 + 0xac) != 0) {
      lVar22 = param_1[0xc];
      lVar14 = plVar21[5];
      plVar21[5] = lVar14 + 1;
      *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x18);
      lVar14 = plVar21[5];
      plVar21[5] = lVar14 + 1;
      *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 0x10);
      lVar22 = param_1[0xc];
      lVar14 = plVar21[5];
      plVar21[5] = lVar14 + 1;
      *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 8);
      lVar14 = plVar21[5];
      plVar21[5] = lVar14 + 1;
      *(char *)(plVar21[2] + lVar14) = (char)lVar22;
    }
    lVar22 = FUN_00215360(0,0,0);
    param_1[0xc] = lVar22;
    *(undefined4 *)(plVar21 + 1) = 0x71;
    lVar22 = param_1[7];
    FUN_00219ea0(lVar22);
    uVar9 = *(uint *)(param_1 + 4);
    if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
      uVar9 = *(uint *)(lVar22 + 0x28);
    }
    if (uVar9 != 0) {
      uVar23 = (ulong)uVar9;
      memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
      param_1[3] = param_1[3] + uVar23;
      *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
      param_1[5] = param_1[5] + uVar23;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
      lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
      *(long *)(lVar22 + 0x28) = lVar14;
      if (lVar14 == 0) {
        *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
      }
    }
    if (plVar21[5] != 0) goto LAB_00218428;
    iVar20 = (int)plVar21[1];
LAB_002170c0:
    if (iVar20 == 0x39) {
      lVar22 = FUN_00215640(0,0,0);
      param_1[0xc] = lVar22;
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(undefined1 *)(plVar21[2] + lVar22) = 0x1f;
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(undefined1 *)(plVar21[2] + lVar22) = 0x8b;
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(undefined1 *)(plVar21[2] + lVar22) = 8;
      piVar12 = (int *)plVar21[7];
      if (piVar12 == (int *)0x0) {
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = 0;
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = 0;
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = 0;
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = 0;
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = 0;
        if (*(int *)((long)plVar21 + 0xc4) == 9) {
          uVar10 = 2;
        }
        else {
          uVar10 = 4;
          if ((int)plVar21[0x19] < 2 && 1 < *(int *)((long)plVar21 + 0xc4)) {
            uVar10 = 0;
          }
        }
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = uVar10;
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(undefined1 *)(plVar21[2] + lVar22) = 3;
        *(undefined4 *)(plVar21 + 1) = 0x71;
        lVar22 = param_1[7];
        FUN_00219ea0(lVar22);
        uVar9 = *(uint *)(param_1 + 4);
        if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
          uVar9 = *(uint *)(lVar22 + 0x28);
        }
        if (uVar9 != 0) {
          uVar23 = (ulong)uVar9;
          memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
          param_1[3] = param_1[3] + uVar23;
          *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
          param_1[5] = param_1[5] + uVar23;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
          lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
          *(long *)(lVar22 + 0x28) = lVar14;
          if (lVar14 == 0) {
            *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
          }
        }
        if (plVar21[5] != 0) goto LAB_00218428;
        iVar20 = (int)plVar21[1];
        goto LAB_00217484;
      }
      iVar20 = *piVar12;
      iVar3 = piVar12[0x11];
      lVar14 = *(long *)(piVar12 + 6);
      lVar16 = *(long *)(piVar12 + 10);
      lVar22 = *(long *)(piVar12 + 0xe);
      lVar17 = plVar21[5];
      plVar21[5] = lVar17 + 1;
      *(char *)(plVar21[2] + lVar17) =
           iVar20 != 0 | (iVar3 != 0) << 1 | (lVar14 != 0) << 2 | (lVar16 != 0) << 3 |
           (lVar22 != 0) << 4;
      lVar22 = plVar21[5];
      uVar13 = *(undefined8 *)(plVar21[7] + 8);
      plVar21[5] = lVar22 + 1;
      *(char *)(plVar21[2] + lVar22) = (char)uVar13;
      uVar13 = *(undefined8 *)(plVar21[7] + 8);
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(char *)(plVar21[2] + lVar22) = (char)((ulong)uVar13 >> 8);
      uVar13 = *(undefined8 *)(plVar21[7] + 8);
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(char *)(plVar21[2] + lVar22) = (char)((ulong)uVar13 >> 0x10);
      uVar13 = *(undefined8 *)(plVar21[7] + 8);
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(char *)(plVar21[2] + lVar22) = (char)((ulong)uVar13 >> 0x18);
      if (*(int *)((long)plVar21 + 0xc4) == 9) {
        uVar10 = 2;
      }
      else {
        uVar10 = 4;
        if ((int)plVar21[0x19] < 2 && 1 < *(int *)((long)plVar21 + 0xc4)) {
          uVar10 = 0;
        }
      }
      lVar22 = plVar21[5];
      plVar21[5] = lVar22 + 1;
      *(undefined1 *)(plVar21[2] + lVar22) = uVar10;
      lVar22 = plVar21[5];
      uVar4 = *(undefined4 *)(plVar21[7] + 0x14);
      plVar21[5] = lVar22 + 1;
      *(char *)(plVar21[2] + lVar22) = (char)uVar4;
      lVar22 = plVar21[7];
      if (*(long *)(lVar22 + 0x18) != 0) {
        lVar14 = plVar21[5];
        uVar4 = *(undefined4 *)(lVar22 + 0x20);
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)uVar4;
        uVar4 = *(undefined4 *)(plVar21[7] + 0x20);
        lVar22 = plVar21[5];
        plVar21[5] = lVar22 + 1;
        *(char *)(plVar21[2] + lVar22) = (char)((uint)uVar4 >> 8);
        lVar22 = plVar21[7];
      }
      if (*(int *)(lVar22 + 0x44) != 0) {
        lVar22 = FUN_00215640(param_1[0xc],plVar21[2],(int)plVar21[5]);
        param_1[0xc] = lVar22;
      }
      plVar21[8] = 0;
      *(undefined4 *)(plVar21 + 1) = 0x45;
      lVar22 = plVar21[7];
      lVar14 = *(long *)(lVar22 + 0x18);
joined_r0x002174b0:
      if (lVar14 != 0) {
        lVar16 = plVar21[8];
        uVar23 = (ulong)((uint)*(ushort *)(lVar22 + 0x20) - (int)lVar16);
        uVar24 = plVar21[5];
        uVar15 = plVar21[3];
        if (uVar15 < uVar24 + uVar23) {
          while( true ) {
            uVar25 = uVar15 - uVar24;
            __n = uVar25 & 0xffffffff;
            memcpy((void *)(plVar21[2] + uVar24),(void *)(lVar14 + lVar16),__n);
            uVar15 = plVar21[3];
            plVar21[5] = uVar15;
            if (uVar24 < uVar15 && *(int *)(plVar21[7] + 0x44) != 0) {
              lVar22 = FUN_00215640(param_1[0xc],plVar21[2] + uVar24,(int)uVar15 - (int)uVar24);
              param_1[0xc] = lVar22;
            }
            plVar21[8] = plVar21[8] + __n;
            lVar22 = param_1[7];
            FUN_00219ea0(lVar22);
            uVar9 = *(uint *)(param_1 + 4);
            if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
              uVar9 = *(uint *)(lVar22 + 0x28);
            }
            if (uVar9 != 0) {
              uVar15 = (ulong)uVar9;
              memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar15);
              param_1[3] = param_1[3] + uVar15;
              *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar15;
              param_1[5] = param_1[5] + uVar15;
              *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
              lVar14 = *(long *)(lVar22 + 0x28) - uVar15;
              *(long *)(lVar22 + 0x28) = lVar14;
              if (lVar14 == 0) {
                *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
              }
            }
            if (plVar21[5] != 0) goto LAB_00218428;
            uVar15 = plVar21[3];
            uVar23 = (ulong)(uint)((int)uVar23 - (int)uVar25);
            if (uVar23 <= uVar15) break;
            lVar16 = plVar21[8];
            uVar24 = 0;
            lVar14 = *(long *)(plVar21[7] + 0x18);
          }
          lVar16 = plVar21[8];
          uVar24 = 0;
          lVar14 = *(long *)(plVar21[7] + 0x18);
        }
        memcpy((void *)(plVar21[2] + uVar24),(void *)(lVar14 + lVar16),uVar23);
        uVar23 = plVar21[5] + uVar23;
        plVar21[5] = uVar23;
        if ((uVar24 < uVar23) && (*(int *)(plVar21[7] + 0x44) != 0)) {
          lVar22 = FUN_00215640(param_1[0xc],plVar21[2] + uVar24,(int)uVar23 - (int)uVar24);
          param_1[0xc] = lVar22;
        }
        plVar21[8] = 0;
      }
      *(undefined4 *)(plVar21 + 1) = 0x49;
switchD_002174a4_caseD_49:
      if (*(long *)(plVar21[7] + 0x28) != 0) {
        uVar23 = plVar21[5];
        uVar15 = uVar23;
        if (uVar23 != plVar21[3]) goto LAB_00217734;
        while( true ) {
          if ((uVar23 < uVar15) && (*(int *)(plVar21[7] + 0x44) != 0)) {
            lVar22 = FUN_00215640(param_1[0xc],plVar21[2] + uVar23,(int)uVar15 - (int)uVar23);
            param_1[0xc] = lVar22;
          }
          lVar22 = param_1[7];
          FUN_00219ea0(lVar22);
          uVar9 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar9 = *(uint *)(lVar22 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
            *(long *)(lVar22 + 0x28) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
            }
          }
          if (plVar21[5] != 0) break;
          uVar15 = 0;
          uVar23 = 0;
LAB_00217734:
          do {
            lVar22 = plVar21[8];
            lVar14 = *(long *)(plVar21[7] + 0x28);
            plVar21[8] = lVar22 + 1;
            cVar5 = *(char *)(lVar14 + lVar22);
            plVar21[5] = uVar15 + 1;
            *(char *)(plVar21[2] + uVar15) = cVar5;
            if (cVar5 == '\0') {
              if ((*(int *)(plVar21[7] + 0x44) != 0) && (uVar23 < (ulong)plVar21[5])) {
                lVar22 = FUN_00215640(param_1[0xc],plVar21[2] + uVar23,(int)plVar21[5] - (int)uVar23
                                     );
                param_1[0xc] = lVar22;
              }
              plVar21[8] = 0;
              goto LAB_00217790;
            }
            uVar15 = plVar21[5];
          } while (uVar15 != plVar21[3]);
        }
        goto LAB_00218428;
      }
LAB_00217790:
      *(undefined4 *)(plVar21 + 1) = 0x5b;
switchD_002174a4_caseD_5b:
      if (*(long *)(plVar21[7] + 0x38) != 0) {
        uVar23 = plVar21[5];
        uVar15 = uVar23;
        if (uVar23 != plVar21[3]) goto LAB_00217880;
        while( true ) {
          if ((uVar23 < uVar15) && (*(int *)(plVar21[7] + 0x44) != 0)) {
            lVar22 = FUN_00215640(param_1[0xc],plVar21[2] + uVar23,(int)uVar15 - (int)uVar23);
            param_1[0xc] = lVar22;
          }
          lVar22 = param_1[7];
          FUN_00219ea0(lVar22);
          uVar9 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar9 = *(uint *)(lVar22 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
            *(long *)(lVar22 + 0x28) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
            }
          }
          if (plVar21[5] != 0) break;
          uVar15 = 0;
          uVar23 = 0;
LAB_00217880:
          do {
            lVar22 = plVar21[8];
            lVar14 = *(long *)(plVar21[7] + 0x38);
            plVar21[8] = lVar22 + 1;
            cVar5 = *(char *)(lVar14 + lVar22);
            plVar21[5] = uVar15 + 1;
            *(char *)(plVar21[2] + uVar15) = cVar5;
            if (cVar5 == '\0') {
              if ((*(int *)(plVar21[7] + 0x44) != 0) && (uVar23 < (ulong)plVar21[5])) {
                lVar22 = FUN_00215640(param_1[0xc],plVar21[2] + uVar23,(int)plVar21[5] - (int)uVar23
                                     );
                param_1[0xc] = lVar22;
              }
              goto LAB_002178d8;
            }
            uVar15 = plVar21[5];
          } while (uVar15 != plVar21[3]);
        }
        goto LAB_00218428;
      }
LAB_002178d8:
      *(undefined4 *)(plVar21 + 1) = 0x67;
switchD_002174a4_caseD_67:
      if (*(int *)(plVar21[7] + 0x44) != 0) {
        lVar22 = plVar21[5];
        if ((ulong)plVar21[3] < lVar22 + 2U) {
          lVar22 = param_1[7];
          FUN_00219ea0(lVar22);
          uVar9 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar9 = *(uint *)(lVar22 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
            *(long *)(lVar22 + 0x28) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
            }
          }
          lVar22 = 0;
          if (plVar21[5] != 0) goto LAB_00218428;
        }
        lVar14 = param_1[0xc];
        plVar21[5] = lVar22 + 1;
        *(char *)(plVar21[2] + lVar22) = (char)lVar14;
        lVar14 = plVar21[5];
        lVar22 = param_1[0xc];
        plVar21[5] = lVar14 + 1;
        *(char *)(plVar21[2] + lVar14) = (char)((ulong)lVar22 >> 8);
        lVar22 = FUN_00215640(0,0,0);
        param_1[0xc] = lVar22;
      }
      *(undefined4 *)(plVar21 + 1) = 0x71;
      lVar22 = param_1[7];
      FUN_00219ea0(lVar22);
      uVar9 = *(uint *)(param_1 + 4);
      if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
        uVar9 = *(uint *)(lVar22 + 0x28);
      }
      if (uVar9 != 0) {
        uVar23 = (ulong)uVar9;
        memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
        param_1[3] = param_1[3] + uVar23;
        *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
        param_1[5] = param_1[5] + uVar23;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
        lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
        *(long *)(lVar22 + 0x28) = lVar14;
        if (lVar14 == 0) {
          *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
        }
      }
      if (plVar21[5] != 0) goto LAB_00218428;
    }
    else {
LAB_00217484:
      switch(iVar20) {
      case 0x45:
        lVar22 = plVar21[7];
        lVar14 = *(long *)(lVar22 + 0x18);
        goto joined_r0x002174b0;
      case 0x49:
        goto switchD_002174a4_caseD_49;
      case 0x5b:
        goto switchD_002174a4_caseD_5b;
      case 0x67:
        goto switchD_002174a4_caseD_67;
      }
    }
    if ((int)param_1[1] == 0) goto LAB_00217a5c;
LAB_00217a64:
    puVar8 = PTR_DAT_04372840;
    puVar7 = PTR_DAT_04372838;
    if (*(int *)((long)plVar21 + 0xc4) == 0) {
      uVar9 = FUN_002185e0(plVar21,param_2);
joined_r0x00217c08:
      if ((uVar9 | 1) == 3) {
        *(undefined4 *)(plVar21 + 1) = 0x29a;
      }
      if ((uVar9 & 0xfffffffd) != 0) {
        if (uVar9 == 1) {
LAB_00217c24:
          if (param_2 != 5) {
            if (param_2 == 1) {
              FUN_00219f30();
            }
            else {
              FUN_00219d30(plVar21,0,0,0);
              if (param_2 == 3) {
                *(undefined2 *)(plVar21[0xf] + (ulong)(*(int *)((long)plVar21 + 0x84) - 1) * 2) = 0;
                memset((void *)plVar21[0xf],0,(ulong)(*(int *)((long)plVar21 + 0x84) - 1) << 1);
                if (*(int *)((long)plVar21 + 0xb4) == 0) {
                  *(undefined4 *)((long)plVar21 + 0xac) = 0;
                  plVar21[0x13] = 0;
                  *(undefined4 *)((long)plVar21 + 0x172c) = 0;
                }
              }
            }
          }
          lVar22 = param_1[7];
          FUN_00219ea0(lVar22);
          uVar11 = *(uint *)(param_1 + 4);
          uVar9 = uVar11;
          if (*(uint *)(lVar22 + 0x28) <= uVar11) {
            uVar9 = *(uint *)(lVar22 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
            *(long *)(lVar22 + 0x28) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
            }
            uVar11 = *(uint *)(param_1 + 4);
          }
          if (uVar11 == 0) goto LAB_00218428;
        }
        goto LAB_00218074;
      }
    }
    else {
      if ((int)plVar21[0x19] != 3) {
        if ((int)plVar21[0x19] == 2) {
LAB_00217ab8:
          while ((*(int *)((long)plVar21 + 0xb4) != 0 ||
                 (FUN_00216880(plVar21), *(int *)((long)plVar21 + 0xb4) != 0))) {
            *(undefined4 *)(plVar21 + 0x14) = 0;
            bVar6 = *(byte *)(plVar21[0xc] + (ulong)*(uint *)((long)plVar21 + 0xac));
            *(undefined2 *)(plVar21[0x2e2] + (ulong)*(uint *)((long)plVar21 + 0x170c) * 2) = 0;
            uVar9 = *(uint *)((long)plVar21 + 0x170c);
            *(uint *)((long)plVar21 + 0x170c) = uVar9 + 1;
            *(byte *)(plVar21[0x2e0] + (ulong)uVar9) = bVar6;
            *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xd4) =
                 *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xd4) + 1;
            *(int *)((long)plVar21 + 0xb4) = *(int *)((long)plVar21 + 0xb4) + -1;
            uVar9 = *(int *)((long)plVar21 + 0xac) + 1;
            *(uint *)((long)plVar21 + 0xac) = uVar9;
            if (*(int *)((long)plVar21 + 0x170c) == (int)plVar21[0x2e1] + -1) goto code_r0x00217b3c;
          }
          if (param_2 != 0) {
            *(undefined4 *)((long)plVar21 + 0x172c) = 0;
            if (param_2 == 4) {
              uVar23 = plVar21[0x13];
joined_r0x00218274:
              if ((long)uVar23 < 0) {
                lVar22 = 0;
              }
              else {
                lVar22 = plVar21[0xc] + (uVar23 & 0xffffffff);
              }
              FUN_0021a0a0(plVar21,lVar22,*(uint *)((long)plVar21 + 0xac) - uVar23,1);
              plVar21[0x13] = (ulong)*(uint *)((long)plVar21 + 0xac);
              lVar14 = *plVar21;
              lVar22 = *(long *)(lVar14 + 0x38);
              FUN_00219ea0(lVar22);
              uVar9 = *(uint *)(lVar14 + 0x20);
              if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
                uVar9 = *(uint *)(lVar22 + 0x28);
              }
              if (uVar9 != 0) {
                uVar23 = (ulong)uVar9;
                memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
                *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar23;
                *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
                *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar23;
                *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar9;
                lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
                *(long *)(lVar22 + 0x28) = lVar14;
                if (lVar14 == 0) {
                  *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
                }
              }
              uVar9 = 2;
              if (*(int *)(*plVar21 + 0x20) != 0) {
                uVar9 = 3;
              }
              goto joined_r0x00217c08;
            }
            if (*(int *)((long)plVar21 + 0x170c) != 0) {
              uVar23 = plVar21[0x13];
joined_r0x0021834c:
              if ((long)uVar23 < 0) {
                lVar22 = 0;
              }
              else {
                lVar22 = plVar21[0xc] + (uVar23 & 0xffffffff);
              }
              FUN_0021a0a0(plVar21,lVar22,*(uint *)((long)plVar21 + 0xac) - uVar23,0);
              plVar21[0x13] = (ulong)*(uint *)((long)plVar21 + 0xac);
              lVar14 = *plVar21;
              lVar22 = *(long *)(lVar14 + 0x38);
              FUN_00219ea0(lVar22);
              uVar9 = *(uint *)(lVar14 + 0x20);
              if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
                uVar9 = *(uint *)(lVar22 + 0x28);
              }
              if (uVar9 != 0) {
                uVar23 = (ulong)uVar9;
                memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
                *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar23;
                *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
                *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar23;
                *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar9;
                lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
                *(long *)(lVar22 + 0x28) = lVar14;
                if (lVar14 == 0) {
                  *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
                }
              }
              if (*(int *)(*plVar21 + 0x20) == 0) goto LAB_00218418;
            }
            goto LAB_00217c24;
          }
          goto LAB_00218418;
        }
        uVar9 = (*(code *)(&PTR_FUN_0411f760)[(long)*(int *)((long)plVar21 + 0xc4) * 2])
                          (plVar21,param_2);
        goto joined_r0x00217c08;
      }
      uVar9 = *(uint *)((long)plVar21 + 0xb4);
      if (uVar9 < 0x103) goto LAB_00217c90;
LAB_00217cc0:
      *(undefined4 *)(plVar21 + 0x14) = 0;
LAB_00217cc4:
      uVar23 = (ulong)*(uint *)((long)plVar21 + 0xac);
      if (*(uint *)((long)plVar21 + 0xac) == 0) goto LAB_00217e60;
      pcVar1 = (char *)(plVar21[0xc] + uVar23);
      cVar5 = pcVar1[-1];
      if (cVar5 != *pcVar1) goto LAB_00217e60;
      if (cVar5 != pcVar1[1]) goto LAB_00217e60;
      if (cVar5 != pcVar1[2]) goto LAB_00217e60;
      lVar22 = 0;
      do {
        pcVar2 = pcVar1 + lVar22;
        iVar20 = (int)pcVar2;
        if (cVar5 != pcVar2[3]) {
          iVar20 = iVar20 + 3;
          goto LAB_00217db8;
        }
        if (cVar5 != pcVar2[4]) {
          iVar20 = iVar20 + 4;
          goto LAB_00217db8;
        }
        if (cVar5 != pcVar2[5]) {
          iVar20 = iVar20 + 5;
          goto LAB_00217db8;
        }
        if (cVar5 != pcVar2[6]) {
          iVar20 = iVar20 + 6;
          goto LAB_00217db8;
        }
        if (cVar5 != pcVar2[7]) {
          iVar20 = iVar20 + 7;
          goto LAB_00217db8;
        }
        if (cVar5 != pcVar2[8]) {
          iVar20 = iVar20 + 8;
          goto LAB_00217db8;
        }
        if (cVar5 != pcVar2[9]) {
          iVar20 = iVar20 + 9;
          goto LAB_00217db8;
        }
        uVar15 = lVar22 + 10;
        lVar22 = lVar22 + 8;
      } while ((uVar15 < 0x102) && (cVar5 == pcVar2[10]));
      iVar20 = (int)pcVar1 + (int)lVar22 + 2;
LAB_00217db8:
      uVar11 = (iVar20 - ((int)pcVar1 + 0x102)) + 0x102;
      if (uVar11 <= uVar9) {
        uVar9 = uVar11;
      }
      *(uint *)(plVar21 + 0x14) = uVar9;
      if (uVar9 < 3) goto LAB_00217e60;
      *(undefined2 *)(plVar21[0x2e2] + (ulong)*(uint *)((long)plVar21 + 0x170c) * 2) = 1;
      uVar11 = *(uint *)((long)plVar21 + 0x170c);
      *(uint *)((long)plVar21 + 0x170c) = uVar11 + 1;
      *(char *)(plVar21[0x2e0] + (ulong)uVar11) = (char)(uVar9 - 3);
      uVar23 = (ulong)(byte)puVar7[(ulong)(uVar9 - 3) & 0xff] << 2 | 0x400;
      bVar6 = *puVar8;
      *(short *)((long)plVar21 + uVar23 + 0xd8) = *(short *)((long)plVar21 + uVar23 + 0xd8) + 1;
      *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0x9c8) =
           *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0x9c8) + 1;
      *(int *)((long)plVar21 + 0xb4) = *(int *)((long)plVar21 + 0xb4) - (int)plVar21[0x14];
      uVar9 = *(int *)((long)plVar21 + 0xac) + (int)plVar21[0x14];
      *(uint *)((long)plVar21 + 0xac) = uVar9;
      *(undefined4 *)(plVar21 + 0x14) = 0;
      if (*(int *)((long)plVar21 + 0x170c) != (int)plVar21[0x2e1] + -1) goto LAB_00217c84;
      while( true ) {
        uVar23 = plVar21[0x13];
        if ((long)uVar23 < 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = plVar21[0xc] + (uVar23 & 0xffffffff);
        }
        FUN_0021a0a0(plVar21,lVar22,uVar9 - uVar23,0);
        plVar21[0x13] = (ulong)*(uint *)((long)plVar21 + 0xac);
        lVar14 = *plVar21;
        lVar22 = *(long *)(lVar14 + 0x38);
        FUN_00219ea0(lVar22);
        uVar9 = *(uint *)(lVar14 + 0x20);
        if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
          uVar9 = *(uint *)(lVar22 + 0x28);
        }
        if (uVar9 != 0) {
          uVar23 = (ulong)uVar9;
          memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
          *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar23;
          *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
          *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar23;
          *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar9;
          lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
          *(long *)(lVar22 + 0x28) = lVar14;
          if (lVar14 == 0) {
            *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
          }
        }
        if (*(int *)(*plVar21 + 0x20) == 0) break;
LAB_00217c84:
        do {
          uVar9 = *(uint *)((long)plVar21 + 0xb4);
          if (0x102 < uVar9) goto LAB_00217cc0;
LAB_00217c90:
          FUN_00216880(plVar21);
          uVar9 = *(uint *)((long)plVar21 + 0xb4);
          if ((param_2 == 0) && (uVar9 < 0x103)) goto LAB_00218418;
          if (uVar9 == 0) {
            *(undefined4 *)((long)plVar21 + 0x172c) = 0;
            if (param_2 == 4) {
              uVar23 = plVar21[0x13];
              goto joined_r0x00218274;
            }
            if (*(int *)((long)plVar21 + 0x170c) == 0) goto LAB_00217c24;
            uVar23 = plVar21[0x13];
            goto joined_r0x0021834c;
          }
          *(undefined4 *)(plVar21 + 0x14) = 0;
          if (2 < uVar9) goto LAB_00217cc4;
          uVar23 = (ulong)*(uint *)((long)plVar21 + 0xac);
LAB_00217e60:
          bVar6 = *(byte *)(plVar21[0xc] + uVar23);
          *(undefined2 *)(plVar21[0x2e2] + (ulong)*(uint *)((long)plVar21 + 0x170c) * 2) = 0;
          uVar9 = *(uint *)((long)plVar21 + 0x170c);
          *(uint *)((long)plVar21 + 0x170c) = uVar9 + 1;
          *(byte *)(plVar21[0x2e0] + (ulong)uVar9) = bVar6;
          *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xd4) =
               *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xd4) + 1;
          *(int *)((long)plVar21 + 0xb4) = *(int *)((long)plVar21 + 0xb4) + -1;
          uVar9 = *(int *)((long)plVar21 + 0xac) + 1;
          *(uint *)((long)plVar21 + 0xac) = uVar9;
        } while (*(int *)((long)plVar21 + 0x170c) != (int)plVar21[0x2e1] + -1);
      }
    }
LAB_00218418:
    if ((int)param_1[4] == 0) {
LAB_00218428:
      *(undefined4 *)((long)plVar21 + 0x4c) = 0xffffffff;
      return 0;
    }
  }
  return 0;
code_r0x00217b3c:
  uVar23 = plVar21[0x13];
  if ((long)uVar23 < 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = plVar21[0xc] + (uVar23 & 0xffffffff);
  }
  FUN_0021a0a0(plVar21,lVar22,uVar9 - uVar23,0);
  plVar21[0x13] = (ulong)*(uint *)((long)plVar21 + 0xac);
  lVar14 = *plVar21;
  lVar22 = *(long *)(lVar14 + 0x38);
  FUN_00219ea0(lVar22);
  uVar9 = *(uint *)(lVar14 + 0x20);
  if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
    uVar9 = *(uint *)(lVar22 + 0x28);
  }
  if (uVar9 != 0) {
    uVar23 = (ulong)uVar9;
    memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
    *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar23;
    *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
    *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar23;
    *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar9;
    lVar14 = *(long *)(lVar22 + 0x28) - uVar23;
    *(long *)(lVar22 + 0x28) = lVar14;
    if (lVar14 == 0) {
      *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
    }
  }
  if (*(int *)(*plVar21 + 0x20) == 0) goto LAB_00218418;
  goto LAB_00217ab8;
}


