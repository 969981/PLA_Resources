/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031736a0; name: FUN_031736a0
 */


void FUN_031736a0(long param_1,long *param_2,ulong param_3,uint *param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7,int *param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 *param_11,undefined8 *param_12,float *param_13,
                 float *param_14,long param_15)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  int iVar40;
  long *plVar41;
  uint uVar42;
  ulong uVar43;
  int *piVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  float fVar50;
  int iVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  float fVar85;
  float fVar87;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  undefined1 auVar84 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  int iVar94;
  float fVar95;
  int iVar96;
  float fVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  long local_148;
  undefined8 local_d0;
  long local_c8;
  int local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  int local_a0;
  long local_98;
  char local_90;
  uint local_78 [2];
  
  uVar47 = (uint)param_7;
  local_78[0] = uVar47;
  lVar24 = nn::os::GetSystemTick();
  FUN_03171424(&local_98,param_1,local_78);
  lVar32 = *(long *)(param_1 + 0x38);
  fVar6 = *(float *)(*(long *)(*(long *)(*(long *)(lVar32 + (param_3 >> 0x16 & 0x3ff) * 0xf0) + 0x20
                                        ) + 0x68) + 0xb0);
  if (param_8[2] == -1) {
LAB_03173810:
    *param_13 = fVar6;
    goto LAB_0317381c;
  }
  uVar99 = *param_12;
  if ((param_2 == (long *)0x0) || ((*(byte *)(param_8 + 4) >> 5 & 1) != 0)) {
    if ((*(byte *)(param_8 + 4) >> 5 & 1) != 0) goto LAB_03173810;
  }
  else {
    uVar25 = (**(code **)(*param_2 + 0x28))
                       (param_2,param_1,param_7 & 0xffffffff,param_8,param_9,param_10);
    if ((uVar25 & 1) == 0) goto LAB_03173810;
    lVar32 = *(long *)(param_1 + 0x38);
  }
  uVar39 = uVar47 & 0x3fffff;
  iVar51 = (int)(short)param_4[2];
  if (uVar39 != *param_4) {
    iVar51 = 0;
  }
  uVar42 = (uVar39 + iVar51) - 1;
  uVar2 = uVar42 | uVar47 & 0xffc00000;
  uVar42 = uVar42 & 0x3fffff;
  lVar32 = *(long *)(*(long *)(lVar32 + (ulong)(uVar2 >> 0x16) * 0xf0) + 0x20);
  fVar50 = (float)uVar99 - fVar6;
  fVar56 = (float)((ulong)uVar99 >> 0x20) - fVar6;
  iVar51 = *(int *)(lVar32 + 0x60);
  uVar36 = uVar42 - *(int *)(lVar32 + 0x30);
  if ((int)uVar42 < *(int *)(lVar32 + 0x30)) {
    if (*(int *)(lVar32 + 0x78) == 0) {
      uVar36 = uVar42;
LAB_031737fc:
      lVar33 = *(long *)(lVar32 + 0x130) + (long)(int)(uVar36 * iVar51) * 4;
      lVar32 = *(long *)(lVar32 + 0xc0);
      goto LAB_0317388c;
    }
    uVar36 = *(uint *)(*(long *)(lVar32 + 0x70) + (ulong)uVar42 * 4);
    if (uVar36 != 0xffffffff) goto LAB_031737fc;
    lVar33 = *(long *)(lVar32 + 0x58) + (long)(int)(iVar51 * uVar42) * 4;
    lVar32 = *(long *)(lVar32 + 0x28) + (ulong)uVar42 * 0x14;
    lVar27 = lVar33 + (long)iVar51 * 4;
  }
  else {
    lVar33 = *(long *)(lVar32 + 0x150) + (long)(int)(iVar51 * uVar36) * 4;
    lVar32 = *(long *)(lVar32 + 0xe0);
LAB_0317388c:
    lVar27 = lVar33 + (long)iVar51 * 4;
    lVar32 = lVar32 + (long)(int)uVar36 * 0x14;
  }
  uVar25 = CONCAT44(fVar56 * fVar56,fVar50 * fVar50);
  if (*(int *)(lVar32 + 8) == -1) {
LAB_031738dc:
    bVar21 = true;
    uVar26 = 0;
  }
  else {
    if ((param_2 == (long *)0x0) || ((*(byte *)(lVar32 + 0x10) >> 5 & 1) != 0)) {
      if ((*(byte *)(lVar32 + 0x10) >> 5 & 1) != 0) goto LAB_031738dc;
    }
    else {
      uVar26 = (**(code **)(*param_2 + 0x28))(param_2,param_1,uVar2,lVar32,lVar33,lVar27);
      if ((uVar26 & 1) == 0) goto LAB_031738dc;
    }
    bVar21 = false;
    uVar26 = uVar25;
  }
  uVar42 = *param_4;
  if (uVar39 != ((int)(short)param_4[2] + uVar42) - 1) {
    uVar42 = uVar39 + 1;
  }
  uVar36 = uVar42 | uVar47 & 0xffc00000;
  uVar42 = uVar42 & 0x3fffff;
  lVar32 = *(long *)(param_1 + 0x38);
  lVar33 = *(long *)(*(long *)(lVar32 + (ulong)(uVar36 >> 0x16) * 0xf0) + 0x20);
  iVar51 = *(int *)(lVar33 + 0x60);
  uVar39 = uVar42 - *(int *)(lVar33 + 0x30);
  if ((int)uVar42 < *(int *)(lVar33 + 0x30)) {
    if (*(int *)(lVar33 + 0x78) == 0) {
      uVar39 = uVar42;
LAB_0317394c:
      lVar27 = *(long *)(lVar33 + 0x130) + (long)(int)(uVar39 * iVar51) * 4;
      lVar33 = *(long *)(lVar33 + 0xc0);
      goto LAB_03173974;
    }
    uVar39 = *(uint *)(*(long *)(lVar33 + 0x70) + (ulong)uVar42 * 4);
    if (uVar39 != 0xffffffff) goto LAB_0317394c;
    lVar27 = *(long *)(lVar33 + 0x58) + (long)(int)(iVar51 * uVar42) * 4;
    lVar33 = *(long *)(lVar33 + 0x28) + (ulong)uVar42 * 0x14;
    lVar34 = lVar27 + (long)iVar51 * 4;
  }
  else {
    lVar27 = *(long *)(lVar33 + 0x150) + (long)(int)(iVar51 * uVar39) * 4;
    lVar33 = *(long *)(lVar33 + 0xe0);
LAB_03173974:
    lVar34 = lVar27 + (long)iVar51 * 4;
    lVar33 = lVar33 + (long)(int)uVar39 * 0x14;
  }
  if (*(int *)(lVar33 + 8) == -1) {
    if (!bVar21) {
      uVar25 = 0;
      goto LAB_03173a18;
    }
  }
  else {
    bVar23 = (*(byte *)(lVar33 + 0x10) >> 5 ^ 0xff) & 1;
    if ((param_2 != (long *)0x0) && (bVar23 != 0)) {
      bVar23 = (**(code **)(*param_2 + 0x28))(param_2,param_1,uVar36,lVar33,lVar27,lVar34);
      bVar23 = bVar23 & 1;
    }
    if ((bVar23 != 0) || (!bVar21)) {
      iVar51 = -(uint)(bVar23 == 0);
      lVar32 = *(long *)(param_1 + 0x38);
      uVar52 = CONCAT13(~(byte)((uint)iVar51 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar51 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar51 >> 8),~(byte)iVar51)));
      uVar25 = uVar25 & CONCAT44(uVar52,uVar52);
