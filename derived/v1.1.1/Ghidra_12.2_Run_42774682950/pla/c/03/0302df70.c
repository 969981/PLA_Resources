/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302df70; name: FUN_0302df70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0302df70(long param_1,uint param_2)

{
  int iVar1;
  undefined1 (*pauVar2) [12];
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar49;
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined8 local_380;
  ulong uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330 [64];
  undefined1 *local_2f0;
  undefined8 local_2e8;
  undefined1 auStack_2e0 [576];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  local_2f0 = (undefined1 *)CONCAT26(local_2f0._6_2_,0x3a02000010);
  local_2e8 = CONCAT44(local_2e8._4_4_,param_2);
  plVar18 = *(long **)(param_1 + 0x7f0);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18,&local_2f0);
  }
  puVar17 = PTR_PTR_0434a090;
  uVar16 = DAT_0388a148;
  uVar15 = DAT_0388a140;
  uVar14 = _UNK_0388a138;
  uVar13 = _DAT_0388a130;
  uVar12 = _UNK_03889a88;
  uVar11 = _DAT_03889a80;
  uVar10 = _UNK_03888d18;
  uVar9 = _DAT_03888d10;
  pauVar2 = (undefined1 (*) [12])(*(long *)(param_1 + 0x150) + (ulong)param_2 * 0x80);
  uVar3 = *(uint *)pauVar2[6];
  uVar26 = (ulong)uVar3 & 0xffffff;
  if ((int)uVar26 != 0xffffff) {
    lVar27 = *(long *)(param_1 + 0x38);
    dVar54 = *(double *)(pauVar2[1] + 4);
    uVar8 = *(undefined8 *)(*pauVar2 + 8);
    fVar52 = (float)uVar8;
    fVar53 = (float)((ulong)uVar8 >> 0x20);
    uVar7 = *(undefined8 *)*pauVar2;
    fVar50 = (float)uVar7;
    fVar51 = (float)((ulong)uVar7 >> 0x20);
    auVar30._12_4_ = fVar53;
    auVar30._0_12_ = *pauVar2;
    auVar48._12_4_ = fVar53;
    auVar48._0_12_ = *pauVar2;
    auVar30 = NEON_ext(auVar30,auVar48,8,1);
    dVar56 = *(double *)pauVar2[2];
    dVar55 = *(double *)(pauVar2[2] + 8);
    fVar6 = auVar30._4_4_ * auVar30._4_4_;
    uVar29 = NEON_ext(uVar7,auVar30._0_8_,4,1);
    fVar28 = fVar6 + -0.5;
    fVar6 = fVar6 + -0.5;
    auVar30 = *(undefined1 (*) [16])(pauVar2[9] + 4);
    fVar43 = auVar30._0_4_;
    fVar44 = auVar30._4_4_;
    fVar45 = auVar30._8_4_;
    fVar46 = fVar50 * fVar43 + fVar51 * fVar44 + fVar52 * fVar45;
    fVar49 = fVar50 * fVar43 + fVar51 * fVar44 + fVar52 * fVar45;
    auVar48 = NEON_ext(auVar30,auVar30,8,1);
    uVar47 = NEON_ext(auVar30._0_8_,auVar48._0_8_,4,1);
    auVar31._0_4_ = fVar50 * (float)uVar47 - fVar43 * (float)uVar29;
    auVar31._4_4_ =
         fVar51 * (float)((ulong)uVar47 >> 0x20) - fVar44 * (float)((ulong)uVar29 >> 0x20);
    auVar31._8_4_ = fVar52 * fVar43 - fVar45 * fVar50;
    auVar31._12_4_ = fVar53 * fVar44 - auVar30._12_4_ * fVar51;
    auVar48 = NEON_ext(auVar31,auVar31,4,1);
    local_a0 = fVar43 * fVar28 + fVar50 * fVar46 + auVar48._0_4_ * fVar53;
    fStack_9c = fVar44 * fVar6 + fVar51 * fVar49 + auVar48._4_4_ * fVar53;
    fStack_98 = fVar45 * fVar28 + fVar52 * fVar46 + auVar31._0_4_ * fVar53;
    fStack_94 = auVar30._12_4_ *
                (float)CONCAT13((char)((uint)fVar6 >> 0x18),
                                CONCAT12((char)((uint)fVar6 >> 0x10),
                                         (short)(CONCAT15((char)((uint)fVar6 >> 8),
                                                          CONCAT14(SUB41(fVar6,0),fVar28)) >> 0x20))
                               ) + fVar53 * fVar49 + auVar31._4_4_ * fVar53;
    local_a0 = local_a0 + local_a0;
    fStack_9c = fStack_9c + fStack_9c;
    fStack_98 = fStack_98 + fStack_98;
    fStack_94 = fStack_94 + fStack_94;
    if (*(uint *)(lVar27 + uVar26 * 0xc0 + 0x84) == uVar3) {
      lVar23 = lVar27 + uVar26 * 0xc0;
      FUN_03001ff0(*(undefined8 *)(lVar23 + 0x78),
                   *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar26 * 8),&local_2f0);
      FUN_032cb060(&local_380,lVar23);
      uStack_368 = SUB168(*(undefined1 (*) [16])(lVar23 + 0x30),8);
      local_370 = SUB168(*(undefined1 (*) [16])(lVar23 + 0x30),0);
      FUN_03016368(pauVar2,&local_2f0,&local_380);
    }
    else {
      local_2f0 = auStack_2e0;
      local_2e8 = 0x8000000400000000;
      lVar23 = lVar27;
      uVar22 = uVar3;
      while( true ) {
        uVar24 = (ulong)(uVar22 & 0xffffff);
        FUN_03001ff0(*(undefined8 *)(lVar23 + uVar24 * 0xc0 + 0x78),
                     *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar24 * 8),&local_380);
        iVar1 = (int)local_2e8 + 1;
        iVar19 = (int)local_2e8;
        if ((int)(local_2e8._4_4_ & 0x3fffffff) <= (int)local_2e8) {
          local_2f0 = (undefined1 *)
                      FUN_02f79b68(puVar17,iVar1,local_2f0,local_2e8 & 0xffffffff,
                                   (ulong)&local_2f0 | 0xc);
          iVar19 = (int)local_2e8;
        }
        local_2e8 = CONCAT44(local_2e8._4_4_,iVar1);
        puVar25 = (undefined8 *)(local_2f0 + (long)iVar19 * 0x90);
        puVar25[2] = 0;
        puVar25[3] = 0;
        puVar25[4] = 0;
        puVar25[5] = 0;
        *puVar25 = 0;
        puVar25[6] = 0;
        puVar25[7] = 0;
        puVar25[8] = 0;
        puVar25[9] = 0;
        puVar25[0xb] = uVar12;
        puVar25[10] = uVar11;
        puVar25[0xd] = uVar16;
        puVar25[0xc] = uVar15;
        puVar25[0xf] = uVar10;
        puVar25[0xe] = uVar9;
        puVar25[0x11] = uVar14;
        puVar25[0x10] = uVar13;
        FUN_0328f03c(&local_380,puVar25);
        puVar20 = (undefined8 *)(lVar23 + uVar24 * 0xc0);
        uVar29 = *puVar20;
        puVar25[0xb] = puVar20[1];
        puVar25[10] = uVar29;
        uVar29 = puVar20[2];
        puVar25[0xd] = puVar20[3];
        puVar25[0xc] = uVar29;
        uVar29 = puVar20[4];
        puVar25[0xf] = puVar20[5];
        puVar25[0xe] = uVar29;
        auVar30 = *(undefined1 (*) [16])(puVar20 + 6);
        puVar25[0x11] = auVar30._8_8_;
        puVar25[0x10] = auVar30._0_8_;
        uVar22 = *(uint *)((long)puVar20 + 0x84);
        if (uVar22 == uVar3) break;
        lVar23 = *(long *)(param_1 + 0x38);
      }
      local_380 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_360 = 0;
      uStack_358 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_340 = 0;
      uStack_338 = 0;
      FUN_03290038(&local_2f0,&local_380);
      FUN_0328ed90(local_330,&local_380);
      FUN_03016368(pauVar2,local_330,&DAT_04349b80);
      uVar24 = local_2e8;
      uVar21 = (ulong)local_2e8._4_4_;
      local_2e8 = (ulong)local_2e8._4_4_ << 0x20;
      if ((-1 < (long)uVar24) && (local_2f0 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_2f0,(uVar21 & 0x3fffffff) * 0x90);
      }
    }
    if ((*(byte *)(lVar27 + uVar26 * 0xc0 + 0x54) >> 2 & 1) != 0) {
      *(undefined8 *)(pauVar2[5] + 4) = 0;
    }
    fVar50 = fVar50 * *(float *)*pauVar2;
    fVar51 = fVar51 * *(float *)(*pauVar2 + 4);
    uVar33 = (undefined1)((uint)fVar51 >> 8);
    uVar34 = (undefined1)((uint)fVar51 >> 0x10);
    uVar35 = (undefined1)((uint)fVar51 >> 0x18);
    fVar52 = fVar52 * *(float *)(*pauVar2 + 8);
    uVar37 = (undefined1)((uint)fVar52 >> 8);
    uVar38 = (undefined1)((uint)fVar52 >> 0x10);
    uVar39 = (undefined1)((uint)fVar52 >> 0x18);
    fVar53 = fVar53 * *(float *)pauVar2[1];
    uVar40 = (undefined1)((uint)fVar53 >> 8);
    uVar41 = (undefined1)((uint)fVar53 >> 0x10);
    uVar42 = (undefined1)((uint)fVar53 >> 0x18);
    auVar4[4] = SUB41(fVar51,0);
    auVar4._0_4_ = fVar50;
    auVar4[5] = uVar33;
    auVar4[6] = uVar34;
    auVar4[7] = uVar35;
    auVar4[8] = SUB41(fVar52,0);
    auVar4[9] = uVar37;
    auVar4[10] = uVar38;
    auVar4[0xb] = uVar39;
    auVar4[0xc] = SUB41(fVar53,0);
    auVar4[0xd] = uVar40;
    auVar4[0xe] = uVar41;
    auVar4[0xf] = uVar42;
    auVar5[4] = SUB41(fVar51,0);
    auVar5._0_4_ = fVar50;
    auVar5[5] = uVar33;
    auVar5[6] = uVar34;
    auVar5[7] = uVar35;
    auVar5[8] = SUB41(fVar52,0);
    auVar5[9] = uVar37;
    auVar5[10] = uVar38;
    auVar5[0xb] = uVar39;
    auVar5[0xc] = SUB41(fVar53,0);
    auVar5[0xd] = uVar40;
    auVar5[0xe] = uVar41;
    auVar5[0xf] = uVar42;
    auVar30 = NEON_ext(auVar4,auVar5,8,1);
    fVar28 = auVar30._0_4_ + auVar30._4_4_;
    bVar32 = (byte)((uint)(fVar50 + fVar51 + fVar28) >> 0x18);
    bVar36 = (byte)((uint)(fVar50 + fVar51 + fVar28) >> 0x18);
    if ((0.001 < ABS(*(float *)pauVar2[1] -
                     (float)CONCAT13(bVar36 & 0x80 ^ (byte)((ulong)uVar8 >> 0x38),
                                     (int3)((ulong)uVar8 >> 0x20))) ||
         (0.001 < ABS(*(float *)(*pauVar2 + 8) -
                      (float)CONCAT13(bVar32 & 0x80 ^ (byte)((ulong)uVar8 >> 0x18),(int3)uVar8)) ||
         (0.001 < ABS(*(float *)*pauVar2 -
                      (float)CONCAT13(bVar32 & 0x80 ^ (byte)((ulong)uVar7 >> 0x18),(int3)uVar7)) ||
         0.001 < ABS(*(float *)(*pauVar2 + 4) -
                     (float)CONCAT13(bVar36 & 0x80 ^ (byte)((ulong)uVar7 >> 0x38),
                                     (int3)((ulong)uVar7 >> 0x20)))))) ||
       (0.001 < ABS((float)*(double *)(pauVar2[2] + 8) - (float)dVar55) ||
        (0.001 < ABS((float)*(double *)(pauVar2[1] + 4) - (float)dVar54) ||
        0.001 < ABS((float)*(double *)pauVar2[2] - (float)dVar56)))) {
      lVar27 = *(long *)(param_1 + 0x38);
      uVar22 = uVar3;
      do {
        lVar27 = lVar27 + (ulong)(uVar22 & 0xffffff) * 0xc0;
        FUN_02ffec4c(lVar27,pauVar2,0);
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar27 + 0x78) + 0x18) * 0x200 + 0x18
                    ))(*(long *)(lVar27 + 0x78),&DAT_03aae430,&local_2f0);
        local_380 = CONCAT44(*(undefined4 *)(lVar27 + 0x1c),*(undefined4 *)(lVar27 + 0xc));
        uStack_378 = (ulong)*(uint *)(lVar27 + 0x2c);
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar27 + 0x78) + 0x18) * 0x200 + 0x28
                    ))(*(long *)(lVar27 + 0x78),&local_380,local_330);
        *(short *)(lVar27 + 0x94) = local_330._2_2_ + 1;
        lVar27 = *(long *)(param_1 + 0x38);
        uVar22 = *(uint *)(lVar27 + (ulong)(uVar22 & 0xffffff) * 0xc0 + 0x84);
      } while (uVar22 != uVar3);
      FUN_03016660(pauVar2,&local_a0);
    }
  }
  return;
}


