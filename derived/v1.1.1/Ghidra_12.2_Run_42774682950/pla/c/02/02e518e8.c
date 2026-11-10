/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e518e8; name: FUN_02e518e8
 */


void FUN_02e518e8(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 auVar2 [8];
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 auStack_e0 [2];
  uint local_d0 [2];
  undefined8 uStack_c8;
  float afStack_c0 [2];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  float local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  float local_78 [2];
  undefined1 auStack_68 [4];
  uint local_64;
  
  lVar3 = *(long *)(param_3 + 8);
  if (*(uint *)(lVar3 + 0x40) < 8) {
    if (*(uint *)(lVar3 + 0x40) < 3) {
      uVar6 = 0;
      lVar3 = 0;
      goto LAB_02e51934;
    }
    lVar3 = *(long *)(lVar3 + 0x38);
    uVar6 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x38);
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
LAB_02e51934:
  uVar9 = *(undefined4 *)(lVar3 + 0x78);
  uVar8 = *(undefined4 *)(lVar3 + 0x7c);
  fVar23 = *(float *)(lVar3 + 0x80);
  local_90 = *(undefined4 *)(lVar3 + 0x6c);
  local_8c = *(undefined4 *)(lVar3 + 0x70);
  uStack_88 = *(undefined4 *)(lVar3 + 0x74);
  local_b8 = (undefined1  [8])param_2;
  local_b0 = param_3;
  local_a8[1] = (float)param_4;
  local_80 = uVar9;
  uStack_7c = uVar8;
  local_78[0] = fVar23;
  if (*(uint *)(param_1 + 6) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 6) << 3;
    plVar10 = (long *)param_1[5];
LAB_02e51970:
    lVar13 = *plVar10;
    if (*(long *)(lVar13 + 0x40) != *(long *)(param_3 + 0x98)) goto code_r0x02e51980;
    if (lVar13 == 0) goto LAB_02e51990;
    lVar3 = FUN_02e545e4(lVar13,param_1[8]);
    if ((lVar3 != 0) && (*(int *)(param_1 + 6) != 0)) {
      plVar10 = (long *)param_1[5];
      uVar16 = 1;
      do {
        lVar15 = *plVar10;
        if (((lVar15 != lVar13) && (*(char *)(lVar15 + 0x690) != '\0')) &&
           (uVar5 = FUN_02e546b0(lVar15,*(undefined8 *)(lVar3 + 0x40)), (uVar5 & 1) != 0)) {
          FUN_02e54d94(lVar15,param_1[8],uVar6,&local_80);
          uVar16 = (ulong)(uint)(*(int *)(lVar15 + 0xa0) + (int)uVar16);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != (long *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8));
      bVar1 = true;
      uVar9 = local_80;
      uVar8 = uStack_7c;
      fVar23 = local_78[0];
      goto LAB_02e51998;
    }
    bVar1 = true;
    goto LAB_02e51994;
  }
LAB_02e51988:
  lVar13 = 0;
LAB_02e51990:
  bVar1 = false;
  lVar3 = 0;
LAB_02e51994:
  uVar16 = 1;
LAB_02e51998:
  lVar15 = -(uVar16 * 0x28 + 0xf & 0x7ffffffff0);
  puVar17 = (undefined8 *)((long)afStack_c0 + lVar15);
  uVar5 = uVar16 * 4 + 0xf & 0x7fffffff0;
  pfVar18 = (float *)((long)puVar17 - uVar5);
  puVar7 = (undefined4 *)((long)pfVar18 - uVar5);
  puVar14 = (undefined8 *)((long)puVar7 - (uVar16 * 8 + 0xf & 0xffffffff0));
  *(float *)((long)local_a8 + lVar15 + 8) = fVar23;
  *(undefined4 *)((long)local_a8 + lVar15 + 0xc) = 0xffffffff;
  *(undefined4 *)((long)local_a8 + lVar15) = uVar9;
  *(undefined4 *)((long)local_a8 + lVar15 + 4) = uVar8;
  uVar6 = *param_1;
  *(undefined4 *)(local_b8 + lVar15) = *(undefined4 *)(param_1 + 1);
  *puVar17 = uVar6;
  lVar12 = local_b0;
  uVar9 = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined8 *)(local_b8 + lVar15 + 4) = *(undefined8 *)((long)param_1 + 0xc);
  *(undefined4 *)((long)local_a8 + lVar15 + -4) = uVar9;
  *puVar7 = 0;
  *puVar14 = 0;
  *pfVar18 = 100.0;
  fVar23 = *(float *)(lVar12 + 0xd8);
  uVar11 = 1;
  local_64 = 1;
  if (bVar1) {
    FUN_02e547ac(&local_a0,lVar13,param_1[8],&local_80,*(undefined8 *)(lVar12 + 0xa8));
    *(undefined8 *)((long)local_a8 + lVar15) = local_a0;
    *(undefined4 *)((long)local_a8 + lVar15 + 8) = local_98;
    fVar19 = (float)FUN_02e543f0(lVar13,&local_80,&local_90);
    if (*(long *)(lVar12 + 0xa8) == param_1[8]) {
      *pfVar18 = 100.0 - fVar19 * 15.915494;
    }
    else {
      *pfVar18 = fVar19 * 15.915494;
      fVar23 = 1.0 - fVar23;
      *(undefined4 *)((long)puVar14 + 4) = *(undefined4 *)(lVar13 + 0xb4);
      *(undefined4 *)puVar14 = *(undefined4 *)(lVar13 + 0xb8);
    }
    if ((lVar3 == 0) || (*(int *)(param_1 + 6) == 0)) {
      uVar11 = 1;
    }
    else {
      plVar10 = (long *)param_1[5];
      do {
        lVar12 = *plVar10;
        if ((lVar12 == lVar13) || (*(char *)(lVar12 + 0x690) == '\0')) {
LAB_02e51c58:
          if (*(long *)(lVar12 + 0x98) != 0) {
            *(undefined4 *)(lVar12 + 0xa0) = 0;
            (*DAT_0442d158)(9);
            *(undefined8 *)(lVar12 + 0x98) = 0;
            *(undefined4 *)(lVar12 + 0xa4) = 0;
          }
        }
        else {
          uVar16 = FUN_02e546b0(lVar12,*(undefined8 *)(lVar3 + 0x40));
          fVar19 = local_a8[1];
          if ((uVar16 & 1) == 0) goto LAB_02e51c58;
          puVar14[-4] = puVar14;
          puVar14[-3] = auStack_68;
          puVar14[-2] = &local_64;
          FUN_02e52380(param_1,lVar12,&local_80,&local_90,fVar19,puVar17,pfVar18,puVar7);
        }
        uVar11 = local_64;
        plVar10 = plVar10 + 1;
      } while (plVar10 != (long *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8));
      lVar12 = local_b0;
      if (1 < local_64) {
        fVar23 = 1.0 - fVar23;
        fVar21 = *(float *)((long)local_a8 + lVar15 + 8);
        fVar19 = *(float *)((long)local_a8 + lVar15);
        fVar20 = *(float *)((long)local_a8 + lVar15 + 4);
        lVar13 = (ulong)local_64 - 1;
        fVar23 = fVar23 * fVar23 * fVar23;
        fVar22 = 1.0 - fVar23;
        pfVar4 = (float *)((long)local_78 + lVar15);
        do {
          pfVar4[-2] = fVar19 * fVar22 + fVar23 * pfVar4[-2];
          pfVar4[-1] = fVar20 * fVar22 + fVar23 * pfVar4[-1];
          lVar13 = lVar13 + -1;
          *pfVar4 = fVar21 * fVar22 + fVar23 * *pfVar4;
          pfVar4 = pfVar4 + 10;
        } while (lVar13 != 0);
      }
    }
  }
  auVar2 = local_b8;
  uVar6 = *(undefined8 *)(*(long *)(lVar12 + 8) + 0x48);
  *(float *)(puVar14 + -1) = local_a8[1];
  *(uint *)(puVar14 + -2) = uVar11;
  FUN_02e52200(0,param_1,auVar2,uVar6,&local_80,puVar14,puVar17,pfVar18,puVar7);
  if ((((lVar3 != 0) && (uVar11 != 0)) && (*(long *)(lVar12 + 0xa8) != param_1[8])) &&
     (lVar13 = FUN_02e52664(auVar2), lVar13 != 0)) {
    lVar15 = -4;
    if (*(long *)(lVar3 + 0x40) != -1) {
      lVar15 = *(long *)(lVar3 + 0x40);
    }
    FUN_02ef1254(lVar13,lVar15,puVar14,uVar11);
  }
  return;
code_r0x02e51980:
  lVar3 = lVar3 + -8;
  plVar10 = plVar10 + 1;
  if (lVar3 == 0) goto LAB_02e51988;
  goto LAB_02e51970;
}


