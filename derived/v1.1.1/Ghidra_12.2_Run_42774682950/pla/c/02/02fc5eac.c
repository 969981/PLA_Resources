/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc5eac; name: FUN_02fc5eac
 */


long FUN_02fc5eac(long *param_1,int *param_2,long *param_3,long *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 *puVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined *puVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  long *plVar34;
  undefined4 uVar35;
  uint uVar36;
  long lVar37;
  code *pcVar38;
  long lVar39;
  undefined8 *puVar40;
  undefined1 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined1 (*pauVar44) [16];
  float *pfVar45;
  uint uVar46;
  undefined8 *puVar47;
  ulong uVar48;
  uint uVar49;
  ulong uVar50;
  float fVar51;
  uint uVar52;
  float fVar55;
  float fVar57;
  undefined1 auVar53 [16];
  uint uVar56;
  uint uVar58;
  uint uVar59;
  undefined1 auVar54 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  undefined1 *local_f8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float *local_78 [3];
  
  uVar28 = (**(code **)(*param_1 + 0x20))();
  uVar29 = (**(code **)(*param_1 + 0x40))(param_1);
  local_80 = CONCAT44(param_2[1],param_2[1]);
  uVar49 = uVar29 + uVar28;
  lVar31 = FUN_032cf5b0(0x70);
  FUN_02fc6f8c();
  plVar34 = (long *)PTR_PTR_0434a090;
  if (*param_2 == 2) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    FUN_02fc7c84(&local_a0,uVar49 * 2);
    puVar27 = PTR_PTR_0434a080;
    if (0 < (int)uVar28) {
      uVar49 = 0;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,uVar49,&local_e0);
        iVar30 = FUN_0334bde0(&local_e0,auStack_d0,local_c0,&local_80);
        if (iVar30 == 0) {
          auVar20._4_4_ = uStack_dc;
          auVar20._0_4_ = local_e0;
          auVar20._8_8_ = uStack_d8;
          auVar64 = NEON_fmin(auVar20,auStack_d0,4);
          auVar53 = NEON_fmax(auVar20,auStack_d0,4);
          auVar64 = NEON_fmin(auVar64,local_c0,4);
          auVar53 = NEON_fmax(auVar53,local_c0,4);
          uVar46 = (uint)local_90;
          if ((uint)local_90 == 0) {
            FUN_02fc7c84(&local_a0,1);
            uVar46 = (uint)local_90;
          }
          uVar48 = (ulong)uVar46;
          lVar33 = (uVar48 + (ulong)uVar46 * 2) * 0x10;
          local_90 = CONCAT44(local_90._4_4_,
                              *(undefined4 *)(local_b0 + local_a0 + 0x10 + (long)(int)uVar46 * 0x30)
                             );
          puVar41 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar41 = local_b0 + local_a0 + 0x10;
          }
          puVar42 = (undefined8 *)(puVar41 + lVar33);
          puVar42[1] = auVar64._8_8_;
          *puVar42 = auVar64._0_8_;
          puVar42[3] = auVar53._8_8_;
          puVar42[2] = auVar53._0_8_;
          *(undefined4 *)((long)puVar42 + 0x24) = 0;
          *(uint *)(puVar42 + 5) = uVar49;
          uVar50 = (ulong)uStack_88._4_4_;
          puVar41 = local_b0 + local_a0 + 0x10;
          puVar2 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar2 = puVar41;
          }
          if (uStack_88._4_4_ == 0) {
            uStack_88 = CONCAT44(uVar46,(undefined4)uStack_88);
            *(undefined4 *)(puVar2 + uVar48 * 0x30 + 0x20) = 0;
          }
          else {
            pauVar1 = (undefined1 (*) [12])(puVar2 + lVar33);
            fVar69 = (float)*(undefined8 *)(*pauVar1 + 8);
            fVar79 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
            auVar26 = *pauVar1;
            auVar23 = *pauVar1;
            fVar68 = (float)*(undefined8 *)*pauVar1;
            fVar72 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            pauVar3 = (undefined1 (*) [12])(pauVar1[1] + 4);
            fVar62 = (float)*(undefined8 *)pauVar1[2];
            fVar78 = (float)((ulong)*(undefined8 *)pauVar1[2] >> 0x20);
            auVar25 = *pauVar3;
            auVar24 = *pauVar3;
            fVar60 = (float)*(undefined8 *)*pauVar3;
            fVar61 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
            uVar36 = (uint)local_90;
            if ((uint)local_90 == 0) {
              iVar30 = FUN_02fc7c84(&local_a0,1);
              if (iVar30 < 0) goto LAB_02fc61b0;
              puVar41 = local_b0 + local_a0 + 0x10;
              uVar36 = (uint)local_90;
            }
            puVar2 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar2 = puVar41;
            }
            pauVar44 = (undefined1 (*) [16])(puVar2 + uVar50 * 0x30);
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(puVar41 + (long)(int)uVar36 * 0x30));
            uVar52 = *(uint *)(pauVar44[2] + 4);
            if (uVar52 != 0) {
              fVar51 = fVar68 + fVar60;
              fVar55 = fVar72 + fVar61;
              fVar57 = fVar69 + fVar62;
              fVar60 = fVar60 - fVar68;
              fVar61 = fVar61 - fVar72;
              fVar62 = fVar62 - fVar69;
              do {
                puVar41 = (undefined1 *)0x0;
                if (local_a0 != 0) {
                  puVar41 = local_b0 + local_a0 + 0x10;
                }
                local_78[0] = (float *)(puVar41 + (ulong)uVar52 * 0x30);
                pfVar45 = (float *)(puVar41 + (ulong)*(uint *)(pauVar44[2] + 8) * 0x30);
                local_78[1] = pfVar45;
                auVar53 = pauVar44[1];
                auVar18._12_4_ = fVar79;
                auVar18._0_12_ = auVar23;
                auVar64 = NEON_fmin(*pauVar44,auVar18,4);
                *(long *)(*pauVar44 + 8) = auVar64._8_8_;
                *(long *)*pauVar44 = auVar64._0_8_;
                auVar14._12_4_ = fVar78;
                auVar14._0_12_ = auVar24;
                auVar53 = NEON_fmax(auVar53,auVar14,4);
                *(long *)(pauVar44[1] + 8) = auVar53._8_8_;
                *(long *)pauVar44[1] = auVar53._0_8_;
                fVar72 = (*pfVar45 + pfVar45[4]) - fVar51;
                fVar73 = (pfVar45[1] + pfVar45[5]) - fVar55;
                fVar74 = (pfVar45[2] + pfVar45[6]) - fVar57;
                fVar75 = (pfVar45[3] + pfVar45[7]) - (fVar79 + fVar78);
                fVar68 = (*local_78[0] + local_78[0][4]) - fVar51;
                fVar69 = (local_78[0][1] + local_78[0][5]) - fVar55;
                fVar70 = (local_78[0][2] + local_78[0][6]) - fVar57;
                fVar71 = (local_78[0][3] + local_78[0][7]) - (fVar79 + fVar78);
                auVar63._0_4_ = fVar60 + (local_78[0][4] - *local_78[0]);
                auVar63._4_4_ = fVar61 + (local_78[0][5] - local_78[0][1]);
                auVar63._8_4_ = fVar62 + (local_78[0][6] - local_78[0][2]);
                auVar63._12_4_ = (fVar78 - fVar79) + (local_78[0][7] - local_78[0][3]);
                auVar66._0_4_ = fVar60 + (pfVar45[4] - *pfVar45);
                auVar66._4_4_ = fVar61 + (pfVar45[5] - pfVar45[1]);
                auVar66._8_4_ = fVar62 + (pfVar45[6] - pfVar45[2]);
                auVar66._12_4_ = (fVar78 - fVar79) + (pfVar45[7] - pfVar45[3]);
                fVar68 = fVar68 * fVar68;
                fVar69 = fVar69 * fVar69;
                fVar70 = fVar70 * fVar70;
                fVar71 = fVar71 * fVar71;
                auVar8._4_4_ = fVar69;
                auVar8._0_4_ = fVar68;
                auVar8._8_4_ = fVar70;
                auVar8._12_4_ = fVar71;
                auVar9._4_4_ = fVar69;
                auVar9._0_4_ = fVar68;
                auVar9._8_4_ = fVar70;
                auVar9._12_4_ = fVar71;
                auVar76 = NEON_ext(auVar8,auVar9,8,1);
                auVar77 = NEON_ext(auVar63,auVar63,8,1);
                fVar72 = fVar72 * fVar72;
                fVar73 = fVar73 * fVar73;
                fVar74 = fVar74 * fVar74;
                fVar75 = fVar75 * fVar75;
                auVar10._4_4_ = fVar73;
                auVar10._0_4_ = fVar72;
                auVar10._8_4_ = fVar74;
                auVar10._12_4_ = fVar75;
                auVar11._4_4_ = fVar73;
                auVar11._0_4_ = fVar72;
                auVar11._8_4_ = fVar74;
                auVar11._12_4_ = fVar75;
                auVar53 = NEON_ext(auVar10,auVar11,8,1);
                auVar64 = NEON_ext(auVar66,auVar66,8,1);
                pauVar44 = (undefined1 (*) [16])
                           local_78[(fVar72 + fVar73 + auVar53._0_4_) *
                                    (auVar64._0_4_ + auVar66._0_4_ + auVar66._4_4_) <
                                    (fVar68 + fVar69 + auVar76._0_4_) *
                                    (auVar77._0_4_ + auVar63._0_4_ + auVar63._4_4_)];
                uVar52 = *(uint *)(pauVar44[2] + 4);
              } while (uVar52 != 0);
            }
            uVar52 = *(uint *)pauVar44[2];
            if (uVar52 == 0) {
              uStack_88 = CONCAT44(uVar36,(undefined4)uStack_88);
              uVar35 = 0;
            }
            else {
              puVar41 = (undefined1 *)0x0;
              if (local_a0 != 0) {
                puVar41 = local_b0 + local_a0 + 0x10;
              }
              *(uint *)(puVar41 +
                       (ulong)(*(int *)(puVar41 + (ulong)uVar52 * 0x30 + 0x28) ==
                              (int)((ulong)((long)pauVar44 - (long)puVar41) >> 4) * -0x55555555) * 4
                       + (ulong)uVar52 * 0x30 + 0x24) = uVar36;
              uVar35 = *(undefined4 *)pauVar44[2];
            }
            puVar42 = (undefined8 *)(puVar2 + (ulong)uVar36 * 0x30);
            *(undefined4 *)(puVar42 + 4) = uVar35;
            puVar41 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar41 = local_b0 + local_a0 + 0x10;
            }
            *(int *)((long)puVar42 + 0x24) =
                 (int)((ulong)((long)pauVar44 - (long)puVar41) >> 4) * -0x55555555;
            *(uint *)(puVar42 + 5) = uVar46;
            *(uint *)pauVar44[2] = uVar36;
            puVar41 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar41 = local_b0 + local_a0 + 0x10;
            }
            *(uint *)(puVar41 + uVar48 * 0x30 + 0x20) = uVar36;
            auVar15._12_4_ = fVar78;
            auVar15._0_12_ = auVar25;
            auVar64 = NEON_fmax(pauVar44[1],auVar15,4);
            auVar19._12_4_ = fVar79;
            auVar19._0_12_ = auVar26;
            auVar53 = NEON_fmin(*pauVar44,auVar19,4);
            puVar42[1] = auVar53._8_8_;
            *puVar42 = auVar53._0_8_;
            puVar42[3] = auVar64._8_8_;
            puVar42[2] = auVar64._0_8_;
          }
