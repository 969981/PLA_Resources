/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef013c; name: FUN_02ef013c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02ef013c(long param_1,long *param_2,long param_3,long param_4,long *param_5,long *param_6)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  float *pfVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  ulong *puVar27;
  undefined4 *puVar28;
  long lVar29;
  float *__s;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float afStack_c0 [2];
  ulong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float *local_90;
  undefined8 local_88;
  long *local_80;
  long local_78;
  
  uVar8 = *(ushort *)(param_1 + 0x38);
  uVar35 = (ulong)uVar8;
  uVar9 = *(int *)(param_3 + 0x10) * (uint)uVar8;
  uVar34 = *(uint *)(param_2 + 1);
  uVar32 = (ulong)uVar34;
  uVar20 = uVar34 + uVar9;
  if (!CARRY4(uVar34,uVar9)) {
    if (*(uint *)((long)param_2 + 0xc) < uVar20) {
      uVar9 = *(uint *)((long)param_2 + 0xc) + uVar9;
      lVar17 = (*DAT_0442d148)(0,*param_2,(ulong)uVar9 * 0x68);
      if (lVar17 == 0) {
        return;
      }
      *param_2 = lVar17;
      *(uint *)((long)param_2 + 0xc) = uVar9;
    }
    if (uVar34 < uVar20) {
      if (*param_2 + uVar32 * 0x68 != 0) {
        lVar17 = *param_2 + uVar32 * 0x68;
        *(undefined8 *)(lVar17 + 0x2c) = 0x3f80000000000000;
        *(undefined8 *)(lVar17 + 0x24) = 0;
        *(undefined8 *)(lVar17 + 0x3c) = 0;
        *(undefined8 *)(lVar17 + 0x44) = 0;
        *(undefined4 *)(lVar17 + 0x4c) = 0xffffffff;
        *(undefined8 *)(lVar17 + 0x50) = 0;
        *(undefined8 *)(lVar17 + 0x58) = 0x3f8000003f800000;
        *(undefined8 *)(lVar17 + 0x34) = 0x3f8000003f800000;
        *(undefined8 *)(lVar17 + 0x60) = 0;
      }
      if (uVar32 + 1 != (ulong)uVar20) {
        lVar33 = ~uVar32 + (ulong)uVar20;
        lVar17 = uVar32 * 0x68 + 0xcc;
        do {
          lVar29 = *param_2 + lVar17;
          if (lVar29 != 100) {
            *(undefined8 *)(lVar29 + -0x40) = 0;
            *(undefined8 *)(lVar29 + -0x38) = 0x3f80000000000000;
            *(undefined8 *)(lVar29 + -0x20) = 0;
            *(undefined4 *)(lVar29 + -0x18) = 0xffffffff;
            *(undefined8 *)(lVar29 + -0x14) = 0;
            *(undefined8 *)(lVar29 + -0xc) = 0x3f8000003f800000;
            *(undefined8 *)(lVar29 + -4) = 0;
            *(undefined8 *)(lVar29 + -0x30) = 0x3f8000003f800000;
            *(undefined8 *)(lVar29 + -0x28) = 0;
          }
          lVar33 = lVar33 + -1;
          lVar17 = lVar17 + 0x68;
        } while (lVar33 != 0);
      }
    }
  }
  uVar10 = (ulong)uVar8;
  *(uint *)(param_2 + 1) = uVar20;
  lVar17 = uVar10 * -0x10;
  __s = afStack_c0 + uVar10 * -4;
  if (*(int *)(param_3 + 0x10) == 0) {
    return;
  }
  puVar25 = *(undefined8 **)(param_1 + 0x20);
  local_98 = uVar35 - 3;
  local_a0 = (undefined4 *)((long)&local_88 + uVar10 * -0x10 + 4);
  local_a8 = (undefined4 *)((long)puVar25 + 0x9c);
  local_90 = afStack_c0 + uVar10 * -4 + 2;
  fVar37 = 1e+10;
  puVar27 = *(ulong **)(param_3 + 8);
  local_78 = uVar35 * 0x68;
  puVar30 = (undefined8 *)(*param_2 + uVar32 * 0x68);
