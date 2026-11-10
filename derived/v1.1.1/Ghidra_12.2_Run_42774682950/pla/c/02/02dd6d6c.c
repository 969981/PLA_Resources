/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd6d6c; name: FUN_02dd6d6c
 */


void FUN_02dd6d6c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined4 *puVar1;
  undefined1 (*pauVar2) [16];
  unkbyte9 *pVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined2 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined *puVar24;
  ulong uVar25;
  long *plVar26;
  undefined4 *puVar27;
  float *pfVar28;
  char *pcVar29;
  undefined1 (*pauVar30) [16];
  undefined4 *puVar31;
  long lVar32;
  ulong *puVar33;
  undefined8 *puVar34;
  long lVar35;
  int *piVar36;
  undefined8 *puVar37;
  undefined4 *puVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float extraout_s0;
  float fVar43;
  undefined8 extraout_d0;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar44 [16];
  float extraout_var;
  float extraout_var_00;
  undefined8 extraout_var_01;
  float extraout_var_02;
  undefined1 auVar45 [16];
  float fVar51;
  float fVar52;
  float fVar54;
  float fVar55;
  undefined1 auVar53 [16];
  float fVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  byte bVar75;
  byte bVar76;
  float fVar71;
  int iVar72;
  byte bVar77;
  int iVar78;
  float fVar79;
  int iVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  int iVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar85;
  undefined1 auVar84 [16];
  undefined8 local_110;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0;
  byte bStack_ef;
  byte bStack_ee;
  byte bStack_ed;
  byte bStack_ec;
  byte bStack_eb;
  byte bStack_ea;
  byte bStack_e9;
  byte bStack_e8;
  byte bStack_e7;
  byte bStack_e6;
  byte bStack_e5;
  byte bStack_e4;
  byte bStack_e3;
  byte bStack_e2;
  byte bStack_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar32 = *(long *)(param_5 + 8);
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar72 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar72 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
    lVar32 = *(long *)(lVar32 + 200);
  }
  else {
    lVar32 = *(long *)(lVar32 + 200);
  }
  if (lVar32 == 0) {
    puVar37 = (undefined8 *)PTR_DAT_0437a578;
  }
  else {
    puVar37 = (undefined8 *)(lVar32 + 0x88);
  }
  fVar41 = *(float *)(param_5 + 0xf4);
  if (1.1920929e-07 < fVar41) {
    fVar71 = *(float *)(param_5 + 0x100);
    if (ABS(fVar71 - param_2) <= 1.1920929e-07) {
      fVar56 = *(float *)(param_5 + 0xf8);
      uVar21 = *(undefined4 *)(param_5 + 0xfc);
      uVar57 = (undefined1)uVar21;
      uVar58 = (undefined1)((uint)uVar21 >> 8);
      uVar60 = (undefined1)((uint)uVar21 >> 0x10);
      uVar62 = (undefined1)((uint)uVar21 >> 0x18);
    }
    else {
      fVar56 = 0.0;
      uVar57 = 0;
      uVar58 = 0;
      uVar60 = 0;
      uVar62 = 0;
      if (1.1920929e-07 < param_2) {
        fVar71 = *(float *)(param_5 + 0xfc) +
                 (fVar71 - *(float *)(param_5 + 0xfc)) * (*(float *)(param_5 + 0xf8) / fVar41);
        uVar57 = SUB41(fVar71,0);
        uVar58 = (undefined1)((uint)fVar71 >> 8);
        uVar60 = (undefined1)((uint)fVar71 >> 0x10);
        uVar62 = (undefined1)((uint)fVar71 >> 0x18);
      }
      *(uint *)(param_5 + 0xfc) = CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar57)));
      *(float *)(param_5 + 0x100) = param_2;
      *(undefined4 *)(param_5 + 0xf8) = 0;
      fVar71 = param_2;
    }
    fVar42 = fVar41;
    if (fVar56 + param_1 <= fVar41) {
      fVar42 = fVar56 + param_1;
    }
    param_2 = (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar57))) +
              (fVar71 - (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar57)))) *
              (fVar42 / fVar41);
    *(float *)(param_5 + 0xf8) = fVar42;
  }
  uVar25 = FUN_02dd7718(param_5,*(undefined8 *)(param_5 + 0x58));
  fVar41 = *(float *)(param_5 + 0x130) + param_1;
  *(float *)(param_5 + 0x130) = fVar41;
  if (1.0 < fVar41) {
    fVar41 = fmodf(fVar41,1.0);
    *(float *)(param_5 + 0x130) = fVar41;
  }
  if (*(int *)(param_5 + 0x128) == 1) {
    fVar41 = sinf(fVar41 * 360.0 *
                  (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0));
    fVar41 = (fVar41 + 1.0) * 0.5;
  }
  else {
    fVar41 = 0.0;
  }
  fVar71 = *(float *)(param_5 + 0xe8) * param_3 * *(float *)(param_5 + 0xdc);
  *(float *)(param_5 + 0x134) = fVar41;
  if (1.1920929e-07 < fVar71) {
    fVar41 = *(float *)(param_5 + 0x124) *
             fVar71 * (*(float *)(param_5 + 0x120) +
                      *(float *)(param_5 + 0xec) * param_4 * *(float *)(param_5 + 0xe0) *
                      fVar41 * *(float *)(param_5 + 300));
    auVar44._0_4_ = *(float *)(param_5 + 0x110) * fVar41;
    auVar44._4_4_ = *(float *)(param_5 + 0x114) * fVar41;
    auVar44._8_4_ = *(float *)(param_5 + 0x118) * fVar41;
    auVar44._12_4_ = *(float *)(param_5 + 0x11c) * fVar41;
    auVar53 = NEON_ext(auVar44,auVar44,8,1);
    bStack_e8 = auVar53[0];
    bStack_e7 = auVar53[1];
    bStack_e6 = auVar53[2];
    bStack_e5 = auVar53[3];
    bStack_e4 = 0;
    bStack_e3 = 0;
    bStack_e2 = 0;
    bStack_e1 = 0;
    local_f0 = SUB41(auVar44._0_4_,0);
    bStack_ef = (byte)((uint)auVar44._0_4_ >> 8);
    bStack_ee = (byte)((uint)auVar44._0_4_ >> 0x10);
    bStack_ed = (byte)((uint)auVar44._0_4_ >> 0x18);
    bStack_ec = SUB41(auVar44._4_4_,0);
    bStack_eb = (byte)((uint)auVar44._4_4_ >> 8);
    bStack_ea = (byte)((uint)auVar44._4_4_ >> 0x10);
    bStack_e9 = (byte)((uint)auVar44._4_4_ >> 0x18);
    puVar7 = (undefined8 *)(*(long **)(param_5 + 0x78))[1];
    for (puVar34 = (undefined8 *)**(long **)(param_5 + 0x78); puVar34 != puVar7;
        puVar34 = puVar34 + 6) {
      (**(code **)(**(long **)(param_5 + 0x10) + 0x1b0))
                (*(long **)(param_5 + 0x10),*puVar34,&local_f0,0);
    }
  }
  if ((uVar25 & 1) != 0) {
    puVar8 = (ulong *)(*(long **)(param_5 + 0x78))[1];
    for (puVar33 = (ulong *)**(long **)(param_5 + 0x78); puVar33 != puVar8; puVar33 = puVar33 + 6) {
      plVar26 = *(long **)(param_5 + 0x10);
      if ((*(byte *)(plVar26[7] + (*puVar33 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
        (**(code **)(*plVar26 + 0x348))(plVar26,*puVar33,0);
      }
    }
  }
  plVar26 = *(long **)(param_5 + 0x10);
  if (plVar26 != (long *)0x0) {
    if (param_1 <= 1.1920929e-07) {
      (**(code **)(*plVar26 + 0x460))();
    }
    else {
      bStack_ec = 0;
      bStack_eb = 0;
      bStack_ea = 0;
      bStack_e9 = 0;
      bStack_e8 = 1;
      bStack_e7 = 0;
      bStack_e6 = 0;
      bStack_e5 = 0;
      local_f0 = SUB41(param_1,0);
      bStack_ef = (byte)((uint)param_1 >> 8);
      bStack_ee = (byte)((uint)param_1 >> 0x10);
      bStack_ed = (byte)((uint)param_1 >> 0x18);
      FUN_03039630(plVar26,&local_f0,0);
      FUN_0303b120(*(undefined8 *)(param_5 + 0x10),0);
    }
  }
  puVar24 = PTR_PTR_0434a080;
  plVar26 = *(long **)(param_5 + 0xb8);
  if (plVar26[1] != *plVar26) {
    uVar25 = 0;
    do {
      pcVar29 = (char *)(*plVar26 + uVar25 * 0x70);
      fVar41 = *(float *)(pcVar29 + 0x58);
      uVar39 = (ulong)(int)fVar41;
      cVar10 = *pcVar29;
      puVar38 = *(undefined4 **)(pcVar29 + 0x50);
      local_100 = fVar41;
      if ((int)fVar41 < 1) {
        puVar27 = (undefined4 *)0x0;
        iVar72 = -0x80000000;
      }
      else {
        local_b0 = CONCAT44(local_b0._4_4_,4);
        if ((uVar39 & 0x3fffffffe0000000) != 0) {
          bStack_e8 = 0xa0;
          bStack_e7 = 0xb3;
          bStack_e6 = 0x11;
          bStack_e5 = 4;
          bStack_e4 = 0;
          bStack_e3 = 0;
          bStack_e2 = 0;
          bStack_e1 = 0;
          local_f0 = 2;
          bStack_ef = 0;
          bStack_ee = 0;
          bStack_ed = 0;
          bStack_ec = 0;
          bStack_eb = 0;
          bStack_ea = 0;
          bStack_e9 = 0;
          uStack_d8 = &local_100;
          local_e0 = &local_b0;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_f0);
        }
        uVar11 = (uVar39 & 0x3fffffff) << 2;
        uVar39 = -(uVar39 >> 0x1d & 1) & 0xffffffff00000000;
        local_f0 = (byte)uVar11;
        bStack_ef = (byte)(uVar11 >> 8);
        bStack_ee = (byte)(uVar11 >> 0x10);
        bStack_ed = (byte)(uVar11 >> 0x18);
        bStack_ec = (byte)(uVar39 >> 0x20);
        bStack_eb = (byte)(uVar39 >> 0x28);
        bStack_ea = (byte)(uVar39 >> 0x30);
        bStack_e9 = (byte)(uVar39 >> 0x38);
        puVar27 = (undefined4 *)
                  (**(code **)(*(long *)puVar24 + 0x10))(puVar24,uVar39 | uVar11,&local_f0);
        iVar72 = 0;
        if ((int)local_b0 != 0) {
          iVar72 = CONCAT13(bStack_ed,CONCAT12(bStack_ee,CONCAT11(bStack_ef,local_f0))) /
                   (int)local_b0;
        }
        uVar5 = (uint)fVar41 & 7;
        puVar4 = puVar27;
        if (6 < (int)fVar41 - 1U) {
          iVar78 = uVar5 - (int)fVar41;
          puVar31 = puVar27;
          do {
            *puVar31 = *puVar38;
            puVar31[1] = puVar38[1];
            puVar31[2] = puVar38[2];
            puVar31[3] = puVar38[3];
            puVar31[4] = puVar38[4];
            puVar31[5] = puVar38[5];
            puVar31[6] = puVar38[6];
            puVar1 = puVar38 + 7;
            puVar4 = puVar31 + 8;
            puVar38 = puVar38 + 8;
            iVar78 = iVar78 + 8;
            puVar31[7] = *puVar1;
            puVar31 = puVar4;
          } while (iVar78 != 0);
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = *puVar38;
          puVar38 = puVar38 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      if (cVar10 != '\0') {
        FUN_02dd7de0(param_5,uVar25);
      }
      if ((puVar27 != (undefined4 *)0x0) && (-1 < iVar72)) {
        (**(code **)(*(long *)puVar24 + 0x18))(puVar24,puVar27,iVar72 << 2);
      }
      plVar26 = *(long **)(param_5 + 0xb8);
      uVar25 = uVar25 + 1;
    } while (uVar25 < (ulong)((plVar26[1] - *plVar26 >> 4) * 0x6db6db6db6db6db7));
  }
  if (0 < *(int *)(param_5 + 0xf0)) {
    FUN_02dd7718(param_5,*(undefined8 *)(param_5 + 0x58));
    FUN_02dd7718(param_5,*(undefined8 *)(param_5 + 0x78));
    puVar24 = PTR_PTR_0434a080;
    plVar26 = *(long **)(param_5 + 0xb8);
    if (plVar26[1] != *plVar26) {
      uVar25 = 0;
      do {
        pcVar29 = (char *)(*plVar26 + uVar25 * 0x70);
        fVar41 = *(float *)(pcVar29 + 0x58);
        uVar39 = (ulong)(int)fVar41;
        cVar10 = *pcVar29;
        puVar38 = *(undefined4 **)(pcVar29 + 0x50);
        local_100 = fVar41;
        if ((int)fVar41 < 1) {
          puVar27 = (undefined4 *)0x0;
          iVar72 = -0x80000000;
        }
        else {
          local_b0 = CONCAT44(local_b0._4_4_,4);
          if ((uVar39 & 0x3fffffffe0000000) != 0) {
            bStack_e8 = 0xa0;
            bStack_e7 = 0xb3;
            bStack_e6 = 0x11;
            bStack_e5 = 4;
            bStack_e4 = 0;
            bStack_e3 = 0;
            bStack_e2 = 0;
            bStack_e1 = 0;
            local_f0 = 2;
            bStack_ef = 0;
            bStack_ee = 0;
            bStack_ed = 0;
            bStack_ec = 0;
            bStack_eb = 0;
            bStack_ea = 0;
            bStack_e9 = 0;
            uStack_d8 = &local_100;
            local_e0 = &local_b0;
            FUN_03320b50(0xc69ddef,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                         ,0x30,"Memory allocation request overflow {}*{}",&local_f0);
          }
          uVar11 = (uVar39 & 0x3fffffff) << 2;
          uVar39 = -(uVar39 >> 0x1d & 1) & 0xffffffff00000000;
          local_f0 = (byte)uVar11;
          bStack_ef = (byte)(uVar11 >> 8);
          bStack_ee = (byte)(uVar11 >> 0x10);
          bStack_ed = (byte)(uVar11 >> 0x18);
          bStack_ec = (byte)(uVar39 >> 0x20);
          bStack_eb = (byte)(uVar39 >> 0x28);
          bStack_ea = (byte)(uVar39 >> 0x30);
          bStack_e9 = (byte)(uVar39 >> 0x38);
          puVar27 = (undefined4 *)
                    (**(code **)(*(long *)puVar24 + 0x10))(puVar24,uVar39 | uVar11,&local_f0);
          iVar72 = 0;
          if ((int)local_b0 != 0) {
            iVar72 = CONCAT13(bStack_ed,CONCAT12(bStack_ee,CONCAT11(bStack_ef,local_f0))) /
                     (int)local_b0;
          }
          uVar5 = (uint)fVar41 & 7;
          puVar4 = puVar27;
          if (6 < (int)fVar41 - 1U) {
            iVar78 = uVar5 - (int)fVar41;
            puVar31 = puVar27;
            do {
              *puVar31 = *puVar38;
              puVar31[1] = puVar38[1];
              puVar31[2] = puVar38[2];
              puVar31[3] = puVar38[3];
              puVar31[4] = puVar38[4];
              puVar31[5] = puVar38[5];
              puVar31[6] = puVar38[6];
              puVar1 = puVar38 + 7;
              puVar4 = puVar31 + 8;
              puVar38 = puVar38 + 8;
              iVar78 = iVar78 + 8;
              puVar31[7] = *puVar1;
              puVar31 = puVar4;
            } while (iVar78 != 0);
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar38;
            puVar38 = puVar38 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        if (cVar10 != '\0') {
          FUN_02dd8030(param_5,uVar25);
        }
        if ((puVar27 != (undefined4 *)0x0) && (-1 < iVar72)) {
          (**(code **)(*(long *)puVar24 + 0x18))(puVar24,puVar27,iVar72 << 2);
        }
        plVar26 = *(long **)(param_5 + 0xb8);
        uVar25 = uVar25 + 1;
      } while (uVar25 < (ulong)((plVar26[1] - *plVar26 >> 4) * 0x6db6db6db6db6db7));
    }
    *(int *)(param_5 + 0xf0) = *(int *)(param_5 + 0xf0) + -1;
  }
  puVar24 = PTR_DAT_04379570;
  puVar33 = (ulong *)**(long **)(param_5 + 0x78);
  puVar8 = (ulong *)(*(long **)(param_5 + 0x78))[1];
  if (puVar33 != puVar8) {
    param_2 = param_2 * *(float *)(param_5 + 0xd8) * *(float *)(param_5 + 0xe4);
    fVar41 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    do {
      uVar25 = *puVar33 & 0xffffff;
      lVar32 = *(long *)(*(long *)(param_5 + 0x10) + 0x38);
      lVar35 = lVar32 + uVar25 * 0xc0;
      piVar36 = (int *)(lVar35 + 0x98);
      if (*piVar36 != -1) {
        pfVar28 = (float *)(lVar32 + uVar25 * 0xc0);
        uVar5 = *(uint *)(lVar35 + 0x9c);
        if (uVar5 == 0xffffffff) {
          lVar32 = lVar32 + uVar25 * 0xc0;
          pVar3 = (unkbyte9 *)(lVar32 + 0x30);
          uVar6 = *(undefined8 *)(lVar32 + 0x38);
          uVar57 = (undefined1)((ulong)uVar6 >> 8);
          uVar58 = (undefined1)((ulong)uVar6 >> 0x10);
          uVar60 = (undefined1)((ulong)uVar6 >> 0x18);
          uVar62 = (undefined1)((ulong)uVar6 >> 0x20);
          uVar64 = (undefined1)((ulong)uVar6 >> 0x28);
          uVar65 = (undefined1)((ulong)uVar6 >> 0x30);
          uVar66 = (undefined1)((ulong)uVar6 >> 0x38);
          local_110 = *(undefined8 *)pVar3;
          auVar53[9] = uVar57;
          auVar53._0_9_ = *pVar3;
          auVar53[10] = uVar58;
          auVar53[0xb] = uVar60;
          auVar53[0xc] = uVar62;
          auVar53[0xd] = uVar64;
          auVar53[0xe] = uVar65;
          auVar53[0xf] = uVar66;
          auVar73[9] = uVar57;
          auVar73._0_9_ = *pVar3;
          auVar73[10] = uVar58;
          auVar73[0xb] = uVar60;
          auVar73[0xc] = uVar62;
          auVar73[0xd] = uVar64;
          auVar73[0xe] = uVar65;
          auVar73[0xf] = uVar66;
          auVar44 = NEON_ext(auVar53,auVar73,8,1);
          fVar71 = auVar44._0_4_;
          FUN_032cb3d8(&local_f0);
          auVar82[1] = bStack_ef;
          auVar82[0] = local_f0;
          auVar82[2] = bStack_ee;
          auVar82[3] = bStack_ed;
          auVar82[4] = bStack_ec;
          auVar82[5] = bStack_eb;
          auVar82[6] = bStack_ea;
          auVar82[7] = bStack_e9;
          auVar82[8] = bStack_e8;
          auVar82[9] = bStack_e7;
          auVar82[10] = bStack_e6;
          auVar82[0xb] = bStack_e5;
          auVar82[0xc] = bStack_e4;
          auVar82[0xd] = bStack_e3;
          auVar82[0xe] = bStack_e2;
          auVar82[0xf] = bStack_e1;
        }
        else {
          pauVar30 = (undefined1 (*) [16])(lVar32 + ((ulong)uVar5 & 0xffffff) * 0xc0);
          lVar32 = lVar32 + uVar25 * 0xc0;
          auVar44 = *pauVar30;
          auVar53 = pauVar30[1];
          pauVar2 = pauVar30 + 2;
          uVar6 = *(undefined8 *)(pauVar30[2] + 8);
          uVar57 = (undefined1)((ulong)uVar6 >> 8);
          uVar58 = (undefined1)((ulong)uVar6 >> 0x10);
          uVar60 = (undefined1)((ulong)uVar6 >> 0x18);
          uVar62 = (undefined1)((ulong)uVar6 >> 0x20);
          uVar64 = (undefined1)((ulong)uVar6 >> 0x28);
          uVar65 = (undefined1)((ulong)uVar6 >> 0x30);
          uVar66 = (undefined1)((ulong)uVar6 >> 0x38);
          auVar82 = NEON_ext(auVar53,auVar53,8,1);
          auVar73 = NEON_ext(auVar44,auVar44,8,1);
          fVar48 = auVar73._0_4_;
          fVar49 = auVar82._0_4_;
          auVar84[9] = uVar57;
          auVar84._0_9_ = *(unkbyte9 *)*pauVar2;
          auVar84[10] = uVar58;
          auVar84[0xb] = uVar60;
          auVar84[0xc] = uVar62;
          auVar84[0xd] = uVar64;
          auVar84[0xe] = uVar65;
          auVar84[0xf] = uVar66;
          auVar12[9] = uVar57;
          auVar12._0_9_ = *(unkbyte9 *)*pauVar2;
          auVar12[10] = uVar58;
          auVar12[0xb] = uVar60;
          auVar12[0xc] = uVar62;
          auVar12[0xd] = uVar64;
          auVar12[0xe] = uVar65;
          auVar12[0xf] = uVar66;
          auVar73 = NEON_ext(auVar84,auVar12,8,1);
          fVar43 = auVar44._0_4_;
          fVar51 = auVar53._0_4_;
          fVar47 = auVar44._4_4_;
          fVar40 = auVar53._4_4_;
          fVar71 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
          fVar56 = *pfVar28;
          fVar42 = pfVar28[1];
          fVar46 = pfVar28[2];
          fVar85 = (float)*(undefined8 *)*pauVar2;
          fVar50 = auVar73._4_4_;
          fVar79 = auVar73._0_4_;
          fVar52 = fVar48 * fVar46 + fVar43 * fVar56 + fVar47 * fVar42;
          fVar54 = fVar49 * fVar46 + fVar51 * fVar56 + fVar40 * fVar42;
          fVar55 = fVar79 * fVar46 + fVar85 * fVar56 + fVar71 * fVar42;
          fVar56 = fVar50 * fVar46 + fVar71 * fVar56 + fVar50 * fVar42;
          bStack_e8 = SUB41(fVar55,0);
          bStack_e7 = (byte)((uint)fVar55 >> 8);
          bStack_e6 = (byte)((uint)fVar55 >> 0x10);
          bStack_e5 = (byte)((uint)fVar55 >> 0x18);
          bStack_e4 = SUB41(fVar56,0);
          bStack_e3 = (byte)((uint)fVar56 >> 8);
          bStack_e2 = (byte)((uint)fVar56 >> 0x10);
          bStack_e1 = (byte)((uint)fVar56 >> 0x18);
          local_f0 = SUB41(fVar52,0);
          bStack_ef = (byte)((uint)fVar52 >> 8);
          bStack_ee = (byte)((uint)fVar52 >> 0x10);
          bStack_ed = (byte)((uint)fVar52 >> 0x18);
          bStack_ec = SUB41(fVar54,0);
          bStack_eb = (byte)((uint)fVar54 >> 8);
          bStack_ea = (byte)((uint)fVar54 >> 0x10);
          bStack_e9 = (byte)((uint)fVar54 >> 0x18);
          fVar56 = pfVar28[4];
          fVar42 = pfVar28[5];
          fVar46 = pfVar28[6];
          uStack_d8 = (float *)CONCAT44(fVar50 * fVar46 + fVar71 * fVar56 + fVar50 * fVar42,
                                        fVar79 * fVar46 + fVar85 * fVar56 + fVar71 * fVar42);
          local_e0 = (undefined8 *)
                     CONCAT44(fVar49 * fVar46 + fVar51 * fVar56 + fVar40 * fVar42,
                              fVar48 * fVar46 + fVar43 * fVar56 + fVar47 * fVar42);
          fVar56 = pfVar28[8];
          fVar42 = pfVar28[9];
          fVar46 = pfVar28[10];
          local_d0 = fVar48 * fVar46 + fVar43 * fVar56 + fVar47 * fVar42;
          fStack_cc = fVar49 * fVar46 + fVar51 * fVar56 + fVar40 * fVar42;
          fStack_c8 = fVar79 * fVar46 + fVar85 * fVar56 + fVar71 * fVar42;
          fStack_c4 = fVar50 * fVar46 + fVar71 * fVar56 + fVar50 * fVar42;
          uVar6 = *(undefined8 *)(*pauVar30 + 8);
          uVar57 = (undefined1)((ulong)uVar6 >> 8);
          uVar58 = (undefined1)((ulong)uVar6 >> 0x10);
          uVar60 = (undefined1)((ulong)uVar6 >> 0x18);
          uVar62 = (undefined1)((ulong)uVar6 >> 0x20);
          uVar64 = (undefined1)((ulong)uVar6 >> 0x28);
          uVar65 = (undefined1)((ulong)uVar6 >> 0x30);
          uVar66 = (undefined1)((ulong)uVar6 >> 0x38);
          fVar42 = *(float *)(lVar32 + 0x30) - *(float *)pauVar30[3];
          fVar46 = *(float *)(lVar32 + 0x34) - *(float *)(pauVar30[3] + 4);
          fVar48 = *(float *)(lVar32 + 0x38) - *(float *)(pauVar30[3] + 8);
          auVar13[9] = uVar57;
          auVar13._0_9_ = *(unkbyte9 *)*pauVar30;
          auVar13[10] = uVar58;
          auVar13[0xb] = uVar60;
          auVar13[0xc] = uVar62;
          auVar13[0xd] = uVar64;
          auVar13[0xe] = uVar65;
          auVar13[0xf] = uVar66;
          auVar14[9] = uVar57;
          auVar14._0_9_ = *(unkbyte9 *)*pauVar30;
          auVar14[10] = uVar58;
          auVar14[0xb] = uVar60;
          auVar14[0xc] = uVar62;
          auVar14[0xd] = uVar64;
          auVar14[0xe] = uVar65;
          auVar14[0xf] = uVar66;
          auVar73 = NEON_ext(auVar13,auVar14,8,1);
          auVar53 = pauVar30[1];
          auVar44 = pauVar30[2];
          auVar82 = NEON_ext(auVar53,auVar53,8,1);
          auVar84 = NEON_ext(auVar44,auVar44,8,1);
          fVar56 = auVar73._0_4_ * fVar48 +
                   (float)*(undefined8 *)*pauVar30 * fVar42 +
                   (float)((ulong)*(undefined8 *)*pauVar30 >> 0x20) * fVar46;
          fVar71 = auVar82._0_4_ * fVar48 + auVar53._0_4_ * fVar42 + auVar53._4_4_ * fVar46;
          uVar57 = SUB41(fVar71,0);
          uVar58 = (undefined1)((uint)fVar71 >> 8);
          uVar60 = (undefined1)((uint)fVar71 >> 0x10);
          uVar62 = (undefined1)((uint)fVar71 >> 0x18);
          fVar71 = auVar84._0_4_ * fVar48 + auVar44._0_4_ * fVar42 + auVar44._4_4_ * fVar46;
          uVar64 = (undefined1)((uint)fVar71 >> 8);
          uVar65 = (undefined1)((uint)fVar71 >> 0x10);
          uVar66 = (undefined1)((uint)fVar71 >> 0x18);
          fVar42 = auVar84._4_4_ * fVar48 + auVar44._4_4_ * fVar42 + auVar84._4_4_ * fVar46;
          uVar67 = SUB41(fVar42,0);
          uVar68 = (undefined1)((uint)fVar42 >> 8);
          uVar69 = (undefined1)((uint)fVar42 >> 0x10);
          uVar70 = (undefined1)((uint)fVar42 >> 0x18);
          auVar15[4] = uVar57;
          auVar15._0_4_ = fVar56;
          auVar15[5] = uVar58;
          auVar15[6] = uVar60;
          auVar15[7] = uVar62;
          auVar15[8] = SUB41(fVar71,0);
          auVar15[9] = uVar64;
          auVar15[10] = uVar65;
          auVar15[0xb] = uVar66;
          auVar15[0xc] = uVar67;
          auVar15[0xd] = uVar68;
          auVar15[0xe] = uVar69;
          auVar15[0xf] = uVar70;
          auVar16[4] = uVar57;
          auVar16._0_4_ = fVar56;
          auVar16[5] = uVar58;
          auVar16[6] = uVar60;
          auVar16[7] = uVar62;
          auVar16[8] = SUB41(fVar71,0);
          auVar16[9] = uVar64;
          auVar16[10] = uVar65;
          auVar16[0xb] = uVar66;
          auVar16[0xc] = uVar67;
          auVar16[0xd] = uVar68;
          auVar16[0xe] = uVar69;
          auVar16[0xf] = uVar70;
          auVar44 = NEON_ext(auVar15,auVar16,8,1);
          uStack_b8 = CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,fVar71))));
          local_c0 = CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar57,fVar56))));
          fVar71 = auVar44._0_4_;
          local_110 = CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar57,fVar56))));
          FUN_032cb3d8(&local_100,&local_f0);
          auVar82._4_4_ = fStack_fc;
          auVar82._0_4_ = local_100;
          auVar82._8_4_ = fStack_f8;
          auVar82._12_4_ = fStack_f4;
        }
        uStack_a8 = auVar82._8_8_;
        local_b0 = auVar82._0_8_;
        FUN_02b6937c(*puVar37,*piVar36);
        fStack_f8 = (float)extraout_var_01;
        fStack_f4 = (float)((ulong)extraout_var_01 >> 0x20);
        local_100 = (float)extraout_d0;
        fStack_fc = (float)((ulong)extraout_d0 >> 0x20);
        auVar44 = FUN_009c6b1c(param_2,&local_100,&local_b0);
        bStack_e8 = auVar44[8];
        bStack_e7 = auVar44[9];
        bStack_e6 = auVar44[10];
        bStack_e5 = auVar44[0xb];
        bStack_e4 = auVar44[0xc];
        bStack_e3 = auVar44[0xd];
        bStack_e2 = auVar44[0xe];
        bStack_e1 = auVar44[0xf];
        local_f0 = auVar44[0];
        bStack_ef = auVar44[1];
        bStack_ee = auVar44[2];
        bStack_ed = auVar44[3];
        bStack_ec = auVar44[4];
        bStack_eb = auVar44[5];
        bStack_ea = auVar44[6];
        bStack_e9 = auVar44[7];
        FUN_02b694d4(*puVar37,*piVar36);
        fVar43 = (float)CONCAT13(bStack_ed,CONCAT12(bStack_ee,CONCAT11(bStack_ef,local_f0)));
        uVar6 = CONCAT17(bStack_e9,
                         CONCAT16(bStack_ea,CONCAT15(bStack_eb,CONCAT14(bStack_ec,fVar43))));
        auVar23[8] = bStack_e8;
        auVar23._0_8_ = uVar6;
        auVar23[9] = bStack_e7;
        auVar23[10] = bStack_e6;
        auVar23[0xb] = bStack_e5;
        auVar22[0xc] = bStack_e4;
        auVar22._0_12_ = auVar23;
        auVar22[0xd] = bStack_e3;
        auVar22[0xe] = bStack_e2;
        auVar22[0xf] = bStack_e1;
        fVar56 = fVar43 * fVar43;
        fVar47 = (float)((ulong)uVar6 >> 0x20);
        fVar42 = fVar47 * fVar47;
        uVar57 = (undefined1)((uint)fVar42 >> 8);
        uVar58 = (undefined1)((uint)fVar42 >> 0x10);
        uVar60 = (undefined1)((uint)fVar42 >> 0x18);
        fVar49 = auVar23._8_4_;
        fVar46 = fVar49 * fVar49;
        uVar62 = (undefined1)((uint)fVar46 >> 8);
        uVar64 = (undefined1)((uint)fVar46 >> 0x10);
        uVar65 = (undefined1)((uint)fVar46 >> 0x18);
        fVar51 = auVar22._12_4_;
        fVar48 = fVar51 * fVar51;
        uVar66 = (undefined1)((uint)fVar48 >> 8);
        uVar67 = (undefined1)((uint)fVar48 >> 0x10);
        uVar68 = (undefined1)((uint)fVar48 >> 0x18);
        auVar17[4] = SUB41(fVar42,0);
        auVar17._0_4_ = fVar56;
        auVar17[5] = uVar57;
        auVar17[6] = uVar58;
        auVar17[7] = uVar60;
        auVar17[8] = SUB41(fVar46,0);
        auVar17[9] = uVar62;
        auVar17[10] = uVar64;
        auVar17[0xb] = uVar65;
        auVar17[0xc] = SUB41(fVar48,0);
        auVar17[0xd] = uVar66;
        auVar17[0xe] = uVar67;
        auVar17[0xf] = uVar68;
        auVar18[4] = SUB41(fVar42,0);
        auVar18._0_4_ = fVar56;
        auVar18[5] = uVar57;
        auVar18[6] = uVar58;
        auVar18[7] = uVar60;
        auVar18[8] = SUB41(fVar46,0);
        auVar18[9] = uVar62;
        auVar18[10] = uVar64;
        auVar18[0xb] = uVar65;
        auVar18[0xc] = SUB41(fVar48,0);
        auVar18[0xd] = uVar66;
        auVar18[0xe] = uVar67;
        auVar18[0xf] = uVar68;
        auVar44 = NEON_ext(auVar17,auVar18,8,1);
        fVar56 = auVar44._0_4_ + fVar56;
        fVar42 = auVar44._4_4_ + fVar42;
        fVar46 = fVar56 + fVar42;
        fVar56 = fVar56 + fVar42;
        bVar59 = (byte)((uint)fVar46 >> 8);
        bVar61 = (byte)((uint)fVar46 >> 0x10);
        bVar63 = (byte)((uint)fVar46 >> 0x18);
        uVar57 = SUB41(fVar56,0);
        uVar58 = (undefined1)((uint)fVar56 >> 8);
        uVar60 = (undefined1)((uint)fVar56 >> 0x10);
        uVar62 = (undefined1)((uint)fVar56 >> 0x18);
        auVar19[4] = uVar57;
        auVar19._0_4_ = fVar46;
        auVar19[5] = uVar58;
        auVar19[6] = uVar60;
        auVar19[7] = uVar62;
        auVar19[8] = SUB41(fVar46,0);
        auVar19[9] = bVar59;
        auVar19[10] = bVar61;
        auVar19[0xb] = bVar63;
        auVar19[0xc] = uVar57;
        auVar19[0xd] = uVar58;
        auVar19[0xe] = uVar60;
        auVar19[0xf] = uVar62;
        auVar44 = NEON_frsqrte(auVar19,4);
        auVar83._0_4_ = auVar44._0_4_ * fVar46;
        auVar83._4_4_ = auVar44._4_4_ * fVar56;
        auVar83._8_4_ = auVar44._8_4_ * fVar46;
        uVar20 = (undefined2)(CONCAT15(uVar58,CONCAT14(uVar57,fVar46)) >> 0x20);
        auVar83._12_4_ = auVar44._12_4_ * (float)CONCAT13(uVar62,CONCAT12(uVar60,uVar20));
        auVar53 = NEON_frsqrts(auVar44,auVar83,4);
        auVar74._0_4_ = auVar44._0_4_ * auVar53._0_4_;
        auVar74._4_4_ = auVar44._4_4_ * auVar53._4_4_;
        auVar74._8_4_ = auVar44._8_4_ * auVar53._8_4_;
        auVar74._12_4_ = auVar44._12_4_ * auVar53._12_4_;
        local_100 = extraout_s0 + ((float)local_110 - extraout_s0) * param_2;
        fStack_fc = extraout_var + (local_110._4_4_ - extraout_var) * param_2;
        fStack_f8 = extraout_var_00 + (fVar71 - extraout_var_00) * param_2;
        fStack_f4 = extraout_var_02 + (0.0 - extraout_var_02) * param_2;
        auVar45._0_4_ = fVar46 * auVar74._0_4_;
        auVar45._4_4_ = fVar56 * auVar74._4_4_;
        auVar45._8_4_ = fVar46 * auVar74._8_4_;
        auVar45._12_4_ = (float)CONCAT13(uVar62,CONCAT12(uVar60,uVar20)) * auVar74._12_4_;
        auVar44 = NEON_frsqrts(auVar74,auVar45,4);
        iVar72 = -(uint)(fVar46 < fVar41);
        iVar78 = -(uint)(fVar56 < fVar41);
        iVar80 = -(uint)(fVar46 < fVar41);
        iVar81 = -(uint)((float)CONCAT13(uVar62,CONCAT12(uVar60,uVar20)) < fVar41);
        fVar43 = fVar43 * auVar74._0_4_ * auVar44._0_4_;
        fVar47 = fVar47 * auVar74._4_4_ * auVar44._4_4_;
        fVar49 = fVar49 * auVar74._8_4_ * auVar44._8_4_;
        fVar51 = fVar51 * auVar74._12_4_ * auVar44._12_4_;
        bVar75 = (byte)((uint)iVar72 >> 8);
        bVar76 = (byte)((uint)iVar72 >> 0x10);
        bVar77 = (byte)((uint)iVar72 >> 0x18);
        local_f0 = SUB41(fVar43,0) & ~(byte)iVar72;
        bStack_ef = (byte)((uint)fVar43 >> 8) & ~bVar75;
        bStack_ee = (byte)((uint)fVar43 >> 0x10) & ~bVar76;
        bStack_ed = (byte)((uint)fVar43 >> 0x18) & ~bVar77;
        bStack_ec = SUB41(fVar47,0) & ~(byte)iVar78;
        bStack_eb = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar78 >> 8);
        bStack_ea = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
        bStack_e9 = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
        bStack_e8 = SUB41(fVar49,0) & ~(byte)iVar80;
        bStack_e7 = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar80 >> 8);
        bStack_e6 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
        bStack_e5 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
        bStack_e4 = SUB41(fVar51,0) & ~(byte)iVar81;
        bStack_e3 = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar81 >> 8);
        bStack_e2 = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
        bStack_e1 = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
        if ((float)CONCAT13(bVar63 & ~bVar77,
                            CONCAT12(bVar61 & ~bVar76,
                                     CONCAT11(bVar59 & ~bVar75,SUB41(fVar46,0) & ~(byte)iVar72))) ==
            0.0) {
          uVar6 = *(undefined8 *)puVar24;
          uVar9 = *(undefined8 *)(puVar24 + 8);
          local_f0 = (byte)uVar6;
          bStack_ef = (byte)((ulong)uVar6 >> 8);
          bStack_ee = (byte)((ulong)uVar6 >> 0x10);
          bStack_ed = (byte)((ulong)uVar6 >> 0x18);
          bStack_ec = (byte)((ulong)uVar6 >> 0x20);
          bStack_eb = (byte)((ulong)uVar6 >> 0x28);
          bStack_ea = (byte)((ulong)uVar6 >> 0x30);
          bStack_e9 = (byte)((ulong)uVar6 >> 0x38);
          bStack_e8 = (byte)uVar9;
          bStack_e7 = (byte)((ulong)uVar9 >> 8);
          bStack_e6 = (byte)((ulong)uVar9 >> 0x10);
          bStack_e5 = (byte)((ulong)uVar9 >> 0x18);
          bStack_e4 = (byte)((ulong)uVar9 >> 0x20);
          bStack_e3 = (byte)((ulong)uVar9 >> 0x28);
          bStack_e2 = (byte)((ulong)uVar9 >> 0x30);
          bStack_e1 = (byte)((ulong)uVar9 >> 0x38);
        }
        FUN_02b6b46c(*puVar37,*piVar36,&local_f0);
        FUN_02b6b630(*puVar37,*piVar36,&local_100);
      }
      puVar33 = puVar33 + 6;
    } while (puVar8 != puVar33);
  }
  return;
}


