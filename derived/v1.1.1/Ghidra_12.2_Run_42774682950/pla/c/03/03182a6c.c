/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03182a6c; name: FUN_03182a6c
 */


void FUN_03182a6c(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  
  puVar9 = (undefined8 *)(*(long *)*param_1 + (long)param_2 * 0x20);
  uStack_98 = puVar9[1];
  local_88 = puVar9[3];
  local_a0 = *puVar9;
  local_90 = puVar9[2];
  if (*(long *)param_1[1] != 0) {
    FUN_0333e220(*(long *)param_1[1],&local_a0,&local_a0);
  }
  auVar16 = NEON_fmov(0x3f800000,4);
  puVar9 = (undefined8 *)param_1[2];
  puVar9[5] = uStack_98;
  puVar9[4] = local_a0;
  fVar10 = (float)local_90 - (float)local_a0;
  fVar11 = local_90._4_4_ - (float)((ulong)local_a0 >> 0x20);
  fVar12 = (float)local_88 - (float)uStack_98;
  fVar13 = local_88._4_4_ - (float)((ulong)uStack_98 >> 0x20);
  *(float *)(puVar9 + 7) = (float)local_88;
  *(float *)((long)puVar9 + 0x3c) = local_88._4_4_;
  *(float *)(puVar9 + 6) = (float)local_90;
  *(float *)((long)puVar9 + 0x34) = local_90._4_4_;
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar10;
  auVar15._8_4_ = fVar12;
  auVar15._12_4_ = fVar13;
  auVar14._4_4_ = fVar11;
  auVar14._0_4_ = fVar10;
  auVar14._8_4_ = fVar12;
  auVar14._12_4_ = fVar13;
  auVar14 = auVar14 ^ (auVar15 ^ auVar16) & *(undefined1 (*) [16])(puVar9 + 10);
  auVar15 = NEON_ext(auVar14,auVar14,8,1);
  fVar10 = auVar15._0_4_ * auVar14._0_4_ * auVar14._4_4_;
  *(float *)(puVar9 + 2) = fVar10;
  *(float *)(puVar9 + 8) = fVar10;
  uVar3 = FUN_001d5bc8(*puVar9);
  local_50 = 0;
  local_48 = 0x8000000000000000;
  local_38 = 0x40;
  uStack_68 = uStack_98;
  local_70 = local_a0;
  uStack_58 = local_88;
  uStack_60 = local_90;
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x38d490);
  local_80[0] = puVar9;
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (0xff < *(ulong *)(lVar6 + 0x10)) {
    local_40 = *(long *)(lVar6 + 0x18);
    if (local_40 + 0x100U <= *(ulong *)(lVar6 + 0x20)) {
      *(ulong *)(lVar6 + 0x18) = local_40 + 0x100U;
      goto LAB_03182b6c;
    }
  }
  local_40 = FUN_032ce670(lVar6,0x100);
LAB_03182b6c:
  local_48._4_4_ = 0x80000040;
  local_50 = local_40;
  FUN_03182d44(uVar3,&local_50,local_80);
  iVar1 = local_38;
  lVar6 = local_40;
  if (local_40 == local_50) {
    local_48._0_4_ = 0;
  }
  lVar7 = *(long *)(lVar4 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar7;
  }
  lVar4 = *(long *)(lVar7 + 8);
  uVar5 = (ulong)(int)(iVar1 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar4 + 0x10) < uVar5) || (*(long *)(lVar4 + 0x18) != uVar5 + lVar6)) ||
     (*(long *)(lVar4 + 0x28) == lVar6)) {
    FUN_032cedf0(lVar4,lVar6);
  }
  else {
    *(long *)(lVar4 + 0x18) = lVar6;
  }
  uVar2 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (int)uVar2) && (local_50 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_50,4,uVar2 & 0x3fffffff);
  }
  plVar8 = (long *)puVar9[1];
  iVar1 = (int)plVar8[1];
  if (iVar1 == 0) {
    if (0.0 < *(float *)(puVar9 + 2)) {
      FUN_001d4c1c(*puVar9,&local_a0,*(float *)(puVar9 + 2));
    }
  }
  else {
    if ((iVar1 != 1) && (1 < iVar1)) {
      lVar4 = 1;
      do {
        FUN_001d530c(*puVar9,*(undefined4 *)(*plVar8 + lVar4 * 4));
        plVar8 = (long *)puVar9[1];
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)plVar8[1]);
    }
    FUN_001d4ef0(*puVar9,*(undefined4 *)*plVar8,puVar9 + 4);
    FUN_001d4ecc(*puVar9,**(undefined4 **)puVar9[1],*(undefined4 *)(puVar9 + 8));
    *(undefined4 *)(puVar9[1] + 8) = 0;
  }
  return;
}