LAB_02fc61b0:
          local_90 = CONCAT44(local_90._4_4_ + 1,(uint)local_90);
        }
        else if (param_3 != (long *)0x0) {
          iVar30 = (int)param_3[1];
          uVar36 = *(uint *)((long)param_3 + 0xc);
          uVar46 = iVar30 + 1;
          if (iVar30 < (int)(uVar36 & 0x3fffffff)) {
            lVar33 = *param_3;
          }
          else {
            lVar33 = *param_3;
            if (0x3ffffffe < iVar30) {
              FUN_032bd0a8(uVar46);
              uVar36 = *(uint *)((long)param_3 + 0xc);
            }
            uVar36 = (uVar36 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar36) {
              uVar36 = 0x3fffffff;
            }
            uVar52 = uVar46;
            if ((int)uVar46 <= (int)uVar36) {
              uVar52 = uVar36;
            }
            lVar33 = FUN_032bd1d4(puVar27,uVar52,4,lVar33,iVar30,(uint *)((long)param_3 + 0xc));
            iVar30 = (int)param_3[1];
            *param_3 = lVar33;
          }
          *(uint *)(lVar33 + (long)iVar30 * 4) = uVar49;
          *(uint *)(param_3 + 1) = uVar46;
        }
        uVar49 = uVar49 + 1;
      } while (uVar49 != uVar28);
    }
    puVar27 = PTR_PTR_0434a080;
    if (0 < (int)uVar29) {
      uVar49 = 0;
      do {
        (**(code **)(*param_1 + 0x48))(param_1,uVar49,&local_e0);
        iVar30 = FUN_0334bde0(&local_e0,auStack_d0,local_c0,&local_80);
        if ((iVar30 == 0) &&
           (iVar30 = FUN_0334bde0(&local_e0,local_c0,local_b0,&local_80), iVar30 == 0)) {
          auVar21._4_4_ = uStack_dc;
          auVar21._0_4_ = local_e0;
          auVar21._8_8_ = uStack_d8;
          auVar64 = NEON_fmin(auVar21,auStack_d0,4);
          auVar53 = NEON_fmax(auVar21,auStack_d0,4);
          auVar64 = NEON_fmin(auVar64,local_c0,4);
          auVar53 = NEON_fmax(auVar53,local_c0,4);
          auVar64 = NEON_fmin(auVar64,local_b0,4);
          auVar53 = NEON_fmax(auVar53,local_b0,4);
          uVar46 = (uint)local_90;
          if ((uint)local_90 == 0) {
            FUN_02fc7c84(&local_a0,1);
            uVar46 = (uint)local_90;
          }
          uVar48 = (ulong)uVar46;
          lVar33 = (uVar48 + (ulong)uVar46 * 2) * 0x10;
          local_90 = CONCAT44(local_90._4_4_,
                              *(undefined4 *)(local_b0 + local_a0 + 0x10 + (long)(int)uVar46 * 0x30)
                             );
          puVar41 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar41 = local_b0 + local_a0 + 0x10;
          }
          puVar42 = (undefined8 *)(puVar41 + lVar33);
          puVar42[1] = auVar64._8_8_;
          *puVar42 = auVar64._0_8_;
          puVar42[3] = auVar53._8_8_;
          puVar42[2] = auVar53._0_8_;
          *(undefined4 *)((long)puVar42 + 0x24) = 0;
          *(uint *)(puVar42 + 5) = uVar49 + uVar28;
          uVar50 = (ulong)uStack_88._4_4_;
          puVar41 = local_b0 + local_a0 + 0x10;
          puVar2 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar2 = puVar41;
          }
          if (uStack_88._4_4_ == 0) {
            uStack_88 = CONCAT44(uVar46,(undefined4)uStack_88);
            *(undefined4 *)(puVar2 + uVar48 * 0x30 + 0x20) = 0;
          }
          else {
            pauVar1 = (undefined1 (*) [12])(puVar2 + lVar33);
            fVar69 = (float)*(undefined8 *)(*pauVar1 + 8);
            fVar79 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
            auVar26 = *pauVar1;
            auVar23 = *pauVar1;
            fVar68 = (float)*(undefined8 *)*pauVar1;
            fVar72 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            pauVar3 = (undefined1 (*) [12])(pauVar1[1] + 4);
            fVar62 = (float)*(undefined8 *)pauVar1[2];
            fVar78 = (float)((ulong)*(undefined8 *)pauVar1[2] >> 0x20);
            auVar25 = *pauVar3;
            auVar24 = *pauVar3;
            fVar60 = (float)*(undefined8 *)*pauVar3;
            fVar61 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
            uVar36 = (uint)local_90;
            if ((uint)local_90 == 0) {
              iVar30 = FUN_02fc7c84(&local_a0,1);
              if (iVar30 < 0) goto LAB_02fc6868;
              puVar41 = local_b0 + local_a0 + 0x10;
              uVar36 = (uint)local_90;
            }
            puVar2 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar2 = puVar41;
            }
            pauVar44 = (undefined1 (*) [16])(puVar2 + uVar50 * 0x30);
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(puVar41 + (long)(int)uVar36 * 0x30));
            uVar52 = *(uint *)(pauVar44[2] + 4);
            if (uVar52 != 0) {
              fVar51 = fVar68 + fVar60;
              fVar55 = fVar72 + fVar61;
              fVar57 = fVar69 + fVar62;
              fVar60 = fVar60 - fVar68;
              fVar61 = fVar61 - fVar72;
              fVar62 = fVar62 - fVar69;
              do {
                puVar41 = (undefined1 *)0x0;
                if (local_a0 != 0) {
                  puVar41 = local_b0 + local_a0 + 0x10;
                }
                local_78[0] = (float *)(puVar41 + (ulong)uVar52 * 0x30);
                pfVar45 = (float *)(puVar41 + (ulong)*(uint *)(pauVar44[2] + 8) * 0x30);
                local_78[1] = pfVar45;
                auVar53 = pauVar44[1];
                auVar16._12_4_ = fVar79;
                auVar16._0_12_ = auVar23;
                auVar64 = NEON_fmin(*pauVar44,auVar16,4);
                *(long *)(*pauVar44 + 8) = auVar64._8_8_;
                *(long *)*pauVar44 = auVar64._0_8_;
                auVar12._12_4_ = fVar78;
                auVar12._0_12_ = auVar24;
                auVar53 = NEON_fmax(auVar53,auVar12,4);
                *(long *)(pauVar44[1] + 8) = auVar53._8_8_;
                *(long *)pauVar44[1] = auVar53._0_8_;
                fVar72 = (*pfVar45 + pfVar45[4]) - fVar51;
                fVar73 = (pfVar45[1] + pfVar45[5]) - fVar55;
                fVar74 = (pfVar45[2] + pfVar45[6]) - fVar57;
                fVar75 = (pfVar45[3] + pfVar45[7]) - (fVar79 + fVar78);
                fVar68 = (*local_78[0] + local_78[0][4]) - fVar51;
                fVar69 = (local_78[0][1] + local_78[0][5]) - fVar55;
                fVar70 = (local_78[0][2] + local_78[0][6]) - fVar57;
                fVar71 = (local_78[0][3] + local_78[0][7]) - (fVar79 + fVar78);
                auVar65._0_4_ = fVar60 + (local_78[0][4] - *local_78[0]);
                auVar65._4_4_ = fVar61 + (local_78[0][5] - local_78[0][1]);
                auVar65._8_4_ = fVar62 + (local_78[0][6] - local_78[0][2]);
                auVar65._12_4_ = (fVar78 - fVar79) + (local_78[0][7] - local_78[0][3]);
                auVar67._0_4_ = fVar60 + (pfVar45[4] - *pfVar45);
                auVar67._4_4_ = fVar61 + (pfVar45[5] - pfVar45[1]);
                auVar67._8_4_ = fVar62 + (pfVar45[6] - pfVar45[2]);
                auVar67._12_4_ = (fVar78 - fVar79) + (pfVar45[7] - pfVar45[3]);
                fVar68 = fVar68 * fVar68;
                fVar69 = fVar69 * fVar69;
                fVar70 = fVar70 * fVar70;
                fVar71 = fVar71 * fVar71;
                auVar4._4_4_ = fVar69;
                auVar4._0_4_ = fVar68;
                auVar4._8_4_ = fVar70;
                auVar4._12_4_ = fVar71;
                auVar5._4_4_ = fVar69;
                auVar5._0_4_ = fVar68;
                auVar5._8_4_ = fVar70;
                auVar5._12_4_ = fVar71;
                auVar76 = NEON_ext(auVar4,auVar5,8,1);
                auVar77 = NEON_ext(auVar65,auVar65,8,1);
                fVar72 = fVar72 * fVar72;
                fVar73 = fVar73 * fVar73;
                fVar74 = fVar74 * fVar74;
                fVar75 = fVar75 * fVar75;
                auVar6._4_4_ = fVar73;
                auVar6._0_4_ = fVar72;
                auVar6._8_4_ = fVar74;
                auVar6._12_4_ = fVar75;
                auVar7._4_4_ = fVar73;
                auVar7._0_4_ = fVar72;
                auVar7._8_4_ = fVar74;
                auVar7._12_4_ = fVar75;
                auVar53 = NEON_ext(auVar6,auVar7,8,1);
                auVar64 = NEON_ext(auVar67,auVar67,8,1);
                pauVar44 = (undefined1 (*) [16])
                           local_78[(fVar72 + fVar73 + auVar53._0_4_) *
                                    (auVar64._0_4_ + auVar67._0_4_ + auVar67._4_4_) <
                                    (fVar68 + fVar69 + auVar76._0_4_) *
                                    (auVar77._0_4_ + auVar65._0_4_ + auVar65._4_4_)];
                uVar52 = *(uint *)(pauVar44[2] + 4);
              } while (uVar52 != 0);
            }
            uVar52 = *(uint *)pauVar44[2];
            if (uVar52 == 0) {
              uStack_88 = CONCAT44(uVar36,(undefined4)uStack_88);
              uVar35 = 0;
            }
            else {
              puVar41 = (undefined1 *)0x0;
              if (local_a0 != 0) {
                puVar41 = local_b0 + local_a0 + 0x10;
              }
              *(uint *)(puVar41 +
                       (ulong)(*(int *)(puVar41 + (ulong)uVar52 * 0x30 + 0x28) ==
                              (int)((ulong)((long)pauVar44 - (long)puVar41) >> 4) * -0x55555555) * 4
                       + (ulong)uVar52 * 0x30 + 0x24) = uVar36;
              uVar35 = *(undefined4 *)pauVar44[2];
            }
            puVar42 = (undefined8 *)(puVar2 + (ulong)uVar36 * 0x30);
            *(undefined4 *)(puVar42 + 4) = uVar35;
            puVar41 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar41 = local_b0 + local_a0 + 0x10;
            }
            *(int *)((long)puVar42 + 0x24) =
                 (int)((ulong)((long)pauVar44 - (long)puVar41) >> 4) * -0x55555555;
            *(uint *)(puVar42 + 5) = uVar46;
            *(uint *)pauVar44[2] = uVar36;
            puVar41 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar41 = local_b0 + local_a0 + 0x10;
            }
            *(uint *)(puVar41 + uVar48 * 0x30 + 0x20) = uVar36;
            auVar13._12_4_ = fVar78;
            auVar13._0_12_ = auVar25;
            auVar64 = NEON_fmax(pauVar44[1],auVar13,4);
            auVar17._12_4_ = fVar79;
            auVar17._0_12_ = auVar26;
            auVar53 = NEON_fmin(*pauVar44,auVar17,4);
            puVar42[1] = auVar53._8_8_;
            *puVar42 = auVar53._0_8_;
            puVar42[3] = auVar64._8_8_;
            puVar42[2] = auVar64._0_8_;
          }
