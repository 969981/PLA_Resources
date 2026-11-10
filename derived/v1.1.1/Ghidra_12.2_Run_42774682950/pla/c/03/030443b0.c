/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030443b0; name: FUN_030443b0
 */


void FUN_030443b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float *pfVar21;
  undefined8 *puVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 local_70;
  undefined8 uStack_68;
  
  plVar1 = param_1 + 2;
  do {
    switch((int)param_1[1]) {
    case 0:
      fVar38 = (float)param_1[3];
      fVar40 = (float)((ulong)param_1[3] >> 0x20);
      fVar30 = (float)param_1[2];
      fVar35 = (float)((ulong)param_1[2] >> 0x20);
LAB_03044840:
      param_1[5] = CONCAT44(fVar40,fVar38);
      param_1[4] = CONCAT44(fVar35,fVar30);
      return;
    case 1:
      pfVar21 = (float *)*param_1;
      fVar27 = *pfVar21;
      fVar28 = pfVar21[1];
      fVar29 = pfVar21[3];
      fVar38 = (float)param_1[3];
      fVar40 = (float)((ulong)param_1[3] >> 0x20);
      fVar30 = (float)param_1[2];
      fVar35 = (float)((ulong)param_1[2] >> 0x20);
      fVar36 = fVar27 * fVar30;
      fVar39 = fVar28 * fVar35;
      fVar41 = pfVar21[2] * fVar38;
      fVar37 = fVar36 + fVar39 + fVar41;
      fVar41 = fVar36 + fVar39 + fVar41;
      *(float *)(param_1 + 5) = fVar38 - pfVar21[2] * fVar37;
      *(float *)((long)param_1 + 0x2c) = fVar40 - fVar29 * fVar41;
      *(float *)(param_1 + 4) = fVar30 - fVar27 * fVar37;
      *(float *)((long)param_1 + 0x24) = fVar35 - fVar28 * fVar41;
      if (fVar37 < -0.001) {
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_03044840;
    case 2:
      pfVar21 = (float *)*param_1;
      fVar29 = (float)*(undefined8 *)(pfVar21 + 0x16);
      fVar27 = (float)*(undefined8 *)(pfVar21 + 0x14);
      fVar28 = (float)((ulong)*(undefined8 *)(pfVar21 + 0x14) >> 0x20);
      fVar30 = fVar27 * *(float *)(param_1 + 2);
      fVar38 = fVar28 * *(float *)((long)param_1 + 0x14);
      fVar40 = fVar29 * *(float *)(param_1 + 3);
      fVar35 = fVar30 + fVar38 + fVar40;
      fVar40 = fVar30 + fVar38 + fVar40;
      fVar27 = *(float *)(param_1 + 2) - fVar27 * fVar35;
      fVar28 = *(float *)((long)param_1 + 0x14) - fVar28 * fVar40;
      fVar29 = *(float *)(param_1 + 3) - fVar29 * fVar35;
      fVar30 = *(float *)((long)param_1 + 0x1c) -
               (float)((ulong)*(undefined8 *)(pfVar21 + 0x16) >> 0x20) * fVar40;
      auVar34._0_4_ = *pfVar21 * fVar27;
      auVar34._4_4_ = pfVar21[1] * fVar28;
      auVar34._8_4_ = pfVar21[2] * fVar29;
      auVar34._12_4_ = pfVar21[3] * fVar30;
      auVar33 = NEON_ext(auVar34,auVar34,8,1);
      if (-0.001 <= auVar34._0_4_ + auVar34._4_4_ + auVar33._0_4_) {
        param_1[5] = CONCAT44(fVar30,fVar29);
        param_1[4] = CONCAT44(fVar28,fVar27);
        FUN_03044250();
        *(undefined4 *)(param_1 + 1) = 1;
        return;
      }
      FUN_03044930(pfVar21,pfVar21 + 0x14,plVar1,param_1 + 4);
      return;
    case 3:
      pfVar21 = (float *)*param_1;
      fVar29 = (float)*(undefined8 *)(pfVar21 + 0x2a);
      fVar27 = (float)*(undefined8 *)(pfVar21 + 0x28);
      fVar28 = (float)((ulong)*(undefined8 *)(pfVar21 + 0x28) >> 0x20);
      fVar30 = fVar27 * *(float *)(param_1 + 2);
      fVar38 = fVar28 * *(float *)((long)param_1 + 0x14);
      fVar40 = fVar29 * *(float *)(param_1 + 3);
      fVar35 = fVar30 + fVar38 + fVar40;
      fVar40 = fVar30 + fVar38 + fVar40;
      fVar27 = *(float *)(param_1 + 2) - fVar27 * fVar35;
      fVar28 = *(float *)((long)param_1 + 0x14) - fVar28 * fVar40;
      fVar29 = *(float *)(param_1 + 3) - fVar29 * fVar35;
      fVar30 = *(float *)((long)param_1 + 0x1c) -
               (float)((ulong)*(undefined8 *)(pfVar21 + 0x2a) >> 0x20) * fVar40;
      auVar31._0_4_ = *pfVar21 * fVar27;
      auVar31._4_4_ = pfVar21[1] * fVar28;
      auVar31._8_4_ = pfVar21[2] * fVar29;
      auVar31._12_4_ = pfVar21[3] * fVar30;
      auVar33 = NEON_ext(auVar31,auVar31,8,1);
      if ((auVar31._0_4_ + auVar31._4_4_ + auVar33._0_4_ < -0.001) ||
         (auVar32._0_4_ = fVar27 * pfVar21[0x14], auVar32._4_4_ = fVar28 * pfVar21[0x15],
         auVar32._8_4_ = fVar29 * pfVar21[0x16], auVar32._12_4_ = fVar30 * pfVar21[0x17],
         auVar33 = NEON_ext(auVar32,auVar32,8,1),
         auVar32._0_4_ + auVar32._4_4_ + auVar33._0_4_ < -0.001)) {
        FUN_03044930(pfVar21 + 0x14,pfVar21 + 0x28,plVar1,&local_70);
        puVar22 = (undefined8 *)*param_1;
        fVar27 = (float)*puVar22 * (float)local_70;
        fVar28 = (float)((ulong)*puVar22 >> 0x20) * local_70._4_4_;
        fVar29 = (float)puVar22[1] * (float)uStack_68;
        fVar30 = (float)((ulong)puVar22[1] >> 0x20) * uStack_68._4_4_;
        auVar17._4_4_ = fVar28;
        auVar17._0_4_ = fVar27;
        auVar17._8_4_ = fVar29;
        auVar17._12_4_ = fVar30;
        auVar18._4_4_ = fVar28;
        auVar18._0_4_ = fVar27;
        auVar18._8_4_ = fVar29;
        auVar18._12_4_ = fVar30;
        auVar33 = NEON_ext(auVar17,auVar18,8,1);
        if (-0.001 <= fVar27 + fVar28 + auVar33._0_4_) {
          FUN_03044250(puVar22,puVar22 + 10);
          lVar24 = *param_1;
        }
        else {
          FUN_03044930(puVar22,puVar22 + 0x14,plVar1,&local_70);
          lVar24 = *param_1;
          fVar27 = (float)*(undefined8 *)(lVar24 + 0x50) * (float)local_70;
          fVar28 = (float)((ulong)*(undefined8 *)(lVar24 + 0x50) >> 0x20) * local_70._4_4_;
          fVar29 = (float)*(undefined8 *)(lVar24 + 0x58) * (float)uStack_68;
          fVar30 = (float)((ulong)*(undefined8 *)(lVar24 + 0x58) >> 0x20) * uStack_68._4_4_;
          auVar19._4_4_ = fVar28;
          auVar19._0_4_ = fVar27;
          auVar19._8_4_ = fVar29;
          auVar19._12_4_ = fVar30;
          auVar20._4_4_ = fVar28;
          auVar20._0_4_ = fVar27;
          auVar20._8_4_ = fVar29;
          auVar20._12_4_ = fVar30;
          auVar33 = NEON_ext(auVar19,auVar20,8,1);
          if (fVar27 + fVar28 + auVar33._0_4_ < -0.001) {
            FUN_03044a40(param_1,lVar24,lVar24 + 0x50,lVar24 + 0xa0,plVar1,param_1 + 4);
            return;
          }
        }
        FUN_03044250(lVar24 + 0x50,lVar24 + 0xa0);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      }
      else {
        param_1[5] = CONCAT44(fVar30,fVar29);
        param_1[4] = CONCAT44(fVar28,fVar27);
        FUN_03044250(pfVar21,pfVar21 + 0x28);
        *(undefined4 *)(param_1 + 1) = 1;
      }
      break;
    case 4:
      lVar24 = *param_1;
      FUN_03044a40(param_1,lVar24 + 0x50,lVar24 + 0xa0,lVar24 + 0xf0,plVar1,&local_70);
      puVar22 = (undefined8 *)*param_1;
      fVar27 = (float)*puVar22 * (float)local_70;
      fVar28 = (float)((ulong)*puVar22 >> 0x20) * local_70._4_4_;
      fVar29 = (float)puVar22[1] * (float)uStack_68;
      fVar30 = (float)((ulong)puVar22[1] >> 0x20) * uStack_68._4_4_;
      auVar33._4_4_ = fVar28;
      auVar33._0_4_ = fVar27;
      auVar33._8_4_ = fVar29;
      auVar33._12_4_ = fVar30;
      auVar12._4_4_ = fVar28;
      auVar12._0_4_ = fVar27;
      auVar12._8_4_ = fVar29;
      auVar12._12_4_ = fVar30;
      auVar33 = NEON_ext(auVar33,auVar12,8,1);
      if (fVar27 + fVar28 + auVar33._0_4_ < -0.001) {
        FUN_03044a40(param_1,puVar22 + 0x14,puVar22,puVar22 + 0x1e,plVar1,&local_70);
        puVar22 = (undefined8 *)*param_1;
        fVar27 = (float)puVar22[10] * (float)local_70;
        fVar28 = (float)((ulong)puVar22[10] >> 0x20) * local_70._4_4_;
        fVar29 = (float)puVar22[0xb] * (float)uStack_68;
        fVar30 = (float)((ulong)puVar22[0xb] >> 0x20) * uStack_68._4_4_;
        auVar13._4_4_ = fVar28;
        auVar13._0_4_ = fVar27;
        auVar13._8_4_ = fVar29;
        auVar13._12_4_ = fVar30;
        auVar14._4_4_ = fVar28;
        auVar14._0_4_ = fVar27;
        auVar14._8_4_ = fVar29;
        auVar14._12_4_ = fVar30;
        auVar33 = NEON_ext(auVar13,auVar14,8,1);
        if (-0.001 <= fVar27 + fVar28 + auVar33._0_4_) {
          lVar24 = 1;
          goto LAB_03044500;
        }
        FUN_03044a40(param_1,puVar22,puVar22 + 10,puVar22 + 0x1e,plVar1,&local_70);
        lVar24 = *param_1;
        fVar27 = (float)*(undefined8 *)(lVar24 + 0xa0) * (float)local_70;
        fVar28 = (float)((ulong)*(undefined8 *)(lVar24 + 0xa0) >> 0x20) * local_70._4_4_;
        fVar29 = (float)*(undefined8 *)(lVar24 + 0xa8) * (float)uStack_68;
        fVar30 = (float)((ulong)*(undefined8 *)(lVar24 + 0xa8) >> 0x20) * uStack_68._4_4_;
        auVar15._4_4_ = fVar28;
        auVar15._0_4_ = fVar27;
        auVar15._8_4_ = fVar29;
        auVar15._12_4_ = fVar30;
        auVar16._4_4_ = fVar28;
        auVar16._0_4_ = fVar27;
        auVar16._8_4_ = fVar29;
        auVar16._12_4_ = fVar30;
        auVar33 = NEON_ext(auVar15,auVar16,8,1);
        if (-0.001 <= fVar27 + fVar28 + auVar33._0_4_) goto LAB_03044510;
        uStack_68 = param_1[3];
        local_70 = *plVar1;
        iVar6 = (int)param_1[1];
        lVar25 = lVar24 + 0x50;
        lVar2 = lVar24 + 0xa0;
        lVar3 = lVar24 + 0xf0;
        FUN_03044a40(param_1,lVar24,lVar25,lVar2,&local_70,&local_70);
        iVar23 = (int)param_1[1];
        if (iVar6 == iVar23) {
          FUN_03044a40(param_1,lVar24,lVar25,lVar3,&local_70,&local_70);
          iVar23 = (int)param_1[1];
        }
        if (iVar6 == iVar23) {
          FUN_03044a40(param_1,lVar24,lVar2,lVar3,&local_70,&local_70);
          iVar23 = (int)param_1[1];
        }
        if (iVar6 == iVar23) {
          FUN_03044a40(param_1,lVar25,lVar2,lVar3,&local_70,&local_70);
        }
        lVar24 = *param_1;
        param_1[5] = uStack_68;
        param_1[4] = local_70;
        uVar7 = *(uint *)(lVar24 + 0x48);
        uVar8 = *(uint *)(lVar24 + 0x98);
        uVar4 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        uVar9 = *(uint *)(lVar24 + 0xe8);
        uVar10 = *(uint *)(lVar24 + 0x138);
        if ((int)uVar4 <= (int)uVar8) {
          uVar4 = uVar8;
        }
        if ((int)uVar4 <= (int)uVar9) {
          uVar4 = uVar9;
        }
        uVar5 = uVar4;
        if ((int)uVar4 <= (int)uVar10) {
          uVar5 = uVar10;
        }
        if (uVar5 == uVar7) {
          lVar25 = 0;
LAB_03044730:
          puVar22 = (undefined8 *)(lVar24 + lVar25 * 0x50);
          uVar26 = *(undefined8 *)(lVar24 + 0xf0);
          puVar22[1] = *(undefined8 *)(lVar24 + 0xf8);
          *puVar22 = uVar26;
          uVar26 = *(undefined8 *)(lVar24 + 0x100);
          puVar22[3] = *(undefined8 *)(lVar24 + 0x108);
          puVar22[2] = uVar26;
          uVar26 = *(undefined8 *)(lVar24 + 0x110);
          *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(lVar24 + 0x118);
          puVar22[4] = uVar26;
          *(undefined4 *)(puVar22 + 6) = *(undefined4 *)(lVar24 + 0x120);
          *(undefined1 *)((long)puVar22 + 0x34) = *(undefined1 *)(lVar24 + 0x124);
          *(undefined2 *)(puVar22 + 7) = *(undefined2 *)(lVar24 + 0x128);
          uVar26 = *(undefined8 *)(lVar24 + 300);
          *(undefined4 *)((long)puVar22 + 0x44) = *(undefined4 *)(lVar24 + 0x134);
          *(undefined8 *)((long)puVar22 + 0x3c) = uVar26;
          uVar11 = *(undefined4 *)(lVar24 + 0x138);
          *(undefined1 *)((long)puVar22 + 0x4c) = *(undefined1 *)(lVar24 + 0x13c);
          *(undefined4 *)(puVar22 + 9) = uVar11;
          lVar24 = *param_1;
        }
        else {
          if (uVar5 == uVar8) {
            lVar25 = 1;
            goto LAB_03044730;
          }
          lVar25 = 2;
          if ((uVar5 == uVar9) || (lVar25 = 3, (int)uVar4 <= (int)uVar10)) goto LAB_03044730;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        *(undefined4 *)(lVar24 + 0x48) = 0;
        *(undefined4 *)(*param_1 + 0x98) = 0;
        *(undefined4 *)(*param_1 + 0xe8) = 0;
      }
      else {
        lVar24 = 0;
LAB_03044500:
        FUN_03044250(puVar22 + lVar24 * 10,puVar22 + 0x14);
        lVar24 = *param_1;
LAB_03044510:
        FUN_03044250(lVar24 + 0xa0,lVar24 + 0xf0);
        *(undefined4 *)(param_1 + 1) = 3;
      }
      break;
    default:
      return;
    }
  } while( true );
}