LAB_03173a18:
      lVar32 = *(long *)(lVar32 + (param_7 >> 0x16 & 0x3ff) * 0xf0);
      lVar33 = *(long *)(lVar32 + 0x20);
      iVar51 = *(int *)(lVar33 + 0x40);
      plVar29 = (long *)(lVar33 + 0x38);
      if (*param_8 < iVar51) {
        iVar94 = 0;
        plVar41 = plVar29;
      }
      else {
        plVar41 = (long *)(lVar33 + 0xf0);
        iVar94 = iVar51;
      }
      puVar3 = (undefined8 *)(*plVar41 + (long)(*param_8 - iVar94) * 0x10);
      uVar99 = *puVar3;
      if (param_8[1] < iVar51) {
        iVar51 = 0;
      }
      else {
        plVar29 = (long *)(lVar33 + 0xf0);
      }
      fVar72 = (float)*(undefined8 *)(lVar32 + 0x68);
      fVar54 = (float)((ulong)*(undefined8 *)(lVar32 + 0x68) >> 0x20);
      fVar58 = (float)*(undefined8 *)(lVar32 + 0x60);
      fVar67 = (float)((ulong)*(undefined8 *)(lVar32 + 0x60) >> 0x20);
      fVar55 = *(float *)(lVar32 + 0x7c);
      fVar56 = (float)((ulong)uVar99 >> 0x20);
      fVar50 = (float)uVar99;
      fVar107 = (float)*(undefined8 *)(lVar32 + 0x88);
      fVar65 = (float)((ulong)*(undefined8 *)(lVar32 + 0x88) >> 0x20);
      fVar88 = (float)*(undefined8 *)(lVar32 + 0x80);
      fVar91 = (float)((ulong)*(undefined8 *)(lVar32 + 0x80) >> 0x20);
      fVar53 = (float)puVar3[1];
      puVar3 = (undefined8 *)(*plVar29 + (long)(param_8[1] - iVar51) * 0x10);
      fVar66 = (float)puVar3[1];
      uVar99 = *puVar3;
      local_b8 = 0;
      local_b0 = 0x8000000000000000;
      fVar64 = (float)*(undefined8 *)(lVar32 + 0x90);
      fVar79 = fVar64 + fVar88 * fVar53 + fVar58 * fVar50 + *(float *)(lVar32 + 0x70) * fVar56;
      fVar68 = (float)((ulong)*(undefined8 *)(lVar32 + 0x90) >> 0x20);
      fVar85 = fVar68 + fVar91 * fVar53 + fVar67 * fVar50 + *(float *)(lVar32 + 0x74) * fVar56;
      auVar81._0_8_ = CONCAT44(fVar85,fVar79);
      fVar73 = (float)*(undefined8 *)(lVar32 + 0x98);
      auVar81._8_4_ =
           fVar73 + fVar107 * fVar53 + fVar72 * fVar50 + *(float *)(lVar32 + 0x78) * fVar56;
      fVar57 = (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20);
      auVar81._12_4_ = fVar57 + fVar65 * fVar53 + fVar54 * fVar50 + fVar55 * fVar56;
      local_a0 = 0x40;
      fVar50 = (float)uVar99;
      fVar56 = (float)((ulong)uVar99 >> 0x20);
      fVar64 = fVar64 + fVar88 * fVar66 + fVar58 * fVar50 + *(float *)(lVar32 + 0x70) * fVar56;
      fVar68 = fVar68 + fVar91 * fVar66 + fVar67 * fVar50 + *(float *)(lVar32 + 0x74) * fVar56;
      fVar73 = fVar73 + fVar107 * fVar66 + fVar72 * fVar50 + *(float *)(lVar32 + 0x78) * fVar56;
      fVar67 = (float)*param_11;
      fVar79 = fVar67 * fVar79;
      fVar72 = (float)((ulong)*param_11 >> 0x20);
      fVar85 = fVar72 * fVar85;
      fVar88 = (float)param_11[1];
      fVar53 = fVar79 + fVar85 + fVar88 * auVar81._8_4_;
      fVar79 = fVar79 + fVar85 + fVar88 * auVar81._8_4_;
      auVar77._0_8_ = CONCAT44(fVar72 * fVar79,fVar67 * fVar53);
      auVar77._8_4_ = fVar88 * fVar53;
      fVar91 = (float)((ulong)param_11[1] >> 0x20);
      auVar77._12_4_ = fVar91 * fVar79;
      fVar79 = fVar67 * fVar64;
      fVar85 = fVar72 * fVar68;
      fVar58 = fVar88 * fVar73;
      fVar53 = fVar79 + fVar85 + fVar58;
      fVar58 = fVar79 + fVar85 + fVar58;
      lVar32 = tpidr_el0;
      lVar33 = *(long *)(lVar32 + 0x38d490);
      if (lVar33 == 0) {
        lVar33 = FUN_0333d16c(0,1);
        auVar77._8_8_ = auVar77._8_8_;
        auVar81._8_8_ = auVar81._8_8_;
        *(long *)(lVar32 + 0x38d490) = lVar33;
      }
      lVar27 = *(long *)(lVar33 + 8);
      fVar79 = auVar81._0_4_ - auVar77._0_4_;
      fVar85 = auVar81._4_4_ - auVar77._4_4_;
      fVar107 = auVar81._8_4_ - auVar77._8_4_;
      fVar108 = auVar81._12_4_ - auVar77._12_4_;
      fVar64 = fVar64 - fVar67 * fVar53;
      fVar68 = fVar68 - fVar72 * fVar58;
      fVar73 = fVar73 - fVar88 * fVar53;
      fVar50 = (fVar57 + fVar65 * fVar66 + fVar54 * fVar50 + fVar55 * fVar56) - fVar91 * fVar58;
      if (*(ulong *)(lVar27 + 0x10) < 0x100) {
LAB_031746a4:
        local_148 = FUN_032ce670(lVar27,0x100);
        lVar33 = *(long *)(lVar32 + 0x38d490);
      }
      else {
        local_148 = *(long *)(lVar27 + 0x18);
        if (*(ulong *)(lVar27 + 0x20) < local_148 + 0x100U) goto LAB_031746a4;
        *(ulong *)(lVar27 + 0x18) = local_148 + 0x100U;
      }
      local_a8 = local_148;
      local_b8 = local_148;
      local_b0 = CONCAT44(0x80000040,(uint)local_b0);
      local_d0 = 0x8000000000000000;
      local_c0 = 0x40;
      if (lVar33 == 0) {
        lVar33 = FUN_0333d16c(0,1);
        *(long *)(lVar32 + 0x38d490) = lVar33;
      }
      lVar33 = *(long *)(lVar33 + 8);
      if (0xff < *(ulong *)(lVar33 + 0x10)) {
        lVar27 = *(long *)(lVar33 + 0x18);
        if (lVar27 + 0x100U <= *(ulong *)(lVar33 + 0x20)) {
          *(ulong *)(lVar33 + 0x18) = lVar27 + 0x100U;
          goto LAB_03173bc4;
        }
      }
      lVar27 = FUN_032ce670(lVar33,0x100);