LAB_02ef0230:
  uVar20 = *(uint *)(DAT_0440a140 + 0x38);
  puVar31 = puVar30;
  if (uVar20 != 0) {
    uVar9 = 0;
    uVar34 = (uint)*puVar27;
    if (uVar20 != 0) {
      uVar9 = uVar34 / uVar20;
    }
    for (plVar16 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar34 - uVar9 * uVar20) * 8)
        ; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      if (plVar16[1] == *puVar27) {
        if ((2 < *(uint *)(plVar16[2] + 0x40)) &&
           (lVar33 = *(long *)(*(long *)(plVar16[2] + 0x38) + 0x10), lVar33 != 0)) {
          plVar16 = *(long **)(param_1 + 0x28);
          uVar20 = *(uint *)(param_1 + 0x30);
          if ((uVar20 != 0) &&
             (lVar29 = *(long *)(*(long *)(lVar33 + 8) + 0x48), *plVar16 != lVar29)) {
            lVar21 = (ulong)uVar20 * 0x18;
            plVar23 = plVar16;
            goto LAB_02ef0850;
          }
          plVar13 = plVar16;
          goto LAB_02ef0298;
        }
        break;
      }
    }
  }
  goto LAB_02ef05f8;
  while (plVar13 = plVar23 + 3, plVar1 = plVar23 + 3, plVar23 = plVar13, *plVar1 != lVar29) {
LAB_02ef0850:
    lVar21 = lVar21 + -0x18;
    if (lVar21 == 0) goto LAB_02ef02a8;
  }
LAB_02ef0298:
  if ((plVar13 == plVar16 + (ulong)uVar20 * 3) || (uVar20 = *(uint *)(plVar13 + 2), uVar20 == 0)) {
LAB_02ef02a8:
    if (uVar8 != 0) {
      memset(__s,0,uVar35 << 4);
    }
  }
  else {
    uVar34 = (uint)uVar8;
    uVar9 = uVar34;
    if (uVar20 <= uVar34) {
      uVar9 = uVar20;
    }
    if (uVar9 != 0) {
      uVar24 = (ulong)uVar9;
      uVar32 = uVar24 & 3;
      if (uVar24 - 1 < 3) {
        lVar21 = 0;
      }
      else {
        lVar29 = 0;
        lVar21 = 0;
        do {
          puVar5 = (undefined8 *)((long)__s + lVar29);
          uVar15 = ((undefined8 *)(plVar13[1] + lVar29))[1];
          lVar21 = lVar21 + 4;
          *puVar5 = *(undefined8 *)(plVar13[1] + lVar29);
          puVar5[1] = uVar15;
          uVar15 = *(undefined8 *)(plVar13[1] + lVar29 + 0x18);
          puVar5[2] = *(undefined8 *)(plVar13[1] + lVar29 + 0x10);
          puVar5[3] = uVar15;
          uVar15 = *(undefined8 *)(plVar13[1] + lVar29 + 0x28);
          puVar5[4] = *(undefined8 *)(plVar13[1] + lVar29 + 0x20);
          puVar5[5] = uVar15;
          lVar3 = plVar13[1] + lVar29;
          lVar29 = lVar29 + 0x40;
          uVar15 = *(undefined8 *)(lVar3 + 0x38);
          puVar5[6] = *(undefined8 *)(lVar3 + 0x30);
          puVar5[7] = uVar15;
        } while (uVar24 - uVar32 != lVar21);
      }
      if ((uVar9 & 3) != 0) {
        lVar21 = lVar21 << 4;
        do {
          puVar5 = (undefined8 *)(plVar13[1] + lVar21);
          puVar4 = (undefined8 *)((long)__s + lVar21);
          uVar15 = puVar5[1];
          uVar32 = uVar32 - 1;
          lVar21 = lVar21 + 0x10;
          *puVar4 = *puVar5;
          puVar4[1] = uVar15;
        } while (uVar32 != 0);
      }
    }
    if (uVar20 < uVar34) {
      uVar32 = (ulong)uVar9;
      pfVar18 = __s + (ulong)uVar9 * 4;
      do {
        puVar5 = (undefined8 *)(plVar13[1] + (ulong)(uVar9 - 1) * 0x10);
        uVar32 = uVar32 + 1;
        uVar15 = puVar5[1];
        *(undefined8 *)pfVar18 = *puVar5;
        *(undefined8 *)(pfVar18 + 2) = uVar15;
        pfVar18 = pfVar18 + 4;
      } while (uVar32 < uVar35);
    }
  }
  lVar21 = param_4;
  lVar29 = DAT_0440a410;
  if (*(char *)(param_4 + 0xb8) == '\0') {
    while( true ) {
      if (lVar29 == 0) {
        FUN_02e43d1c();
        cVar7 = *(char *)(DAT_0440a410 + 0xb8);
        lVar21 = DAT_0440a410;
      }
      else {
        cVar7 = *(char *)(lVar29 + 0xb8);
        lVar21 = lVar29;
      }
      if (cVar7 != '\0') break;
      lVar29 = lVar21;
    }
  }
  uVar20 = *(uint *)(lVar21 + 0x58);
  if (uVar20 != 0) {
    uVar32 = *puVar27;
    iVar12 = 0;
    do {
      iVar2 = iVar12 + (uVar20 >> 1);
      uVar24 = *(ulong *)(*(long *)(lVar21 + 0x50) + (long)iVar2 * 8);
      if (uVar24 == uVar32) {
        bVar11 = *(long *)(lVar21 + 0x50) + (long)iVar2 * 8 != 0;
        goto joined_r0x02ef05e4;
      }
      if (uVar24 < uVar32) {
        iVar12 = iVar2 + 1;
      }
      uVar20 = uVar20 - (uVar24 < uVar32) >> 1;
    } while (uVar20 != 0);
  }
  bVar11 = false;
