/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc8118; name: FUN_02fc8118
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02fc8118(long *param_1,uint param_2,char param_3,ulong param_4,int param_5)

{
  undefined1 (**ppauVar1) [16];
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  long *plVar21;
  float *pfVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long lVar33;
  uint uVar34;
  long *plVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  ulong uVar42;
  undefined4 *puVar43;
  ulong uVar44;
  ulong uVar45;
  float *pfVar46;
  byte bVar47;
  long *plVar48;
  uint *puVar49;
  long *plVar50;
  long lVar51;
  uint **ppuVar52;
  int *piVar53;
  undefined4 *puVar54;
  uint *puVar55;
  uint *puVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [12];
  float fVar68;
  undefined1 auVar60 [16];
  undefined1 extraout_q0 [16];
  undefined8 uVar70;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined1 extraout_q0_02 [16];
  undefined1 extraout_q0_03 [16];
  undefined1 extraout_q0_04 [16];
  undefined1 extraout_q0_05 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar81;
  undefined1 auVar74 [12];
  undefined1 auVar75 [12];
  undefined8 uVar83;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar80 [16];
  float fVar84;
  int iVar90;
  int iVar92;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar108;
  float fVar109;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  ulong local_350;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_210;
  float fStack_20c;
  undefined1 (*local_200 [4]) [16];
  undefined1 (*local_1e0) [16];
  undefined1 (*local_1d8) [16];
  undefined1 (*local_1d0) [16];
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  uint *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 auStack_188 [12];
  undefined8 uStack_128;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  
  puVar17 = PTR_PTR_0434a080;
  if (param_2 == 0) {
    return 0;
  }
  if (*(uint *)((long)param_1 + 0x14) < 3) {
    return 0;
  }
  lVar51 = 0;
  if (*param_1 != 0) {
    lVar51 = *param_1 + (long)param_1;
  }
  if (*(int *)(lVar51 + (ulong)param_2 * 0x30 + 0x24) == 0) {
    return 0;
  }
  local_78 = (long *)0x0;
  local_70 = 0x8000000000000000;
  local_78 = (long *)FUN_02fcae24(PTR_PTR_0434a080,0x10,0,0);
  local_80 = 0xffffffff00000000;
  plVar21 = local_78 + (long)(int)local_70 * 3;
  local_90 = 0;
  local_88 = -0x8000000000000000;
  plVar35 = plVar21;
  do {
    *plVar35 = 0;
    plVar35[1] = -0x8000000000000000;
    plVar35[2] = -0x100000000;
    plVar35 = plVar35 + 3;
  } while (plVar35 != plVar21 + 3);
  local_70._0_4_ = (int)local_70 + 1;
  FUN_02fcaad4(plVar21,&local_90);
  lVar30 = *param_1;
  lVar51 = 0;
  if (lVar30 != 0) {
    lVar51 = lVar30 + (long)param_1;
  }
  uVar5 = *(uint *)(lVar51 + (ulong)param_2 * 0x30 + 0x20);
  uVar42 = (ulong)uVar5;
  if (uVar5 == 0) {
    local_350 = 0;
  }
  else {
    local_350 = (ulong)(*(uint *)(lVar51 + uVar42 * 0x30 + 0x28) == param_2);
  }
  local_1a0 = (uint *)&local_190;
  uStack_198._0_4_ = 0;
  uStack_198._4_4_ = 0x80000040;
  do {
    while( true ) {
      plVar35 = local_78;
      uVar26 = (uint)uStack_198;
      puVar56 = local_1a0;
      lVar51 = 0;
      if (lVar30 != 0) {
        lVar51 = lVar30 + (long)param_1;
      }
      lVar30 = lVar51 + (ulong)param_2 * 0x30;
      puVar55 = (uint *)(lVar30 + 0x24);
      if (*puVar55 == 0) break;
      uVar34 = uStack_198._4_4_ & 0x3fffffff;
      uVar39 = (uint)uStack_198 + 1;
      if ((int)uVar34 <= (int)(uint)uStack_198) {
        if (0x3ffffffe < (int)(uint)uStack_198) {
          FUN_032bd0a8(uVar39);
        }
        uVar34 = (uStack_198._4_4_ & 0x3fffffff) * 2;
        if (uVar34 < 0x3fffffff) {
          if ((int)uVar39 <= (int)uVar34) goto LAB_02fca5c0;
        }
        else {
          uVar34 = 0x3fffffff;
          if ((int)uVar39 < 0x40000000) {
LAB_02fca5c0:
            uVar39 = uVar34;
          }
        }
        local_1a0 = (uint *)FUN_032bd1d4(puVar17,uVar39,4,puVar56,uVar26,(long)&uStack_198 + 4);
        uVar34 = uStack_198._4_4_ & 0x3fffffff;
        uVar39 = (uint)uStack_198 + 1;
      }
      uVar28 = (uint)uStack_198;
      puVar56 = local_1a0;
      uVar26 = *(uint *)(lVar51 + (ulong)param_2 * 0x30 + 0x28);
      if ((int)uVar34 <= (int)(uint)uStack_198) {
        if (0x3ffffffe < (int)(uint)uStack_198) {
          FUN_032bd0a8(uVar39);
        }
        uVar34 = (uStack_198._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar34) {
          uVar34 = 0x3fffffff;
        }
        uVar27 = uVar39;
        if ((int)uVar39 <= (int)uVar34) {
          uVar27 = uVar34;
        }
        local_1a0 = (uint *)FUN_032bd1d4(puVar17,uVar27,4,puVar56,uVar28,(long)&uStack_198 + 4);
      }
      local_1a0[(int)(uint)uStack_198] = uVar26;
      lVar51 = *param_1 + (long)param_1;
      lVar33 = 0;
      if (*param_1 != 0) {
        lVar33 = lVar51;
      }
      iVar25 = (int)(lVar30 - lVar33 >> 4) * -0x55555555;
      param_2 = *puVar55;
      *(int *)(lVar51 + (long)iVar25 * 0x30) = (int)param_1[2];
      *(int *)(param_1 + 2) = iVar25;
      lVar30 = *param_1;
      uStack_198._0_4_ = uVar39;
    }
    iVar25 = (int)local_78[1];
    puVar56 = (uint *)((long)local_78 + 0xc);
    uVar34 = *puVar56;
    uVar39 = uVar34 & 0x3fffffff;
    uVar26 = iVar25 + 1;
    if ((int)uVar39 <= iVar25) {
      lVar51 = *local_78;
      if (0x3ffffffe < iVar25) {
        FUN_032bd0a8(uVar26);
        uVar34 = *puVar56;
      }
      uVar39 = (uVar34 & 0x3fffffff) * 2;
      if (uVar39 < 0x3fffffff) {
        if ((int)uVar26 <= (int)uVar39) goto LAB_02fca5fc;
      }
      else {
        uVar39 = 0x3fffffff;
        if ((int)uVar26 < 0x40000000) {
LAB_02fca5fc:
          uVar26 = uVar39;
        }
      }
      lVar51 = FUN_032bd1d4(puVar17,uVar26,4,lVar51,iVar25,puVar56);
      *plVar35 = lVar51;
      iVar25 = (int)local_78[1];
      uVar34 = *(uint *)((long)local_78 + 0xc);
      uVar26 = iVar25 + 1;
      uVar39 = uVar34 & 0x3fffffff;
    }
    plVar35 = local_78;
    if (iVar25 < (int)uVar39) {
      lVar51 = *local_78;
    }
    else {
      lVar51 = *local_78;
      puVar56 = (uint *)((long)local_78 + 0xc);
      if (0x3ffffffe < iVar25) {
        FUN_032bd0a8(uVar26);
        uVar34 = *puVar56;
      }
      uVar39 = (uVar34 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar39) {
        uVar39 = 0x3fffffff;
      }
      uVar34 = uVar26;
      if ((int)uVar26 <= (int)uVar39) {
        uVar34 = uVar39;
      }
      lVar51 = FUN_032bd1d4(puVar17,uVar34,4,lVar51,iVar25,puVar56);
      iVar25 = (int)plVar35[1];
      *plVar35 = lVar51;
    }
    uVar39 = uStack_198._4_4_;
    *(uint *)(lVar51 + (long)iVar25 * 4) = param_2;
    *(uint *)(plVar35 + 1) = uVar26;
    if ((uint)uStack_198 == 0) goto LAB_02fc8490;
    uStack_198._0_4_ = (uint)uStack_198 - 1;
    param_2 = local_1a0[(int)(uint)uStack_198];
    lVar30 = *param_1;
  } while( true );
joined_r0x02fca114:
  if (uVar39 == 0) goto LAB_02fca234;
  lVar33 = lVar30 + (long)param_1;
  lVar4 = 0;
  if (lVar30 != 0) {
    lVar4 = lVar33;
  }
  puVar56 = (uint *)(lVar4 + uVar31 * 0x30 + 0x24);
  uVar39 = *puVar56;
  if (uVar39 != 0) {
    puVar55 = (uint *)(lVar4 + uVar31 * 0x30 + 0x28);
    uVar34 = *puVar55;
    pfVar22 = (float *)(lVar4 + (ulong)uVar39 * 0x30);
    pfVar46 = (float *)(lVar4 + (ulong)uVar34 * 0x30);
    auVar66._0_4_ = pfVar22[4] - *pfVar22;
    auVar66._4_4_ = pfVar22[5] - pfVar22[1];
    auVar66._8_4_ = pfVar22[6] - pfVar22[2];
    auVar66._12_4_ = pfVar22[7] - pfVar22[3];
    auVar60 = a64_TBL(ZEXT816(0),auVar66,auVar121);
    auVar89._0_4_ = pfVar46[4] - *pfVar46;
    auVar89._4_4_ = pfVar46[5] - pfVar46[1];
    auVar89._8_4_ = pfVar46[6] - pfVar46[2];
    auVar89._12_4_ = pfVar46[7] - pfVar46[3];
    auVar67._0_4_ = (auVar66._0_4_ + auVar66._0_4_) * auVar60._0_4_;
    auVar67._4_4_ = (auVar66._4_4_ + auVar66._4_4_) * auVar60._4_4_;
    auVar67._8_4_ = (auVar66._8_4_ + auVar66._8_4_) * auVar60._8_4_;
    auVar67._12_4_ = (auVar66._12_4_ + auVar66._12_4_) * auVar60._12_4_;
    auVar60 = NEON_ext(auVar67,auVar67,8,1);
    auVar95 = a64_TBL(ZEXT816(0),auVar89,auVar121);
    auVar80._0_4_ = (auVar89._0_4_ + auVar89._0_4_) * auVar95._0_4_;
    auVar80._4_4_ = (auVar89._4_4_ + auVar89._4_4_) * auVar95._4_4_;
    auVar80._8_4_ = (auVar89._8_4_ + auVar89._8_4_) * auVar95._8_4_;
    auVar80._12_4_ = (auVar89._12_4_ + auVar89._12_4_) * auVar95._12_4_;
    auVar95 = NEON_ext(auVar80,auVar80,8,1);
    if (auVar67._0_4_ + auVar67._4_4_ + auVar60._0_4_ <
        auVar80._0_4_ + auVar80._4_4_ + auVar95._0_4_) {
      *puVar56 = uVar34;
      *puVar55 = uVar39;
      lVar30 = *param_1;
      lVar33 = lVar30 + (long)param_1;
    }
  }
  lVar4 = 0;
  if (lVar30 != 0) {
    lVar4 = lVar33;
  }
  uVar39 = *(uint *)(lVar4 + uVar31 * 0x30 + 0x24);
  if (uVar39 == 0) {
    do {
      uVar34 = *(uint *)(lVar4 + uVar31 * 0x30 + 0x20);
      uVar40 = (ulong)uVar34;
      uVar28 = (uint)uVar31;
      if (uVar34 == uVar26) {
        bVar47 = 1;
        uVar40 = (ulong)uVar26;
        uVar34 = uVar26;
        goto joined_r0x02fca208;
      }
      uVar31 = uVar40;
    } while (*(uint *)(lVar4 + uVar40 * 0x30 + 0x28) == uVar28);
    bVar47 = 0;
joined_r0x02fca208:
    uVar39 = uVar28;
    if (uVar34 != 0) {
      uVar39 = *(uint *)(lVar4 + uVar40 * 0x30 + 0x28);
    }
    if ((bool)(bVar47 & uVar39 == uVar28)) goto LAB_02fca234;
  }
  uVar31 = (ulong)uVar39;
  goto joined_r0x02fca114;
LAB_02fc8490:
  uStack_198 = (ulong)uStack_198._4_4_ << 0x20;
  if ((-1 < (int)uVar39) && (local_1a0 != (uint *)0x0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_1a0,uVar39 << 2);
  }
  iVar25 = (int)param_4;
  local_1d0 = (undefined1 (*) [16])0x0;
  local_1c8 = 0x8000000000000000;
  local_1c0 = 0;
  local_1b8 = 0x8000000000000000;
  local_1b0 = 0;
  local_1a8 = 0x8000000000000000;
  if (iVar25 < 1) {
    uVar31 = 0;
    bVar18 = SBORROW4(0,iVar25);
    iVar20 = -iVar25;
    bVar19 = iVar25 == 0;
    if (iVar25 < 1) goto LAB_02fc8580;
  }
  else {
    local_1d0 = (undefined1 (*) [16])
                FUN_02fcb01c(puVar17,param_4 & 0xffffffff,0,0,(long)&local_1c8 + 4);
    uVar31 = local_1c8 & 0xffffffff;
    bVar18 = SBORROW4((int)local_1c8,iVar25);
    iVar20 = (int)local_1c8 - iVar25;
    bVar19 = (int)local_1c8 == iVar25;
    if (iVar25 <= (int)local_1c8) {
LAB_02fc8580:
      if (!bVar19 && iVar20 < 0 == bVar18) {
        uVar31 = -(uVar31 >> 0x1f) & 0xffffffc000000000 | uVar31 << 6;
        lVar51 = (-(param_4 >> 0x1f & 1) & 0xffffffc000000000 | (param_4 & 0xffffffff) << 6) -
                 uVar31;
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar25);
        plVar35 = (long *)(uVar31 + (long)local_1d0);
        do {
          plVar21 = plVar35 + -8;
          *(undefined4 *)(plVar35 + -7) = 0;
          if ((-1 < *(int *)((long)plVar35 + -0x34)) && (*plVar21 != 0)) {
            (**(code **)(*(long *)puVar17 + 0x18))
                      (puVar17,*plVar21,*(int *)((long)plVar35 + -0x34) << 2);
          }
          *plVar21 = 0;
          lVar51 = lVar51 + 0x40;
          *(undefined4 *)((long)plVar35 + -0x34) = 0x80000000;
          plVar35 = plVar21;
        } while (lVar51 != 0);
      }
      goto LAB_02fc85e8;
    }
  }
  uVar40 = -(uVar31 >> 0x1f) & 0xffffffc000000000 | uVar31 << 6;
  uVar31 = -(param_4 >> 0x1f & 1) & 0xffffffc000000000 | (param_4 & 0xffffffff) << 6;
  local_1c8 = CONCAT44(local_1c8._4_4_,iVar25);
  puVar41 = (undefined8 *)((long)local_1d0 + uVar40);
  uVar40 = (uVar31 - uVar40) - 0x40;
  uVar26 = ((uint)(uVar40 >> 6) & 0x3ffffff) + 1;
  if ((uVar26 & 3) != 0) {
    lVar51 = -((ulong)uVar26 & 3);
    puVar32 = puVar41;
    do {
      puVar41 = puVar32 + 8;
      *puVar32 = 0;
      puVar32[1] = 0x8000000000000000;
      bVar19 = lVar51 != -1;
      lVar51 = lVar51 + 1;
      puVar32 = puVar41;
    } while (bVar19);
  }
  if (0xbf < uVar40) {
    do {
      *puVar41 = 0;
      puVar41[1] = 0x8000000000000000;
      puVar41[8] = 0;
      puVar41[9] = 0x8000000000000000;
      puVar41[0x10] = 0;
      puVar41[0x11] = 0x8000000000000000;
      puVar41[0x18] = 0;
      puVar41[0x19] = 0x8000000000000000;
      puVar41 = puVar41 + 0x20;
    } while (puVar41 != (undefined8 *)((long)local_1d0 + uVar31));
  }