LAB_03173bc4:
      puVar20 = PTR_PTR_0434a080;
      uVar43 = 0;
      local_d0 = CONCAT44(0x80000040,(int)local_d0);
      uVar99 = NEON_fmov(0x3f800000,4);
      uVar49 = 0;
      uVar39 = 0x80000040;
      local_c8 = lVar27;
      do {
        uVar42 = (uint)uVar43;
        uVar1 = uVar49 + 1;
        if (uVar49 < (uVar39 & 0x3fffffff)) {
          iVar51 = (int)uVar49;
        }
        else {
          if (0x3ffffffe < uVar49) {
            FUN_032bd0a8(uVar1 & 0xffffffff);
          }
          uVar39 = (uVar39 & 0x3fffffff) << 1;
          uVar28 = (ulong)uVar39;
          if (0x3ffffffe < uVar39) {
            uVar28 = 0x3fffffff;
          }
          uVar30 = uVar1 & 0xffffffff;
          if ((int)uVar1 <= (int)uVar28) {
            uVar30 = uVar28;
          }
          lVar27 = FUN_032bd1d4(puVar20,uVar30,4,lVar27,uVar49 & 0xffffffff,(long)&local_d0 + 4);
          iVar51 = (int)local_d0;
        }
        uVar48 = (uint)param_3;
        *(uint *)(lVar27 + (long)iVar51 * 4) = uVar48;
        local_d0 = CONCAT44(local_d0._4_4_,(int)uVar1);
        uVar39 = uVar48 & 0x3fffff;
        lVar46 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar48 >> 0x16) * 0xf0);
        lVar33 = *(long *)(lVar46 + 0x20);
        iVar51 = *(int *)(lVar33 + 0x50);
        lVar34 = (long)iVar51;
        iVar94 = uVar39 - *(int *)(lVar33 + 0x20);
        if ((int)uVar39 < *(int *)(lVar33 + 0x20)) {
          if (*(int *)(lVar33 + 0x98) == 0) {
            uVar37 = uVar39;
          }
          else {
            uVar37 = *(uint *)(*(long *)(lVar33 + 0x90) + (ulong)uVar39 * 4);
            if (uVar37 == 0xffffffff) {
              lVar35 = *(long *)(lVar33 + 0x48) + (long)(int)(iVar51 * uVar39) * 4;
              lVar34 = lVar35 + lVar34 * 4;
              piVar44 = (int *)(*(long *)(lVar33 + 0x18) + (ulong)uVar39 * 0x10);
              goto joined_r0x03173ca0;
            }
          }
          lVar35 = *(long *)(lVar33 + 0x120) + (long)(int)(uVar37 * iVar51) * 4;
          lVar34 = lVar35 + lVar34 * 4;
          piVar44 = (int *)(*(long *)(lVar33 + 0xb0) + (long)(int)uVar37 * 0x10);
          if (param_2 != (long *)0x0) goto LAB_03173ca4;
LAB_03173cdc:
          iVar51 = *piVar44;
          iVar94 = *(int *)(lVar33 + 0x30);
          lVar34 = (long)iVar51;
          lVar35 = *(long *)(lVar33 + 0x28);
          if (iVar51 < iVar94) {
            iVar96 = iVar51;
            if (*(int *)(lVar33 + 0x78) != 0) {
              iVar96 = *(int *)(*(long *)(lVar33 + 0x70) + lVar34 * 4);
            }
            lVar45 = lVar35;
            if (iVar96 != -1) {
              plVar29 = (long *)(lVar33 + 0xc0);
              iVar51 = iVar96;
              goto LAB_031747bc;
            }
          }
          else {
            plVar29 = (long *)(lVar33 + 0xe0);
            iVar51 = iVar51 - iVar94;
LAB_031747bc:
            lVar45 = *plVar29;
          }
          iVar96 = *(int *)(lVar45 + (long)iVar51 * 0x14);
          iVar51 = *(int *)(lVar33 + 0x40);
          plVar29 = (long *)(lVar33 + 0x38);
          if (iVar51 <= iVar96) {
            plVar29 = (long *)(lVar33 + 0xf0);
          }
          iVar40 = 0;
          if (iVar51 <= iVar96) {
            iVar40 = iVar51;
          }
          iVar51 = (int)(short)piVar44[2];
          if (iVar51 != 0) {
            puVar3 = (undefined8 *)(*plVar29 + (long)(iVar96 - iVar40) * 0x10);
            uVar98 = *puVar3;
            fVar66 = (float)uVar98;
            fVar65 = (float)((ulong)uVar98 >> 0x20);
            lVar45 = lVar34 * 0x14;
            fVar69 = (float)puVar3[1];
            fVar54 = *(float *)(lVar46 + 0x90) +
                     *(float *)(lVar46 + 0x80) * fVar69 +
                     (float)*(undefined8 *)(lVar46 + 0x60) * fVar66 +
                     (float)*(undefined8 *)(lVar46 + 0x70) * fVar65;
            fVar57 = *(float *)(lVar46 + 0x94) +
                     *(float *)(lVar46 + 0x84) * fVar69 +
                     (float)((ulong)*(undefined8 *)(lVar46 + 0x60) >> 0x20) * fVar66 +
                     (float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20) * fVar65;
            fVar59 = *(float *)(lVar46 + 0x98) +
                     *(float *)(lVar46 + 0x88) * fVar69 +
                     (float)*(undefined8 *)(lVar46 + 0x68) * fVar66 +
                     (float)*(undefined8 *)(lVar46 + 0x78) * fVar65;
            fVar56 = fVar67 * fVar54;
            fVar53 = fVar72 * fVar57;
            fVar58 = fVar88 * fVar59;
            fVar55 = fVar58 + fVar56 + fVar53;
            fVar58 = fVar58 + fVar56 + fVar53;
            uVar98 = CONCAT44(fVar57 - fVar72 * fVar58,fVar54 - fVar67 * fVar55);
            uVar100 = CONCAT44((*(float *)(lVar46 + 0x9c) +
                               *(float *)(lVar46 + 0x8c) * fVar69 +
                               (float)((ulong)*(undefined8 *)(lVar46 + 0x68) >> 0x20) * fVar66 +
                               (float)((ulong)*(undefined8 *)(lVar46 + 0x78) >> 0x20) * fVar65) -
                               fVar91 * (float)(CONCAT17((char)((uint)fVar58 >> 0x18),
                                                         CONCAT16((char)((uint)fVar58 >> 0x10),
                                                                  CONCAT15((char)((uint)fVar58 >> 8)
                                                                           ,CONCAT14(SUB41(fVar58,0)
                                                                                     ,fVar55)))) >>
                                               0x20),fVar59 - fVar88 * fVar55);
            do {
              iVar51 = iVar51 + -1;
              uVar42 = (uint)uVar43;
              iVar96 = *(int *)(lVar33 + 0x60);
              lVar38 = (long)iVar96;
              uVar39 = (uint)lVar34;
              if (lVar34 < iVar94) {
                uVar37 = uVar39;
                if (*(int *)(lVar33 + 0x78) != 0) {
                  uVar37 = *(uint *)(*(long *)(lVar33 + 0x70) + lVar34 * 4);
                }
                if (uVar37 == 0xffffffff) {
                  lVar35 = lVar35 + lVar45;
                  lVar31 = *(long *)(lVar33 + 0x58) + lVar34 * lVar38 * 4;
                  lVar38 = lVar31 + lVar38 * 4;
                }
                else {
                  lVar31 = *(long *)(lVar33 + 0x130) + (long)(int)(uVar37 * iVar96) * 4;
                  lVar38 = lVar31 + lVar38 * 4;
                  lVar35 = *(long *)(lVar33 + 0xc0) + (long)(int)uVar37 * 0x14;
                }
              }
              else {
                lVar31 = *(long *)(lVar33 + 0x150) + (long)(int)(iVar96 * (uVar39 - iVar94)) * 4;
                lVar38 = lVar31 + lVar38 * 4;
                lVar35 = *(long *)(lVar33 + 0xe0) + (long)(int)(uVar39 - iVar94) * 0x14;
              }
              iVar94 = *(int *)(lVar35 + 4);
              iVar96 = *(int *)(lVar33 + 0x40);
              plVar29 = (long *)(lVar33 + 0x38);
              if (iVar96 <= iVar94) {
                plVar29 = (long *)(lVar33 + 0xf0);
              }
              iVar40 = 0;
              if (iVar96 <= iVar94) {
                iVar40 = iVar96;
              }
              puVar3 = (undefined8 *)(*plVar29 + (long)(iVar94 - iVar40) * 0x10);
              fVar66 = (float)puVar3[1];
              uVar7 = *puVar3;
              uVar39 = uVar48 & 0xffc00000 | uVar39;
              fVar56 = (float)uVar7;
              fVar55 = (float)((ulong)uVar7 >> 0x20);
              fVar53 = (float)*(undefined8 *)(lVar46 + 0x90) +
                       *(float *)(lVar46 + 0x80) * fVar66 +
                       (float)*(undefined8 *)(lVar46 + 0x60) * fVar56 +
                       *(float *)(lVar46 + 0x70) * fVar55;
              fVar58 = (float)((ulong)*(undefined8 *)(lVar46 + 0x90) >> 0x20) +
                       *(float *)(lVar46 + 0x84) * fVar66 +
                       (float)((ulong)*(undefined8 *)(lVar46 + 0x60) >> 0x20) * fVar56 +
                       *(float *)(lVar46 + 0x74) * fVar55;
              fVar54 = (float)*(undefined8 *)(lVar46 + 0x98) +
                       *(float *)(lVar46 + 0x88) * fVar66 +
                       (float)*(undefined8 *)(lVar46 + 0x68) * fVar56 +
                       *(float *)(lVar46 + 0x78) * fVar55;
              fVar65 = fVar67 * fVar53;
              fVar69 = fVar72 * fVar58;
              fVar59 = fVar88 * fVar54;
              fVar57 = fVar65 + fVar69 + fVar59;
              fVar59 = fVar65 + fVar69 + fVar59;
              fVar53 = fVar53 - fVar67 * fVar57;
              fVar58 = fVar58 - fVar72 * fVar59;
              auVar103._0_8_ = CONCAT44(fVar58,fVar53);
              auVar103._8_4_ = fVar54 - fVar88 * fVar57;
              auVar103._12_4_ =
                   ((float)((ulong)*(undefined8 *)(lVar46 + 0x98) >> 0x20) +
                   *(float *)(lVar46 + 0x8c) * fVar66 +
                   (float)((ulong)*(undefined8 *)(lVar46 + 0x68) >> 0x20) * fVar56 +
                   *(float *)(lVar46 + 0x7c) * fVar55) - fVar91 * fVar59;
              fVar56 = (float)uVar98;
              fVar53 = fVar53 - fVar56;
              fVar55 = (float)((ulong)uVar98 >> 0x20);
              fVar58 = fVar58 - fVar55;
              uVar60 = SUB41(fVar58,0);
              uVar61 = (undefined1)((uint)fVar58 >> 8);
              uVar62 = (undefined1)((uint)fVar58 >> 0x10);
              uVar63 = (undefined1)((uint)fVar58 >> 0x18);
              fVar66 = (float)uVar100;
              fVar65 = auVar103._8_4_ - fVar66;
              fVar54 = (float)((ulong)uVar100 >> 0x20);
              fVar57 = auVar103._12_4_ - fVar54;
              if (((uVar39 == uVar36) || (uVar39 == uVar47)) || (uVar39 == uVar2)) {
LAB_03173ec4:
                auVar78._0_4_ = fVar53 * fVar53;
                auVar78._4_4_ = fVar58 * fVar58;
                auVar78._8_4_ = fVar65 * fVar65;
                auVar78._12_4_ = fVar57 * fVar57;
                auVar82._0_4_ = (fVar79 - fVar56) * fVar53;
                auVar82._4_4_ = (fVar85 - fVar55) * fVar58;
                auVar82._8_4_ = (fVar107 - fVar66) * fVar65;
                auVar82._12_4_ = (fVar108 - fVar54) * fVar57;
                fVar69 = (fVar64 - fVar56) * fVar53;
                fVar59 = (fVar68 - fVar55) * fVar58;
                fVar70 = (fVar73 - fVar66) * fVar65;
                fVar57 = (fVar50 - fVar54) * fVar57;
                auVar77 = NEON_ext(auVar78,auVar78,8,1);
                auVar81 = NEON_ext(auVar82,auVar82,8,1);
                auVar14._4_4_ = fVar59;
                auVar14._0_4_ = fVar69;
                auVar14._8_4_ = fVar70;
                auVar14._12_4_ = fVar57;
                auVar15._4_4_ = fVar59;
                auVar15._0_4_ = fVar69;
                auVar15._8_4_ = fVar70;
                auVar15._12_4_ = fVar57;
                auVar83 = NEON_ext(auVar14,auVar15,8,1);
                fVar54 = auVar77._0_4_ + auVar78._0_4_ + auVar78._4_4_;
                fVar57 = auVar81._0_4_ + auVar82._0_4_ + auVar82._4_4_;
                fVar69 = auVar83._0_4_ + fVar69 + fVar59;
                uVar98 = NEON_frecpe(CONCAT44(fVar54,fVar54),4);
                uVar100 = NEON_frecps(CONCAT44(fVar54,fVar54),uVar98,4);
                fVar59 = (float)uVar98 * (float)uVar100;
                fVar70 = (float)((ulong)uVar98 >> 0x20) * (float)((ulong)uVar100 >> 0x20);
                iVar94 = -(uint)(fVar54 == 0.0);
                iVar96 = -(uint)(fVar54 == 0.0);
                uVar98 = NEON_frecps(CONCAT44(fVar54,fVar54),CONCAT44(fVar70,fVar59),4);
                uVar28 = CONCAT44(fVar70 * (float)((ulong)uVar98 >> 0x20),fVar59 * (float)uVar98) &
                         CONCAT17(~(byte)((uint)iVar96 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar96 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar96 >> 8),
                                                    CONCAT14(~(byte)iVar96,
                                                             CONCAT13(~(byte)((uint)iVar94 >> 0x18),
                                                                      CONCAT12(~(byte)((uint)iVar94
                                                                                      >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar94 >> 8),~(byte)iVar94)))))));
                fVar54 = (float)uVar28;
                fVar59 = (float)(uVar28 >> 0x20);
                uVar98 = NEON_fminnm(CONCAT44(fVar59 * fVar57,fVar54 * fVar57),uVar99,4);
                uVar98 = NEON_fmax(uVar98,0,4);
                uVar100 = NEON_fminnm(CONCAT44(fVar59 * fVar69,fVar54 * fVar69),uVar99,4);
                fVar54 = (fVar79 - fVar56) - fVar53 * (float)uVar98;
                fVar57 = (fVar85 - fVar55) - fVar58 * (float)((ulong)uVar98 >> 0x20);
                fVar69 = (fVar107 - fVar66) - fVar65 * (float)uVar98;
                uVar98 = NEON_fmax(uVar100,0,4);
                fVar56 = (fVar64 - fVar56) - fVar53 * (float)uVar98;
                fVar53 = (fVar68 - fVar55) - fVar58 * (float)((ulong)uVar98 >> 0x20);
                fVar58 = (fVar73 - fVar66) - fVar65 * (float)uVar98;
                fVar54 = fVar54 * fVar54;
                fVar57 = fVar57 * fVar57;
                fVar69 = fVar69 * fVar69;
                fVar56 = fVar56 * fVar56;
                fVar53 = fVar53 * fVar53;
                fVar58 = fVar58 * fVar58;
                fVar66 = fVar54 + fVar57 + fVar69;
                fVar55 = fVar56 + fVar53 + fVar58;
                bVar21 = true;
                bVar22 = false;
                if ((float)uVar26 <= fVar66) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar55) && !NAN((float)uVar25)) {
                    bVar21 = fVar55 < (float)uVar25;
                    bVar22 = false;
                  }
                }
                if (bVar21 != bVar22) {
                  if (*(int *)(lVar35 + 8) == -1) {
LAB_03174038:
                    uVar26 = NEON_fmin(uVar26,CONCAT44(fVar54 + fVar57 + fVar69,fVar66),4);
                    uVar25 = NEON_fmin(uVar25,CONCAT44(fVar56 + fVar53 + fVar58,fVar55),4);
                  }
                  else {
                    bVar23 = *(byte *)(lVar35 + 0x10);
                    if ((param_2 == (long *)0x0) || ((bVar23 >> 5 & 1) != 0)) {
                      if ((bVar23 >> 5 & 1) != 0) goto LAB_03174038;
                    }
                    else {
                      uVar28 = (**(code **)(*param_2 + 0x28))
                                         (param_2,param_1,uVar39,lVar35,lVar31,lVar38);
                      auVar103._8_8_ = auVar103._8_8_;
                      if ((uVar28 & 1) == 0) goto LAB_03174038;
                      lVar33 = *(long *)(lVar46 + 0x20);
                      bVar23 = *(byte *)(lVar35 + 0x10);
                    }
                    uVar39 = *(uint *)(lVar35 + 0xc);
                    if (((bVar23 >> 6 & 1) == 0) && (uVar39 != 0xffffffff)) {
                      uVar39 = uVar39 & 0x3fffff | *(int *)(lVar33 + 0x17c) << 0x16;
                    }
                    uVar19 = local_b0._4_4_;
                    uVar37 = uVar42 + 1;
                    if ((int)uVar42 < (int)(local_b0._4_4_ & 0x3fffffff)) {
                    }
                    else {
                      if (0x3ffffffe < (int)uVar42) {
                        FUN_032bd0a8(uVar37);
                      }
                      uVar42 = (uVar19 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar42) {
                        uVar42 = 0x3fffffff;
                      }
                      uVar19 = uVar37;
                      if ((int)uVar37 <= (int)uVar42) {
                        uVar19 = uVar42;
                      }
                      local_148 = FUN_032bd1d4(puVar20,uVar19,4,local_148,uVar43 & 0xffffffff,
                                               (long)&local_b0 + 4);
                      uVar42 = (uint)local_b0;
                      local_b8 = local_148;
                    }
                    *(uint *)(local_148 + (long)(int)uVar42 * 4) = uVar39;
                    uVar43 = (ulong)uVar37;
                    local_b0 = CONCAT44(local_b0._4_4_,uVar37);
                    uVar42 = uVar37;
                  }
                }
              }
              else {
                fVar69 = (fVar79 + (fVar64 - fVar79) * 0.5) - fVar56;
                fVar70 = (fVar85 + (fVar68 - fVar85) * 0.5) - fVar55;
                fVar74 = (fVar107 + (fVar73 - fVar107) * 0.5) - fVar66;
                fVar75 = (fVar108 + (fVar50 - fVar108) * 0.5) - fVar54;
                auVar83[4] = uVar60;
                auVar83._0_4_ = fVar53;
                auVar83[5] = uVar61;
                auVar83[6] = uVar62;
                auVar83[7] = uVar63;
                auVar83._8_4_ = fVar65;
                auVar83._12_4_ = fVar57;
                auVar5[4] = uVar60;
                auVar5._0_4_ = fVar53;
                auVar5[5] = uVar61;
                auVar5[6] = uVar62;
                auVar5[7] = uVar63;
                auVar5._8_4_ = fVar65;
                auVar5._12_4_ = fVar57;
                auVar77 = NEON_ext(auVar83,auVar5,4,1);
                auVar8._4_4_ = fVar70;
                auVar8._0_4_ = fVar69;
                auVar8._8_4_ = fVar74;
                auVar8._12_4_ = fVar75;
                auVar9._4_4_ = fVar70;
                auVar9._0_4_ = fVar69;
                auVar9._8_4_ = fVar74;
                auVar9._12_4_ = fVar75;
                auVar81 = NEON_ext(auVar8,auVar9,4,1);
                fVar59 = auVar81._0_4_ * fVar53 - fVar69 * auVar77._0_4_;
                fVar71 = auVar81._4_4_ * fVar58 - fVar70 * auVar77._4_4_;
                fVar69 = fVar69 * fVar65 - fVar74 * fVar53;
                fVar70 = fVar70 * fVar57 -
                         fVar75 * (float)(CONCAT17(uVar63,CONCAT16(uVar62,CONCAT15(uVar61,CONCAT14(
                                                  uVar60,fVar53)))) >> 0x20);
                auVar10._4_4_ = fVar71;
                auVar10._0_4_ = fVar59;
                auVar10._8_4_ = fVar69;
                auVar10._12_4_ = fVar70;
                auVar11._4_4_ = fVar71;
                auVar11._0_4_ = fVar59;
                auVar11._8_4_ = fVar69;
                auVar11._12_4_ = fVar70;
                auVar77 = NEON_ext(auVar10,auVar11,4,1);
                fVar69 = fVar67 * auVar77._0_4_;
                fVar70 = fVar72 * auVar77._4_4_;
                auVar12._4_4_ = fVar70;
                auVar12._0_4_ = fVar69;
                auVar12._8_4_ = fVar88 * fVar59;
                auVar12._12_4_ = fVar91 * fVar71;
                auVar13._4_4_ = fVar70;
                auVar13._0_4_ = fVar69;
                auVar13._8_4_ = fVar88 * fVar59;
                auVar13._12_4_ = fVar91 * fVar71;
                auVar77 = NEON_ext(auVar12,auVar13,8,1);
                if (0.0 <= auVar77._0_4_ + fVar69 + fVar70) goto LAB_03173ec4;
              }
              if (iVar51 == 0) break;
              lVar33 = *(long *)(lVar46 + 0x20);
              lVar34 = lVar34 + 1;
              lVar45 = lVar45 + 0x14;
              iVar94 = *(int *)(lVar33 + 0x30);
              lVar35 = *(long *)(lVar33 + 0x28);
              uVar100 = auVar103._8_8_;
              uVar98 = auVar103._0_8_;
            } while( true );
          }
        }
        else {
          lVar35 = *(long *)(lVar33 + 0x140) + (long)(iVar51 * iVar94) * 4;
          lVar34 = lVar35 + lVar34 * 4;
          piVar44 = (int *)(*(long *)(lVar33 + 0xd0) + (long)iVar94 * 0x10);
joined_r0x03173ca0:
          if (param_2 == (long *)0x0) goto LAB_03173cdc;
LAB_03173ca4:
          uVar28 = (**(code **)(*param_2 + 0x20))
                             (param_2,param_1,param_3 & 0xffffffff,piVar44,lVar35,lVar34);
          if ((uVar28 & 1) != 0) {
            lVar33 = *(long *)(lVar46 + 0x20);
            goto LAB_03173cdc;
          }
          lVar34 = *(long *)(lVar46 + 0x20);
          iVar51 = *piVar44;
          lVar33 = (long)iVar51;
          iVar94 = *(int *)(lVar34 + 0x30);
          if (iVar51 < iVar94) {
            iVar40 = iVar51;
            if (*(int *)(lVar34 + 0x78) != 0) {
              iVar40 = *(int *)(*(long *)(lVar34 + 0x70) + lVar33 * 4);
            }
            lVar35 = *(long *)(lVar34 + 0x28);
            iVar96 = iVar51;
            if (iVar40 != -1) {
              plVar29 = (long *)(lVar34 + 0xc0);
              iVar96 = iVar40;
              goto LAB_031747ec;
            }
          }
          else {
            iVar96 = iVar51 - iVar94;
            plVar29 = (long *)(lVar34 + 0xe0);
LAB_031747ec:
            lVar35 = *plVar29;
          }
          iVar40 = *(int *)(lVar34 + 0x40);
          iVar96 = *(int *)(lVar35 + (long)iVar96 * 0x14);
          plVar29 = (long *)(lVar34 + 0x38);
          if (iVar40 <= iVar96) {
            plVar29 = (long *)(lVar34 + 0xf0);
          }
          iVar18 = 0;
          if (iVar40 <= iVar96) {
            iVar18 = iVar40;
          }
          if ((short)piVar44[2] != 0) {
            fVar75 = (float)*(undefined8 *)(lVar46 + 0x88);
            fVar76 = (float)((ulong)*(undefined8 *)(lVar46 + 0x88) >> 0x20);
            fVar71 = (float)*(undefined8 *)(lVar46 + 0x80);
            fVar74 = (float)((ulong)*(undefined8 *)(lVar46 + 0x80) >> 0x20);
            auVar77 = *(undefined1 (*) [16])(lVar46 + 0x90);
            lVar35 = (long)iVar94 * -0x14 + lVar33 * 0x14;
            pfVar4 = (float *)(*plVar29 + (long)(iVar96 - iVar18) * 0x10);
            fVar53 = *pfVar4;
            fVar58 = pfVar4[1];
            fVar66 = pfVar4[2];
            fVar59 = (float)*(undefined8 *)(lVar46 + 0x78);
            fVar70 = (float)((ulong)*(undefined8 *)(lVar46 + 0x78) >> 0x20);
            fVar54 = (float)*(undefined8 *)(lVar46 + 0x60);
            fVar65 = (float)((ulong)*(undefined8 *)(lVar46 + 0x60) >> 0x20);
            fVar57 = (float)*(undefined8 *)(lVar46 + 0x68);
            fVar69 = (float)((ulong)*(undefined8 *)(lVar46 + 0x68) >> 0x20);
            fVar56 = (float)*(undefined8 *)(lVar46 + 0x70);
            fVar55 = (float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20);
            fVar80 = auVar77._0_4_ + fVar71 * fVar66 + fVar54 * fVar53 + fVar56 * fVar58;
            fVar86 = auVar77._4_4_ + fVar74 * fVar66 + fVar65 * fVar53 + fVar55 * fVar58;
            fVar87 = auVar77._8_4_ + fVar75 * fVar66 + fVar57 * fVar53 + fVar59 * fVar58;
            fVar89 = fVar67 * fVar80;
            fVar92 = fVar72 * fVar86;
            fVar93 = fVar88 * fVar87;
            fVar90 = fVar93 + fVar89 + fVar92;
            fVar93 = fVar93 + fVar89 + fVar92;
            auVar84._0_4_ = fVar80 - fVar67 * fVar90;
            auVar84._4_4_ = fVar86 - fVar72 * fVar93;
            auVar84._8_4_ = fVar87 - fVar88 * fVar90;
            auVar84._12_4_ =
                 (auVar77._12_4_ + fVar76 * fVar66 + fVar69 * fVar53 + fVar70 * fVar58) -
                 fVar91 * fVar93;
            do {
              if (lVar33 < iVar94) {
                if (*(int *)(lVar34 + 0x78) == 0) {
                  iVar96 = (int)lVar33;
                }
                else {
                  iVar96 = *(int *)(*(long *)(lVar34 + 0x70) + lVar33 * 4);
                }
                if (iVar96 == -1) {
                  lVar46 = *(long *)(lVar34 + 0x28) + lVar33 * 0x14;
                }
                else {
                  lVar46 = *(long *)(lVar34 + 0xc0) + (long)iVar96 * 0x14;
                }
              }
              else {
                lVar46 = *(long *)(lVar34 + 0xe0) + lVar35;
              }
              if (*(int *)(lVar46 + 4) < iVar40) {
                iVar96 = 0;
                plVar29 = (long *)(lVar34 + 0x38);
              }
              else {
                plVar29 = (long *)(lVar34 + 0xf0);
                iVar96 = iVar40;
              }
              lVar33 = lVar33 + 1;
              puVar3 = (undefined8 *)(*plVar29 + (long)(*(int *)(lVar46 + 4) - iVar96) * 0x10);
              fVar92 = (float)puVar3[1];
              uVar98 = *puVar3;
              fVar86 = (float)uVar98;
              fVar89 = (float)((ulong)uVar98 >> 0x20);
              lVar35 = lVar35 + 0x14;
              fVar87 = auVar77._0_4_ + fVar71 * fVar92 + fVar54 * fVar86 + fVar56 * fVar89;
              fVar90 = auVar77._4_4_ + fVar74 * fVar92 + fVar65 * fVar86 + fVar55 * fVar89;
              fVar93 = auVar77._8_4_ + fVar75 * fVar92 + fVar57 * fVar86 + fVar59 * fVar89;
              fVar53 = fVar67 * fVar87;
              fVar58 = fVar72 * fVar90;
              fVar97 = fVar88 * fVar93;
              fVar95 = fVar53 + fVar58 + fVar97;
              fVar97 = fVar53 + fVar58 + fVar97;
              fVar53 = auVar84._0_4_;
              fVar58 = auVar84._4_4_;
              fVar66 = auVar84._8_4_;
              fVar80 = auVar84._12_4_;
              fVar87 = fVar87 - fVar67 * fVar95;
              fVar90 = fVar90 - fVar72 * fVar97;
              fVar93 = fVar93 - fVar88 * fVar95;
              fVar86 = (auVar77._12_4_ + fVar76 * fVar92 + fVar69 * fVar86 + fVar70 * fVar89) -
                       fVar91 * fVar97;
              fVar89 = fVar87 - fVar53;
              fVar92 = fVar90 - fVar58;
              fVar97 = fVar93 - fVar66;
              fVar95 = fVar86 - fVar80;
              auVar101._0_4_ = fVar89 * fVar89;
              auVar101._4_4_ = fVar92 * fVar92;
              auVar101._8_4_ = fVar97 * fVar97;
              auVar101._12_4_ = fVar95 * fVar95;
              auVar102._0_4_ = (fVar79 - fVar53) * fVar89;
              auVar102._4_4_ = (fVar85 - fVar58) * fVar92;
              auVar102._8_4_ = (fVar107 - fVar66) * fVar97;
              auVar102._12_4_ = (fVar108 - fVar80) * fVar95;
              fVar104 = (fVar64 - fVar53) * fVar89;
              fVar105 = (fVar68 - fVar58) * fVar92;
              fVar106 = (fVar73 - fVar66) * fVar97;
              fVar95 = (fVar50 - fVar80) * fVar95;
              auVar81 = NEON_ext(auVar101,auVar101,8,1);
              auVar103 = NEON_ext(auVar102,auVar102,8,1);
              auVar16._4_4_ = fVar105;
              auVar16._0_4_ = fVar104;
              auVar16._8_4_ = fVar106;
              auVar16._12_4_ = fVar95;
              auVar17._4_4_ = fVar105;
              auVar17._0_4_ = fVar104;
              auVar17._8_4_ = fVar106;
              auVar17._12_4_ = fVar95;
              auVar83 = NEON_ext(auVar16,auVar17,8,1);
              fVar80 = auVar81._0_4_ + auVar101._0_4_ + auVar101._4_4_;
              fVar95 = auVar103._0_4_ + auVar102._0_4_ + auVar102._4_4_;
              fVar104 = auVar83._0_4_ + fVar104 + fVar105;
              uVar98 = NEON_frecpe(CONCAT44(fVar80,fVar80),4);
              uVar100 = NEON_frecps(CONCAT44(fVar80,fVar80),uVar98,4);
              fVar105 = (float)uVar98 * (float)uVar100;
              fVar106 = (float)((ulong)uVar98 >> 0x20) * (float)((ulong)uVar100 >> 0x20);
              iVar96 = -(uint)(fVar80 == 0.0);
              iVar18 = -(uint)(fVar80 == 0.0);
              uVar98 = NEON_frecps(CONCAT44(fVar80,fVar80),CONCAT44(fVar106,fVar105),4);
              uVar43 = CONCAT44(fVar106 * (float)((ulong)uVar98 >> 0x20),fVar105 * (float)uVar98) &
                       CONCAT17(~(byte)((uint)iVar18 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar18 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar18 >> 8),
                                                  CONCAT14(~(byte)iVar18,
                                                           CONCAT13(~(byte)((uint)iVar96 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar96 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar96 >> 8),~(byte)iVar96)))))));
              fVar80 = (float)uVar43;
              fVar105 = (float)(uVar43 >> 0x20);
              uVar98 = NEON_fminnm(CONCAT44(fVar105 * fVar95,fVar80 * fVar95),uVar99,4);
              uVar98 = NEON_fmax(uVar98,0,4);
              uVar100 = NEON_fminnm(CONCAT44(fVar105 * fVar104,fVar80 * fVar104),uVar99,4);
              fVar80 = (fVar79 - fVar53) - (float)uVar98 * fVar89;
              fVar95 = (fVar85 - fVar58) - (float)((ulong)uVar98 >> 0x20) * fVar92;
              fVar104 = (fVar107 - fVar66) - (float)uVar98 * fVar97;
              uVar98 = NEON_fmax(uVar100,0,4);
              fVar53 = (fVar64 - fVar53) - (float)uVar98 * fVar89;
              fVar58 = (fVar68 - fVar58) - (float)((ulong)uVar98 >> 0x20) * fVar92;
              fVar66 = (fVar73 - fVar66) - (float)uVar98 * fVar97;
              fVar80 = fVar80 * fVar80;
              fVar95 = fVar95 * fVar95;
              fVar104 = fVar104 * fVar104;
              fVar53 = fVar53 * fVar53;
              fVar58 = fVar58 * fVar58;
              fVar66 = fVar66 * fVar66;
              uVar26 = NEON_fmin(uVar26,CONCAT44(fVar80 + fVar95 + fVar104,fVar80 + fVar95 + fVar104
                                                ),4);
              uVar25 = NEON_fmin(uVar25,CONCAT44(fVar53 + fVar58 + fVar66,fVar53 + fVar58 + fVar66),
                                 4);
              auVar84._12_4_ = fVar86;
              auVar84._8_4_ = fVar93;
              auVar84._4_4_ = fVar90;
              auVar84._0_4_ = fVar87;
            } while (iVar51 + (short)piVar44[2] != lVar33);
          }
        }
        iVar51 = local_c0;
        lVar33 = local_c8;
        uVar43 = (ulong)(int)uVar42;
        do {
          if (uVar43 == 0) {
            uVar99 = NEON_frsqrte(uVar26,4);
            fVar50 = (float)uVar99;
            fVar56 = (float)((ulong)uVar99 >> 0x20);
            uVar99 = NEON_frsqrts(uVar26,CONCAT44(fVar56 * fVar56,fVar50 * fVar50),4);
            fVar50 = fVar50 * (float)uVar99;
            fVar56 = fVar56 * (float)((ulong)uVar99 >> 0x20);
            uVar99 = NEON_frsqrts(uVar26,CONCAT44(fVar56 * fVar56,fVar50 * fVar50),4);
            iVar94 = -(uint)((float)uVar26 <= 0.0);
            fVar55 = (float)uVar26 * (float)uVar99 * fVar50;
            uVar99 = NEON_frsqrte(uVar25,4);
            fVar50 = (float)uVar99;
            fVar56 = (float)((ulong)uVar99 >> 0x20);
            uVar99 = NEON_frsqrts(uVar25,CONCAT44(fVar56 * fVar56,fVar50 * fVar50),4);
            fVar50 = fVar50 * (float)uVar99;
            fVar56 = fVar56 * (float)((ulong)uVar99 >> 0x20);
            uVar99 = NEON_frsqrts(uVar25,CONCAT44(fVar56 * fVar56,fVar50 * fVar50),4);
            local_b0 = (ulong)local_b0._4_4_ << 0x20;
            *param_13 = fVar6 + (float)CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                                ~(byte)((uint)iVar94 >> 0x18),
                                                CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                         ~(byte)((uint)iVar94 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                  ~(byte)((uint)iVar94 >> 8),
                                                                  SUB41(fVar55,0) & ~(byte)iVar94)))
            ;
            iVar94 = -(uint)((float)uVar25 <= 0.0);
            fVar50 = (float)uVar25 * (float)uVar99 * fVar50;
            *param_14 = fVar6 + (float)CONCAT13((byte)((uint)fVar50 >> 0x18) &
                                                ~(byte)((uint)iVar94 >> 0x18),
                                                CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                                         ~(byte)((uint)iVar94 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar50 >> 8) &
                                                                  ~(byte)((uint)iVar94 >> 8),
                                                                  SUB41(fVar50,0) & ~(byte)iVar94)))
            ;
            if (local_c8 == lVar27) {
              local_d0 = (ulong)local_d0._4_4_ << 0x20;
            }
            lVar34 = *(long *)(lVar32 + 0x38d490);
            if (lVar34 == 0) {
              lVar34 = FUN_0333d16c(0,1);
              *(long *)(lVar32 + 0x38d490) = lVar34;
            }
            lVar34 = *(long *)(lVar34 + 8);
            uVar25 = (ulong)(int)(iVar51 * 4 + 0x7fU & 0xffffff80);
            if (((*(ulong *)(lVar34 + 0x10) < uVar25) ||
                (*(long *)(lVar34 + 0x18) != uVar25 + lVar33)) ||
               (*(long *)(lVar34 + 0x28) == lVar33)) {
              if (lVar33 != 0) {
                if (*(ulong *)(lVar34 + 0x10) < uVar25) {
                  *(int *)(*(long *)(lVar34 + 8) + 0x20) =
                       *(int *)(*(long *)(lVar34 + 8) + 0x20) + -1;
                  (**(code **)(**(long **)(lVar34 + 0x40) + 0x18))(*(long **)(lVar34 + 0x40),lVar33)
                  ;
                }
                else if (*(long *)(lVar34 + 0x18) == uVar25 + lVar33) {
                  *(long *)(lVar34 + 0x18) = lVar33;
                  FUN_032ce944();
                }
                else {
                  FUN_032ceaf0(lVar34,lVar33);
                }
              }
            }
            else {
              *(long *)(lVar34 + 0x18) = lVar33;
            }
            uVar25 = local_d0 & 0xffffffff00000000;
            if (lVar27 != 0) {
              local_d0._4_4_ = (uint)(uVar25 >> 0x20);
              if (-1 < (long)uVar25) {
                iVar51 = local_d0._4_4_ << 2;
                local_d0 = uVar25;
                (**(code **)(*(long *)puVar20 + 0x18))(puVar20,lVar27,iVar51);
                uVar25 = local_d0;
              }
            }
            local_d0 = uVar25;
            iVar51 = local_a0;
            lVar33 = local_a8;
            if (local_a8 == local_148) {
              local_b0 = local_b0 & 0xffffffff00000000;
            }
            lVar27 = *(long *)(lVar32 + 0x38d490);
            if (lVar27 == 0) {
              lVar27 = FUN_0333d16c(0,1);
              *(long *)(lVar32 + 0x38d490) = lVar27;
            }
            lVar32 = *(long *)(lVar27 + 8);
            uVar25 = (ulong)(int)(iVar51 * 4 + 0x7fU & 0xffffff80);
            if (((*(ulong *)(lVar32 + 0x10) < uVar25) ||
                (*(long *)(lVar32 + 0x18) != uVar25 + lVar33)) ||
               (*(long *)(lVar32 + 0x28) == lVar33)) {
              if (lVar33 != 0) {
                if (*(ulong *)(lVar32 + 0x10) < uVar25) {
                  *(int *)(*(long *)(lVar32 + 8) + 0x20) =
                       *(int *)(*(long *)(lVar32 + 8) + 0x20) + -1;
                  (**(code **)(**(long **)(lVar32 + 0x40) + 0x18))(*(long **)(lVar32 + 0x40),lVar33)
                  ;
                }
                else if (*(long *)(lVar32 + 0x18) == uVar25 + lVar33) {
                  *(long *)(lVar32 + 0x18) = lVar33;
                  FUN_032ce944();
                }
                else {
                  FUN_032ceaf0(lVar32,lVar33);
                }
              }
            }
            else {
              *(long *)(lVar32 + 0x18) = lVar33;
            }
            uVar26 = local_b0;
            uVar25 = local_b0 >> 0x20;
            local_b0 = local_b0 & 0xffffffff00000000;
            if ((local_148 != 0) && (-1 < (long)uVar26)) {
              (**(code **)(*(long *)puVar20 + 0x18))(puVar20,local_148,(int)uVar25 << 2);
            }
            goto LAB_03173820;
          }
          uVar43 = uVar43 - 1;
          lVar34 = 0;
          uVar39 = *(uint *)(local_148 + uVar43 * 4);
          param_3 = (ulong)uVar39;
          while (*(uint *)(lVar27 + lVar34 * 4) != uVar39) {
            lVar34 = lVar34 + 1;
            if (uVar49 + 1 == lVar34) goto LAB_03174124;
          }
        } while (-1 < (int)lVar34);
LAB_03174124:
        local_b0 = CONCAT44(local_b0._4_4_,(int)uVar43);
        uVar49 = uVar1;
        uVar39 = local_d0._4_4_;
      } while( true );
    }
  }
  *param_13 = fVar6;
LAB_0317381c:
  *param_14 = fVar6;
LAB_03173820:
  if ((local_98 != 0) && (local_90 != '\0')) {
    FUN_032d5b34(local_98,&DAT_0390f40e);
  }
  lVar32 = nn::os::GetSystemTick();
  *(long *)(param_15 + 8) = (lVar32 - lVar24) + *(long *)(param_15 + 8);
  *(int *)(param_15 + 0x10) = *(int *)(param_15 + 0x10) + 1;
  return;
}