joined_r0x02ef05e4:
  if (uVar8 != 0) {
    local_80 = param_6;
    if (bVar11) {
      lVar29 = 0;
      pfVar18 = local_90;
      local_b8 = puVar27;
      uStack_b0 = puVar25;
      local_88 = param_5;
      do {
        puVar31 = (undefined8 *)((long)puVar30 + lVar29);
        uVar6 = *(undefined4 *)((long)puVar25 + 0x24);
        uVar15 = puVar25[1];
        uVar19 = puVar25[2];
        uVar22 = puVar25[3];
        uVar14 = *(undefined8 *)(*(long *)(lVar33 + 8) + 0x48);
        *(undefined4 *)(puVar31 + 4) = *(undefined4 *)(puVar25 + 4);
        puVar31[1] = uVar15;
        puVar31[2] = uVar19;
        puVar31[3] = uVar22;
        *puVar31 = *puVar25;
        *(float *)(puVar31 + 8) = pfVar18[-1] * 100.0;
        *(float *)((long)puVar31 + 0x3c) = pfVar18[-2] * 100.0;
        *(float *)((long)puVar31 + 0x44) = *pfVar18;
        *(float *)(puVar31 + 9) = pfVar18[1];
        *(undefined4 *)((long)puVar31 + 0x4c) = uVar6;
        puVar31[10] = uVar14;
        fVar36 = (float)FUN_02e743d8(*(undefined4 *)(param_1 + 0x50),lVar33,puVar31);
        if (fVar36 < fVar37) {
          *local_88 = (long)puVar31;
          *local_80 = lVar33;
          fVar37 = fVar36;
        }
        lVar29 = lVar29 + 0x68;
        pfVar18 = pfVar18 + 4;
        puVar25 = puVar25 + 5;
      } while (local_78 != lVar29);
      puVar31 = (undefined8 *)((long)puVar30 + lVar29);
      puVar25 = uStack_b0;
      puVar27 = local_b8;
      param_5 = local_88;
      param_6 = local_80;
    }
    else {
      uVar6 = *(undefined4 *)((long)puVar25 + 0x24);
      uVar15 = puVar25[1];
      uVar19 = puVar25[2];
      uVar22 = puVar25[3];
      uVar14 = *(undefined8 *)(*(long *)(lVar33 + 8) + 0x48);
      *(undefined4 *)(puVar30 + 4) = *(undefined4 *)(puVar25 + 4);
      puVar30[2] = uVar19;
      puVar30[3] = uVar22;
      puVar30[1] = uVar15;
      *puVar30 = *puVar25;
      *(float *)(puVar30 + 8) = afStack_c0[uVar10 * -4 + 1] * 100.0;
      *(float *)((long)puVar30 + 0x3c) = *__s * 100.0;
      *(float *)((long)puVar30 + 0x44) = afStack_c0[uVar10 * -4 + 2];
      *(float *)(puVar30 + 9) = afStack_c0[uVar10 * -4 + 3];
      *(undefined4 *)((long)puVar30 + 0x4c) = uVar6;
      puVar30[10] = uVar14;
      FUN_02e743d8(*(undefined4 *)(param_1 + 0x50),lVar33,puVar30);
      puVar31 = puVar30 + 0xd;
      param_6 = local_80;
      if (uVar8 != 1) {
        uVar22 = puVar25[8];
        uVar6 = *(undefined4 *)((long)puVar25 + 0x4c);
        uVar15 = puVar25[6];
        uVar19 = puVar25[7];
        uVar14 = *(undefined8 *)(*(long *)(lVar33 + 8) + 0x48);
        *(undefined4 *)(puVar30 + 0x11) = *(undefined4 *)(puVar25 + 9);
        puVar30[0xf] = uVar19;
        puVar30[0x10] = uVar22;
        puVar30[0xe] = uVar15;
        *puVar31 = puVar25[5];
        *(float *)(puVar30 + 0x15) = *(float *)((long)&uStack_b0 + lVar17 + 4) * 100.0;
        *(float *)((long)puVar30 + 0xa4) = *(float *)(&uStack_b0 + uVar10 * -2) * 100.0;
        *(undefined4 *)((long)puVar30 + 0xac) = *(undefined4 *)(&local_a8 + uVar10 * -2);
        *(undefined4 *)(puVar30 + 0x16) = *(undefined4 *)((long)&local_a8 + lVar17 + 4);
        *(undefined4 *)((long)puVar30 + 0xb4) = uVar6;
        puVar30[0x17] = uVar14;
        FUN_02e743d8(*(undefined4 *)(param_1 + 0x50),lVar33);
        puVar31 = puVar30 + 0x1a;
        param_6 = local_80;
        if (uVar8 != 2) {
          uVar22 = puVar25[0xd];
          uVar6 = *(undefined4 *)((long)puVar25 + 0x74);
          uVar15 = puVar25[0xb];
          uVar19 = puVar25[0xc];
          uVar14 = *(undefined8 *)(*(long *)(lVar33 + 8) + 0x48);
          *(undefined4 *)(puVar30 + 0x1e) = *(undefined4 *)(puVar25 + 0xe);
          puVar30[0x1c] = uVar19;
          puVar30[0x1d] = uVar22;
          puVar30[0x1b] = uVar15;
          *puVar31 = puVar25[10];
          *(float *)(puVar30 + 0x22) = *(float *)((long)&local_a0 + lVar17 + 4) * 100.0;
          *(float *)((long)puVar30 + 0x10c) = *(float *)(&local_a0 + uVar10 * -2) * 100.0;
          *(undefined4 *)((long)puVar30 + 0x114) = *(undefined4 *)(&local_98 + uVar10 * -2);
          *(undefined4 *)(puVar30 + 0x23) = *(undefined4 *)((long)&local_98 + lVar17 + 4);
          *(undefined4 *)((long)puVar30 + 0x11c) = uVar6;
          puVar30[0x24] = uVar14;
          FUN_02e743d8(*(undefined4 *)(param_1 + 0x50),lVar33);
          puVar31 = puVar30 + 0x27;
          param_6 = local_80;
          if (uVar8 != 3) {
            puVar26 = local_a8;
            puVar28 = local_a0;
            lVar29 = local_98;
            local_b8 = puVar27;
            uStack_b0 = puVar25;
            local_88 = param_5;
            do {
              uVar6 = *puVar26;
              uVar19 = *(undefined8 *)(puVar26 + -5);
              uVar14 = *(undefined8 *)(puVar26 + -3);
              uVar22 = *(undefined8 *)(puVar26 + -7);
              uVar15 = *(undefined8 *)(*(long *)(lVar33 + 8) + 0x48);
              *(undefined4 *)(puVar31 + 4) = puVar26[-1];
              puVar31[2] = uVar19;
              puVar31[3] = uVar14;
              puVar31[1] = uVar22;
              *puVar31 = *(undefined8 *)(puVar26 + -9);
              *(float *)(puVar31 + 8) = (float)puVar28[-2] * 100.0;
              *(float *)((long)puVar31 + 0x3c) = (float)puVar28[-3] * 100.0;
              *(undefined4 *)((long)puVar31 + 0x44) = puVar28[-1];
              *(undefined4 *)(puVar31 + 9) = *puVar28;
              *(undefined4 *)((long)puVar31 + 0x4c) = uVar6;
              puVar31[10] = uVar15;
              FUN_02e743d8(*(undefined4 *)(param_1 + 0x50),lVar33,puVar31);
              puVar31 = puVar31 + 0xd;
              lVar29 = lVar29 + -1;
              puVar26 = puVar26 + 10;
              puVar25 = uStack_b0;
              puVar28 = puVar28 + 4;
              puVar27 = local_b8;
              param_5 = local_88;
              param_6 = local_80;
            } while (lVar29 != 0);
          }
        }
      }
    }
  }
LAB_02ef05f8:
  puVar27 = puVar27 + 1;
  puVar30 = puVar31;
  if (puVar27 == (ulong *)(*(long *)(param_3 + 8) + (ulong)*(uint *)(param_3 + 0x10) * 8)) {
    return;
  }
  goto LAB_02ef0230;
}


