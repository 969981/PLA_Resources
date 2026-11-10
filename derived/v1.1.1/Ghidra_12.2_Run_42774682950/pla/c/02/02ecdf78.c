/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecdf78; name: FUN_02ecdf78
 */


void FUN_02ecdf78(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ushort uVar16;
  long lVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 *local_a0;
  ulong local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  long local_68;
  
  if ((*(ushort *)(param_1 + 0x198) >> 6 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x180);
    do {
      plVar14 = *(long **)(lVar8 + 0x88);
      if (plVar14 != (long *)0x0) goto LAB_02ecdfc4;
      lVar8 = *(long *)(lVar8 + 0x80);
    } while (lVar8 != 0);
  }
  plVar14 = (long *)0x0;
LAB_02ecdfc4:
  if (((param_2 == (undefined8 *)0x0) || (plVar14 != *(long **)((long)param_2 + 0x1d0))) ||
     ((*(ushort *)(param_1 + 0x198) >> 6 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    *(undefined2 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(ushort *)(param_1 + 0x106) = *(ushort *)(param_1 + 0x106) & 0xfc00;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*(uint *)(param_1 + 0x1e0) != 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x1d8);
      puVar12 = puVar11 + uVar7 * 3;
      puVar18 = puVar11;
      do {
        uVar6 = (uint)uVar7;
        if ((*(byte *)(puVar18 + 1) >> 1 & 1) == 0) {
          if (1 < uVar6) {
            uVar1 = puVar12[-3];
            uVar13 = puVar12[-1];
            puVar18[1] = puVar12[-2];
            puVar18[2] = uVar13;
            *puVar18 = uVar1;
            uVar6 = *(uint *)(param_1 + 0x1e0);
            puVar11 = *(undefined8 **)(param_1 + 0x1d8);
          }
          uVar7 = (ulong)(uVar6 - 1);
          *(uint *)(param_1 + 0x1e0) = uVar6 - 1;
        }
        else {
          puVar18 = puVar18 + 3;
        }
        puVar12 = puVar11 + uVar7 * 3;
      } while (puVar12 != puVar18);
    }
    if (plVar14 != (long *)0x0) {
      local_1a0 = 0;
      local_190 = 0;
      local_198 = 0;
      local_188 = 0xff;
      local_180 = 0xff;
      local_178 = 0;
      FUN_02ea00d4(plVar14,(undefined8 *)(param_1 + 0x78),&local_1a0);
    }
    plVar15 = (long *)0x0;
    bVar4 = true;
  }
  else {
    plVar15 = *(long **)((long)param_2 + 0x1c8);
    bVar4 = plVar14 == (long *)0x0;
    memcpy((void *)(param_1 + 0x78),param_2,0x90);
    uVar1 = *(undefined8 *)((long)param_2 + 0xa0);
    uVar13 = *(undefined8 *)((long)param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)((long)param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0x1e8) = uVar1;
    *(undefined8 *)(param_1 + 0x1f0) = uVar13;
    uVar6 = *(uint *)((long)param_2 + 0x98);
    if (uVar6 != 0) {
      uVar7 = FUN_02eb51a4((long *)(param_1 + 0x1d8),uVar6);
      if ((uVar7 & 1) != 0) {
        lVar8 = 0;
        do {
          puVar18 = (undefined8 *)(*(long *)((long)param_2 + 0x90) + lVar8);
          uVar1 = *puVar18;
          uVar13 = puVar18[2];
          puVar11 = (undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar8);
          lVar8 = lVar8 + 0x18;
          puVar11[1] = puVar18[1];
          puVar11[2] = uVar13;
          *puVar11 = uVar1;
        } while ((ulong)uVar6 * 0x18 != lVar8);
      }
    }
  }
  uVar16 = *(ushort *)(param_1 + 0x198);
  if ((uVar16 >> 6 & 1) != 0) goto LAB_02ece21c;
  if ((plVar14 != (long *)0x0) &&
     ((lVar8 = plVar14[0xd], lVar8 == 0 ||
      (((*(int *)(lVar8 + 4) == 0 && (*(int *)(lVar8 + 0xc) == 0)) &&
       ((*(int *)(lVar8 + 0x14) == 0 && (*(int *)(lVar8 + 0x1c) == 0)))))))) {
    (**(code **)(*plVar14 + 0x88))(plVar14);
  }
  fVar19 = *(float *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = 0;
  lVar8 = param_1 + 0x28;
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + fVar19;
  lVar5 = *(long *)(param_1 + 0x178);
  lVar17 = *(long *)(param_1 + 0x180);
  lVar10 = *(long *)(lVar17 + 0x80);
  if ((lVar10 != 0) && ((*(uint *)(lVar17 + 0xa0) & 0x20000ffe) == 0)) {
    lVar17 = lVar10;
    if ((*(long *)(lVar10 + 0x80) != 0) &&
       (lVar3 = *(long *)(lVar10 + 0x80), (*(uint *)(lVar10 + 0xa0) & 0x20000ffe) == 0)) {
      do {
        lVar17 = lVar3;
        lVar3 = *(long *)(lVar17 + 0x80);
      } while (*(long *)(lVar17 + 0x80) != 0 && (*(uint *)(lVar17 + 0xa0) & 0x20000ffe) == 0);
    }
  }
  FUN_02eda768(lVar17,lVar8,param_1 + 0x118);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x238);
  }
  else {
    FUN_02edaa98(lVar17,lVar8,lVar5 + 4);
    lVar5 = *(long *)(param_1 + 0x238);
  }
  if (lVar5 != 0) {
    FUN_02f2d5fc();
  }
  *(undefined4 *)(param_1 + 0x128) = 0x42ca0000;
  *(undefined8 *)(param_1 + 0xf8) = 0x20000005d;
  uVar16 = *(ushort *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((uVar16 >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    param_2 = (undefined8 *)((long)param_2 + 0xb8);
  }
  local_a0 = (undefined1 *)0x0;
  local_98 = 0;
  if ((uVar16 >> 2 & 1) != 0) {
    param_2 = &local_1a0;
  }
  plVar14 = *(long **)(param_1 + 0x180);
  if (plVar15 != plVar14) {
    *(ushort *)(param_1 + 0x106) = *(ushort *)(param_1 + 0x106) & 0xfd21;
    if ((uVar16 >> 1 & 1) == 0) {
      lVar5 = param_1 + 0x1e8;
    }
    else {
      lVar5 = 0;
    }
    (**(code **)(*plVar14 + 0x158))
              (plVar14,param_1 + 0x78,param_1 + 0x1d8,lVar8,lVar5,param_2,bVar4,plVar15);
  }
  *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x1e8);
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x1f0);
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 500);
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x1f8);
  if (*(uint *)(param_1 + 0x1e0) == 0) {
    fVar19 = 1.0;
  }
  else {
    fVar19 = 1.0;
    lVar5 = (ulong)*(uint *)(param_1 + 0x1e0) * 0x18;
    pfVar9 = (float *)(*(long *)(param_1 + 0x1d8) + 0x10);
    do {
      fVar19 = *pfVar9 * fVar19;
      lVar5 = lVar5 + -0x18;
      pfVar9 = pfVar9 + 6;
    } while (lVar5 != 0);
  }
  fVar20 = *(float *)(param_1 + 0x250) * fVar19 * *(float *)(param_1 + 0x254);
  *(ushort *)(param_1 + 0x198) = *(ushort *)(param_1 + 0x198) & 0xffef;
  fVar19 = fVar20;
  if (fVar20 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar19;
  fVar19 = (float)FUN_02ed6dc0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x28));
  if ((fVar19 == *(float *)(param_1 + 0x2b4)) && (fVar20 == *(float *)(param_1 + 0x2b8))) {
LAB_02ece20c:
    uVar16 = *(ushort *)(param_1 + 0x198);
  }
  else {
    *(float *)(param_1 + 0x2b4) = fVar19;
    *(float *)(param_1 + 0x2b8) = fVar20;
    fVar20 = 0.0;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)NEON_fminnm(fVar20,0x42c80000);
    if (*(float *)(param_1 + 0x2a8) == fVar19) goto LAB_02ece20c;
    if (*(int *)(param_1 + 0x2f0) != 0) {
      uVar7 = (ulong)(uint)fVar19;
      puVar18 = *(undefined8 **)(param_1 + 0x2e8);
      if (((uint)fVar19 & 0x7f800000) == 0x7f800000) {
        uVar7 = 0x42480000;
      }
      local_90 = param_1;
      FUN_02ed3b60(*puVar18,*(undefined8 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2b0),
                   uVar7 | (ulong)*(uint *)(param_1 + 0x2ac) << 0x20,
                   *(undefined4 *)(param_1 + 0x2b0),&local_90);
      if (puVar18 + 1 !=
          (undefined8 *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8)) {
        local_90 = param_1;
        FUN_02ed3b60(puVar18[1],*(undefined8 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2b0),
                     uVar7 | (ulong)*(uint *)(param_1 + 0x2ac) << 0x20,
                     *(undefined4 *)(param_1 + 0x2b0),&local_90);
        if (puVar18 + 2 !=
            (undefined8 *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8)) {
          local_90 = param_1;
          FUN_02ed3b60(puVar18[2],*(undefined8 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2b0),
                       uVar7 | (ulong)*(uint *)(param_1 + 0x2ac) << 0x20,
                       *(undefined4 *)(param_1 + 0x2b0),&local_90);
          for (puVar18 = puVar18 + 3;
              puVar18 !=
              (undefined8 *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8);
              puVar18 = puVar18 + 1) {
            local_90 = param_1;
            FUN_02ed3b60(*puVar18,*(undefined8 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2b0),
                         uVar7 | (ulong)*(uint *)(param_1 + 0x2ac) << 0x20,
                         *(undefined4 *)(param_1 + 0x2b0),&local_90);
          }
        }
      }
    }
    if (((uint)fVar19 & 0x7f800000) == 0x7f800000) goto LAB_02ece20c;
    *(float *)(param_1 + 0x2a8) = fVar19;
    uVar16 = *(ushort *)(param_1 + 0x198);
  }
  if ((uVar16 >> 2 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      iVar2 = *(int *)((long)param_2 + 0x108);
    }
    else {
      FUN_02ec6df4();
      iVar2 = *(int *)((long)param_2 + 0x108);
    }
    if (iVar2 != 0) {
      local_88 = *(undefined4 *)(param_1 + 0x2d4);
      local_80 = *(undefined8 *)(param_1 + 0x2d8);
      local_78 = *(undefined4 *)(param_1 + 0x38);
      local_90 = *(long *)(param_1 + 0x28);
      local_70 = *(undefined4 *)(param_1 + 0x2c0);
      local_74 = *(undefined4 *)(param_1 + 0x210);
      local_6c = 1;
      if ((uVar16 & 2) != 0) {
        local_6c = 2;
      }
      local_6c = local_6c & *(int *)(param_1 + 0x2a3) >> 0x1f;
      local_68 = param_1;
      FUN_02ec5034(DAT_0440a180,param_2,&local_90,param_1 + 0x68);
    }
    FUN_02edac28(*(undefined8 *)(param_1 + 0x180),lVar8,param_1 + 0x118,param_1 + 0x138);
    uVar16 = *(ushort *)(param_1 + 0x198) & 0xfffb;
    *(ushort *)(param_1 + 0x198) = uVar16;
  }
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_98 & 0xffffffff00000000;
    if (&local_1a0 != (undefined8 *)local_a0) {
      (*DAT_0442d158)(0);
      uVar16 = *(ushort *)(param_1 + 0x198);
    }
    local_a0 = (undefined1 *)0x0;
    local_98 = local_98 & 0xffffffff;
  }
LAB_02ece21c:
  *(ushort *)(param_1 + 0x198) = uVar16 | 3;
  if ((((*(long *)(param_1 + 0x188) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x188) + 8), lVar8 != 0)) &&
      (lVar8 = *(long *)(lVar8 + 0x10), 5 < *(uint *)(lVar8 + 0x40))) &&
     (*(long *)(*(long *)(lVar8 + 0x38) + 0x28) != 0)) {
    FUN_02ef6fc0();
  }
  return;
}


