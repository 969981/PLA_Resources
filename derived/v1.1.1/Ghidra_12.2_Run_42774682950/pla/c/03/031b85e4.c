/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b85e4; name: FUN_031b85e4
 */


/* WARNING: Removing unreachable block (ram,0x031b8e50) */

bool FUN_031b85e4(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  long *plVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 (*pauVar22) [16];
  long lVar23;
  ulong uVar24;
  uint uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar30;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar65;
  undefined8 uVar58;
  undefined1 auVar60 [16];
  float fVar57;
  float fVar64;
  undefined1 auVar61 [16];
  ulong uVar59;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar66;
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 auVar67 [16];
  undefined8 uVar71;
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar79;
  undefined1 auVar76 [16];
  float fVar80;
  float fVar81;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  undefined1 auVar87 [16];
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined8 uVar92;
  uint local_264;
  ulong local_230;
  undefined8 local_1e0;
  uint local_1a8 [2];
  long local_1a0;
  ulong uStack_198;
  long local_190;
  long lStack_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_118 [2];
  undefined4 *local_110;
  undefined4 *puStack_108;
  uint local_100 [2];
  uint local_f8 [2];
  undefined4 *local_f0;
  undefined4 *puStack_e8;
  long local_e0;
  long lStack_d8;
  uint local_c8 [2];
  undefined1 (*local_c0) [16];
  undefined8 local_b8;
  undefined1 (*local_b0) [16];
  int local_a8;
  ulong local_88;
  
  uVar1 = *(uint *)(param_1[1] + 8);
  lVar11 = tpidr_el0;
  iVar66 = uVar1 * 2;
  iVar2 = (iVar66 + 2) * 0x10;
  if (iVar66 + 2 == 0) {
    plVar9 = (long *)0x0;
    plVar10 = (long *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar11 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar8 = *(long *)(lVar15 + 8);
    uVar20 = (ulong)(int)(iVar2 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar8 + 0x10) < uVar20) {
LAB_031b87e8:
      plVar9 = (long *)FUN_032ce670(lVar8,uVar20);
      lVar15 = *(long *)(lVar11 + 0x38d490);
    }
    else {
      plVar9 = *(long **)(lVar8 + 0x18);
      if (*(ulong *)(lVar8 + 0x20) < (long)plVar9 + uVar20) goto LAB_031b87e8;
      *(ulong *)(lVar8 + 0x18) = (long)plVar9 + uVar20;
    }
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar15 = *(long *)(lVar15 + 8);
    if (uVar20 <= *(ulong *)(lVar15 + 0x10)) {
      plVar10 = *(long **)(lVar15 + 0x18);
      if ((long)plVar10 + uVar20 <= *(ulong *)(lVar15 + 0x20)) {
        *(ulong *)(lVar15 + 0x18) = (long)plVar10 + uVar20;
        goto LAB_031b86a8;
      }
    }
    plVar10 = (long *)FUN_032ce670(lVar15,uVar20);
  }
LAB_031b86a8:
  local_c0 = (undefined1 (*) [16])0x0;
  local_b8 = 0x8000000000000000;
  local_a8 = iVar66;
  if (uVar1 == 0) {
    pauVar12 = (undefined1 (*) [16])0x0;
  }
  else {
    lVar15 = *(long *)(lVar11 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar15 = *(long *)(lVar15 + 8);
    uVar20 = (long)(int)uVar1 * 0x60 + 0x7fU & 0xffffffffffffff80;
    if (uVar20 <= *(ulong *)(lVar15 + 0x10)) {
      pauVar12 = *(undefined1 (**) [16])(lVar15 + 0x18);
      if (*pauVar12 + uVar20 <= *(undefined1 **)(lVar15 + 0x20)) {
        *(undefined1 **)(lVar15 + 0x18) = *pauVar12 + uVar20;
        goto LAB_031b8708;
      }
    }
    pauVar12 = (undefined1 (*) [16])FUN_032ce670();
  }
LAB_031b8708:
  local_b8 = CONCAT44(iVar66,(uint)local_b8) | 0x8000000000000000;
  local_c0 = pauVar12;
  local_b0 = pauVar12;
  if (param_2 == 0) {
    plVar10[1] = param_1[7];
    *plVar10 = param_1[6];
  }
  else {
    local_c8[0] = *(uint *)(param_1 + 8) & 0x3fffff;
    FUN_031934ec(*(undefined8 *)
                  (*(long *)(*param_1 + 0x38) + (ulong)(*(uint *)(param_1 + 8) >> 0x16) * 0xf0),
                 local_c8,plVar10);
  }
  puVar4 = PTR_PTR_0434a080;
  uVar14 = 0;
  if ((int)uVar1 < 1) {
    iVar66 = 1;
    local_264 = 0xffffffff;
  }
  else {
    uVar20 = 0;
    uVar24 = 1;
    local_264 = 0xffffffff;
    uVar19 = uVar14;
    do {
      uVar6 = *(uint *)(*(long *)param_1[1] + uVar20 * 4);
      lVar8 = *(long *)(*(long *)(*param_1 + 0x38) + (ulong)(uVar6 >> 0x16) * 0xf0);
      local_f8[0] = uVar6 & 0x3fffff;
      local_f0 = (undefined4 *)0x0;
      puStack_e8 = (undefined4 *)0x0;
      lVar15 = FUN_031b9d98(lVar8,local_f8,&local_1a0,&local_e0,&local_f0);
      uVar25 = *(uint *)(lVar15 + 8);
      if ((*(byte *)(lVar15 + 0x10) >> 6 & 1) == 0) {
        bVar5 = uVar25 != 0xffffffff;
        iVar66 = *(int *)(*(long *)(lVar8 + 0x20) + 0x17c);
        uVar14 = uVar25 & 0x3fffff;
        uVar25 = 0xffffffff;
        if (bVar5) {
          uVar25 = uVar14 | iVar66 << 0x16;
        }
        uVar14 = 0xffffffff;
        if (*(uint *)(lVar15 + 0xc) != 0xffffffff) {
          uVar14 = *(uint *)(lVar15 + 0xc) & 0x3fffff | iVar66 << 0x16;
        }
      }
      else {
        uVar14 = *(uint *)(lVar15 + 0xc);
      }
      iVar66 = (int)uVar24;
      if (param_2 == 0) {
        (plVar10 + (long)iVar66 * 2)[1] = param_1[7];
        plVar10[(long)iVar66 * 2] = param_1[6];
      }
      else {
        local_100[0] = uVar14 & 0x3fffff;
        FUN_031934ec(*(undefined8 *)(*(long *)(*param_1 + 0x38) + (ulong)(uVar14 >> 0x16) * 0xf0),
                     local_100);
      }
      uVar14 = uVar19 + 1;
      uVar7 = uVar19;
      if ((int)(local_b8._4_4_ & 0x3fffffff) <= (int)uVar19) {
        pauVar12 = (undefined1 (*) [16])
                   FUN_031b9fd8(puVar4,uVar14,pauVar12,uVar19,(long)&local_b8 + 4);
        uVar7 = (uint)local_b8;
        local_c0 = pauVar12;
      }
      pauVar22 = pauVar12 + (long)(int)uVar7 * 3;
      local_b8 = CONCAT44(local_b8._4_4_,uVar14);
      uVar24 = (long)iVar66 + 1;
      *(ulong *)(*pauVar22 + 8) = uStack_198 & 0xffffffff;
      *(long *)*pauVar22 = local_1a0;
      *(uint *)pauVar22[2] = uVar6;
      *(ulong *)(pauVar22[1] + 8) = CONCAT44(0x3f800000,(int)lStack_d8);
      *(long *)pauVar22[1] = local_e0;
      if (((*(byte *)(lVar15 + 0x10) >> 4 & 1) == 0) || (local_f0 == puStack_e8)) {
        uVar18 = 0;
      }
      else {
        uVar18 = *local_f0;
      }
      *(undefined4 *)(pauVar12[(long)(int)uVar7 * 3 + 2] + 4) = uVar18;
      pauVar12[(long)(int)uVar7 * 3 + 2][8] = *(byte *)(lVar15 + 0x10) >> 4 & 1;
      uVar6 = uVar25;
      if (uVar1 - 1 != uVar20) {
        uVar6 = local_264;
      }
      if ((*(byte *)(lVar15 + 0x10) >> 4 & 1) != 0) {
        local_110 = (undefined4 *)0x0;
        puStack_108 = (undefined4 *)0x0;
        local_118[0] = uVar25 & 0x3fffff;
        FUN_031b9d98(*(undefined8 *)(*(long *)(*param_1 + 0x38) + (ulong)(uVar25 >> 0x16) * 0xf0),
                     local_118,&local_1a0,&local_e0,&local_110);
        uVar19 = uVar19 + 2;
        if ((int)(local_b8._4_4_ & 0x3fffffff) <= (int)uVar14) {
          pauVar12 = (undefined1 (*) [16])
                     FUN_031b9fd8(puVar4,uVar19,pauVar12,uVar14,(long)&local_b8 + 4);
          uVar14 = (uint)local_b8;
          local_c0 = pauVar12;
        }
        pauVar22 = pauVar12 + (long)(int)uVar14 * 3;
        local_b8 = CONCAT44(local_b8._4_4_,uVar19);
        *(ulong *)(*pauVar22 + 8) = uStack_198 & 0xffffffff;
        *(long *)*pauVar22 = local_1a0;
        *(uint *)pauVar22[2] = uVar25;
        *(ulong *)(pauVar22[1] + 8) = CONCAT44(0x3f800000,(int)lStack_d8);
        *(long *)pauVar22[1] = local_e0;
        if ((*(byte *)(lVar15 + 0x10) >> 4 & 1) == 0) {
          uVar18 = 0;
        }
        else if (local_110 == puStack_108) {
          uVar18 = 0;
        }
        else {
          uVar18 = *local_110;
        }
        *(undefined4 *)(pauVar12[(long)(int)uVar14 * 3 + 2] + 4) = uVar18;
        pauVar12[(long)(int)uVar14 * 3 + 2][8] = 2;
        lVar15 = plVar10[(long)iVar66 * 2];
        (plVar10 + uVar24 * 2)[1] = (plVar10 + (long)iVar66 * 2)[1];
        plVar10[uVar24 * 2] = lVar15;
        uVar24 = (ulong)(iVar66 + 2);
        uVar14 = uVar19;
      }
      uVar20 = uVar20 + 1;
      iVar66 = (int)uVar24;
      uVar24 = uVar24 & 0xffffffff;
      local_264 = uVar6;
      uVar19 = uVar14;
    } while (uVar1 != uVar20);
  }
  plVar17 = plVar10 + (long)iVar66 * 2;
  plVar17[1] = plVar17[-1];
  *plVar17 = plVar17[-2];
  lVar15 = param_1[2];
  uVar71 = NEON_fmov(0x3f800000,4);
  plVar9[1] = param_1[3];
  *plVar9 = lVar15;
  if ((int)uVar14 < 1) {
LAB_031b8e90:
    pauVar12 = local_c0;
    uVar19 = uVar14 + 1;
    lVar15 = param_1[4];
    (plVar9 + (long)(int)uVar19 * 2)[1] = param_1[5];
    plVar9[(long)(int)uVar19 * 2] = lVar15;
    if (0 < (int)uVar14) {
      uVar26 = NEON_fmov(0x3fc00000,4);
      iVar66 = 0;
      do {
        lVar15 = (ulong)uVar19 - 1;
        pauVar22 = pauVar12;
        plVar17 = plVar9;
        do {
          lStack_d8 = plVar17[1];
          local_e0 = *plVar17;
          puStack_e8 = *(undefined4 **)(*pauVar22 + 8);
          local_f0 = *(undefined4 **)*pauVar22;
          auVar51 = *pauVar22;
          puStack_108 = *(undefined4 **)(pauVar22[1] + 8);
          local_110 = *(undefined4 **)pauVar22[1];
          fVar27 = (float)((ulong)lStack_d8 >> 0x20);
          fVar30 = (float)((ulong)local_110 >> 0x20);
          fVar31 = (float)((ulong)puStack_108 >> 0x20);
          if (pauVar22[2][8] == '\x02') {
            fVar32 = (float)uVar71 - fVar27;
            fVar27 = (float)((ulong)uVar71 >> 0x20) - fVar27;
            fVar33 = (float)((ulong)local_f0 >> 0x20);
            fVar35 = (float)((ulong)puStack_e8 >> 0x20);
            lVar8 = CONCAT44(fVar33 + (fVar30 - fVar33) * fVar27,
                             SUB84(local_f0,0) + (SUB84(local_110,0) - SUB84(local_f0,0)) * fVar32);
            lVar23 = CONCAT44(fVar35 + (fVar31 - fVar35) * fVar27,
                              SUB84(puStack_e8,0) +
                              (SUB84(puStack_108,0) - SUB84(puStack_e8,0)) * fVar32);
          }
          else if (pauVar22[2][8] == '\x01') {
            FUN_032bb0b0(&local_e0,&local_f0,&local_110,&local_1a0);
            lVar8 = local_190;
            lVar23 = lStack_188;
          }
          else {
            local_130 = CONCAT44((float)((ulong)plVar17[4] >> 0x20) -
                                 (float)((ulong)local_e0 >> 0x20),
                                 (float)plVar17[4] - (float)local_e0);
            uStack_128 = CONCAT44((float)((ulong)plVar17[5] >> 0x20) - fVar27,
                                  (float)plVar17[5] - (float)lStack_d8);
            fVar32 = SUB84(local_110,0) - auVar51._0_4_;
            fVar30 = fVar30 - auVar51._4_4_;
            fVar33 = SUB84(puStack_108,0) - auVar51._8_4_;
            fVar31 = fVar31 - auVar51._12_4_;
            uStack_198 = CONCAT44(fVar31,fVar33);
            local_1a0 = CONCAT44(fVar30,fVar32);
            FUN_031b9bf0(&local_e0,&local_130,&local_f0,&local_1a0,&local_150);
            fVar27 = (float)((ulong)plVar17[3] >> 0x20);
            uVar28 = NEON_fminnm(CONCAT44((float)((ulong)local_150 >> 0x20) *
                                          (float)((ulong)uVar26 >> 0x20) + fVar27 * -0.5,
                                          (float)local_150 * (float)uVar26 + fVar27 * -0.5),uVar71,4
                                );
            uVar28 = NEON_fmax(uVar28,0,4);
            fVar27 = (float)((ulong)uVar28 >> 0x20);
            lVar8 = CONCAT44((float)((ulong)local_f0 >> 0x20) + fVar30 * fVar27,
                             SUB84(local_f0,0) + fVar32 * (float)uVar28);
            lVar23 = CONCAT44((float)((ulong)puStack_e8 >> 0x20) + fVar31 * fVar27,
                              SUB84(puStack_e8,0) + fVar33 * (float)uVar28);
          }
          plVar17[3] = lVar23;
          plVar17[2] = lVar8;
          pauVar22 = pauVar22 + 3;
          lVar15 = lVar15 + -1;
          plVar17 = plVar17 + 2;
        } while (lVar15 != 0);
        iVar66 = iVar66 + 1;
      } while (iVar66 != 5);
    }
    if (0 < (int)(uVar14 + 2)) {
      pauVar12 = (undefined1 (*) [16])(param_1 + 8);
      uVar24 = (ulong)uVar19;
      uVar20 = (ulong)(uVar14 + 2);
      if (uVar1 == 0) {
        lVar15 = 0;
        pauVar22 = local_c0 + -1;
        do {
          uStack_198 = ((long *)((long)plVar9 + lVar15))[1];
          local_1a0 = *(long *)((long)plVar9 + lVar15);
          lStack_d8 = ((long *)((long)plVar10 + lVar15))[1];
          local_e0 = *(long *)((long)plVar10 + lVar15);
          uVar18 = 0;
          uVar13 = 0;
          pauVar16 = pauVar12;
          if ((lVar15 != 0) && (uVar24 != 0)) {
            uVar18 = *(undefined4 *)((long)*pauVar22 + 4);
            uVar13 = (undefined1)*(long *)((long)*pauVar22 + 8);
            pauVar16 = pauVar22;
          }
          local_1a8[0] = (uint)*(long *)*pauVar16 >> 0x16;
          FUN_031ba1d4(param_1[9],&local_1a0,&local_e0,local_1a8,uVar18,uVar13);
          pauVar22 = pauVar22 + 3;
          uVar20 = uVar20 - 1;
          uVar24 = uVar24 - 1;
          lVar15 = lVar15 + 0x10;
        } while (uVar20 != 0);
      }
      else {
        lVar15 = 0;
        puVar21 = local_c0[-1] + 8;
        do {
          uStack_198 = ((long *)((long)plVar9 + lVar15))[1];
          local_1a0 = *(long *)((long)plVar9 + lVar15);
          lStack_d8 = ((long *)((long)plVar10 + lVar15))[1];
          local_e0 = *(long *)((long)plVar10 + lVar15);
          if (lVar15 == 0) {
            local_1a8[0] = (uint)*(long *)*pauVar12;
            uVar18 = 0;
            uVar13 = 0;
          }
          else if (uVar24 == 0) {
            uVar18 = 0;
            uVar13 = 0;
            local_1a8[0] = local_264;
          }
          else {
            uVar18 = *(undefined4 *)(puVar21 + -4);
            uVar13 = *puVar21;
            local_1a8[0] = *(uint *)(puVar21 + -8);
          }
          local_1a8[0] = local_1a8[0] >> 0x16;
          FUN_031ba1d4(param_1[9],&local_1a0,&local_e0,local_1a8,uVar18,uVar13);
          puVar21 = puVar21 + 0x30;
          uVar24 = uVar24 - 1;
          uVar20 = uVar20 - 1;
          lVar15 = lVar15 + 0x10;
        } while (uVar20 != 0);
      }
    }
    FUN_031ba39c(param_1[9]);
    pauVar22 = local_b0;
    pauVar12 = local_c0;
    plVar17 = (long *)param_1[9];
    if (*plVar17 == 0) {
      bVar5 = *(int *)((long)plVar17 + 0x14) < (int)plVar17[2];
    }
    else {
      bVar5 = true;
    }
    if (local_b0 == local_c0) {
      local_b8 = local_b8 & 0xffffffff00000000;
    }
    lVar8 = (long)local_a8;
    lVar15 = *(long *)(lVar11 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar15 = *(long *)(lVar15 + 8);
    uVar24 = lVar8 * 0x30 + 0x7fU & 0xffffffffffffff80;
    uVar20 = local_b8;
    if (((*(ulong *)(lVar15 + 0x10) < uVar24) ||
        (*(undefined1 **)(lVar15 + 0x18) != *pauVar22 + uVar24)) ||
       (*(undefined1 (**) [16])(lVar15 + 0x28) == pauVar22)) {
      if (pauVar22 != (undefined1 (*) [16])0x0) {
        if (*(ulong *)(lVar15 + 0x10) < uVar24) {
          *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),pauVar22);
          uVar20 = local_b8;
        }
        else if (*(undefined1 **)(lVar15 + 0x18) == *pauVar22 + uVar24) {
          *(undefined1 (**) [16])(lVar15 + 0x18) = pauVar22;
          FUN_032ce944();
          uVar20 = local_b8;
        }
        else {
          FUN_032ceaf0(lVar15,pauVar22);
          uVar20 = local_b8;
        }
      }
    }
    else {
      *(undefined1 (**) [16])(lVar15 + 0x18) = pauVar22;
    }
    local_b8 = uVar20 & 0xffffffff00000000;
    if ((pauVar12 != (undefined1 (*) [16])0x0) && (-1 < (long)local_b8)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,pauVar12,(uVar20 >> 0x20 & 0x3fffffff) * 0x30);
    }
    lVar15 = *(long *)(lVar11 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar8 = *(long *)(lVar15 + 8);
    uVar20 = (ulong)(int)(iVar2 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar8 + 0x10) < uVar20) || (*(long *)(lVar8 + 0x18) != (long)plVar10 + uVar20))
       || (*(long **)(lVar8 + 0x28) == plVar10)) {
      if (plVar10 != (long *)0x0) {
        if (*(ulong *)(lVar8 + 0x10) < uVar20) {
          *(int *)(*(long *)(lVar8 + 8) + 0x20) = *(int *)(*(long *)(lVar8 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar8 + 0x40) + 0x18))(*(long **)(lVar8 + 0x40),plVar10,uVar20);
        }
        else if (*(long *)(lVar8 + 0x18) == (long)plVar10 + uVar20) {
          *(long **)(lVar8 + 0x18) = plVar10;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar8,plVar10,uVar20);
        }
      }
      lVar15 = *(long *)(lVar11 + 0x38d490);
    }
    else {
      *(long **)(lVar8 + 0x18) = plVar10;
    }
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar11 = *(long *)(lVar15 + 8);
    if (((*(ulong *)(lVar11 + 0x10) < uVar20) || (*(long *)(lVar11 + 0x18) != (long)plVar9 + uVar20)
        ) || (*(long **)(lVar11 + 0x28) == plVar9)) {
      if (plVar9 != (long *)0x0) {
        if (*(ulong *)(lVar11 + 0x10) < uVar20) {
          *(int *)(*(long *)(lVar11 + 8) + 0x20) = *(int *)(*(long *)(lVar11 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))(*(long **)(lVar11 + 0x40),plVar9,uVar20);
        }
        else if (*(long *)(lVar11 + 0x18) == (long)plVar9 + uVar20) {
          *(long **)(lVar11 + 0x18) = plVar9;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar11,plVar9,uVar20);
        }
      }
    }
    else {
      *(long **)(lVar11 + 0x18) = plVar9;
    }
    return bVar5;
  }
  pauVar22 = (undefined1 (*) [16])(param_1 + 4);
  local_230 = 0;
  do {
    uVar19 = (uint)local_230;
    uStack_198 = (plVar9 + (long)(int)uVar19 * 2)[1];
    local_1a0 = plVar9[(long)(int)uVar19 * 2];
    pauVar16 = pauVar12 + (long)(int)uVar19 * 3;
    lStack_d8 = *(long *)(*pauVar16 + 8);
    local_e0 = *(long *)*pauVar16;
    fVar37 = (float)lStack_d8;
    fVar39 = (float)((ulong)lStack_d8 >> 0x20);
    fVar33 = (float)local_e0;
    fVar35 = (float)((ulong)local_e0 >> 0x20);
    fVar27 = (float)*(undefined8 *)pauVar16[1] - fVar33;
    fVar30 = (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20) - fVar35;
    local_f0 = (undefined4 *)CONCAT44(fVar30,fVar27);
    fVar31 = (float)*(undefined8 *)(pauVar16[1] + 8) - fVar37;
    fVar32 = (float)((ulong)*(undefined8 *)(pauVar16[1] + 8) >> 0x20) - fVar39;
    puStack_e8 = (undefined4 *)CONCAT44(fVar32,fVar31);
    uVar26 = 0;
    uVar20 = (long)(int)uVar19;
    local_1e0 = uVar71;
    local_88 = local_230;
LAB_031b89e0:
    if ((long)(int)uVar14 <= (long)uVar20) goto LAB_031b8948;
    uVar24 = uVar20 + 1;
    uVar25 = (uint)uVar24;
    pauVar16 = pauVar22;
    pauVar3 = pauVar22;
    if (uVar14 != uVar25) {
      pauVar16 = pauVar12 + uVar24 * 3 + 1;
      pauVar3 = pauVar12 + uVar24 * 3;
    }
    fVar41 = (float)local_1a0;
    fVar44 = (float)((ulong)local_1a0 >> 0x20);
    local_110 = (undefined4 *)
                CONCAT44((float)((ulong)*(long *)*pauVar3 >> 0x20) - fVar44,
                         (float)*(long *)*pauVar3 - fVar41);
    fVar45 = (float)uStack_198;
    fVar46 = (float)(uStack_198 >> 0x20);
    puStack_108 = (undefined4 *)
                  CONCAT44((float)((ulong)*(long *)((long)*pauVar3 + 8) >> 0x20) - fVar46,
                           (float)*(long *)((long)*pauVar3 + 8) - fVar45);
    local_130 = CONCAT44((float)((ulong)*(long *)*pauVar16 >> 0x20) - fVar44,
                         (float)*(long *)*pauVar16 - fVar41);
    uStack_128 = CONCAT44((float)((ulong)*(long *)((long)*pauVar16 + 8) >> 0x20) - fVar46,
                          (float)*(long *)((long)*pauVar16 + 8) - fVar45);
    uVar6 = FUN_031b9bf0(&local_1a0,&local_110,&local_e0,&local_f0,&local_138);
    uVar7 = FUN_031b9bf0(&local_1a0,&local_130,&local_e0,&local_f0,&local_140);
    if (((uVar7 | uVar6) & 3) == 0) {
      if ((float)local_140 <= (float)uVar26) {
        pauVar16 = pauVar12 + (long)(int)(uint)local_88 * 3;
        uVar29 = *(undefined8 *)(*pauVar16 + 8);
        uVar28 = *(undefined8 *)*pauVar16;
        fVar34 = ((float)*(undefined8 *)pauVar16[1] - (float)uVar28) * 0.1;
        fVar36 = ((float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20) -
                 (float)((ulong)uVar28 >> 0x20)) * 0.1;
        fVar38 = ((float)*(undefined8 *)(pauVar16[1] + 8) - (float)uVar29) * 0.1;
        fVar40 = ((float)((ulong)*(undefined8 *)(pauVar16[1] + 8) >> 0x20) -
                 (float)((ulong)uVar29 >> 0x20)) * 0.1;
        uVar6 = (uint)local_88;
        goto LAB_031b8d24;
      }
      if ((float)local_1e0 <= (float)local_138) {
        pauVar16 = pauVar12 + (long)(int)local_230 * 3;
        auVar60._8_8_ = 0x3f6666663f666666;
        auVar60._0_8_ = 0x3f6666663f666666;
        uVar29 = *(undefined8 *)(*pauVar16 + 8);
        uVar28 = *(undefined8 *)*pauVar16;
        fVar34 = (float)*(undefined8 *)pauVar16[1] - (float)uVar28;
        fVar36 = (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20) - (float)((ulong)uVar28 >> 0x20)
        ;
        fVar38 = (float)*(undefined8 *)(pauVar16[1] + 8) - (float)uVar29;
        fVar40 = (float)((ulong)*(undefined8 *)(pauVar16[1] + 8) >> 0x20) -
                 (float)((ulong)uVar29 >> 0x20);
        uVar20 = local_230;
        goto LAB_031b8d20;
      }
      if (uVar14 == uVar25) {
        lVar8 = param_1[5];
        lVar15 = *(long *)*pauVar22;
        uVar6 = uVar25;
        goto joined_r0x031b8d2c;
      }
code_r0x031b8e18:
      uVar28 = local_138;
      if ((float)local_138 <= (float)uVar26) {
        uVar25 = (uint)local_88;
        uVar28 = uVar26;
      }
      uVar26 = uVar28;
      local_88 = (ulong)uVar25;
      if ((float)local_140 < (float)local_1e0) {
        local_230 = uVar24 & 0xffffffff;
        local_1e0 = local_140;
      }
      uVar20 = uVar24;
      goto LAB_031b89e0;
    }
    uVar28 = uVar26;
    if (uVar6 == 0) {
      uVar28 = NEON_fmax(uVar26,local_138,4);
    }
    uVar29 = local_1e0;
    if (uVar7 == 0) {
      uVar29 = NEON_fmin(local_1e0,local_140,4);
    }
    fVar50 = (float)((ulong)uVar28 >> 0x20);
    pauVar16 = pauVar12 + uVar20 * 3;
    fVar48 = (float)((ulong)uVar29 >> 0x20);
    auVar42._0_4_ = (fVar33 + fVar27 * (float)uVar29) - fVar41;
    auVar42._4_4_ = (fVar35 + fVar30 * fVar48) - fVar44;
    auVar42._8_4_ = (fVar37 + fVar31 * (float)uVar29) - fVar45;
    auVar42._12_4_ = (fVar39 + fVar32 * fVar48) - fVar46;
    auVar54._0_4_ = (fVar33 + fVar27 * (float)uVar28) - fVar41;
    auVar54._4_4_ = (fVar35 + fVar30 * fVar50) - fVar44;
    auVar54._8_4_ = (fVar37 + fVar31 * (float)uVar28) - fVar45;
    auVar54._12_4_ = (fVar39 + fVar32 * fVar50) - fVar46;
    auVar60 = NEON_ext(auVar54,auVar54,4,1);
    uVar29 = *(undefined8 *)(*pauVar16 + 8);
    uVar28 = *(undefined8 *)*pauVar16;
    fVar34 = (float)*(undefined8 *)pauVar16[1] - (float)uVar28;
    fVar48 = (float)((ulong)uVar28 >> 0x20);
    fVar36 = (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20) - fVar48;
    fVar38 = (float)*(undefined8 *)(pauVar16[1] + 8) - (float)uVar29;
    fVar50 = (float)((ulong)uVar29 >> 0x20);
    fVar40 = (float)((ulong)*(undefined8 *)(pauVar16[1] + 8) >> 0x20) - fVar50;
    auVar51._4_4_ = fVar36;
    auVar51._0_4_ = fVar34;
    auVar51._8_4_ = fVar38;
    auVar51._12_4_ = fVar40;
    auVar63._4_4_ = fVar36;
    auVar63._0_4_ = fVar34;
    auVar63._8_4_ = fVar38;
    auVar63._12_4_ = fVar40;
    auVar51 = NEON_ext(auVar51,auVar63,4,1);
    fVar47 = (float)uVar28 - fVar41;
    fVar48 = fVar48 - fVar44;
    fVar49 = (float)uVar29 - fVar45;
    fVar50 = fVar50 - fVar46;
    fVar72 = auVar51._0_4_;
    fVar81 = auVar51._4_4_;
    fVar56 = auVar60._0_4_ * fVar34 - auVar54._0_4_ * fVar72;
    fVar64 = auVar60._4_4_ * fVar36 - auVar54._4_4_ * fVar81;
    auVar61._0_8_ = CONCAT44(fVar64,fVar56);
    auVar61._8_4_ = auVar54._0_4_ * fVar38 - auVar54._8_4_ * fVar34;
    auVar61._12_4_ = auVar54._4_4_ * fVar40 - auVar54._12_4_ * fVar36;
    auVar51 = NEON_ext(auVar61,auVar61,4,1);
    uVar73 = NEON_ext(auVar51._0_8_,auVar61._0_8_,4,1);
    fVar79 = auVar51._0_4_;
    fVar80 = auVar51._4_4_;
    fVar57 = fVar79 * fVar79 + fVar80 * fVar80 + fVar56 * fVar56;
    fVar65 = fVar79 * fVar79 + fVar80 * fVar80 + fVar56 * fVar56;
    uVar58 = CONCAT44(fVar65,fVar57);
    uVar86 = NEON_frecpe(uVar58,4);
    uVar88 = NEON_frecps(uVar58,uVar86,4);
    auVar74._0_4_ = fVar72 * fVar79 - fVar34 * (float)uVar73;
    auVar74._4_4_ = fVar81 * fVar80 - fVar36 * (float)((ulong)uVar73 >> 0x20);
    auVar74._8_4_ = fVar34 * fVar56 - fVar38 * fVar79;
    auVar74._12_4_ = fVar36 * fVar64 - fVar40 * fVar80;
    auVar51 = NEON_ext(auVar74,auVar74,4,1);
    fVar56 = (float)uVar86 * (float)uVar88;
    fVar64 = (float)((ulong)uVar86 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
    iVar66 = -(uint)(fVar57 == 0.0);
    iVar68 = -(uint)(fVar65 == 0.0);
    uVar58 = NEON_frecps(uVar58,CONCAT44(fVar64,fVar56),4);
    auVar89._0_4_ = fVar47 * fVar34;
    auVar89._4_4_ = fVar48 * fVar36;
    auVar89._8_4_ = fVar49 * fVar38;
    auVar89._12_4_ = fVar50 * fVar40;
    uVar59 = CONCAT44(fVar64 * (float)((ulong)uVar58 >> 0x20),fVar56 * (float)uVar58) &
             CONCAT17(~(byte)((uint)iVar68 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar68 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar68 >> 8),
                                        CONCAT14(~(byte)iVar68,
                                                 CONCAT13(~(byte)((uint)iVar66 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar66 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar66 >>
                                                                                   8),~(byte)iVar66)
                                                                  ))))));
    fVar56 = fVar47 * auVar51._0_4_;
    fVar57 = fVar48 * auVar51._4_4_;
    auVar75._0_4_ = auVar54._0_4_ * auVar54._0_4_;
    auVar75._4_4_ = auVar54._4_4_ * auVar54._4_4_;
    auVar75._8_4_ = auVar54._8_4_ * auVar54._8_4_;
    auVar75._12_4_ = auVar54._12_4_ * auVar54._12_4_;
    uVar58 = NEON_fminnm(CONCAT44((float)(uVar59 >> 0x20) *
                                  (fVar56 + fVar57 + fVar49 * auVar74._0_4_),
                                  (float)uVar59 * (fVar56 + fVar57 + fVar49 * auVar74._0_4_)),uVar71
                         ,4);
    auVar55._0_4_ = auVar54._0_4_ * fVar47;
    auVar55._4_4_ = auVar54._4_4_ * fVar48;
    auVar55._8_4_ = auVar54._8_4_ * fVar49;
    auVar55._12_4_ = auVar54._12_4_ * fVar50;
    auVar60 = NEON_ext(auVar75,auVar75,8,1);
    auVar51 = NEON_ext(auVar55,auVar55,8,1);
    uVar58 = NEON_fmax(uVar58,0,4);
    auVar62._0_4_ = fVar34 * fVar34;
    auVar62._4_4_ = fVar36 * fVar36;
    auVar62._8_4_ = fVar38 * fVar38;
    auVar62._12_4_ = fVar40 * fVar40;
    auVar63 = NEON_ext(auVar62,auVar62,8,1);
    auVar90 = NEON_ext(auVar89,auVar89,8,1);
    auVar91._0_4_ = auVar60._0_4_ + auVar75._0_4_ + auVar75._4_4_;
    auVar91._4_4_ = auVar51._0_4_ + auVar55._0_4_ + auVar55._4_4_;
    fVar56 = auVar63._0_4_ + auVar62._0_4_ + auVar62._4_4_;
    fVar57 = auVar90._0_4_ + auVar89._0_4_ + auVar89._4_4_;
    auVar91._8_8_ = CONCAT44(fVar57,fVar56);
    iVar66 = -(uint)(auVar91._0_4_ == 0.0);
    iVar68 = -(uint)(auVar91._4_4_ == 0.0);
    iVar69 = -(uint)(fVar56 == 0.0);
    iVar70 = -(uint)(fVar57 == 0.0);
    auVar51 = NEON_frecpe(auVar91,4);
    auVar63 = NEON_ext(auVar42,auVar42,4,1);
    auVar60 = NEON_frecps(auVar91,auVar51,4);
    auVar67[0] = ~(byte)iVar66;
    auVar67[1] = ~(byte)((uint)iVar66 >> 8);
    auVar67[2] = ~(byte)((uint)iVar66 >> 0x10);
    auVar67[3] = ~(byte)((uint)iVar66 >> 0x18);
    auVar67[4] = ~(byte)iVar68;
    auVar67[5] = ~(byte)((uint)iVar68 >> 8);
    auVar67[6] = ~(byte)((uint)iVar68 >> 0x10);
    auVar67[7] = ~(byte)((uint)iVar68 >> 0x18);
    auVar67[8] = ~(byte)iVar69;
    auVar67[9] = ~(byte)((uint)iVar69 >> 8);
    auVar67[10] = ~(byte)((uint)iVar69 >> 0x10);
    auVar67[0xb] = ~(byte)((uint)iVar69 >> 0x18);
    auVar67[0xc] = ~(byte)iVar70;
    auVar67[0xd] = ~(byte)((uint)iVar70 >> 8);
    auVar67[0xe] = ~(byte)((uint)iVar70 >> 0x10);
    auVar67[0xf] = ~(byte)((uint)iVar70 >> 0x18);
    auVar87._0_4_ = auVar51._0_4_ * auVar60._0_4_;
    auVar87._4_4_ = auVar51._4_4_ * auVar60._4_4_;
    auVar87._8_4_ = auVar51._8_4_ * auVar60._8_4_;
    auVar87._12_4_ = auVar51._12_4_ * auVar60._12_4_;
    auVar51 = NEON_ext(auVar67,auVar67,8,1);
    auVar90 = NEON_frecps(auVar91,auVar87,4);
    auVar60 = NEON_ext(auVar87,auVar87,8,1);
    auVar90 = NEON_ext(auVar90,auVar90,8,1);
    fVar64 = (float)((uint)(auVar60._0_4_ * auVar90._0_4_) & auVar51._0_4_);
    uVar58 = NEON_fminnm(CONCAT44(((float)((ulong)uVar58 >> 0x20) *
                                   (auVar54._8_4_ * fVar38 +
                                   auVar54._0_4_ * fVar34 + auVar54._4_4_ * fVar36) - fVar57) *
                                  fVar64,((float)uVar58 *
                                          (auVar54._8_4_ * fVar38 +
                                          auVar54._0_4_ * fVar34 + auVar54._4_4_ * fVar36) - fVar57)
                                         * fVar64),uVar71,4);
    uVar73 = NEON_fmax(uVar58,0,4);
    fVar64 = fVar34 * auVar63._0_4_ - auVar42._0_4_ * fVar72;
    fVar79 = fVar36 * auVar63._4_4_ - auVar42._4_4_ * fVar81;
    auVar76._0_8_ = CONCAT44(fVar79,fVar64);
    auVar76._8_4_ = fVar38 * auVar42._0_4_ - auVar42._8_4_ * fVar34;
    auVar76._12_4_ = fVar40 * auVar42._4_4_ - auVar42._12_4_ * fVar36;
    auVar51 = NEON_ext(auVar76,auVar76,4,1);
    uVar86 = NEON_ext(auVar51._0_8_,auVar76._0_8_,4,1);
    fVar82 = auVar51._0_4_;
    fVar84 = auVar51._4_4_;
    fVar65 = fVar64 * fVar64 + fVar82 * fVar82 + fVar84 * fVar84;
    fVar80 = fVar64 * fVar64 + fVar82 * fVar82 + fVar84 * fVar84;
    uVar58 = CONCAT44(fVar80,fVar65);
    uVar88 = NEON_frecpe(uVar58,4);
    uVar92 = NEON_frecps(uVar58,uVar88,4);
    fVar83 = (float)uVar88 * (float)uVar92;
    fVar85 = (float)((ulong)uVar88 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
    auVar52._0_4_ = fVar72 * fVar82 - fVar34 * (float)uVar86;
    auVar52._4_4_ = fVar81 * fVar84 - fVar36 * (float)((ulong)uVar86 >> 0x20);
    auVar52._8_4_ = fVar34 * fVar64 - fVar38 * fVar82;
    auVar52._12_4_ = fVar36 * fVar79 - fVar40 * fVar84;
    auVar51 = NEON_ext(auVar52,auVar52,4,1);
    iVar66 = -(uint)(fVar65 == 0.0);
    iVar68 = -(uint)(fVar80 == 0.0);
    uVar58 = NEON_frecps(uVar58,CONCAT44(fVar85,fVar83),4);
    fVar72 = fVar47 * auVar51._0_4_;
    fVar81 = fVar48 * auVar51._4_4_;
    uVar59 = CONCAT44(fVar85 * (float)((ulong)uVar58 >> 0x20),fVar83 * (float)uVar58) &
             CONCAT17(~(byte)((uint)iVar68 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar68 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar68 >> 8),
                                        CONCAT14(~(byte)iVar68,
                                                 CONCAT13(~(byte)((uint)iVar66 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar66 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar66 >>
                                                                                   8),~(byte)iVar66)
                                                                  ))))));
    auVar77._0_4_ = auVar42._0_4_ * auVar42._0_4_;
    auVar77._4_4_ = auVar42._4_4_ * auVar42._4_4_;
    auVar77._8_4_ = auVar42._8_4_ * auVar42._8_4_;
    auVar77._12_4_ = auVar42._12_4_ * auVar42._12_4_;
    uVar58 = NEON_fminnm(CONCAT44((float)(uVar59 >> 0x20) *
                                  (fVar49 * auVar52._0_4_ + fVar72 + fVar81),
                                  (float)uVar59 * (fVar49 * auVar52._0_4_ + fVar72 + fVar81)),uVar71
                         ,4);
    auVar90._0_4_ = fVar47 * auVar42._0_4_;
    auVar90._4_4_ = fVar48 * auVar42._4_4_;
    auVar90._8_4_ = fVar49 * auVar42._8_4_;
    auVar90._12_4_ = fVar50 * auVar42._12_4_;
    auVar63 = NEON_ext(auVar77,auVar77,8,1);
    auVar51 = NEON_ext(auVar90,auVar90,8,1);
    auVar43._0_4_ = auVar63._0_4_ + auVar77._0_4_ + auVar77._4_4_;
    auVar43._4_4_ = auVar51._0_4_ + auVar90._0_4_ + auVar90._4_4_;
    uVar58 = NEON_fmax(uVar58,0,4);
    auVar43._8_8_ = CONCAT44(fVar57,fVar56);
    auVar51 = NEON_frecpe(auVar43,4);
    iVar66 = -(uint)(auVar43._0_4_ == 0.0);
    iVar68 = -(uint)(auVar43._4_4_ == 0.0);
    iVar69 = -(uint)(fVar56 == 0.0);
    iVar70 = -(uint)(fVar57 == 0.0);
    auVar53[0] = ~(byte)iVar66;
    auVar53[1] = ~(byte)((uint)iVar66 >> 8);
    auVar53[2] = ~(byte)((uint)iVar66 >> 0x10);
    auVar53[3] = ~(byte)((uint)iVar66 >> 0x18);
    auVar53[4] = ~(byte)iVar68;
    auVar53[5] = ~(byte)((uint)iVar68 >> 8);
    auVar53[6] = ~(byte)((uint)iVar68 >> 0x10);
    auVar53[7] = ~(byte)((uint)iVar68 >> 0x18);
    auVar53[8] = ~(byte)iVar69;
    auVar53[9] = ~(byte)((uint)iVar69 >> 8);
    auVar53[10] = ~(byte)((uint)iVar69 >> 0x10);
    auVar53[0xb] = ~(byte)((uint)iVar69 >> 0x18);
    auVar53[0xc] = ~(byte)iVar70;
    auVar53[0xd] = ~(byte)((uint)iVar70 >> 8);
    auVar53[0xe] = ~(byte)((uint)iVar70 >> 0x10);
    auVar53[0xf] = ~(byte)((uint)iVar70 >> 0x18);
    auVar60 = NEON_frecps(auVar43,auVar51,4);
    auVar63 = NEON_ext(auVar53,auVar53,8,1);
    auVar78._0_4_ = auVar51._0_4_ * auVar60._0_4_;
    auVar78._4_4_ = auVar51._4_4_ * auVar60._4_4_;
    auVar78._8_4_ = auVar51._8_4_ * auVar60._8_4_;
    auVar78._12_4_ = auVar51._12_4_ * auVar60._12_4_;
    auVar51 = NEON_frecps(auVar43,auVar78,4);
    auVar60 = NEON_ext(auVar78,auVar78,8,1);
    auVar51 = NEON_ext(auVar51,auVar51,8,1);
    fVar48 = (float)((uint)(auVar60._0_4_ * auVar51._0_4_) & auVar63._0_4_);
    uVar73 = NEON_fminnm(uVar73,0x3f7333333f733333,4);
    uVar58 = NEON_fminnm(CONCAT44(((float)((ulong)uVar58 >> 0x20) *
                                   (fVar38 * auVar42._8_4_ +
                                   fVar34 * auVar42._0_4_ + fVar36 * auVar42._4_4_) - fVar57) *
                                  fVar48,((float)uVar58 *
                                          (fVar38 * auVar42._8_4_ +
                                          fVar34 * auVar42._0_4_ + fVar36 * auVar42._4_4_) - fVar57)
                                         * fVar48),uVar71,4);
    uVar58 = NEON_fmax(uVar58,0,4);
    uVar58 = NEON_fminnm(uVar58,0x3f7333333f733333,4);
    uVar73 = NEON_fmax(uVar73,0x3d4ccccd3d4ccccd,4);
    uVar58 = NEON_fmax(uVar58,0x3d4ccccd3d4ccccd,4);
    auVar60._0_8_ =
         CONCAT44(((float)((ulong)uVar73 >> 0x20) + (float)((ulong)uVar58 >> 0x20)) * 0.5,
                  ((float)uVar73 + (float)uVar58) * 0.5);
    auVar60._8_8_ = auVar60._0_8_;