LAB_02fc6868:
          local_90 = CONCAT44(local_90._4_4_ + 1,(uint)local_90);
        }
        else if (param_4 != (long *)0x0) {
          iVar30 = (int)param_4[1];
          uVar36 = *(uint *)((long)param_4 + 0xc);
          uVar46 = iVar30 + 1;
          if (iVar30 < (int)(uVar36 & 0x3fffffff)) {
            lVar33 = *param_4;
          }
          else {
            lVar33 = *param_4;
            if (0x3ffffffe < iVar30) {
              FUN_032bd0a8(uVar46);
              uVar36 = *(uint *)((long)param_4 + 0xc);
            }
            uVar36 = (uVar36 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar36) {
              uVar36 = 0x3fffffff;
            }
            uVar52 = uVar46;
            if ((int)uVar46 <= (int)uVar36) {
              uVar52 = uVar36;
            }
            lVar33 = FUN_032bd1d4(puVar27,uVar52,4,lVar33,iVar30,(uint *)((long)param_4 + 0xc));
            iVar30 = (int)param_4[1];
            *param_4 = lVar33;
          }
          *(uint *)(lVar33 + (long)iVar30 * 4) = uVar49;
          *(uint *)(param_4 + 1) = uVar46;
        }
        uVar49 = uVar49 + 1;
      } while (uVar49 != uVar29);
    }
    iVar30 = FUN_02fc8118(&local_a0,uStack_88._4_4_,1,0x20,0x10);
    if (-1 < iVar30) {
      FUN_02fca6d4(&local_a0);
    }
    FUN_02fc7170(&local_a0,lVar31 + 0x20);
    if (-1 < local_98) {
      return lVar31;
    }
    uVar49 = local_98._4_4_ & 0x7fffffff;
    if ((int)(local_98._4_4_ & 0x7fffffff) <= (int)(uint)local_98) {
      uVar49 = (uint)local_98;
    }
    lVar33 = (ulong)uVar49 * 0x30;
    local_f8 = (undefined1 *)0x0;
    if (local_a0 != 0) {
      local_f8 = local_b0 + local_a0 + 0x10;
    }
    lVar39 = tpidr_el0;
    lVar37 = *(long *)(lVar39 + 0x38d490);
    if (lVar37 == 0) {
      lVar37 = FUN_0333d16c(0,1);
      *(long *)(lVar39 + 0x38d490) = lVar37;
    }
    plVar34 = *(long **)(*(long *)(lVar37 + 8) + 0x58);
    pcVar38 = *(code **)(*plVar34 + 0x18);
    goto LAB_02fc6920;
  }
  local_e0 = uVar49;
  if ((int)uVar49 < 1) {
    local_f8 = (undefined1 *)0x0;
    uVar46 = 0x80000000;
  }
  else {
    local_f8 = (undefined1 *)FUN_032cf190(PTR_PTR_0434a090,0x20,&local_e0);
    uVar46 = local_e0;
  }
  puVar42 = (undefined8 *)FUN_032cf5b0(0x70);
  *puVar42 = 0;
  puVar42[1] = 0;
  puVar42[2] = 0;
  puVar42[3] = 0;
  puVar42[4] = 0;
  puVar42[5] = 0;
  puVar42[6] = 0;
  puVar42[7] = 0;
  puVar42[8] = 0;
  puVar42[9] = 0;
  puVar42[10] = 0;
  puVar42[0xb] = 0;
  puVar42[0xc] = 0;
  puVar42[0xd] = 0;
  FUN_02fc5cb8();
  *(undefined8 **)(lVar31 + 0x68) = puVar42;
  puVar27 = PTR_PTR_0434a080;
  uVar36 = *(uint *)((long)puVar42 + 0x2c);
  if ((int)(uVar36 & 0x3fffffff) < (int)uVar49) {
    puVar47 = (undefined8 *)puVar42[4];
    uVar52 = *(uint *)(puVar42 + 5);
    if (0x3fffffff < (int)uVar49) {
      FUN_032bd0a8(uVar49);
      uVar36 = *(uint *)((long)puVar42 + 0x2c);
    }
    uVar56 = (uVar36 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar56) {
      uVar56 = 0x3fffffff;
    }
    if ((int)uVar49 <= (int)uVar56) {
      uVar49 = uVar56;
    }
    FUN_032bd100(uVar49,0x10,uVar36,&local_e0);
    uVar49 = *(uint *)((long)puVar42 + 0x2c);
    puVar32 = (undefined8 *)
              (**(code **)(*(long *)puVar27 + 0x10))(puVar27,CONCAT44(uStack_dc,local_e0),&local_e0)
    ;
    if (0 < (int)uVar52) {
      puVar32[1] = puVar47[1];
      *puVar32 = *puVar47;
      if (uVar52 != 1) {
        puVar32[3] = puVar47[3];
        puVar32[2] = puVar47[2];
        if (uVar52 != 2) {
          puVar32[5] = puVar47[5];
          puVar32[4] = puVar47[4];
          if (uVar52 != 3) {
            lVar33 = (ulong)uVar52 - 3;
            puVar40 = puVar47 + 6;
            puVar43 = puVar32 + 6;
            do {
              puVar43[1] = puVar40[1];
              lVar33 = lVar33 + -1;
              *puVar43 = *puVar40;
              puVar40 = puVar40 + 2;
              puVar43 = puVar43 + 2;
            } while (lVar33 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar49) {
      (**(code **)(*(long *)puVar27 + 0x18))(puVar27,puVar47,((ulong)uVar49 & 0x3fffffff) << 4);
    }
    if (CONCAT44(uStack_dc,local_e0) < 0x3fffffff0) {
      uVar35 = (undefined4)(CONCAT44(uStack_dc,local_e0) >> 4);
    }
    else {
      uVar35 = 0x3fffffff;
    }
    *(undefined4 *)((long)puVar42 + 0x2c) = uVar35;
    puVar42[4] = puVar32;
    if (*param_2 != 0) goto LAB_02fc600c;
LAB_02fc6144:
    (**(code **)(*param_1 + 0x80))(param_1);
    uVar35 = 2;
  }
  else {
    if (*param_2 == 0) goto LAB_02fc6144;
LAB_02fc600c:
    uVar35 = 0;
  }
  *(undefined4 *)(*(long *)(lVar31 + 0x68) + 0xc) = uVar35;
  if (0 < (int)uVar28) {
    uVar48 = 0;
    do {
      (**(code **)(*param_1 + 0x28))(param_1,uVar48 & 0xffffffff,&local_e0);
      iVar30 = FUN_0334bde0(&local_e0,auStack_d0,local_c0,&local_80);
      if (iVar30 == 0) {
        auVar64._4_4_ = uStack_dc;
        auVar64._0_4_ = local_e0;
        auVar64._8_8_ = uStack_d8;
        auVar76 = NEON_fmin(auVar64,auStack_d0,4);
        auVar53 = NEON_fmax(auVar64,auStack_d0,4);
        auVar64 = NEON_fmin(auVar76,local_c0,4);
        lVar33 = *(long *)(lVar31 + 0x68);
        auVar76 = NEON_fmax(auVar53,local_c0,4);
        uVar36 = *(uint *)(lVar33 + 0x28);
        uVar52 = *(uint *)(lVar33 + 0x2c);
        uVar49 = uVar36 + 1;
        puVar47 = *(undefined8 **)(lVar33 + 0x20);
        auVar53._0_8_ =
             CONCAT44((auVar64._4_4_ + auVar76._4_4_) * 0.5,(auVar64._0_4_ + auVar76._0_4_) * 0.5);
        auVar53._8_4_ = (auVar64._8_4_ + auVar76._8_4_) * 0.5;
        auVar53._12_4_ = (auVar64._12_4_ + auVar76._12_4_) * 0.5;
        puVar42 = puVar47;
        if ((int)(uVar52 & 0x3fffffff) <= (int)uVar36) {
          if (0x3ffffffe < (int)uVar36) {
            FUN_032bd0a8(uVar49);
            uVar52 = *(uint *)(lVar33 + 0x2c);
          }
          uVar56 = (uVar52 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar56) {
            uVar56 = 0x3fffffff;
          }
          uVar58 = uVar49;
          if ((int)uVar49 <= (int)uVar56) {
            uVar58 = uVar56;
          }
          FUN_032bd100(uVar58,0x10,uVar52,&local_a0);
          uVar52 = *(uint *)(lVar33 + 0x2c);
          puVar42 = (undefined8 *)(**(code **)(*(long *)puVar27 + 0x10))(puVar27,local_a0,&local_a0)
          ;
          if (0 < (int)uVar36) {
            puVar42[1] = puVar47[1];
            *puVar42 = *puVar47;
            if (uVar36 != 1) {
              puVar42[3] = puVar47[3];
              puVar42[2] = puVar47[2];
              if (uVar36 != 2) {
                puVar42[5] = puVar47[5];
                puVar42[4] = puVar47[4];
                if (uVar36 != 3) {
                  lVar39 = (ulong)uVar36 - 3;
                  puVar32 = puVar47 + 6;
                  puVar40 = puVar42 + 6;
                  do {
                    puVar40[1] = puVar32[1];
                    lVar39 = lVar39 + -1;
                    *puVar40 = *puVar32;
                    puVar32 = puVar32 + 2;
                    puVar40 = puVar40 + 2;
                  } while (lVar39 != 0);
                }
              }
            }
          }
          if (-1 < (int)uVar52) {
            (**(code **)(*(long *)puVar27 + 0x18))
                      (puVar27,puVar47,((ulong)uVar52 & 0x3fffffff) << 4);
          }
          if (local_a0 < 0x3fffffff0) {
            uVar35 = (undefined4)(local_a0 >> 4);
          }
          else {
            uVar35 = 0x3fffffff;
          }
          *(undefined4 *)(lVar33 + 0x2c) = uVar35;
          *(undefined8 **)(lVar33 + 0x20) = puVar42;
          auVar53._8_8_ = auVar53._8_8_;
          uVar36 = *(uint *)(lVar33 + 0x28);
        }
        uVar52 = (uint)(auVar53._0_4_ >> 0x1f) >> 1;
        uVar56 = (uint)(auVar53._4_4_ >> 0x1f) >> 1;
        uVar58 = (uint)(auVar53._8_4_ >> 0x1f) >> 1;
        uVar59 = (uint)(auVar53._12_4_ >> 0x1f) >> 1;
        auVar77._0_8_ =
             CONCAT17((byte)((char)auVar53[7] >> 7) >> 1 ^ auVar53[7],
                      CONCAT16((byte)(uVar56 >> 0x10) ^ auVar53[6],
                               CONCAT15((byte)(uVar56 >> 8) ^ auVar53[5],
                                        CONCAT14((byte)uVar56 ^ auVar53[4],
                                                 CONCAT13((byte)((char)auVar53[3] >> 7) >> 1 ^
                                                          auVar53[3],
                                                          CONCAT12((byte)(uVar52 >> 0x10) ^
                                                                   auVar53[2],
                                                                   CONCAT11((byte)(uVar52 >> 8) ^
                                                                            auVar53[1],
                                                                            (byte)uVar52 ^
                                                                            auVar53[0])))))));
        auVar77[8] = (byte)uVar58 ^ auVar53[8];
        auVar77[9] = (byte)(uVar58 >> 8) ^ auVar53[9];
        auVar77[10] = (byte)(uVar58 >> 0x10) ^ auVar53[10];
        auVar77[0xb] = (byte)((char)auVar53[0xb] >> 7) >> 1 ^ auVar53[0xb];
        auVar77[0xc] = (byte)uVar59 ^ auVar53[0xc];
        auVar77[0xd] = (byte)(uVar59 >> 8) ^ auVar53[0xd];
        auVar77[0xe] = (byte)(((uint3)(auVar53._13_3_ >> 0x17) >> 1) >> 8) ^ auVar53[0xe];
        auVar77[0xf] = (byte)((char)auVar53[0xf] >> 7) >> 1 ^ auVar53[0xf];
        puVar42 = puVar42 + (long)(int)uVar36 * 2;
        puVar42[1] = auVar77._8_8_;
        *puVar42 = auVar77._0_8_;
        *(int *)((long)puVar42 + 0xc) = (int)uVar48;
        puVar42 = (undefined8 *)(local_f8 + uVar48 * 0x20);
        *(uint *)(lVar33 + 0x28) = uVar49;
        puVar42[1] = auVar64._8_8_;
        *puVar42 = auVar64._0_8_;
        puVar42[3] = auVar76._8_8_;
        puVar42[2] = auVar76._0_8_;
      }
      else if (param_3 != (long *)0x0) {
        iVar30 = (int)param_3[1];
        uVar36 = *(uint *)((long)param_3 + 0xc);
        uVar49 = iVar30 + 1;
        if (iVar30 < (int)(uVar36 & 0x3fffffff)) {
          lVar33 = *param_3;
        }
        else {
          lVar33 = *param_3;
          if (0x3ffffffe < iVar30) {
            FUN_032bd0a8(uVar49);
            uVar36 = *(uint *)((long)param_3 + 0xc);
          }
          uVar36 = (uVar36 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar36) {
            uVar36 = 0x3fffffff;
          }
          uVar52 = uVar49;
          if ((int)uVar49 <= (int)uVar36) {
            uVar52 = uVar36;
          }
          lVar33 = FUN_032bd1d4(puVar27,uVar52,4,lVar33,iVar30,(uint *)((long)param_3 + 0xc));
          iVar30 = (int)param_3[1];
          *param_3 = lVar33;
        }
        *(int *)(lVar33 + (long)iVar30 * 4) = (int)uVar48;
        *(uint *)(param_3 + 1) = uVar49;
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 != uVar28);
  }
  if (0 < (int)uVar29) {
    uVar48 = 0;
    do {
      (**(code **)(*param_1 + 0x48))(param_1,uVar48 & 0xffffffff,&local_e0);
      iVar30 = FUN_0334bde0(&local_e0,auStack_d0,local_c0,&local_80);
      if ((iVar30 == 0) &&
         (iVar30 = FUN_0334bde0(&local_e0,local_c0,local_b0,&local_80), iVar30 == 0)) {
        auVar22._4_4_ = uStack_dc;
        auVar22._0_4_ = local_e0;
        auVar22._8_8_ = uStack_d8;
        auVar64 = NEON_fmin(auVar22,auStack_d0,4);
        auVar53 = NEON_fmax(auVar22,auStack_d0,4);
        auVar64 = NEON_fmin(auVar64,local_c0,4);
        lVar33 = *(long *)(lVar31 + 0x68);
        auVar53 = NEON_fmax(auVar53,local_c0,4);
        uVar36 = *(uint *)(lVar33 + 0x28);
        uVar52 = *(uint *)(lVar33 + 0x2c);
        auVar64 = NEON_fmin(auVar64,local_b0,4);
        puVar47 = *(undefined8 **)(lVar33 + 0x20);
        auVar53 = NEON_fmax(auVar53,local_b0,4);
        auVar76._0_8_ =
             CONCAT44((auVar64._4_4_ + auVar53._4_4_) * 0.5,(auVar64._0_4_ + auVar53._0_4_) * 0.5);
        auVar76._8_4_ = (auVar64._8_4_ + auVar53._8_4_) * 0.5;
        auVar76._12_4_ = (auVar64._12_4_ + auVar53._12_4_) * 0.5;
        uVar49 = uVar36 + 1;
        puVar42 = puVar47;
        if ((int)(uVar52 & 0x3fffffff) <= (int)uVar36) {
          if (0x3ffffffe < (int)uVar36) {
            FUN_032bd0a8(uVar49);
            uVar52 = *(uint *)(lVar33 + 0x2c);
          }
          uVar56 = (uVar52 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar56) {
            uVar56 = 0x3fffffff;
          }
          uVar58 = uVar49;
          if ((int)uVar49 <= (int)uVar56) {
            uVar58 = uVar56;
          }
          FUN_032bd100(uVar58,0x10,uVar52,&local_a0);
          uVar52 = *(uint *)(lVar33 + 0x2c);
          puVar42 = (undefined8 *)(**(code **)(*(long *)puVar27 + 0x10))(puVar27,local_a0,&local_a0)
          ;
          if (0 < (int)uVar36) {
            puVar42[1] = puVar47[1];
            *puVar42 = *puVar47;
            if (uVar36 != 1) {
              puVar42[3] = puVar47[3];
              puVar42[2] = puVar47[2];
              if (uVar36 != 2) {
                puVar42[5] = puVar47[5];
                puVar42[4] = puVar47[4];
                if (uVar36 != 3) {
                  lVar39 = (ulong)uVar36 - 3;
                  puVar32 = puVar47 + 6;
                  puVar40 = puVar42 + 6;
                  do {
                    puVar40[1] = puVar32[1];
                    lVar39 = lVar39 + -1;
                    *puVar40 = *puVar32;
                    puVar32 = puVar32 + 2;
                    puVar40 = puVar40 + 2;
                  } while (lVar39 != 0);
                }
              }
            }
          }
          if (-1 < (int)uVar52) {
            (**(code **)(*(long *)puVar27 + 0x18))
                      (puVar27,puVar47,((ulong)uVar52 & 0x3fffffff) << 4);
          }
          if (local_a0 < 0x3fffffff0) {
            uVar35 = (undefined4)(local_a0 >> 4);
          }
          else {
            uVar35 = 0x3fffffff;
          }
          *(undefined4 *)(lVar33 + 0x2c) = uVar35;
          *(undefined8 **)(lVar33 + 0x20) = puVar42;
          auVar76._8_8_ = auVar76._8_8_;
          uVar36 = *(uint *)(lVar33 + 0x28);
        }
        uVar52 = (uint)(auVar76._0_4_ >> 0x1f) >> 1;
        uVar56 = (uint)(auVar76._4_4_ >> 0x1f) >> 1;
        uVar58 = (uint)(auVar76._8_4_ >> 0x1f) >> 1;
        uVar59 = (uint)(auVar76._12_4_ >> 0x1f) >> 1;
        auVar54._0_8_ =
             CONCAT17((byte)((char)auVar76[7] >> 7) >> 1 ^ auVar76[7],
                      CONCAT16((byte)(uVar56 >> 0x10) ^ auVar76[6],
                               CONCAT15((byte)(uVar56 >> 8) ^ auVar76[5],
                                        CONCAT14((byte)uVar56 ^ auVar76[4],
                                                 CONCAT13((byte)((char)auVar76[3] >> 7) >> 1 ^
                                                          auVar76[3],
                                                          CONCAT12((byte)(uVar52 >> 0x10) ^
                                                                   auVar76[2],
                                                                   CONCAT11((byte)(uVar52 >> 8) ^
                                                                            auVar76[1],
                                                                            (byte)uVar52 ^
                                                                            auVar76[0])))))));
        auVar54[8] = (byte)uVar58 ^ auVar76[8];
        auVar54[9] = (byte)(uVar58 >> 8) ^ auVar76[9];
        auVar54[10] = (byte)(uVar58 >> 0x10) ^ auVar76[10];
        auVar54[0xb] = (byte)((char)auVar76[0xb] >> 7) >> 1 ^ auVar76[0xb];
        auVar54[0xc] = (byte)uVar59 ^ auVar76[0xc];
        auVar54[0xd] = (byte)(uVar59 >> 8) ^ auVar76[0xd];
        auVar54[0xe] = (byte)(((uint3)(auVar76._13_3_ >> 0x17) >> 1) >> 8) ^ auVar76[0xe];
        auVar54[0xf] = (byte)((char)auVar76[0xf] >> 7) >> 1 ^ auVar76[0xf];
        puVar42 = puVar42 + (long)(int)uVar36 * 2;
        puVar42[1] = auVar54._8_8_;
        *puVar42 = auVar54._0_8_;
        *(int *)((long)puVar42 + 0xc) = (int)(uVar48 + (long)(int)uVar28);
        puVar42 = (undefined8 *)(local_f8 + (uVar48 + (long)(int)uVar28) * 0x20);
        *(uint *)(lVar33 + 0x28) = uVar49;
        puVar42[1] = auVar64._8_8_;
        *puVar42 = auVar64._0_8_;
        puVar42[3] = auVar53._8_8_;
        puVar42[2] = auVar53._0_8_;
      }
      else if (param_4 != (long *)0x0) {
        iVar30 = (int)param_4[1];
        uVar36 = *(uint *)((long)param_4 + 0xc);
        uVar49 = iVar30 + 1;
        if (iVar30 < (int)(uVar36 & 0x3fffffff)) {
          lVar33 = *param_4;
        }
        else {
          lVar33 = *param_4;
          if (0x3ffffffe < iVar30) {
            FUN_032bd0a8(uVar49);
            uVar36 = *(uint *)((long)param_4 + 0xc);
          }
          uVar36 = (uVar36 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar36) {
            uVar36 = 0x3fffffff;
          }
          uVar52 = uVar49;
          if ((int)uVar49 <= (int)uVar36) {
            uVar52 = uVar36;
          }
          lVar33 = FUN_032bd1d4(puVar27,uVar52,4,lVar33,iVar30,(uint *)((long)param_4 + 0xc));
          iVar30 = (int)param_4[1];
          *param_4 = lVar33;
        }
        *(int *)(lVar33 + (long)iVar30 * 4) = (int)uVar48;
        *(uint *)(param_4 + 1) = uVar49;
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 != uVar29);
  }
  FUN_03350fc0(lVar31 + 0x50,*(undefined8 *)(lVar31 + 0x68),local_f8);
  if (local_f8 == (undefined1 *)0x0) {
    return lVar31;
  }
  if ((int)uVar46 < 0) {
    return lVar31;
  }
  lVar33 = (ulong)(uVar46 & 0x3fffffff) << 5;
  pcVar38 = *(code **)(*plVar34 + 0x18);
LAB_02fc6920:
  (*pcVar38)(plVar34,local_f8,lVar33);
  return lVar31;
}


