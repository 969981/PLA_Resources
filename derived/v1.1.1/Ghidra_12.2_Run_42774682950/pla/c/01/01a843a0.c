/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a843a0; name: FUN_01a843a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a843a0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  uint uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  float fVar33;
  undefined1 auVar25 [16];
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar37;
  undefined1 auVar32 [16];
  undefined8 uVar38;
  float fVar46;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar47;
  float fVar49;
  undefined1 auVar44 [16];
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  float fVar65;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  long lVar72;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  float local_50;
  long *local_38;
  
  local_90 = param_1._0_4_;
  uVar13 = (**(code **)(*param_3 + 0x1b0))();
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar15 = param_3[0xb8];
  if (*(char *)(lVar15 + 0xd4) == '\0') {
    return;
  }
  if (param_2 < 1.1920929e-07) {
LAB_01a8478c:
    FUN_009c69bc(&local_60,param_3);
    lVar72 = local_60[0x19];
    lVar15 = local_60[0x18];
    fStack_74 = (float)((ulong)lVar72 >> 0x20);
    if (local_60 != (long *)0x0) {
      lVar17 = local_60[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar21 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    fVar19 = (float)CONCAT13((byte)((ulong)lVar15 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12((byte)((ulong)lVar15 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11((byte)((ulong)lVar15 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               (byte)lVar15 & (byte)_DAT_038897c0)));
    auVar22._0_8_ =
         CONCAT17((byte)((ulong)lVar15 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                  CONCAT16((byte)((ulong)lVar15 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                           CONCAT15((byte)((ulong)lVar15 >> 0x28) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x28),
                                    CONCAT14((byte)((ulong)lVar15 >> 0x20) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x20),fVar19))));
    auVar22[8] = (byte)lVar72 & (byte)_UNK_038897c8;
    auVar22[9] = (byte)((ulong)lVar72 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    auVar22[10] = (byte)((ulong)lVar72 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar22[0xb] = (byte)((ulong)lVar72 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar27[0xc] = (byte)((ulong)lVar72 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar27._0_12_ = auVar22;
    auVar27[0xd] = (byte)((ulong)lVar72 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar27[0xe] = (byte)((ulong)lVar72 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar27[0xf] = (byte)((ulong)lVar72 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    uVar38 = NEON_ext(auVar22._0_8_,auVar22._0_8_,4,1);
    uVar50 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a6f0);
    uVar56 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a5e0);
    uVar66 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a6d8);
    fVar20 = (float)uVar38 * (float)uVar38;
    fVar33 = (float)((ulong)uVar38 >> 0x20);
    fVar33 = fVar33 * fVar33;
    fVar45 = (float)uVar50;
    fVar47 = (float)((ulong)uVar50 >> 0x20);
    fVar46 = (float)uVar56 * (float)uVar56;
    fVar48 = (float)((ulong)uVar56 >> 0x20);
    fVar48 = fVar48 * fVar48;
    fVar49 = (float)uVar66;
    fVar65 = (float)((ulong)uVar66 >> 0x20);
    fVar67 = (float)_DAT_03888fc0 - (fVar20 + fVar20 + fVar46 + fVar46);
    fVar68 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar33 + fVar33 + fVar48 + fVar48);
    fVar69 = (float)_UNK_03888fc8 -
             (fVar45 * fVar45 + fVar45 * fVar45 + fVar49 * fVar49 + fVar49 * fVar49);
    fVar70 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
             (fVar47 * fVar47 + fVar47 * fVar47 + fVar65 * fVar65 + fVar65 * fVar65);
    uVar38 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a880);
    fVar19 = (float)uVar38 * fVar19;
    fVar64 = (float)((ulong)uVar38 >> 0x20) * (float)((ulong)auVar22._0_8_ >> 0x20);
    fVar45 = fVar45 * auVar22._8_4_;
    fVar47 = fVar47 * auVar27._12_4_;
    uVar38 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
    fVar19 = fVar19 + fVar19;
    fVar64 = fVar64 + fVar64;
    fVar45 = fVar45 + fVar45;
    fVar47 = fVar47 + fVar47;
    fVar20 = (float)uVar38 * fStack_74;
    fVar33 = (float)((ulong)uVar38 >> 0x20) * fStack_74;
    fVar20 = fVar20 + fVar20;
    fVar33 = fVar33 + fVar33;
    fVar46 = fVar49 * fStack_74 + fVar49 * fStack_74;
    fVar48 = fVar65 * fStack_74 + fVar65 * fStack_74;
    auVar54._0_4_ = fVar19 + fVar20;
    auVar54._4_4_ = fVar64 + fVar33;
    auVar54._8_4_ = fVar45 + fVar46;
    auVar54._12_4_ = fVar47 + fVar48;
    auVar58._0_4_ = fVar19 - fVar20;
    auVar58._4_4_ = fVar64 - fVar33;
    auVar58._8_4_ = fVar45 - fVar46;
    auVar58._12_4_ = fVar47 - fVar48;
    uVar56 = a64_TBL(ZEXT816(0),auVar54,auVar58,DAT_0388a758);
    uVar38 = a64_TBL(ZEXT816(0),auVar54,auVar58,DAT_0388a720);
    lVar15 = param_3[0xb8];
    auVar39._4_4_ = fVar68;
    auVar39._0_4_ = fVar67;
    auVar39._8_4_ = fVar69;
    auVar39._12_4_ = fVar70;
    auVar11._8_8_ = uVar38;
    auVar11._0_8_ = uVar56;
    uVar50 = a64_TBL(ZEXT816(0),auVar39,auVar11,DAT_0388a668);
    auVar8._4_4_ = fVar68;
    auVar8._0_4_ = fVar67;
    auVar8._8_4_ = fVar69;
    auVar8._12_4_ = fVar70;
    auVar12._8_8_ = uVar38;
    auVar12._0_8_ = uVar56;
    uVar38 = a64_TBL(ZEXT816(0),auVar8,auVar12,DAT_0388a5a8);
    fVar48 = (float)uVar50;
    fVar19 = (float)((ulong)uVar50 >> 0x20);
    fVar45 = (float)uVar38;
    fVar20 = (float)((ulong)uVar38 >> 0x20);
    fVar46 = fVar45 * fVar45 + fVar48 * fVar48;
    fVar64 = fVar20 * fVar20 + fVar19 * fVar19;
    fVar33 = fVar46 + fVar64;
    fVar46 = fVar46 + fVar64;
    auVar28._8_8_ = CONCAT44(fVar46,fVar33);
    auVar28._0_8_ = CONCAT44(fVar46,fVar33);
    auVar40 = NEON_frsqrte(auVar28,4);
    auVar59._0_4_ = auVar40._0_4_ * fVar33;
    auVar59._4_4_ = auVar40._4_4_ * fVar46;
    auVar59._8_4_ = auVar40._8_4_ * fVar33;
    auVar59._12_4_ = auVar40._12_4_ * fVar46;
    auVar39 = NEON_frsqrts(auVar40,auVar59,4);
    auVar43._0_4_ = auVar40._0_4_ * auVar39._0_4_;
    auVar43._4_4_ = auVar40._4_4_ * auVar39._4_4_;
    auVar43._8_4_ = auVar40._8_4_ * auVar39._8_4_;
    auVar43._12_4_ = auVar40._12_4_ * auVar39._12_4_;
    auVar60._0_4_ = fVar33 * auVar43._0_4_;
    auVar60._4_4_ = fVar46 * auVar43._4_4_;
    auVar60._8_4_ = fVar33 * auVar43._8_4_;
    auVar60._12_4_ = fVar46 * auVar43._12_4_;
    iVar21 = -(uint)(fVar33 == 0.0);
    iVar34 = -(uint)(fVar46 == 0.0);
    iVar35 = -(uint)(fVar33 == 0.0);
    iVar36 = -(uint)(fVar46 == 0.0);
    auVar40 = NEON_frsqrts(auVar43,auVar60,4);
    fVar48 = fVar48 * auVar43._0_4_ * auVar40._0_4_;
    fVar19 = fVar19 * auVar43._4_4_ * auVar40._4_4_;
    fVar45 = fVar45 * auVar43._8_4_ * auVar40._8_4_;
    fVar20 = fVar20 * auVar43._12_4_ * auVar40._12_4_;
    auVar42[0] = SUB41(fVar48,0) & ~(byte)iVar21;
    auVar42[1] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar42[2] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar42[3] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
    auVar42[4] = SUB41(fVar19,0) & ~(byte)iVar34;
    auVar42[5] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar42[6] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar42[7] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    auVar42[8] = SUB41(fVar45,0) & ~(byte)iVar35;
    auVar42[9] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar35 >> 8);
    auVar42[10] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
    auVar42[0xb] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
    auVar42[0xc] = SUB41(fVar20,0) & ~(byte)iVar36;
    auVar42[0xd] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar36 >> 8);
    auVar42[0xe] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
    auVar42[0xf] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
    param_2 = 0.0;
  }
  else {
    auVar40._0_4_ = local_90 * local_90;
    auVar40._4_4_ = 0;
    fVar46 = param_1._8_4_;
    auVar40._8_4_ = fVar46 * fVar46;
    fVar48 = param_1._12_4_;
    auVar40._12_4_ = fVar48 * fVar48;
    auVar39 = NEON_ext(auVar40,auVar40,8,1);
    fVar20 = auVar39._0_4_ + auVar40._0_4_;
    fVar33 = auVar39._4_4_ + 0.0;
    fVar19 = fVar20 + fVar33;
    fVar20 = fVar20 + fVar33;
    if (fVar19 == 0.0) goto LAB_01a8478c;
    auVar25._8_8_ = CONCAT44(fVar20,fVar19);
    auVar25._0_8_ = CONCAT44(fVar20,fVar19);
    auVar40 = NEON_frsqrte(auVar25,4);
    auVar51._0_4_ = auVar40._0_4_ * fVar19;
    auVar51._4_4_ = auVar40._4_4_ * fVar20;
    auVar51._8_4_ = auVar40._8_4_ * fVar19;
    auVar51._12_4_ = auVar40._12_4_ * fVar20;
    auVar39 = NEON_frsqrts(auVar40,auVar51,4);
    auVar41._0_4_ = auVar40._0_4_ * auVar39._0_4_;
    auVar41._4_4_ = auVar40._4_4_ * auVar39._4_4_;
    auVar41._8_4_ = auVar40._8_4_ * auVar39._8_4_;
    auVar41._12_4_ = auVar40._12_4_ * auVar39._12_4_;
    auVar52._0_4_ = fVar19 * auVar41._0_4_;
    auVar52._4_4_ = fVar20 * auVar41._4_4_;
    auVar52._8_4_ = fVar19 * auVar41._8_4_;
    auVar52._12_4_ = fVar20 * auVar41._12_4_;
    iVar21 = -(uint)(fVar19 == 0.0);
    iVar34 = -(uint)(fVar20 == 0.0);
    iVar35 = -(uint)(fVar19 == 0.0);
    iVar36 = -(uint)(fVar20 == 0.0);
    auVar40 = NEON_frsqrts(auVar41,auVar52,4);
    local_90 = local_90 * auVar41._0_4_ * auVar40._0_4_;
    fVar19 = auVar41._4_4_ * auVar40._4_4_ * 0.0;
    fVar46 = fVar46 * auVar41._8_4_ * auVar40._8_4_;
    fVar48 = fVar48 * auVar41._12_4_ * auVar40._12_4_;
    auVar42[0] = SUB41(local_90,0) & ~(byte)iVar21;
    auVar42[1] = (byte)((uint)local_90 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar42[2] = (byte)((uint)local_90 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar42[3] = (byte)((uint)local_90 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
    auVar42[4] = SUB41(fVar19,0) & ~(byte)iVar34;
    auVar42[5] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar42[6] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar42[7] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    auVar42[8] = SUB41(fVar46,0) & ~(byte)iVar35;
    auVar42[9] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar35 >> 8);
    auVar42[10] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
    auVar42[0xb] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
    auVar42[0xc] = SUB41(fVar48,0) & ~(byte)iVar36;
    auVar42[0xd] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar36 >> 8);
    auVar42[0xe] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
    auVar42[0xf] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  }
  fVar19 = *(float *)(lVar15 + 0xd8);
  local_50 = param_2 * fVar19;
  uStack_58 = auVar42._8_8_;
  fStack_98 = auVar42._8_4_;
  fStack_94 = auVar42._12_4_;
  local_60 = auVar42._0_8_;
  local_a0 = auVar42._0_4_;
  fStack_9c = auVar42._4_4_;
  FUN_0180fadc(param_3 + 0x12a,&local_60);
  lVar15 = param_3[0xb8];
  iVar21 = *(int *)(lVar15 + 0x68);
  if (param_2 < *(float *)(lVar15 + 0x70)) {
    uVar14 = 0;
  }
  else if (param_2 < *(float *)(lVar15 + 0x74)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 2;
    if (*(float *)(lVar15 + 0x78) <= param_2) {
      uVar14 = 3;
    }
  }
  uVar13 = (**(code **)(*param_3 + 0x238))(param_3);
  uVar18 = uVar14;
  if (((uVar13 & 1) != 0) &&
     (uVar18 = *(uint *)((long)param_3 + 0x9d4), uVar14 <= *(uint *)((long)param_3 + 0x9d4))) {
    uVar18 = uVar14;
  }
  *(uint *)(param_3[0xb8] + 0x68) = uVar18;
  uVar13 = (**(code **)(*param_3 + 0x1e8))(param_3);
  if ((uVar13 & 1) != 0) {
    uVar13 = (**(code **)(*param_3 + 0x1e0))(param_3);
    if (((uVar13 & 1) == 0) || (lVar15 = param_3[0xb8], *(int *)(lVar15 + 0x68) == 0)) {
      (**(code **)(*param_3 + 0x1f0))(param_3,0);
    }
    else {
      param_2 = *(float *)(lVar15 + 0x78);
      if (param_2 < *(float *)(lVar15 + 0x70)) {
        uVar14 = 0;
      }
      else if (param_2 < *(float *)(lVar15 + 0x74)) {
        uVar14 = 1;
      }
      else {
        uVar14 = 3;
      }
      uVar13 = (**(code **)(*param_3 + 0x238))(param_3);
      uVar18 = uVar14;
      if (((uVar13 & 1) != 0) &&
         (uVar18 = *(uint *)((long)param_3 + 0x9d4), uVar14 <= *(uint *)((long)param_3 + 0x9d4))) {
        uVar18 = uVar14;
      }
      *(uint *)(param_3[0xb8] + 0x68) = uVar18;
    }
  }
  if ((iVar21 == 0) && (*(int *)(param_3[0xb8] + 0x68) != 0)) {
    if (param_3[199] == 0) {
      local_60 = (long *)0x0;
    }
    else {
      FUN_0182b7ac(&local_60);
      if (local_60 != (long *)0x0) {
        if ((char)local_60[0x3e] != '\0') {
          *(undefined1 *)(local_60 + 0x3e) = 0;
        }
        *(undefined4 *)(local_60 + 0x44) = 0;
        *(int *)((long)local_60 + 0x21c) = (int)local_60[0x43];
        FUN_01816edc(auVar42);
        if (local_60 != (long *)0x0) {
          lVar15 = local_60[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar34 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar34 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
      }
    }
  }
  if (*(char *)(param_3[0xb8] + 0xdc) == '\0') {
    auVar26._0_4_ = local_a0 * fVar19 * param_2;
    auVar26._4_4_ = fStack_9c * fVar19 * param_2;
    auVar26._8_4_ = fStack_98 * fVar19 * param_2;
    auVar26._12_4_ = fStack_94 * fVar19 * param_2;
  }
  else {
    FUN_009c69bc(&local_60,param_3);
    lVar72 = local_60[0x19];
    lVar15 = local_60[0x18];
    if (local_60 != (long *)0x0) {
      lVar17 = local_60[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar34 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar34 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    fVar20 = (float)CONCAT13((byte)((ulong)lVar15 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12((byte)((ulong)lVar15 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11((byte)((ulong)lVar15 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               (byte)lVar15 & (byte)_DAT_038897c0)));
    auVar23._0_8_ =
         CONCAT17((byte)((ulong)lVar15 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                  CONCAT16((byte)((ulong)lVar15 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                           CONCAT15((byte)((ulong)lVar15 >> 0x28) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x28),
                                    CONCAT14((byte)((ulong)lVar15 >> 0x20) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x20),fVar20))));
    auVar23[8] = (byte)lVar72 & (byte)_UNK_038897c8;
    auVar23[9] = (byte)((ulong)lVar72 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    auVar23[10] = (byte)((ulong)lVar72 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar23[0xb] = (byte)((ulong)lVar72 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar30[0xc] = (byte)((ulong)lVar72 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar30._0_12_ = auVar23;
    auVar30[0xd] = (byte)((ulong)lVar72 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar30[0xe] = (byte)((ulong)lVar72 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar30[0xf] = (byte)((ulong)lVar72 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    uVar38 = NEON_ext(auVar23._0_8_,auVar23._0_8_,4,1);
    uVar50 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6f0);
    uVar56 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a5e0);
    uVar66 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6d8);
    fVar33 = (float)uVar38 * (float)uVar38;
    fVar46 = (float)((ulong)uVar38 >> 0x20);
    fVar46 = fVar46 * fVar46;
    fVar47 = (float)uVar50;
    fVar49 = (float)((ulong)uVar50 >> 0x20);
    fVar48 = (float)uVar56 * (float)uVar56;
    fVar64 = (float)((ulong)uVar56 >> 0x20);
    fVar64 = fVar64 * fVar64;
    fVar65 = (float)uVar66;
    fVar67 = (float)((ulong)uVar66 >> 0x20);
    fVar68 = (float)_DAT_03888fc0 - (fVar33 + fVar33 + fVar48 + fVar48);
    fVar69 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar46 + fVar46 + fVar64 + fVar64);
    fVar70 = (float)_UNK_03888fc8 -
             (fVar47 * fVar47 + fVar47 * fVar47 + fVar65 * fVar65 + fVar65 * fVar65);
    fVar71 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
             (fVar49 * fVar49 + fVar49 * fVar49 + fVar67 * fVar67 + fVar67 * fVar67);
    uVar38 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a880);
    fVar20 = (float)uVar38 * fVar20;
    fVar45 = (float)((ulong)uVar38 >> 0x20) * (float)((ulong)auVar23._0_8_ >> 0x20);
    fVar47 = fVar47 * auVar23._8_4_;
    fVar49 = fVar49 * auVar30._12_4_;
    uVar38 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
    fVar20 = fVar20 + fVar20;
    fVar45 = fVar45 + fVar45;
    fVar47 = fVar47 + fVar47;
    fVar49 = fVar49 + fVar49;
    fVar64 = (float)((ulong)lVar72 >> 0x20);
    fVar33 = (float)uVar38 * fVar64;
    fVar46 = (float)((ulong)uVar38 >> 0x20) * fVar64;
    fVar33 = fVar33 + fVar33;
    fVar46 = fVar46 + fVar46;
    fVar48 = fVar65 * fVar64 + fVar65 * fVar64;
    fVar64 = fVar67 * fVar64 + fVar67 * fVar64;
    auVar55._0_4_ = fVar20 + fVar33;
    auVar55._4_4_ = fVar45 + fVar46;
    auVar55._8_4_ = fVar47 + fVar48;
    auVar55._12_4_ = fVar49 + fVar64;
    auVar61._0_4_ = fVar20 - fVar33;
    auVar61._4_4_ = fVar45 - fVar46;
    auVar61._8_4_ = fVar47 - fVar48;
    auVar61._12_4_ = fVar49 - fVar64;
    uVar56 = a64_TBL(ZEXT816(0),auVar55,auVar61,DAT_0388a758);
    uVar38 = a64_TBL(ZEXT816(0),auVar55,auVar61,DAT_0388a720);
    auVar6._4_4_ = fVar69;
    auVar6._0_4_ = fVar68;
    auVar6._8_4_ = fVar70;
    auVar6._12_4_ = fVar71;
    auVar9._8_8_ = uVar38;
    auVar9._0_8_ = uVar56;
    uVar50 = a64_TBL(ZEXT816(0),auVar6,auVar9,DAT_0388a668);
    auVar7._4_4_ = fVar69;
    auVar7._0_4_ = fVar68;
    auVar7._8_4_ = fVar70;
    auVar7._12_4_ = fVar71;
    auVar10._8_8_ = uVar38;
    auVar10._0_8_ = uVar56;
    uVar38 = a64_TBL(ZEXT816(0),auVar7,auVar10,DAT_0388a5a8);
    fVar64 = (float)uVar50;
    fVar20 = (float)((ulong)uVar50 >> 0x20);
    fVar47 = (float)uVar38;
    fVar33 = (float)((ulong)uVar38 >> 0x20);
    fVar48 = fVar47 * fVar47 + fVar64 * fVar64;
    fVar45 = fVar33 * fVar33 + fVar20 * fVar20;
    fVar46 = fVar48 + fVar45;
    fVar48 = fVar48 + fVar45;
    auVar31._8_8_ = CONCAT44(fVar48,fVar46);
    auVar31._0_8_ = CONCAT44(fVar48,fVar46);
    auVar40 = NEON_frsqrte(auVar31,4);
    auVar62._0_4_ = auVar40._0_4_ * fVar46;
    auVar62._4_4_ = auVar40._4_4_ * fVar48;
    auVar62._8_4_ = auVar40._8_4_ * fVar46;
    auVar62._12_4_ = auVar40._12_4_ * fVar48;
    auVar39 = NEON_frsqrts(auVar40,auVar62,4);
    auVar44._0_4_ = auVar40._0_4_ * auVar39._0_4_;
    auVar44._4_4_ = auVar40._4_4_ * auVar39._4_4_;
    auVar44._8_4_ = auVar40._8_4_ * auVar39._8_4_;
    auVar44._12_4_ = auVar40._12_4_ * auVar39._12_4_;
    auVar63._0_4_ = fVar46 * auVar44._0_4_;
    auVar63._4_4_ = fVar48 * auVar44._4_4_;
    auVar63._8_4_ = fVar46 * auVar44._8_4_;
    auVar63._12_4_ = fVar48 * auVar44._12_4_;
    iVar34 = -(uint)(fVar46 == 0.0);
    iVar35 = -(uint)(fVar48 == 0.0);
    iVar36 = -(uint)(fVar46 == 0.0);
    iVar37 = -(uint)(fVar48 == 0.0);
    auVar40 = NEON_frsqrts(auVar44,auVar63,4);
    fVar64 = fVar64 * auVar44._0_4_ * auVar40._0_4_;
    fVar20 = fVar20 * auVar44._4_4_ * auVar40._4_4_;
    fVar47 = fVar47 * auVar44._8_4_ * auVar40._8_4_;
    fVar33 = fVar33 * auVar44._12_4_ * auVar40._12_4_;
    fVar46 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                             CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                      CONCAT11((byte)((uint)fVar64 >> 8) &
                                               ~(byte)((uint)iVar34 >> 8),
                                               SUB41(fVar64,0) & ~(byte)iVar34)));
    auVar24._0_8_ =
         CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                  CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                           CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar35,fVar46))));
    auVar24[8] = SUB41(fVar47,0) & ~(byte)iVar36;
    auVar24[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar36 >> 8);
    auVar24[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
    auVar24[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
    auVar32[0xc] = SUB41(fVar33,0) & ~(byte)iVar37;
    auVar32._0_12_ = auVar24;
    auVar32[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar37 >> 8);
    auVar32[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
    auVar32[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
    if (param_3[0xc5] == 0) {
      local_60 = (long *)0x0;
    }
    else {
      FUN_009b8474(&local_60);
      if ((local_60 != (long *)0x0) && (FUN_01827688(auVar42), local_60 != (long *)0x0)) {
        lVar15 = local_60[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar34 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar34 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
        }
      }
    }
    auVar26._0_4_ = fVar46 * fVar19 * param_2;
    auVar26._4_4_ = (float)((ulong)auVar24._0_8_ >> 0x20) * fVar19 * param_2;
    auVar26._8_4_ = auVar24._8_4_ * fVar19 * param_2;
    auVar26._12_4_ = auVar32._12_4_ * fVar19 * param_2;
  }
  plVar1 = param_3 + 0x15a;
  fStack_78 = auVar26._8_4_;
  fStack_74 = auVar26._12_4_;
  local_80 = auVar26._0_4_;
  fStack_7c = auVar26._4_4_;
  FUN_01839c8c(&local_38,plVar1);
  fVar19 = 0.0;
  if (local_38 != (long *)0x0) {
    FUN_01839c8c(&local_60,plVar1);
    if (local_60 == (long *)0x0) {
LAB_01a84b0c:
      fVar19 = 0.0;
    }
    else {
      lVar15 = local_60[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      iVar34 = *(int *)((long)local_60 + 0x7c);
      do {
        iVar35 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar35 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar35 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
      if (iVar34 != 2) goto LAB_01a84b0c;
      if (local_38[0x1a] == 0) {
        fVar19 = 0.0;
      }
      else {
        auVar40 = *(undefined1 (*) [16])(local_38[0x1a] + 0xc0);
        NEON_ext(auVar40,auVar40,8,1);
        fVar19 = auVar40._0_4_;
      }
    }
    if (local_38 != (long *)0x0) {
      lVar15 = local_38[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar34 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar34 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  FUN_01839c8c(&local_38,plVar1);
  auVar57 = ZEXT816(0);
  if (local_38 != (long *)0x0) {
    FUN_01839c8c(&local_60,plVar1);
    if (local_60 == (long *)0x0) {
LAB_01a84b38:
      auVar57 = ZEXT816(0);
    }
    else {
      lVar15 = local_60[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      iVar34 = *(int *)((long)local_60 + 0x7c);
      do {
        iVar35 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar35 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar35 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
      if (iVar34 != 2) goto LAB_01a84b38;
      if (local_38[0x1a] == 0) {
        auVar57 = ZEXT816(0);
      }
      else {
        auVar40 = *(undefined1 (*) [16])(local_38[0x1a] + 0xc0);
        auVar39 = NEON_ext(auVar40,auVar40,8,1);
        auVar57._0_8_ = auVar40._0_8_;
        auVar57._8_4_ = auVar39._0_4_;
        auVar57._12_4_ = 0;
      }
    }
    if (local_38 != (long *)0x0) {
      lVar15 = local_38[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar34 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar34 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar34 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  fVar20 = *(float *)(param_3[0xb8] + 0xe0);
  if (fVar20 <= 1.1920929e-07) {
LAB_01a846a4:
    param_3[0xdf] = auVar26._8_8_;
    param_3[0xde] = auVar26._0_8_;
    if ((char)param_3[0xdc] == '\0') {
      *(undefined1 *)(param_3 + 0xdc) = 1;
    }
  }
  else {
    local_80 = local_80 + fVar19;
    fStack_7c = fStack_7c + 0.0;
    fStack_78 = fStack_78 + auVar57._8_4_;
    fStack_74 = fStack_74 + 0.0;
    auVar53._0_4_ = local_80 * local_80;
    auVar53._4_4_ = fStack_7c * fStack_7c;
    auVar53._8_4_ = fStack_78 * fStack_78;
    auVar53._12_4_ = fStack_74 * fStack_74;
    auVar40 = NEON_ext(auVar53,auVar53,8,1);
    fVar19 = SQRT(auVar40._0_4_ + auVar53._0_4_ + auVar40._4_4_ + auVar53._4_4_);
    if (fVar19 <= fVar20) goto LAB_01a846a4;
    fVar20 = fVar20 / fVar19;
    FUN_01839c8c(&local_38,plVar1);
    fVar19 = 0.0;
    if (local_38 != (long *)0x0) {
      FUN_01839c8c(&local_60,plVar1);
      if (local_60 == (long *)0x0) {
LAB_01a84d6c:
        fVar19 = 0.0;
      }
      else {
        lVar15 = local_60[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        iVar34 = *(int *)((long)local_60 + 0x7c);
        do {
          iVar35 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar35 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar35 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
        }
        if (iVar34 != 2) goto LAB_01a84d6c;
        if (local_38[0x1a] == 0) {
          fVar19 = 0.0;
        }
        else {
          auVar40 = *(undefined1 (*) [16])(local_38[0x1a] + 0xc0);
          NEON_ext(auVar40,auVar40,8,1);
          fVar19 = auVar40._4_4_;
        }
      }
      if (local_38 != (long *)0x0) {
        lVar15 = local_38[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar34 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar34 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
    auVar29._0_8_ =
         CONCAT44(fStack_7c * fVar20 +
                  fVar19 + DAT_0423a0f8 * *(float *)(param_3 + 0x17d) * -0.033333335,
                  local_80 * fVar20 + 0.0);
    auVar29._8_4_ = fStack_78 * fVar20 + 0.0;
    auVar29._12_4_ = fStack_74 * fVar20 + 0.0;
    param_3[0xd7] = auVar29._8_8_;
    param_3[0xd6] = auVar29._0_8_;
    if ((char)param_3[0xd4] == '\0') {
      *(undefined1 *)(param_3 + 0xd4) = 1;
    }
  }
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_01a2bf84(&local_60,param_3 + 0xb9);
  FUN_009c685c(&local_68,&local_60);
  plVar1 = local_60;
  if (local_60 != (long *)0x0) {
    plVar3 = local_60 + 1;
    do {
      iVar34 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar34;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar34 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(PTR_DAT_04379498), iVar34 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_38 = (long *)*plVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_38);
    }
  }
  if (local_68 == (long *)0x0) {
    return;
  }
  if ((*(char *)(param_3[0xb8] + 0x98) == '\0') ||
     (iVar34 = *(int *)(param_3[0xb8] + 0x68), iVar21 == iVar34)) {
switchD_01a849a0_default:
  }
  else {
    switch(iVar34) {
    case 0:
      pcVar16 = *(code **)(*local_68 + 0x150);
      break;
    case 1:
      pcVar16 = *(code **)(*local_68 + 0x108);
      break;
    case 2:
      pcVar16 = *(code **)(*local_68 + 0x120);
      break;
    case 3:
      pcVar16 = *(code **)(*local_68 + 0x138);
      break;
    default:
      goto switchD_01a849a0_default;
    }
    (*pcVar16)();
  }
  if (local_68 != (long *)0x0) {
    lVar15 = local_68[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar21 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