LAB_031b8d20:
    fVar34 = fVar34 * auVar60._0_4_;
    fVar36 = fVar36 * auVar60._4_4_;
    fVar38 = fVar38 * auVar60._8_4_;
    fVar40 = fVar40 * auVar60._12_4_;
    uVar6 = (uint)uVar20;
LAB_031b8d24:
    lVar15 = CONCAT44((float)((ulong)uVar28 >> 0x20) + fVar36,(float)uVar28 + fVar34);
    lVar8 = CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar40,(float)uVar29 + fVar38);
joined_r0x031b8d2c:
    if (uVar6 == 0xffffffff) goto code_r0x031b8e18;
    local_150 = CONCAT44((float)((ulong)lVar15 >> 0x20) - fVar44,(float)lVar15 - fVar41);
    uStack_148 = CONCAT44((float)((ulong)lVar8 >> 0x20) - fVar46,(float)lVar8 - fVar45);
    if ((int)uVar19 < (int)uVar6) {
      lVar23 = (long)(int)uVar6 - (long)(int)uVar19;
      plVar17 = plVar9 + (long)(int)uVar19 * 2 + 2;
      pauVar16 = pauVar12 + (long)(int)uVar19 * 3 + 1;
      do {
        uStack_158 = *(undefined8 *)(pauVar16[-1] + 8);
        local_160 = *(undefined8 *)pauVar16[-1];
        fVar39 = (float)uStack_158;
        fVar41 = (float)((ulong)uStack_158 >> 0x20);
        fVar35 = (float)local_160;
        fVar37 = (float)((ulong)local_160 >> 0x20);
        fVar27 = (float)*(undefined8 *)*pauVar16 - fVar35;
        fVar30 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20) - fVar37;
        local_170 = CONCAT44(fVar30,fVar27);
        fVar32 = (float)*(undefined8 *)(*pauVar16 + 8) - fVar39;
        fVar33 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20) - fVar41;
        uStack_168 = CONCAT44(fVar33,fVar32);
        FUN_031b9bf0(&local_1a0,&local_150,&local_160,&local_170,&local_178);
        lVar23 = lVar23 + -1;
        fVar31 = (float)((ulong)local_178 >> 0x20);
        plVar17[1] = CONCAT44(fVar41 + fVar33 * fVar31,fVar39 + fVar32 * (float)local_178);
        *plVar17 = CONCAT44(fVar37 + fVar30 * fVar31,fVar35 + fVar27 * (float)local_178);
        plVar17 = plVar17 + 2;
        pauVar16 = pauVar16 + 3;
      } while (lVar23 != 0);
    }
    plVar9[(long)(int)uVar6 * 2 + 3] = lVar8;
    plVar9[(long)(int)uVar6 * 2 + 2] = lVar15;
    uVar19 = uVar6;
LAB_031b8948:
    local_230 = (ulong)(uVar19 + 1);
    if ((int)uVar14 <= (int)(uVar19 + 1)) goto LAB_031b8e90;
  } while( true );
}