LAB_02fc85e8:
  if ((int)(local_1b8._4_4_ & 0x3fffffff) < iVar25) {
    local_1c0 = FUN_02fcb01c(puVar17,param_4 & 0xffffffff,local_1c0,local_1b8 & 0xffffffff,
                             (long)&local_1b8 + 4);
  }
  lVar51 = (long)(int)local_1b8;
  if ((int)local_1b8 < iVar25) {
    uVar31 = -(param_4 >> 0x1f & 1) & 0xffffffc000000000 | (param_4 & 0xffffffff) << 6;
    puVar41 = (undefined8 *)(local_1c0 + lVar51 * 0x40);
    uVar40 = (uVar31 + lVar51 * -0x40) - 0x40;
    uVar26 = ((uint)(uVar40 >> 6) & 0x3ffffff) + 1;
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar25);
    if ((uVar26 & 3) != 0) {
      lVar51 = -((ulong)uVar26 & 3);
      puVar32 = puVar41;
      do {
        puVar41 = puVar32 + 8;
        *puVar32 = 0;
        puVar32[1] = 0x8000000000000000;
        bVar19 = lVar51 != -1;
        lVar51 = lVar51 + 1;
        puVar32 = puVar41;
      } while (bVar19);
    }
    if (0xbf < uVar40) {
      do {
        *puVar41 = 0;
        puVar41[1] = 0x8000000000000000;
        puVar41[8] = 0;
        puVar41[9] = 0x8000000000000000;
        puVar41[0x10] = 0;
        puVar41[0x11] = 0x8000000000000000;
        puVar41[0x18] = 0;
        puVar41[0x19] = 0x8000000000000000;
        puVar41 = puVar41 + 0x20;
      } while (puVar41 != (undefined8 *)(local_1c0 + uVar31));
    }
  }
  else if (iVar25 < (int)local_1b8) {
    lVar30 = (-(param_4 >> 0x1f & 1) & 0xffffffc000000000 | (param_4 & 0xffffffff) << 6) +
             lVar51 * -0x40;
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar25);
    plVar35 = (long *)(lVar51 * 0x40 + local_1c0);
    do {
      plVar21 = plVar35 + -8;
      *(undefined4 *)(plVar35 + -7) = 0;
      if ((-1 < *(int *)((long)plVar35 + -0x34)) && (*plVar21 != 0)) {
        (**(code **)(*(long *)puVar17 + 0x18))
                  (puVar17,*plVar21,*(int *)((long)plVar35 + -0x34) << 2);
      }
      *plVar21 = 0;
      lVar30 = lVar30 + 0x40;
      *(undefined4 *)((long)plVar35 + -0x34) = 0x80000000;
      plVar35 = plVar21;
    } while (lVar30 != 0);
  }
  fVar57 = (float)iVar25;
  fVar58 = (float)(iVar25 + -1);
  if ((int)(local_1a8._4_4_ & 0x3fffffff) < iVar25) {
    local_1b0 = FUN_02fcb01c(puVar17,param_4 & 0xffffffff,local_1b0,local_1a8 & 0xffffffff,
                             (long)&local_1a8 + 4);
  }
  lVar51 = (long)(int)local_1a8;
  if ((int)local_1a8 < iVar25) {
    uVar31 = -(param_4 >> 0x1f & 1) & 0xffffffc000000000 | (param_4 & 0xffffffff) << 6;
    puVar41 = (undefined8 *)(local_1b0 + lVar51 * 0x40);
    uVar40 = (uVar31 + lVar51 * -0x40) - 0x40;
    uVar26 = ((uint)(uVar40 >> 6) & 0x3ffffff) + 1;
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar25);
    if ((uVar26 & 3) != 0) {
      lVar51 = -((ulong)uVar26 & 3);
      puVar32 = puVar41;
      do {
        puVar41 = puVar32 + 8;
        *puVar32 = 0;
        puVar32[1] = 0x8000000000000000;
        bVar19 = lVar51 != -1;
        lVar51 = lVar51 + 1;
        puVar32 = puVar41;
      } while (bVar19);
    }
    if (0xbf < uVar40) {
      do {
        *puVar41 = 0;
        puVar41[1] = 0x8000000000000000;
        puVar41[8] = 0;
        puVar41[9] = 0x8000000000000000;
        puVar41[0x10] = 0;
        puVar41[0x11] = 0x8000000000000000;
        puVar41[0x18] = 0;
        puVar41[0x19] = 0x8000000000000000;
        puVar41 = puVar41 + 0x20;
      } while (puVar41 != (undefined8 *)(local_1b0 + uVar31));
    }
  }
  else if (iVar25 < (int)local_1a8) {
    lVar30 = (-(param_4 >> 0x1f & 1) & 0xffffffc000000000 | (param_4 & 0xffffffff) << 6) +
             lVar51 * -0x40;
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar25);
    plVar35 = (long *)(lVar51 * 0x40 + local_1b0);
    do {
      plVar21 = plVar35 + -8;
      *(undefined4 *)(plVar35 + -7) = 0;
      if ((-1 < *(int *)((long)plVar35 + -0x34)) && (*plVar21 != 0)) {
        (**(code **)(*(long *)puVar17 + 0x18))
                  (puVar17,*plVar21,*(int *)((long)plVar35 + -0x34) << 2);
      }
      *plVar21 = 0;
      lVar30 = lVar30 + 0x40;
      *(undefined4 *)((long)plVar35 + -0x34) = 0x80000000;
      plVar35 = plVar21;
    } while (lVar30 != 0);
  }
  uVar16 = _UNK_03889f38;
  uVar15 = _DAT_03889f30;
  auVar95._8_4_ = 0x7f7fffee;
  auVar95._0_8_ = 0x7f7fffee7f7fffee;
  auVar95._12_4_ = 0x7f7fffee;
  uVar26 = 0;
  uVar83 = auVar95._8_8_;
  auVar60._8_8_ = uVar83;
  auVar60._0_8_ = 0x7f7fffee7f7fffee;
  do {
    plVar35 = local_78;
    local_190 = 0xffffffff00000000;
    local_1a0 = (uint *)0x0;
    uStack_198 = 0x8000000000000000;
    lVar51 = (long)(int)local_70 + -1;
    ppuVar52 = (uint **)(local_78 + lVar51 * 3);
    if (ppuVar52 != &local_1a0) {
      auVar60 = FUN_032bcf84(auVar60,puVar17,&local_1a0,4);
      piVar53 = (int *)((long)plVar35 + lVar51 * 0x18 + 0xc);
      if (*piVar53 < 0) {
        auVar60 = FUN_032bcf84(puVar17,ppuVar52,4);
      }
      puVar56 = local_1a0;
      local_1a0 = *ppuVar52;
      *ppuVar52 = puVar56;
      lVar30 = plVar35[lVar51 * 3 + 1];
      iVar20 = uStack_198._4_4_;
      *(uint *)(plVar35 + lVar51 * 3 + 1) = (uint)uStack_198;
      uStack_198 = CONCAT44(*piVar53,(int)lVar30);
      *piVar53 = iVar20;
      lVar51 = (long)(int)local_70 + -1;
    }
    iVar90 = (int)local_70;
    plVar35 = local_78;
    local_190 = local_78[lVar51 * 3 + 2];
    *(undefined4 *)(local_78 + (long)(int)local_70 * 3 + -2) = 0;
    iVar20 = *(int *)((long)local_78 + (long)(int)local_70 * 0x18 + -0xc);
    if ((-1 < iVar20) && (local_78[(long)(int)local_70 * 3 + -3] != 0)) {
      auVar60 = (**(code **)(*(long *)puVar17 + 0x18))
                          (puVar17,local_78[(long)(int)local_70 * 3 + -3],iVar20 << 2);
    }
    plVar35[(long)iVar90 * 3 + -3] = 0;
    *(undefined4 *)((long)plVar35 + (long)iVar90 * 0x18 + -0xc) = 0x80000000;
    uVar31 = uStack_198 & 0xffffffff;
    local_70._0_4_ = (int)local_70 + -1;
    if (param_5 < (int)(uint)uStack_198) {
LAB_02fc8c18:
      auVar129._8_8_ = uVar83;
      auVar129._0_8_ = 0x7f7fffee7f7fffee;
      auVar102._8_4_ = 0xff7fffee;
      auVar102._0_8_ = 0xff7fffeeff7fffee;
      auVar102._12_4_ = 0xff7fffee;
      if (0 < (int)(uint)uStack_198) {
        auVar129._0_8_ = 0x7f7fffee7f7fffee;
        auVar102._8_4_ = 0xff7fffee;
        auVar102._0_8_ = 0xff7fffeeff7fffee;
        auVar102._12_4_ = 0xff7fffee;
        lVar51 = 0;
        if (*param_1 != 0) {
          lVar51 = *param_1 + (long)param_1;
        }
        lVar30 = 0;
        if ((uint)uStack_198 != 1) {
          auVar129._0_8_ = 0x7f7fffee7f7fffee;
          auVar102._8_4_ = 0xff7fffee;
          auVar102._0_8_ = 0xff7fffeeff7fffee;
          auVar102._12_4_ = 0xff7fffee;
          lVar30 = 0;
          do {
            puVar56 = local_1a0 + lVar30;
            lVar30 = lVar30 + 2;
            pauVar24 = (undefined1 (*) [16])(lVar51 + (ulong)*puVar56 * 0x30);
            pauVar23 = (undefined1 (*) [16])(lVar51 + (ulong)puVar56[1] * 0x30);
            auVar95 = NEON_fmax(auVar102,pauVar24[1],4);
            auVar60 = NEON_fmin(auVar129,*pauVar24,4);
            auVar102 = NEON_fmax(auVar95,pauVar23[1],4);
            auVar129 = NEON_fmin(auVar60,*pauVar23,4);
          } while (uVar31 - (uStack_198 & 1) != lVar30);
        }
        if ((uStack_198 & 1) != 0) {
          pauVar23 = (undefined1 (*) [16])(lVar51 + (ulong)local_1a0[lVar30] * 0x30);
          auVar102 = NEON_fmax(auVar102,pauVar23[1],4);
          auVar129 = NEON_fmin(auVar129,*pauVar23,4);
        }
      }
      uVar39 = *(uint *)(param_1 + 2);
      fStack_298 = auVar129._8_4_;
      fStack_294 = auVar129._12_4_;
      local_2a0 = auVar129._0_4_;
      fStack_29c = auVar129._4_4_;
      local_210 = auVar102._0_4_;
      fStack_20c = auVar102._4_4_;
      if (uVar39 == 0) {
        bVar19 = true;
        iVar20 = FUN_02fc7c84(param_1,1);
        if (iVar20 < 0) {
          auVar60 = extraout_q0_04;
          goto LAB_02fc8a00;
        }
        uVar39 = *(uint *)(param_1 + 2);
      }
      auVar107._0_4_ = local_210 - local_2a0;
      auVar107._4_4_ = fStack_20c - fStack_29c;
      auVar107._8_4_ = auVar102._8_4_ - fStack_298;
      auVar107._12_4_ = auVar102._12_4_ - fStack_294;
      auVar60 = NEON_frecpe(auVar107,4);
      iVar20 = -(uint)(auVar107._0_4_ == 0.0);
      iVar90 = -(uint)(auVar107._4_4_ == 0.0);
      iVar92 = -(uint)(auVar107._8_4_ == 0.0);
      auVar95 = NEON_frecps(auVar107,auVar60,4);
      lVar51 = *param_1 + (long)param_1;
      auVar123._0_4_ = auVar60._0_4_ * auVar95._0_4_;
      auVar123._4_4_ = auVar60._4_4_ * auVar95._4_4_;
      auVar123._8_4_ = auVar60._8_4_ * auVar95._8_4_;
      auVar123._12_4_ = auVar60._12_4_ * auVar95._12_4_;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = lVar51;
      }
      puVar41 = (undefined8 *)(lVar30 + (ulong)uVar39 * 0x30);
      auVar60 = NEON_frecps(auVar107,auVar123,4);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar51 + (long)(int)uVar39 * 0x30);
      fVar68 = auVar123._0_4_ * auVar60._0_4_;
      fVar69 = auVar123._4_4_ * auVar60._4_4_;
      fVar72 = auVar123._8_4_ * auVar60._8_4_;
      puVar41[1] = auVar129._8_8_;
      *puVar41 = auVar129._0_8_;
      puVar41[3] = auVar102._8_8_;
      puVar41[2] = auVar102._0_8_;
      lVar51 = 0;
      if (*param_1 != 0) {
        lVar51 = *param_1 + (long)param_1;
      }
      *(undefined4 *)(lVar51 + (ulong)uVar39 * 0x30 + 0x20) = (undefined4)local_190;
      uVar71 = CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                        CONCAT12((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                 CONCAT11((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                          SUB41(fVar68,0) & ~(byte)iVar20)));
      auVar74._0_8_ =
           CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                    CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10),
                             CONCAT15((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar90 >> 8),
                                      CONCAT14(SUB41(fVar69,0) & ~(byte)iVar90,uVar71))));
      auVar74[8] = SUB41(fVar72,0) & ~(byte)iVar92;
      auVar74[9] = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar92 >> 8);
      auVar74[10] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
      auVar74[0xb] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
      uVar34 = uVar39;
      if (local_190._4_4_ != -1) {
        lVar51 = 0;
        if (*param_1 != 0) {
          lVar51 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar51 + (local_190 & 0xffffffff) * 0x30 + (long)local_190._4_4_ * 4 + 0x24) =
             uVar39;
        uVar34 = uVar26;
      }
      iVar20 = (int)local_70 + 2;
      if ((int)(local_70._4_4_ & 0x3fffffff) < iVar20) {
        uVar8 = auVar74._8_4_;
        fStack_20c = (float)((ulong)auVar74._0_8_ >> 0x20);
        local_78 = (long *)FUN_02fcae24(puVar17);
        auVar74._4_4_ = fStack_20c;
        auVar74._0_4_ = uVar71;
        auVar74._8_4_ = uVar8;
        iVar20 = (int)local_70 + 2;
      }
      plVar21 = local_78;
      plVar50 = local_78 + (long)(int)local_70 * 3;
      lVar51 = (long)(int)local_70;
      local_70._0_4_ = iVar20;
      plVar35 = plVar50;
      do {
        *plVar35 = 0;
        plVar35[1] = -0x8000000000000000;
        plVar35[2] = -0x100000000;
        plVar35 = plVar35 + 3;
      } while (plVar35 != local_78 + (long)iVar20 * 3);
      *(uint *)(local_78 + lVar51 * 3 + 2) = uVar39;
      *(undefined4 *)((long)local_78 + lVar51 * 0x18 + 0x14) = 0;
      *(uint *)(plVar50 + 5) = uVar39;
      *(undefined4 *)((long)plVar50 + 0x2c) = 1;
      uVar39 = (uint)uStack_198;
      puVar56 = (uint *)((long)local_78 + lVar51 * 0x18 + 0xc);
      uVar26 = *puVar56;
      plVar35 = plVar50 + 3;
      if ((int)(uVar26 & 0x3fffffff) < (int)(uint)uStack_198) {
        lVar33 = *plVar50;
        lVar30 = local_78[lVar51 * 3 + 1];
        if (0x3fffffff < (int)(uint)uStack_198) {
          FUN_032bd0a8(uStack_198 & 0xffffffff);
          uVar26 = *puVar56;
        }
        uVar26 = (uVar26 & 0x3fffffff) * 2;
        if (uVar26 < 0x3fffffff) {
          if ((int)uVar39 <= (int)uVar26) goto LAB_02fca654;
        }
        else {
          uVar26 = 0x3fffffff;
          if ((int)uVar39 < 0x40000000) {
LAB_02fca654:
            uVar39 = uVar26;
          }
        }
        lVar30 = FUN_032bd1d4(puVar17,uVar39,4,lVar33,(int)lVar30,puVar56);
        *plVar50 = lVar30;
        uVar39 = (uint)uStack_198;
      }
      puVar55 = (uint *)((long)plVar50 + 0x24);
      uVar26 = *puVar55;
      if ((int)(uVar26 & 0x3fffffff) < (int)uVar39) {
        lVar33 = *plVar35;
        lVar30 = plVar50[4];
        if (0x3fffffff < (int)uVar39) {
          FUN_032bd0a8(uVar39);
          uVar26 = *puVar55;
        }
        uVar26 = (uVar26 & 0x3fffffff) * 2;
        if (uVar26 < 0x3fffffff) {
          if ((int)uVar39 <= (int)uVar26) goto LAB_02fca67c;
        }
        else {
          uVar26 = 0x3fffffff;
          if ((int)uVar39 < 0x40000000) {
LAB_02fca67c:
            uVar39 = uVar26;
          }
        }
        lVar30 = FUN_032bd1d4(puVar17,uVar39,4,lVar33,(int)lVar30,puVar55);
        *plVar35 = lVar30;
      }
      auVar127._8_4_ = 0xff7fffee;
      auVar127._0_8_ = 0xff7fffeeff7fffee;
      auVar127._12_4_ = 0xff7fffee;
      uVar70 = auVar127._8_8_;
      if (0 < iVar25) {
        lVar30 = 0x30;
        uVar31 = param_4 & 0xffffffff;
        do {
          puVar54 = (undefined4 *)((long)local_1d0 + lVar30);
          puVar54[-10] = 0;
          *(undefined8 *)(puVar54 + -6) = uVar83;
          *(undefined8 *)(puVar54 + -8) = 0x7f7fffee7f7fffee;
          *(undefined8 *)(puVar54 + -2) = uVar70;
          *(undefined8 *)(puVar54 + -4) = 0xff7fffeeff7fffee;
          *puVar54 = 0;
          puVar54 = (undefined4 *)(local_1c0 + lVar30);
          puVar54[-10] = 0;
          *(undefined8 *)(puVar54 + -6) = uVar83;
          *(undefined8 *)(puVar54 + -8) = 0x7f7fffee7f7fffee;
          *(undefined8 *)(puVar54 + -2) = uVar70;
          *(undefined8 *)(puVar54 + -4) = 0xff7fffeeff7fffee;
          *puVar54 = 0;
          puVar54 = (undefined4 *)(local_1b0 + lVar30);
          uVar31 = uVar31 - 1;
          lVar30 = lVar30 + 0x40;
          puVar54[-10] = 0;
          *puVar54 = 0;
          *(undefined8 *)(puVar54 + -6) = uVar83;
          *(undefined8 *)(puVar54 + -8) = 0x7f7fffee7f7fffee;
          *(undefined8 *)(puVar54 + -2) = uVar70;
          *(undefined8 *)(puVar54 + -4) = 0xff7fffeeff7fffee;
        } while (uVar31 != 0);
      }
      auVar59 = SUB1612(ZEXT816(0),0);
      auVar75._4_4_ = fVar57;
      auVar75._0_4_ = fVar57;
      auVar75._8_4_ = fVar57;
      if (0 < (int)(uint)uStack_198) {
        auVar128._4_4_ = fVar57;
        auVar128._0_4_ = fVar57;
        auVar128._8_4_ = fVar57;
        auVar128._12_4_ = fVar57;
        auVar60 = ZEXT816(0);
        lVar30 = 0;
        do {
          lVar33 = 0;
          if (*param_1 != 0) {
            lVar33 = *param_1 + (long)param_1;
          }
          pauVar23 = (undefined1 (*) [16])(lVar33 + (ulong)local_1a0[lVar30] * 0x30);
          auVar95 = *pauVar23;
          auVar129 = pauVar23[1];
          auVar61._0_4_ =
               fVar57 * auVar74._0_4_ * ((auVar95._0_4_ + auVar129._0_4_) * 0.5 - local_2a0) + 0.5;
          auVar61._4_4_ =
               fVar57 * auVar74._4_4_ * ((auVar95._4_4_ + auVar129._4_4_) * 0.5 - fStack_29c) + 0.5;
          auVar61._8_4_ =
               fVar57 * auVar74._8_4_ * ((auVar95._8_4_ + auVar129._8_4_) * 0.5 - fStack_298) + 0.5;
          auVar61._12_4_ =
               fVar57 * 0.0 * ((auVar95._12_4_ + auVar129._12_4_) * 0.5 - fStack_294) + 0.5;
          auVar102 = NEON_fmax(auVar61,ZEXT816(0),4);
          auVar130._4_4_ = fVar58;
          auVar130._0_4_ = fVar58;
          auVar130._8_4_ = fVar58;
          auVar130._12_4_ = fVar58;
          auVar102 = NEON_fmin(auVar102,auVar130,4);
          auVar85._0_8_ = CONCAT44((int)auVar102._4_4_,(int)auVar102._0_4_);
          auVar85._8_4_ = (int)auVar102._8_4_;
          auVar85._12_4_ = (int)auVar102._12_4_;
          plVar3 = (long *)((long)local_1d0 + (long)(int)auVar102._0_4_ * 0x40);
          auVar107 = NEON_fmin(*(undefined1 (*) [16])(plVar3 + 2),auVar95,4);
          plVar3[3] = auVar107._8_8_;
          plVar3[2] = auVar107._0_8_;
          auVar107 = NEON_fmax(*(undefined1 (*) [16])(plVar3 + 4),auVar129,4);
          plVar3[5] = auVar107._8_8_;
          plVar3[4] = auVar107._0_8_;
          plVar48 = plVar3 + 1;
          iVar90 = (int)*plVar48;
          iVar20 = iVar90 + 1;
          puVar49 = (uint *)((long)plVar3 + 0xc);
          uVar26 = *puVar49;
          if (iVar90 < (int)(uVar26 & 0x3fffffff)) {
            lVar33 = *plVar3;
          }
          else {
            lVar33 = *plVar3;
            if (0x3ffffffe < iVar90) {
              FUN_032bd0a8(iVar20);
              uVar26 = *puVar49;
            }
            uVar26 = (uVar26 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar26) {
              uVar26 = 0x3fffffff;
            }
            if ((int)uVar26 < iVar20) {
              uVar26 = iVar90 + 1;
            }
            lVar33 = FUN_032bd1d4(puVar17,uVar26,4,lVar33,iVar90,puVar49);
            *plVar3 = lVar33;
            iVar90 = (int)*plVar48;
            auVar85._8_8_ = auVar85._8_8_;
            iVar20 = iVar90 + 1;
          }
          *(uint *)(lVar33 + (long)iVar90 * 4) = local_1a0[lVar30];
          *(int *)plVar48 = iVar20;
          plVar3 = (long *)(local_1c0 + (long)(int)auVar102._4_4_ * 0x40);
          auVar107 = NEON_fmin(*(undefined1 (*) [16])(plVar3 + 2),auVar95,4);
          plVar3[3] = auVar107._8_8_;
          plVar3[2] = auVar107._0_8_;
          auVar107 = NEON_fmax(*(undefined1 (*) [16])(plVar3 + 4),auVar129,4);
          plVar3[5] = auVar107._8_8_;
          plVar3[4] = auVar107._0_8_;
          plVar48 = plVar3 + 1;
          iVar90 = (int)*plVar48;
          iVar20 = iVar90 + 1;
          puVar49 = (uint *)((long)plVar3 + 0xc);
          uVar26 = *puVar49;
          if (iVar90 < (int)(uVar26 & 0x3fffffff)) {
            lVar33 = *plVar3;
          }
          else {
            lVar33 = *plVar3;
            if (0x3ffffffe < iVar90) {
              FUN_032bd0a8(iVar20);
              uVar26 = *puVar49;
            }
            uVar26 = (uVar26 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar26) {
              uVar26 = 0x3fffffff;
            }
            if ((int)uVar26 < iVar20) {
              uVar26 = iVar90 + 1;
            }
            lVar33 = FUN_032bd1d4(puVar17,uVar26,4,lVar33,iVar90,puVar49);
            *plVar3 = lVar33;
            iVar90 = (int)*plVar48;
            iVar20 = iVar90 + 1;
          }
          *(uint *)(lVar33 + (long)iVar90 * 4) = local_1a0[lVar30];
          *(int *)plVar48 = iVar20;
          plVar3 = (long *)(local_1b0 + (long)auVar85._8_4_ * 0x40);
          auVar95 = NEON_fmin(*(undefined1 (*) [16])(plVar3 + 2),auVar95,4);
          plVar3[3] = auVar95._8_8_;
          plVar3[2] = auVar95._0_8_;
          auVar95 = NEON_fmax(*(undefined1 (*) [16])(plVar3 + 4),auVar129,4);
          plVar3[5] = auVar95._8_8_;
          plVar3[4] = auVar95._0_8_;
          plVar48 = plVar3 + 1;
          iVar90 = (int)*plVar48;
          iVar20 = iVar90 + 1;
          puVar49 = (uint *)((long)plVar3 + 0xc);
          uVar26 = *puVar49;
          if (iVar90 < (int)(uVar26 & 0x3fffffff)) {
            lVar33 = *plVar3;
          }
          else {
            lVar33 = *plVar3;
            if (0x3ffffffe < iVar90) {
              FUN_032bd0a8(iVar20);
              uVar26 = *puVar49;
            }
            uVar26 = (uVar26 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar26) {
              uVar26 = 0x3fffffff;
            }
            if ((int)uVar26 < iVar20) {
              uVar26 = iVar90 + 1;
            }
            lVar33 = FUN_032bd1d4(puVar17,uVar26,4,lVar33,iVar90,puVar49);
            *plVar3 = lVar33;
            iVar90 = (int)*plVar48;
            iVar20 = iVar90 + 1;
          }
          puVar49 = local_1a0 + lVar30;
          lVar30 = lVar30 + 1;
          auVar60 = NEON_fmax(auVar102,auVar60,4);
          auVar59 = auVar60._0_12_;
          auVar128 = NEON_fmin(auVar102,auVar128,4);
          auVar75 = auVar128._0_12_;
          *(uint *)(lVar33 + (long)iVar90 * 4) = *puVar49;
          *(int *)plVar48 = iVar20;
        } while (lVar30 < (int)(uint)uStack_198);
      }
      uVar26 = (uint)auVar75._0_4_;
      uVar31 = (ulong)uVar26;
      uVar39 = (uint)auVar59._0_4_;
      if ((int)uVar39 < (int)uVar26) {
        auVar60 = ZEXT816(0x7f7fffee);
        uVar40 = 0xffffffff;
      }
      else {
        auVar9._8_8_ = uVar16;
        auVar9._0_8_ = uVar15;
        auVar62._8_4_ = 0x7f7fffee;
        auVar62._0_8_ = 0x7f7fffee7f7fffee;
        auVar62._12_4_ = 0x7f7fffee;
        auVar76._8_4_ = 0xff7fffee;
        auVar76._0_8_ = 0xff7fffeeff7fffee;
        auVar76._12_4_ = 0xff7fffee;
        auVar100._8_8_ = auVar62._8_8_;
        auVar100._0_8_ = 0x7f7fffee7f7fffee;
        uVar38 = -(ulong)(uVar39 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar39 << 6;
        lVar33 = (long)(int)uVar26 + -1;
        uVar40 = -(ulong)(uVar26 >> 0x1f) & 0xffffffc000000000 | uVar31 << 6;
        auVar86._8_8_ = auVar76._8_8_;
        auVar86._0_8_ = 0xff7fffeeff7fffee;
        iVar20 = 0;
        iVar90 = 0;
        lVar30 = lVar33;
        do {
          lVar4 = (long)local_1d0 + uVar40;
          lVar6 = (long)local_1d0 + uVar38;
          auVar86 = NEON_fmax(auVar86,*(undefined1 (*) [16])(lVar4 + 0x20),4);
          iVar20 = *(int *)(lVar4 + 8) + iVar20;
          auVar100 = NEON_fmin(auVar100,*(undefined1 (*) [16])(lVar4 + 0x10),4);
          iVar90 = *(int *)(lVar6 + 8) + iVar90;
          auVar76 = NEON_fmax(auVar76,*(undefined1 (*) [16])(lVar6 + 0x20),4);
          auVar111._0_4_ = auVar86._0_4_ - auVar100._0_4_;
          auVar111._4_4_ = auVar86._4_4_ - auVar100._4_4_;
          auVar111._8_4_ = auVar86._8_4_ - auVar100._8_4_;
          auVar111._12_4_ = auVar86._12_4_ - auVar100._12_4_;
          lVar30 = lVar30 + 1;
          auVar62 = NEON_fmin(auVar62,*(undefined1 (*) [16])(lVar6 + 0x10),4);
          uVar38 = uVar38 - 0x40;
          uVar40 = uVar40 + 0x40;
          auVar60 = a64_TBL(ZEXT816(0),auVar111,auVar9);
          auVar112._0_4_ = (auVar111._0_4_ + auVar111._0_4_) * auVar60._0_4_;
          auVar112._4_4_ = (auVar111._4_4_ + auVar111._4_4_) * auVar60._4_4_;
          auVar112._8_4_ = (auVar111._8_4_ + auVar111._8_4_) * auVar60._8_4_;
          auVar112._12_4_ = (auVar111._12_4_ + auVar111._12_4_) * auVar60._12_4_;
          auVar95 = NEON_ext(auVar112,auVar112,8,1);
          auVar117._0_4_ = auVar76._0_4_ - auVar62._0_4_;
          auVar117._4_4_ = auVar76._4_4_ - auVar62._4_4_;
          auVar117._8_4_ = auVar76._8_4_ - auVar62._8_4_;
          auVar117._12_4_ = auVar76._12_4_ - auVar62._12_4_;
          auVar60 = a64_TBL(ZEXT816(0),auVar117,auVar9);
          auVar118._0_4_ = (auVar117._0_4_ + auVar117._0_4_) * auVar60._0_4_;
          auVar118._4_4_ = (auVar117._4_4_ + auVar117._4_4_) * auVar60._4_4_;
          auVar118._8_4_ = (auVar117._8_4_ + auVar117._8_4_) * auVar60._8_4_;
          auVar118._12_4_ = (auVar117._12_4_ + auVar117._12_4_) * auVar60._12_4_;
          auVar60 = NEON_ext(auVar118,auVar118,8,1);
          *(float *)(lVar4 + 0x30) =
               *(float *)(lVar4 + 0x30) +
               (float)iVar20 * (auVar112._0_4_ + auVar112._4_4_ + auVar95._0_4_);
          *(float *)(lVar6 + 0x30) =
               *(float *)(lVar6 + 0x30) +
               (float)iVar90 * (auVar118._0_4_ + auVar118._4_4_ + auVar60._0_4_);
        } while (lVar30 < (int)uVar39);
        auVar60 = ZEXT816(0x7f7fffee);
        lVar30 = (long)local_1d0 + (long)(int)uVar26 * 0x40;
        uVar40 = 0xffffffff;
        fVar68 = *(float *)(lVar30 + 8);
        pfVar22 = (float *)(lVar30 + 0x30);
        while( true ) {
          if (fVar68 != 0.0) {
            if (*pfVar22 < auVar60._0_4_) {
              uVar40 = uVar31;
              auVar60 = ZEXT416((uint)*pfVar22);
            }
          }
          lVar33 = lVar33 + 1;
          uVar31 = (ulong)((int)uVar31 + 1);
          if ((int)uVar39 <= lVar33) break;
          fVar68 = pfVar22[6];
          pfVar22 = pfVar22 + 0x10;
        }
      }
      uVar26 = (uint)auVar75._4_4_;
      uVar31 = (ulong)uVar26;
      uVar39 = (uint)auVar59._4_4_;
      if ((int)uVar39 < (int)uVar26) {
        iVar20 = 0;
      }
      else {
        auVar10._8_8_ = uVar16;
        auVar10._0_8_ = uVar15;
        auVar94._8_4_ = 0x7f7fffee;
        auVar94._0_8_ = 0x7f7fffee7f7fffee;
        auVar94._12_4_ = 0x7f7fffee;
        auVar97._8_4_ = 0xff7fffee;
        auVar97._0_8_ = 0xff7fffeeff7fffee;
        auVar97._12_4_ = 0xff7fffee;
        auVar104._8_8_ = auVar94._8_8_;
        auVar104._0_8_ = 0x7f7fffee7f7fffee;
        uVar44 = -(ulong)(uVar39 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar39 << 6;
        lVar33 = (long)(int)uVar26 + -1;
        uVar38 = -(ulong)(uVar26 >> 0x1f) & 0xffffffc000000000 | uVar31 << 6;
        auVar101._8_8_ = auVar97._8_8_;
        auVar101._0_8_ = 0xff7fffeeff7fffee;
        iVar20 = 0;
        iVar90 = 0;
        lVar30 = lVar33;
        do {
          lVar4 = local_1c0 + uVar38;
          lVar6 = local_1c0 + uVar44;
          auVar101 = NEON_fmax(auVar101,*(undefined1 (*) [16])(lVar4 + 0x20),4);
          iVar20 = *(int *)(lVar4 + 8) + iVar20;
          auVar104 = NEON_fmin(auVar104,*(undefined1 (*) [16])(lVar4 + 0x10),4);
          iVar90 = *(int *)(lVar6 + 8) + iVar90;
          auVar97 = NEON_fmax(auVar97,*(undefined1 (*) [16])(lVar6 + 0x20),4);
          auVar119._0_4_ = auVar101._0_4_ - auVar104._0_4_;
          auVar119._4_4_ = auVar101._4_4_ - auVar104._4_4_;
          auVar119._8_4_ = auVar101._8_4_ - auVar104._8_4_;
          auVar119._12_4_ = auVar101._12_4_ - auVar104._12_4_;
          lVar30 = lVar30 + 1;
          auVar94 = NEON_fmin(auVar94,*(undefined1 (*) [16])(lVar6 + 0x10),4);
          uVar44 = uVar44 - 0x40;
          uVar38 = uVar38 + 0x40;
          auVar95 = a64_TBL(ZEXT816(0),auVar119,auVar10);
          auVar120._0_4_ = (auVar119._0_4_ + auVar119._0_4_) * auVar95._0_4_;
          auVar120._4_4_ = (auVar119._4_4_ + auVar119._4_4_) * auVar95._4_4_;
          auVar120._8_4_ = (auVar119._8_4_ + auVar119._8_4_) * auVar95._8_4_;
          auVar120._12_4_ = (auVar119._12_4_ + auVar119._12_4_) * auVar95._12_4_;
          auVar129 = NEON_ext(auVar120,auVar120,8,1);
          auVar125._0_4_ = auVar97._0_4_ - auVar94._0_4_;
          auVar125._4_4_ = auVar97._4_4_ - auVar94._4_4_;
          auVar125._8_4_ = auVar97._8_4_ - auVar94._8_4_;
          auVar125._12_4_ = auVar97._12_4_ - auVar94._12_4_;
          auVar95 = a64_TBL(ZEXT816(0),auVar125,auVar10);
          auVar126._0_4_ = (auVar125._0_4_ + auVar125._0_4_) * auVar95._0_4_;
          auVar126._4_4_ = (auVar125._4_4_ + auVar125._4_4_) * auVar95._4_4_;
          auVar126._8_4_ = (auVar125._8_4_ + auVar125._8_4_) * auVar95._8_4_;
          auVar126._12_4_ = (auVar125._12_4_ + auVar125._12_4_) * auVar95._12_4_;
          auVar95 = NEON_ext(auVar126,auVar126,8,1);
          *(float *)(lVar4 + 0x30) =
               *(float *)(lVar4 + 0x30) +
               (float)iVar20 * (auVar120._0_4_ + auVar120._4_4_ + auVar129._0_4_);
          *(float *)(lVar6 + 0x30) =
               *(float *)(lVar6 + 0x30) +
               (float)iVar90 * (auVar126._0_4_ + auVar126._4_4_ + auVar95._0_4_);
        } while (lVar30 < (int)uVar39);
        lVar30 = local_1c0 + (long)(int)uVar26 * 0x40;
        iVar20 = 0;
        fVar68 = *(float *)(lVar30 + 8);
        pfVar22 = (float *)(lVar30 + 0x30);
        while( true ) {
          if (fVar68 != 0.0) {
            if (*pfVar22 < auVar60._0_4_) {
              iVar20 = 1;
              uVar40 = uVar31;
              auVar60 = ZEXT416((uint)*pfVar22);
            }
          }
          lVar33 = lVar33 + 1;
          uVar31 = (ulong)((int)uVar31 + 1);
          if ((int)uVar39 <= lVar33) break;
          fVar68 = pfVar22[6];
          pfVar22 = pfVar22 + 0x10;
        }
      }
      uVar26 = (uint)auVar75._8_4_;
      uVar31 = (ulong)uVar26;
      uVar39 = (uint)auVar59._8_4_;
      if ((int)uVar26 <= (int)uVar39) {
        auVar87._8_8_ = uVar83;
        auVar87._0_8_ = 0x7f7fffee7f7fffee;
        auVar77._8_4_ = 0xff7fffee;
        auVar77._0_8_ = 0xff7fffeeff7fffee;
        auVar77._12_4_ = 0xff7fffee;
        auVar11._8_8_ = uVar16;
        auVar11._0_8_ = uVar15;
        uVar44 = -(ulong)(uVar39 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar39 << 6;
        lVar33 = (long)(int)uVar26 + -1;
        iVar90 = 0;
        iVar92 = 0;
        uVar38 = -(ulong)(uVar26 >> 0x1f) & 0xffffffc000000000 | uVar31 << 6;
        lVar30 = lVar33;
        auVar95 = auVar77;
        auVar129 = auVar87;
        do {
          lVar4 = local_1b0 + uVar38;
          lVar6 = local_1b0 + uVar44;
          auVar95 = NEON_fmax(auVar95,*(undefined1 (*) [16])(lVar4 + 0x20),4);
          iVar90 = *(int *)(lVar4 + 8) + iVar90;
          auVar129 = NEON_fmin(auVar129,*(undefined1 (*) [16])(lVar4 + 0x10),4);
          iVar92 = *(int *)(lVar6 + 8) + iVar92;
          auVar77 = NEON_fmax(auVar77,*(undefined1 (*) [16])(lVar6 + 0x20),4);
          auVar105._0_4_ = auVar95._0_4_ - auVar129._0_4_;
          auVar105._4_4_ = auVar95._4_4_ - auVar129._4_4_;
          auVar105._8_4_ = auVar95._8_4_ - auVar129._8_4_;
          auVar105._12_4_ = auVar95._12_4_ - auVar129._12_4_;
          lVar30 = lVar30 + 1;
          auVar87 = NEON_fmin(auVar87,*(undefined1 (*) [16])(lVar6 + 0x10),4);
          uVar44 = uVar44 - 0x40;
          uVar38 = uVar38 + 0x40;
          auVar102 = a64_TBL(ZEXT816(0),auVar105,auVar11);
          auVar106._0_4_ = (auVar105._0_4_ + auVar105._0_4_) * auVar102._0_4_;
          auVar106._4_4_ = (auVar105._4_4_ + auVar105._4_4_) * auVar102._4_4_;
          auVar106._8_4_ = (auVar105._8_4_ + auVar105._8_4_) * auVar102._8_4_;
          auVar106._12_4_ = (auVar105._12_4_ + auVar105._12_4_) * auVar102._12_4_;
          auVar107 = NEON_ext(auVar106,auVar106,8,1);
          auVar113._0_4_ = auVar77._0_4_ - auVar87._0_4_;
          auVar113._4_4_ = auVar77._4_4_ - auVar87._4_4_;
          auVar113._8_4_ = auVar77._8_4_ - auVar87._8_4_;
          auVar113._12_4_ = auVar77._12_4_ - auVar87._12_4_;
          auVar102 = a64_TBL(ZEXT816(0),auVar113,auVar11);
          auVar114._0_4_ = (auVar113._0_4_ + auVar113._0_4_) * auVar102._0_4_;
          auVar114._4_4_ = (auVar113._4_4_ + auVar113._4_4_) * auVar102._4_4_;
          auVar114._8_4_ = (auVar113._8_4_ + auVar113._8_4_) * auVar102._8_4_;
          auVar114._12_4_ = (auVar113._12_4_ + auVar113._12_4_) * auVar102._12_4_;
          auVar102 = NEON_ext(auVar114,auVar114,8,1);
          *(float *)(lVar4 + 0x30) =
               *(float *)(lVar4 + 0x30) +
               (float)iVar90 * (auVar106._0_4_ + auVar106._4_4_ + auVar107._0_4_);
          *(float *)(lVar6 + 0x30) =
               *(float *)(lVar6 + 0x30) +
               (float)iVar92 * (auVar114._0_4_ + auVar114._4_4_ + auVar102._0_4_);
        } while (lVar30 < (int)uVar39);
        lVar30 = local_1b0 + (long)(int)uVar26 * 0x40;
        fVar68 = *(float *)(lVar30 + 8);
        pfVar22 = (float *)(lVar30 + 0x30);
        while( true ) {
          if (fVar68 != 0.0) {
            if (*pfVar22 < auVar60._0_4_) {
              iVar20 = 2;
              uVar40 = uVar31;
              auVar60 = ZEXT416((uint)*pfVar22);
            }
          }
          lVar33 = lVar33 + 1;
          uVar31 = (ulong)((int)uVar31 + 1);
          if ((int)uVar39 <= lVar33) break;
          fVar68 = pfVar22[6];
          pfVar22 = pfVar22 + 0x10;
        }
      }
      ppauVar1 = local_200 + (long)iVar20 * 2 + 6;
      iVar90 = (int)uVar40;
      if (0 < iVar90) {
        puVar49 = (uint *)(plVar21 + lVar51 * 3 + 1);
        uVar31 = 0;
        uVar26 = *puVar49;
        do {
          puVar54 = *(undefined4 **)(*ppauVar1)[uVar31 * 4];
          uVar28 = *(uint *)((*ppauVar1)[uVar31 * 4] + 8);
          uVar27 = *puVar56;
          uVar39 = uVar28 + uVar26;
          if ((int)(uVar27 & 0x3fffffff) < (int)uVar39) {
            lVar30 = *plVar50;
            if (0x3fffffff < (int)uVar39) {
              FUN_032bd0a8(uVar39);
              uVar27 = *puVar56;
            }
            uVar27 = (uVar27 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar27) {
              uVar27 = 0x3fffffff;
            }
            uVar29 = uVar39;
            if ((int)uVar39 <= (int)uVar27) {
              uVar29 = uVar27;
            }
            lVar30 = FUN_032bd1d4(puVar17,uVar29,4,lVar30,uVar26,puVar56);
            *plVar50 = lVar30;
            auVar60 = extraout_q0_00;
          }
          else {
            lVar30 = *plVar50;
          }
          if (0 < (int)uVar28) {
            puVar2 = (undefined4 *)(lVar30 + (long)(int)uVar26 * 4);
            uVar26 = uVar28 & 7;
            if (6 < uVar28 - 1) {
              iVar92 = uVar26 - uVar28;
              puVar36 = puVar2;
              do {
                *puVar36 = *puVar54;
                puVar36[1] = puVar54[1];
                puVar36[2] = puVar54[2];
                puVar36[3] = puVar54[3];
                puVar36[4] = puVar54[4];
                puVar36[5] = puVar54[5];
                puVar36[6] = puVar54[6];
                puVar37 = puVar54 + 7;
                puVar2 = puVar36 + 8;
                puVar54 = puVar54 + 8;
                iVar92 = iVar92 + 8;
                puVar36[7] = *puVar37;
                puVar36 = puVar2;
              } while (iVar92 != 0);
            }
            for (; uVar26 != 0; uVar26 = uVar26 - 1) {
              *puVar2 = *puVar54;
              puVar2 = puVar2 + 1;
              puVar54 = puVar54 + 1;
            }
          }
          uVar31 = uVar31 + 1;
          *puVar49 = uVar39;
          uVar26 = uVar39;
        } while (uVar31 != uVar40);
      }
      if (iVar90 + 1 < iVar25) {
        lVar30 = (long)(iVar90 + 1);
        uVar39 = *(uint *)(plVar50 + 4);
        do {
          puVar54 = *(undefined4 **)(*ppauVar1)[lVar30 * 4];
          uVar28 = *(uint *)((*ppauVar1)[lVar30 * 4] + 8);
          uVar27 = *puVar55;
          uVar26 = uVar28 + uVar39;
          if ((int)(uVar27 & 0x3fffffff) < (int)uVar26) {
            lVar33 = *plVar35;
            if (0x3fffffff < (int)uVar26) {
              FUN_032bd0a8(uVar26);
              uVar27 = *puVar55;
            }
            uVar27 = (uVar27 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar27) {
              uVar27 = 0x3fffffff;
            }
            uVar29 = uVar26;
            if ((int)uVar26 <= (int)uVar27) {
              uVar29 = uVar27;
            }
            lVar33 = FUN_032bd1d4(puVar17,uVar29,4,lVar33,uVar39,puVar55);
            *plVar35 = lVar33;
            auVar60 = extraout_q0_01;
          }
          else {
            lVar33 = *plVar35;
          }
          if (0 < (int)uVar28) {
            puVar2 = (undefined4 *)(lVar33 + (long)(int)uVar39 * 4);
            uVar39 = uVar28 & 7;
            if (6 < uVar28 - 1) {
              iVar92 = uVar39 - uVar28;
              puVar36 = puVar2;
              do {
                *puVar36 = *puVar54;
                puVar36[1] = puVar54[1];
                puVar36[2] = puVar54[2];
                puVar36[3] = puVar54[3];
                puVar36[4] = puVar54[4];
                puVar36[5] = puVar54[5];
                puVar36[6] = puVar54[6];
                puVar37 = puVar54 + 7;
                puVar2 = puVar36 + 8;
                puVar54 = puVar54 + 8;
                iVar92 = iVar92 + 8;
                puVar36[7] = *puVar37;
                puVar36 = puVar2;
              } while (iVar92 != 0);
            }
            for (; uVar39 != 0; uVar39 = uVar39 - 1) {
              *puVar2 = *puVar54;
              puVar2 = puVar2 + 1;
              puVar54 = puVar54 + 1;
            }
          }
          lVar30 = lVar30 + 1;
          *(uint *)(plVar50 + 4) = uVar26;
          uVar39 = uVar26;
        } while ((int)lVar30 != iVar25);
      }
      else {
        uVar26 = *(uint *)(plVar50 + 4);
      }
      puVar49 = (uint *)(plVar21 + lVar51 * 3 + 1);
      if ((uVar26 == 0 || *puVar49 == 0) && (*puVar49 != 0 || uVar26 != 0)) {
        plVar50 = plVar50 + (ulong)(uVar26 == 0) * 3;
        iVar20 = (int)plVar50[1];
        uVar39 = *(uint *)((*ppauVar1)[(long)iVar90 * 4] + 8);
        puVar54 = *(undefined4 **)(*ppauVar1)[(long)iVar90 * 4];
        puVar56 = (uint *)((long)plVar50 + 0xc);
        uVar28 = *puVar56;
        uVar26 = iVar20 + uVar39;
        if ((int)(uVar28 & 0x3fffffff) < (int)uVar26) {
          lVar51 = *plVar50;
          if (0x3fffffff < (int)uVar26) {
            FUN_032bd0a8(uVar26);
            uVar28 = *puVar56;
          }
          uVar28 = (uVar28 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar28) {
            uVar28 = 0x3fffffff;
          }
          uVar27 = uVar26;
          if ((int)uVar26 <= (int)uVar28) {
            uVar27 = uVar28;
          }
          lVar51 = FUN_032bd1d4(puVar17,uVar27,4,lVar51,iVar20,puVar56);
          *plVar50 = lVar51;
          auVar60 = extraout_q0_02;
        }
        else {
          lVar51 = *plVar50;
        }
        if (0 < (int)uVar39) {
          puVar2 = (undefined4 *)(lVar51 + (long)iVar20 * 4);
          uVar28 = uVar39 & 7;
          if (6 < uVar39 - 1) {
            iVar20 = uVar28 - uVar39;
            puVar36 = puVar2;
            do {
              *puVar36 = *puVar54;
              puVar36[1] = puVar54[1];
              puVar36[2] = puVar54[2];
              puVar36[3] = puVar54[3];
              puVar36[4] = puVar54[4];
              puVar36[5] = puVar54[5];
              puVar36[6] = puVar54[6];
              puVar37 = puVar54 + 7;
              puVar2 = puVar36 + 8;
              puVar54 = puVar54 + 8;
              iVar20 = iVar20 + 8;
              puVar36[7] = *puVar37;
              puVar36 = puVar2;
            } while (iVar20 != 0);
          }
          for (; uVar28 != 0; uVar28 = uVar28 - 1) {
            *puVar2 = *puVar54;
            puVar2 = puVar2 + 1;
            puVar54 = puVar54 + 1;
          }
        }
        *(uint *)(plVar50 + 1) = uVar26;
      }
      else {
        puVar54 = *(undefined4 **)(*ppauVar1)[(long)iVar90 * 4];
        uVar28 = *(uint *)((*ppauVar1)[(long)iVar90 * 4] + 8);
        uVar39 = (int)uVar28 >> 1;
        auVar60 = FUN_02fcab70(puVar54,uVar28,iVar20,param_1);
        uVar29 = *puVar49;
        uVar26 = uVar29 + uVar39;
        uVar27 = *puVar56;
        if ((int)(uVar27 & 0x3fffffff) < (int)uVar26) {
          lVar51 = *plVar50;
          if (0x3fffffff < (int)uVar26) {
            FUN_032bd0a8(uVar26);
            uVar27 = *puVar56;
          }
          uVar27 = (uVar27 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar27) {
            uVar27 = 0x3fffffff;
          }
          uVar7 = uVar26;
          if ((int)uVar26 <= (int)uVar27) {
            uVar7 = uVar27;
          }
          lVar51 = FUN_032bd1d4(puVar17,uVar7,4,lVar51,uVar29,puVar56);
          *plVar50 = lVar51;
          auVar60 = extraout_q0_03;
        }
        else {
          lVar51 = *plVar50;
        }
        if (1 < (int)uVar28) {
          puVar36 = (undefined4 *)(lVar51 + (long)(int)uVar29 * 4);
          uVar27 = uVar28 >> 1 & 7;
          puVar2 = puVar54;
          if (6 < uVar39 - 1) {
            iVar20 = uVar27 - uVar39;
            puVar37 = puVar36;
            puVar43 = puVar54;
            do {
              *puVar37 = *puVar43;
              puVar37[1] = puVar43[1];
              puVar37[2] = puVar43[2];
              puVar37[3] = puVar43[3];
              puVar37[4] = puVar43[4];
              puVar37[5] = puVar43[5];
              puVar37[6] = puVar43[6];
              puVar2 = puVar43 + 8;
              puVar36 = puVar37 + 8;
              iVar20 = iVar20 + 8;
              puVar37[7] = puVar43[7];
              puVar37 = puVar36;
              puVar43 = puVar2;
            } while (iVar20 != 0);
          }
          for (; uVar27 != 0; uVar27 = uVar27 - 1) {
            *puVar36 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar36 = puVar36 + 1;
          }
        }
        *puVar49 = uVar26;
        iVar20 = (int)plVar50[4];
        uVar29 = *(uint *)((long)plVar50 + 0x24);
        uVar27 = uVar28 - uVar39;
        uVar26 = iVar20 + uVar27;
        if ((int)(uVar29 & 0x3fffffff) < (int)uVar26) {
          lVar51 = *plVar35;
          if (0x3fffffff < (int)uVar26) {
            FUN_032bd0a8(uVar26);
            uVar29 = *puVar55;
          }
          uVar29 = (uVar29 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar29) {
            uVar29 = 0x3fffffff;
          }
          uVar7 = uVar26;
          if ((int)uVar26 <= (int)uVar29) {
            uVar7 = uVar29;
          }
          lVar51 = FUN_032bd1d4(puVar17,uVar7,4,lVar51,iVar20,puVar55);
          *plVar35 = lVar51;
          auVar60 = extraout_q0_05;
        }
        else {
          lVar51 = *plVar35;
        }
        if (0 < (int)uVar27) {
          puVar54 = puVar54 + (int)uVar39;
          puVar2 = (undefined4 *)(lVar51 + (long)iVar20 * 4);
          uVar27 = uVar27 & 7;
          if (6 < uVar28 + ~uVar39) {
            iVar20 = (uVar39 + uVar27) - uVar28;
            puVar36 = puVar54;
            puVar37 = puVar2;
            do {
              *puVar37 = *puVar36;
              puVar37[1] = puVar36[1];
              puVar37[2] = puVar36[2];
              puVar37[3] = puVar36[3];
              puVar37[4] = puVar36[4];
              puVar37[5] = puVar36[5];
              puVar37[6] = puVar36[6];
              puVar54 = puVar36 + 8;
              puVar2 = puVar37 + 8;
              iVar20 = iVar20 + 8;
              puVar37[7] = puVar36[7];
              puVar36 = puVar54;
              puVar37 = puVar2;
            } while (iVar20 != 0);
          }
          for (; uVar27 != 0; uVar27 = uVar27 - 1) {
            *puVar2 = *puVar54;
            puVar54 = puVar54 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        *(uint *)(plVar50 + 4) = uVar26;
      }
      bVar19 = false;
      uVar26 = uVar34;
    }
    else {
      uVar40 = local_190;
      iVar20 = (uint)uStack_198;
      if (local_190._4_4_ == -1) goto LAB_02fc8c18;
      while (local_190 = uVar40, 1 < iVar20) {
        auVar110._8_8_ = uVar16;
        auVar110._0_8_ = uVar15;
        lVar33 = *param_1;
        auVar116._8_4_ = 0x7f7fffee;
        auVar116._0_8_ = 0x7f7fffee7f7fffee;
        auVar116._12_4_ = 0x7f7fffee;
        auVar124._8_4_ = 0xff7fffee;
        auVar124._0_8_ = 0xff7fffeeff7fffee;
        auVar124._12_4_ = 0xff7fffee;
        uVar40 = 1;
        auVar60 = ZEXT816(0x7f7fffee7f7fffee);
        lVar51 = lVar33 + (long)param_1;
        lVar30 = 0;
        if (lVar33 != 0) {
          lVar30 = lVar51;
        }
        iVar90 = -1;
        iVar92 = -1;
        uVar38 = 0;
        do {
          uVar44 = uVar38 + 1;
          if ((long)uVar44 < (long)(int)uVar31) {
            pauVar23 = (undefined1 (*) [16])(lVar30 + (ulong)local_1a0[uVar38] * 0x30);
            uVar45 = uVar40;
            do {
              pauVar24 = (undefined1 (*) [16])(lVar30 + (ulong)local_1a0[uVar45] * 0x30);
              auVar129 = NEON_fmax(pauVar24[1],pauVar23[1],4);
              auVar95 = NEON_fmin(*pauVar24,*pauVar23,4);
              auVar98._0_4_ = auVar129._0_4_ - auVar95._0_4_;
              auVar98._4_4_ = auVar129._4_4_ - auVar95._4_4_;
              auVar98._8_4_ = auVar129._8_4_ - auVar95._8_4_;
              auVar98._12_4_ = auVar129._12_4_ - auVar95._12_4_;
              auVar102 = a64_TBL(ZEXT816(0),auVar98,auVar110);
              fVar68 = (auVar98._0_4_ + auVar98._0_4_) * auVar102._0_4_;
              fVar69 = (auVar98._4_4_ + auVar98._4_4_) * auVar102._4_4_;
              fVar72 = (auVar98._8_4_ + auVar98._8_4_) * auVar102._8_4_;
              auVar99._0_4_ = fVar68 + fVar69 + fVar72;
              auVar99._4_4_ = fVar68 + fVar69 + fVar72;
              auVar99._8_8_ = 0;
              if (auVar99._0_4_ < auVar60._0_4_) {
                iVar92 = (int)uVar45;
                iVar90 = (int)uVar38;
                auVar60 = auVar99;
                auVar116 = auVar95;
                auVar124 = auVar129;
              }
              uVar45 = uVar45 + 1;
            } while (uVar31 != uVar45);
          }
          uVar40 = uVar40 + 1;
          uVar38 = uVar44;
        } while (uVar44 != uVar31);
        uVar34 = local_1a0[iVar90];
        uVar39 = *(uint *)(param_1 + 2);
        uVar28 = local_1a0[iVar92];
        if (uVar39 == 0) {
          bVar19 = true;
          iVar20 = FUN_02fc7c84(param_1,1);
          auVar60 = extraout_q0;
          if (iVar20 < 0) goto LAB_02fc89f8;
          lVar33 = *param_1;
          lVar51 = lVar33 + (long)param_1;
          uVar39 = *(uint *)(param_1 + 2);
        }
        lVar30 = 0;
        if (lVar33 != 0) {
          lVar30 = lVar51;
        }
        puVar41 = (undefined8 *)(lVar30 + (ulong)uVar39 * 0x30);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar51 + (long)(int)uVar39 * 0x30);
        puVar41[1] = auVar116._8_8_;
        *puVar41 = auVar116._0_8_;
        puVar41[3] = auVar124._8_8_;
        puVar41[2] = auVar124._0_8_;
        lVar51 = 0;
        if (*param_1 != 0) {
          lVar51 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar51 + (ulong)uVar39 * 0x30 + 0x24) = uVar34;
        lVar51 = 0;
        if (*param_1 != 0) {
          lVar51 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar51 + (ulong)uVar39 * 0x30 + 0x28) = uVar28;
        lVar51 = 0;
        if (*param_1 != 0) {
          lVar51 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar51 + (ulong)uVar34 * 0x30 + 0x20) = uVar39;
        lVar51 = 0;
        if (*param_1 != 0) {
          lVar51 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar51 + (ulong)uVar28 * 0x30 + 0x20) = uVar39;
        uVar31 = (long)(int)(uint)uStack_198 - 1;
        iVar20 = (int)uVar31;
        uStack_198 = CONCAT44(uStack_198._4_4_,iVar20);
        if (iVar20 != iVar92) {
          local_1a0[iVar92] = local_1a0[uVar31];
        }
        local_1a0[iVar90] = uVar39;
        uVar31 = uVar31 & 0xffffffff;
        uVar40 = local_190;
      }
      bVar19 = false;
      uVar39 = *local_1a0;
      lVar51 = 0;
      if (*param_1 != 0) {
        lVar51 = *param_1 + (long)param_1;
      }
      local_190._0_4_ = (undefined4)uVar40;
      *(undefined4 *)(lVar51 + (ulong)uVar39 * 0x30 + 0x20) = (undefined4)local_190;
      lVar51 = 0;
      if (*param_1 != 0) {
        lVar51 = *param_1 + (long)param_1;
      }
      local_190._4_4_ = (int)(uVar40 >> 0x20);
      *(uint *)(lVar51 + (uVar40 & 0xffffffff) * 0x30 + (long)local_190._4_4_ * 4 + 0x24) = uVar39;
LAB_02fc89f8:
    }
LAB_02fc8a00:
    uVar31 = uStack_198;
    uVar39 = uStack_198._4_4_;
    uStack_198 = (ulong)uStack_198._4_4_ << 0x20;
    if ((-1 < (long)uVar31) && (local_1a0 != (uint *)0x0)) {
      auVar60 = (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_1a0,uVar39 << 2);
    }
    lVar51 = local_1b0;
    if (bVar19) {
      bVar19 = true;
      goto joined_r0x02fca500;
    }
  } while ((int)local_70 != 0);
  lVar30 = *param_1;
  if (param_3 != '\0') {
    lVar33 = 0;
    if (lVar30 != 0) {
      lVar33 = lVar30 + (long)param_1;
    }
    uVar39 = *(uint *)(lVar33 + (ulong)uVar26 * 0x30 + 0x24);
    bVar19 = false;
    do {
      uVar31 = (ulong)uVar39;
      if (uVar39 != 0) goto LAB_02fc9de0;
      do {
        do {
          auVar121._8_8_ = uVar16;
          auVar121._0_8_ = uVar15;
          lVar33 = lVar30 + (long)param_1;
          lVar4 = 0;
          if (lVar30 != 0) {
            lVar4 = lVar33;
          }
          uVar39 = *(uint *)(lVar4 + (ulong)uVar26 * 0x30 + 0x24);
          uVar31 = (ulong)uVar39;
          if (!bVar19) goto joined_r0x02fca114;
          bVar19 = false;
        } while (uVar39 == 0);
LAB_02fc9de0:
        auVar122._8_8_ = uVar16;
        auVar122._0_8_ = uVar15;
        lVar33 = lVar30 + (long)param_1;
        lVar4 = 0;
        if (lVar30 != 0) {
          lVar4 = lVar33;
        }
        uVar39 = *(uint *)(lVar4 + uVar31 * 0x30 + 0x24);
        if (uVar39 != 0) {
          uVar40 = (ulong)*(uint *)(lVar4 + uVar31 * 0x30 + 0x28);
          pauVar24 = (undefined1 (*) [16])(lVar4 + (ulong)uVar39 * 0x30);
          auVar60 = *pauVar24;
          pauVar23 = (undefined1 (*) [16])(lVar4 + uVar40 * 0x30);
          auVar95 = pauVar24[1];
          auVar129 = *pauVar23;
          if (*(uint *)(pauVar24[2] + 4) != 0) {
            auVar102 = pauVar23[1];
            puVar56 = (uint *)(lVar4 + uVar40 * 0x30 + 0x24);
            if (*puVar56 != 0) {
              local_200[2] = (undefined1 (*) [16])(lVar4 + (ulong)*(uint *)(pauVar24[2] + 4) * 0x30)
              ;
              auVar78._0_4_ = auVar95._0_4_ - auVar60._0_4_;
              auVar78._4_4_ = auVar95._4_4_ - auVar60._4_4_;
              auVar78._8_4_ = auVar95._8_4_ - auVar60._8_4_;
              auVar78._12_4_ = auVar95._12_4_ - auVar60._12_4_;
              auVar63._0_4_ = auVar102._0_4_ - auVar129._0_4_;
              auVar63._4_4_ = auVar102._4_4_ - auVar129._4_4_;
              auVar63._8_4_ = auVar102._8_4_ - auVar129._8_4_;
              auVar63._12_4_ = auVar102._12_4_ - auVar129._12_4_;
              auVar95 = a64_TBL(ZEXT816(0),auVar78,auVar122);
              auVar60 = a64_TBL(ZEXT816(0),auVar63,auVar122);
              local_1e0 = (undefined1 (*) [16])(lVar4 + (ulong)*puVar56 * 0x30);
              auVar79._0_4_ = (auVar78._0_4_ + auVar78._0_4_) * auVar95._0_4_;
              auVar79._4_4_ = (auVar78._4_4_ + auVar78._4_4_) * auVar95._4_4_;
              auVar79._8_4_ = (auVar78._8_4_ + auVar78._8_4_) * auVar95._8_4_;
              auVar79._12_4_ = (auVar78._12_4_ + auVar78._12_4_) * auVar95._12_4_;
              auVar64._0_4_ = (auVar63._0_4_ + auVar63._0_4_) * auVar60._0_4_;
              auVar64._4_4_ = (auVar63._4_4_ + auVar63._4_4_) * auVar60._4_4_;
              auVar64._8_4_ = (auVar63._8_4_ + auVar63._8_4_) * auVar60._8_4_;
              auVar64._12_4_ = (auVar63._12_4_ + auVar63._12_4_) * auVar60._12_4_;
              auVar129 = NEON_fmax(local_200[2][1],local_1e0[1],4);
              puVar49 = (uint *)(lVar4 + (ulong)uVar39 * 0x30 + 0x28);
              local_200[3] = (undefined1 (*) [16])(lVar4 + (ulong)*puVar49 * 0x30);
              auVar60 = NEON_fmin(*local_200[2],*local_1e0,4);
              puVar55 = (uint *)(lVar4 + uVar40 * 0x30 + 0x28);
              local_1d8 = (undefined1 (*) [16])(lVar4 + (ulong)*puVar55 * 0x30);
              uStack_198 = auVar60._8_8_;
              local_1a0 = auVar60._0_8_;
              auStack_188[0] = auVar129._8_8_;
              local_190 = auVar129._0_8_;
              auVar95 = NEON_fmax(local_200[2][1],local_1d8[1],4);
              auVar128 = NEON_fmax(local_200[3][1],local_1d8[1],4);
              auVar102 = NEON_fmax(local_200[3][1],local_1e0[1],4);
              auVar115._0_4_ = auVar129._0_4_ - auVar60._0_4_;
              auVar115._4_4_ = auVar129._4_4_ - auVar60._4_4_;
              auVar115._8_4_ = auVar129._8_4_ - auVar60._8_4_;
              auVar115._12_4_ = auVar129._12_4_ - auVar60._12_4_;
              auVar12._8_8_ = uVar16;
              auVar12._0_8_ = uVar15;
              auVar130 = NEON_fmin(*local_200[3],*local_1d8,4);
              auVar60 = NEON_fmin(*local_200[2],*local_1d8,4);
              auVar127 = NEON_ext(auVar79,auVar79,8,1);
              auVar129 = NEON_fmin(*local_200[3],*local_1e0,4);
              auVar107 = NEON_ext(auVar64,auVar64,8,1);
              auVar123 = a64_TBL(ZEXT816(0),auVar115,auVar12);
              auStack_188[6] = auVar60._8_8_;
              auStack_188[5] = auVar60._0_8_;
              auStack_188[8] = auVar95._8_8_;
              auStack_188[7] = auVar95._0_8_;
              fVar103 = (auVar115._0_4_ + auVar115._0_4_) * auVar123._0_4_;
              fVar108 = (auVar115._4_4_ + auVar115._4_4_) * auVar123._4_4_;
              fVar109 = (auVar115._8_4_ + auVar115._8_4_) * auVar123._8_4_;
              auVar65._0_4_ = auVar128._0_4_ - auVar130._0_4_;
              auVar65._4_4_ = auVar128._4_4_ - auVar130._4_4_;
              auVar65._8_4_ = auVar128._8_4_ - auVar130._8_4_;
              auVar65._12_4_ = auVar128._12_4_ - auVar130._12_4_;
              auVar13._8_8_ = uVar16;
              auVar13._0_8_ = uVar15;
              auVar88._0_4_ = auVar95._0_4_ - auVar60._0_4_;
              auVar88._4_4_ = auVar95._4_4_ - auVar60._4_4_;
              auVar88._8_4_ = auVar95._8_4_ - auVar60._8_4_;
              auVar88._12_4_ = auVar95._12_4_ - auVar60._12_4_;
              auStack_188[10] = auVar129._8_8_;
              auStack_188[9] = auVar129._0_8_;
              uStack_128 = auVar102._8_8_;
              auStack_188[0xb] = auVar102._0_8_;
              auStack_188[2] = auVar130._8_8_;
              auStack_188[1] = auVar130._0_8_;
              auStack_188[4] = auVar128._8_8_;
              auStack_188[3] = auVar128._0_8_;
              auVar60 = a64_TBL(ZEXT816(0),auVar65,auVar13);
              fVar57 = (auVar65._0_4_ + auVar65._0_4_) * auVar60._0_4_;
              fVar68 = (auVar65._4_4_ + auVar65._4_4_) * auVar60._4_4_;
              fVar69 = (auVar65._8_4_ + auVar65._8_4_) * auVar60._8_4_;
              auVar14._8_8_ = uVar16;
              auVar14._0_8_ = uVar15;
              auVar60 = a64_TBL(ZEXT816(0),auVar88,auVar14);
              fVar58 = fVar103 + fVar108 + fVar109 + fVar57 + fVar68 + fVar69;
              fVar72 = (auVar88._0_4_ + auVar88._0_4_) * auVar60._0_4_;
              fVar81 = (auVar88._4_4_ + auVar88._4_4_) * auVar60._4_4_;
              fVar82 = (auVar88._8_4_ + auVar88._8_4_) * auVar60._8_4_;
              auVar96._0_4_ = auVar102._0_4_ - auVar129._0_4_;
              auVar96._4_4_ = auVar102._4_4_ - auVar129._4_4_;
              auVar96._8_4_ = auVar102._8_4_ - auVar129._8_4_;
              auVar96._12_4_ = auVar102._12_4_ - auVar129._12_4_;
              auVar60 = a64_TBL(ZEXT816(0),auVar96,auVar14);
              fVar84 = (auVar96._0_4_ + auVar96._0_4_) * auVar60._0_4_;
              fVar91 = (auVar96._4_4_ + auVar96._4_4_) * auVar60._4_4_;
              fVar93 = (auVar96._8_4_ + auVar96._8_4_) * auVar60._8_4_;
              fVar73 = fVar72 + fVar81 + fVar82 + fVar84 + fVar91 + fVar93;
              local_200[0] = (undefined1 (*) [16])
                             CONCAT44(fVar103 + fVar108 + fVar109 + fVar57 + fVar68 + fVar69,fVar58)
              ;
              local_200[1] = (undefined1 (*) [16])
                             CONCAT44(fVar72 + fVar81 + fVar82 + fVar84 + fVar91 + fVar93,fVar73);
              if (SUB84(local_200[fVar73 <= fVar58],0) <
                  auVar79._0_4_ + auVar79._4_4_ + auVar127._0_4_ +
                  auVar64._0_4_ + auVar64._4_4_ + auVar107._0_4_) {
                lVar6 = (ulong)(fVar73 <= fVar58) * 0xc;
                iVar25 = *(int *)(&DAT_03aa201c + lVar6);
                iVar20 = *(int *)(&DAT_03aa2020 + lVar6);
                lVar4 = 0;
                if (lVar30 != 0) {
                  lVar4 = lVar33;
                }
                *puVar49 = (int)((ulong)((long)local_200[(long)iVar25 + 2] - lVar4) >> 4) *
                           -0x55555555;
                lVar30 = 0;
                if (*param_1 != 0) {
                  lVar30 = *param_1 + (long)param_1;
                }
                *puVar56 = (int)((ulong)((long)local_200[(long)iVar20 + 2] - lVar30) >> 4) *
                           -0x55555555;
                iVar90 = *(int *)(&DAT_03aa2024 + lVar6);
                lVar30 = 0;
                if (*param_1 != 0) {
                  lVar30 = *param_1 + (long)param_1;
                }
                *puVar55 = (int)((ulong)((long)local_200[(long)iVar90 + 2] - lVar30) >> 4) *
                           -0x55555555;
                lVar30 = 0;
                if (*param_1 != 0) {
                  lVar30 = *param_1 + (long)param_1;
                }
                *(int *)local_200[(long)iVar25 + 2][2] =
                     (int)((ulong)((long)pauVar24 - lVar30) >> 4) * -0x55555555;
                lVar30 = 0;
                if (*param_1 != 0) {
                  lVar30 = *param_1 + (long)param_1;
                }
                *(int *)local_200[(long)iVar20 + 2][2] =
                     (int)((ulong)((long)pauVar23 - lVar30) >> 4) * -0x55555555;
                lVar30 = 0;
                if (*param_1 != 0) {
                  lVar30 = *param_1 + (long)param_1;
                }
                *(int *)local_200[(long)iVar90 + 2][2] =
                     (int)((ulong)((long)pauVar23 - lVar30) >> 4) * -0x55555555;
                uVar40 = (ulong)(fVar73 <= fVar58);
                uVar83 = auStack_188[uVar40 * 8 + -3];
                *(undefined8 *)(*pauVar24 + 8) = auStack_188[uVar40 * 8 + -2];
                *(undefined8 *)*pauVar24 = uVar83;
                uVar83 = auStack_188[uVar40 * 8 + -1];
                uVar38 = (ulong)((uint)(fVar73 <= fVar58) << 1 | 1);
                *(undefined8 *)(pauVar24[1] + 8) = auStack_188[uVar40 * 8];
                *(undefined8 *)pauVar24[1] = uVar83;
                uVar83 = auStack_188[uVar38 * 4 + -3];
                bVar19 = true;
                *(undefined8 *)(*pauVar23 + 8) = auStack_188[uVar38 * 4 + -2];
                *(undefined8 *)*pauVar23 = uVar83;
                auVar60 = *(undefined1 (*) [16])(auStack_188 + uVar38 * 4 + -1);
                *(long *)(pauVar23[1] + 8) = auVar60._8_8_;
                *(long *)pauVar23[1] = auVar60._0_8_;
              }
              lVar30 = *param_1;
              lVar33 = lVar30 + (long)param_1;
            }
          }
        }
        lVar4 = 0;
        if (lVar30 != 0) {
          lVar4 = lVar33;
        }
        uVar39 = *(uint *)(lVar4 + uVar31 * 0x30 + 0x24);
        if (uVar39 != 0) break;
        do {
          uVar34 = *(uint *)(lVar4 + uVar31 * 0x30 + 0x20);
          uVar40 = (ulong)uVar34;
          uVar28 = (uint)uVar31;
          if (uVar34 == uVar26) {
            bVar47 = 1;
            uVar40 = (ulong)uVar26;
            uVar34 = uVar26;
            goto joined_r0x02fca0f4;
          }
          uVar31 = uVar40;
        } while (*(uint *)(lVar4 + uVar40 * 0x30 + 0x28) == uVar28);
        bVar47 = 0;
joined_r0x02fca0f4:
        uVar39 = uVar28;
        if (uVar34 != 0) {
          uVar39 = *(uint *)(lVar4 + uVar40 * 0x30 + 0x28);
        }
      } while ((bool)(bVar47 & uVar39 == uVar28));
    } while( true );
  }
  lVar33 = lVar30 + (long)param_1;
LAB_02fca234:
  lVar4 = 0;
  if (lVar30 != 0) {
    lVar4 = lVar33;
  }
  *(uint *)(lVar4 + (ulong)uVar26 * 0x30 + 0x20) = uVar5;
  if (uVar5 == 0) {
    bVar19 = false;
    *(uint *)((long)param_1 + 0x1c) = uVar26;
  }
  else {
    lVar30 = 0;
    if (*param_1 != 0) {
      lVar30 = *param_1 + (long)param_1;
    }
    *(uint *)(lVar30 + uVar42 * 0x30 + local_350 * 4 + 0x24) = uVar26;
    lVar30 = *param_1;
    do {
      lVar33 = 0;
      if (lVar30 != 0) {
        lVar33 = lVar30 + (long)param_1;
      }
      puVar41 = (undefined8 *)(lVar33 + uVar42 * 0x30);
      pauVar24 = (undefined1 (*) [16])(lVar33 + (ulong)*(uint *)((long)puVar41 + 0x24) * 0x30);
      pauVar23 = (undefined1 (*) [16])(lVar33 + (ulong)*(uint *)(puVar41 + 5) * 0x30);
      auVar95 = NEON_fmax(pauVar24[1],pauVar23[1],4);
      auVar60 = NEON_fmin(*pauVar24,*pauVar23,4);
      puVar41[1] = auVar60._8_8_;
      *puVar41 = auVar60._0_8_;
      puVar41[3] = auVar95._8_8_;
      puVar41[2] = auVar95._0_8_;
      lVar30 = *param_1;
      lVar33 = 0;
      if (lVar30 != 0) {
        lVar33 = lVar30 + (long)param_1;
      }
      uVar5 = *(uint *)(lVar33 + uVar42 * 0x30 + 0x20);
      uVar42 = (ulong)uVar5;
    } while (uVar5 != 0);
    bVar19 = false;
  }
joined_r0x02fca500:
  if ((int)local_1a8 != 0) {
    lVar30 = (long)(int)local_1a8 << 6;
    do {
      lVar33 = lVar51 + lVar30;
      *(undefined4 *)(lVar33 + -0x38) = 0;
      if ((-1 < *(int *)(lVar33 + -0x34)) && (*(long *)(lVar33 + -0x40) != 0)) {
        (**(code **)(*(long *)puVar17 + 0x18))
                  (puVar17,*(long *)(lVar33 + -0x40),*(int *)(lVar33 + -0x34) << 2);
      }
      lVar30 = lVar30 + -0x40;
      *(undefined8 *)(lVar33 + -0x40) = 0;
      *(undefined4 *)(lVar33 + -0x34) = 0x80000000;
    } while (lVar30 != 0);
  }
  uVar42 = local_1a8;
  uVar31 = (ulong)local_1a8._4_4_;
  local_1a8 = (ulong)local_1a8._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_1b0 != 0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_1b0,(uVar31 & 0x3fffffff) << 6);
  }
  lVar51 = local_1c0;
  local_1b0 = 0;
  local_1a8 = CONCAT44(0x80000000,(int)local_1a8);
  if ((int)local_1b8 != 0) {
    lVar30 = (long)(int)local_1b8 << 6;
    do {
      lVar33 = lVar51 + lVar30;
      *(undefined4 *)(lVar33 + -0x38) = 0;
      if ((-1 < *(int *)(lVar33 + -0x34)) && (*(long *)(lVar33 + -0x40) != 0)) {
        (**(code **)(*(long *)puVar17 + 0x18))
                  (puVar17,*(long *)(lVar33 + -0x40),*(int *)(lVar33 + -0x34) << 2);
      }
      lVar30 = lVar30 + -0x40;
      *(undefined8 *)(lVar33 + -0x40) = 0;
      *(undefined4 *)(lVar33 + -0x34) = 0x80000000;
    } while (lVar30 != 0);
  }
  uVar42 = local_1b8;
  uVar31 = (ulong)local_1b8._4_4_;
  local_1b8 = (ulong)local_1b8._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_1c0 != 0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_1c0,(uVar31 & 0x3fffffff) << 6);
  }
  pauVar23 = local_1d0;
  local_1c0 = 0;
  local_1b8 = CONCAT44(0x80000000,(int)local_1b8);
  if ((int)local_1c8 != 0) {
    lVar51 = (long)(int)local_1c8 << 6;
    do {
      lVar30 = (long)pauVar23 + lVar51;
      *(undefined4 *)(lVar30 + -0x38) = 0;
      if ((-1 < *(int *)(lVar30 + -0x34)) && (*(long *)(lVar30 + -0x40) != 0)) {
        (**(code **)(*(long *)puVar17 + 0x18))
                  (puVar17,*(long *)(lVar30 + -0x40),*(int *)(lVar30 + -0x34) << 2);
      }
      lVar51 = lVar51 + -0x40;
      *(undefined8 *)(lVar30 + -0x40) = 0;
      *(undefined4 *)(lVar30 + -0x34) = 0x80000000;
    } while (lVar51 != 0);
  }
  uVar42 = local_1c8;
  uVar31 = (ulong)local_1c8._4_4_;
  local_1c8 = (ulong)local_1c8._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_1d0 != (undefined1 (*) [16])0x0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_1d0,(uVar31 & 0x3fffffff) << 6);
  }
  lVar51 = local_88;
  uVar5 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar51) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_90,uVar5 << 2);
  }
  plVar35 = local_78;
  if ((int)local_70 != 0) {
    lVar51 = (long)(int)local_70 * 0x18;
    do {
      iVar25 = *(int *)((long)plVar35 + lVar51 + -0xc);
      *(undefined4 *)((long)plVar35 + lVar51 + -0x10) = 0;
      if ((-1 < iVar25) && (lVar30 = *(long *)((long)plVar35 + lVar51 + -0x18), lVar30 != 0)) {
        (**(code **)(*(long *)puVar17 + 0x18))(puVar17,lVar30,iVar25 << 2);
      }
      lVar30 = lVar51 + -0x18;
      *(undefined8 *)((long)plVar35 + lVar51 + -0x18) = 0;
      *(undefined4 *)((long)plVar35 + lVar51 + -0xc) = 0x80000000;
      lVar51 = lVar30;
    } while (lVar30 != 0);
  }
  uVar5 = local_70._4_4_;
  uVar42 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar5) && (local_78 != (long *)0x0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_78,(uVar42 & 0x3fffffff) * 0x18);
  }
  if (!bVar19) {
    return 0;
  }
  return 0x80040200;
}


