/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ec2e4; name: FUN_030ec2e4
 */


void FUN_030ec2e4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 *local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  
  *param_1 = &PTR_LAB_042cfff0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  uVar23 = NEON_fmov(0x3f800000,4);
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x8000000000000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  param_1[9] = *(undefined8 *)(param_2 + 0x80);
  param_1[10] = *(undefined8 *)(param_2 + 0x88);
  param_1[6] = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x90);
  auVar13 = *(undefined1 (*) [16])(param_2 + 0x30);
  fVar12 = auVar13._0_4_;
  auVar17._0_4_ = fVar12 + fVar12;
  fVar14 = auVar13._4_4_;
  auVar17._4_4_ = fVar14 + fVar14;
  auVar17._8_4_ = auVar13._8_4_ + auVar13._8_4_;
  fVar15 = auVar13._12_4_;
  auVar17._12_4_ = fVar15 + fVar15;
  auVar13 = NEON_ext(auVar13,auVar13,8,1);
  auVar18 = NEON_ext(auVar17,auVar17,8,1);
  fVar11 = auVar13._0_4_ * auVar18._0_4_;
  fVar16 = (float)uVar23;
  param_1[0xd] = (ulong)(uint)(auVar17._8_4_ * fVar12 - auVar17._4_4_ * fVar15);
  param_1[0xc] = CONCAT44(auVar17._4_4_ * fVar12 + auVar17._8_4_ * fVar15,
                          fVar16 - (auVar17._4_4_ * fVar14 + fVar11));
  param_1[0xf] = (ulong)(uint)(auVar17._8_4_ * fVar14 + auVar17._0_4_ * fVar15);
  param_1[0xe] = CONCAT44(fVar16 - (auVar17._0_4_ * fVar12 + fVar11),
                          auVar17._4_4_ * fVar12 - auVar17._8_4_ * fVar15);
  param_1[0x11] = (ulong)(uint)(fVar16 - (auVar17._0_4_ * fVar12 + auVar17._4_4_ * fVar14));
  param_1[0x10] =
       CONCAT44(auVar17._8_4_ * fVar14 - auVar17._0_4_ * fVar15,
                auVar17._8_4_ * fVar12 + auVar17._4_4_ * fVar15);
  uVar23 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x28);
  param_1[0x12] = uVar23;
  uVar23 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x19] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x18] = uVar23;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)((long)param_1 + 0x144) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((long)param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0xa8);
  fVar12 = cosf(*(float *)(param_2 + 0xac));
  *(float *)(param_1 + 0x23) = fVar12;
  *(undefined4 *)((long)param_1 + 0x15c) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined1 *)((long)param_1 + 0x164) = *(undefined1 *)(param_2 + 0xb8);
  fVar12 = *(float *)(param_2 + 0x60);
  fVar11 = *(float *)(param_2 + 100);
  fVar14 = *(float *)(param_2 + 0x68);
  fVar15 = *(float *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  fVar16 = fVar12 * fVar12 + fVar11 * fVar11 + fVar14 * fVar14;
  fVar19 = fVar12 * fVar12 + fVar11 * fVar11 + fVar14 * fVar14;
  uVar23 = CONCAT44(fVar19,fVar16);
  uVar21 = NEON_frsqrte(uVar23,4);
  fVar20 = (float)uVar21;
  fVar22 = (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frsqrts(uVar23,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
  fVar20 = fVar20 * (float)uVar21;
  fVar22 = fVar22 * (float)((ulong)uVar21 >> 0x20);
  iVar4 = -(uint)(fVar16 <= 0.0);
  iVar5 = -(uint)(fVar19 <= 0.0);
  uVar23 = NEON_frsqrts(uVar23,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
  fVar20 = (float)uVar23 * fVar20;
  fVar22 = (float)((ulong)uVar23 >> 0x20) * fVar22;
  fVar16 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar4)));
  fVar20 = (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                            CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                     CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                              CONCAT14(SUB41(fVar22,0) & ~(byte)iVar5,fVar16)))) >>
                  0x20);
  auVar13._0_8_ = CONCAT44(fVar11 * fVar20,fVar12 * fVar16);
  auVar13._8_4_ = fVar14 * fVar16;
  auVar13._12_4_ = fVar15 * fVar20;
  param_1[0x27] = auVar13._8_8_;
  param_1[0x26] = auVar13._0_8_;
  *(undefined1 *)((long)param_1 + 0x11c) = *(undefined1 *)(param_2 + 0xba);
  FUN_030ec708(param_1,*(undefined8 *)(param_2 + 0x70));
  if (*(char *)(param_2 + 0xb9) != '\0') {
    local_ca = 0xff;
    local_d4 = 0;
    local_cc = 0;
    local_b8 = 0;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0;
    local_a0 = DAT_03aae460;
    uStack_98 = DAT_03aae468;
    local_70 = 0xbf800000;
    local_58 = 0xffff;
    local_54 = 0x7fffffff00ffffff;
    local_d8 = 0x20;
    local_c8 = 0;
    uStack_c0 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_d0 = *(undefined4 *)(param_1 + 8);
    local_e0 = param_1[5];
    if ((local_e0 != 0) && (*(long *)(local_e0 + 8) != 0)) {
      plVar9 = (long *)(local_e0 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_a8 = SUB168(*(undefined1 (*) [16])(param_1 + 0x12),8);
    local_b0 = SUB168(*(undefined1 (*) [16])(param_1 + 0x12),0);
    FUN_032cb060(&local_a0,param_1 + 0xc);
    uVar7 = local_c8;
    puVar6 = PTR_PTR_0434a080;
    local_b8 = 1;
    if ((char *)(local_c8 & 0xfffffffffffffffe) != "hknpCharacterProxy") {
      puVar8 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,0x23,0);
      *puVar8 = puVar6;
      *(undefined4 *)(puVar8 + 1) = 0x13;
      uVar23 = s_hknpCharacterProxy_038c64b5._8_8_;
      puVar8[2] = s_hknpCharacterProxy_038c64b5._0_8_;
      puVar8[3] = uVar23;
      *(undefined4 *)((long)puVar8 + 0x1f) = 0x79786f;
      local_c8 = (ulong)(puVar8 + 2) | 1;
      if ((uVar7 & 1) != 0) {
        lVar3 = tpidr_el0;
        lVar10 = *(long *)(lVar3 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar10;
        }
        plVar9 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        *(undefined8 *)(uVar7 - 0x11) = 0;
        (**(code **)(*plVar9 + 0x18))
                  (plVar9,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
      }
    }
    uVar23 = (**(code **)(*(long *)param_1[10] + 0x60))
                       ((long *)param_1[10],&local_e0,0xffffffffffffffff);
    param_1[7] = uVar23;
    (**(code **)(*(long *)param_1[10] + 0x70))((long *)param_1[10],uVar23,1,0);
    local_e8 = param_1;
    (**(code **)(*(long *)param_1[10] + 0x168))((long *)param_1[10],param_1[7],0xf001,&local_e8,8);
    FUN_02fff010(&local_e0);
  }
                    /* WARNING: Could not recover jumptable at 0x030ec648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[10] + 0x270))((long *)param_1[10],param_1,0,FUN_030f0c18);
  return;
}


