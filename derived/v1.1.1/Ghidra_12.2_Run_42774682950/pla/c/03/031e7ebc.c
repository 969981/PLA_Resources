/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e7ebc; name: FUN_031e7ebc
 */


void FUN_031e7ebc(long param_1,int param_2,char param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  undefined **ppuVar13;
  long lVar14;
  code *pcVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined8 *puVar22;
  int *piVar23;
  long lVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  long local_168;
  undefined *local_160;
  undefined *puStack_158;
  int local_150;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined4 *puStack_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar20 = *(long *)(param_1 + 0xb0);
  uVar11 = *param_4;
  piVar10 = (int *)(lVar20 + (long)param_2 * 0x60);
  lVar24 = *(long *)(param_1 + 0x90);
  lVar18 = *(long *)(param_1 + 0xa0);
  lVar14 = (long)piVar10[1];
  *(undefined8 *)(piVar10 + 0xe) = param_4[1];
  *(undefined8 *)(piVar10 + 0xc) = uVar11;
  uVar11 = param_4[2];
  *(undefined8 *)(piVar10 + 0x12) = param_4[3];
  *(undefined8 *)(piVar10 + 0x10) = uVar11;
  piVar23 = piVar10 + 2;
  if ((char)*piVar23 == '\0') {
    auVar26._8_4_ = 0x7f7fffee;
    auVar26._0_8_ = 0x7f7fffee7f7fffee;
    auVar26._12_4_ = 0x7f7fffee;
    auVar27._8_4_ = 0xff7fffee;
    auVar27._0_8_ = 0xff7fffeeff7fffee;
    auVar27._12_4_ = 0xff7fffee;
    uStack_98 = auVar26._8_8_;
    local_a0 = 0x7f7fffee7f7fffee;
  }
  else {
    lVar19 = lVar20 + (long)param_2 * 0x60;
    auVar26 = *(undefined1 (*) [16])(lVar19 + 0x10);
    uStack_98 = auVar26._8_8_;
    local_a0 = auVar26._0_8_;
    auVar27 = *(undefined1 (*) [16])(lVar19 + 0x20);
  }
  puVar22 = (undefined8 *)(lVar18 + (long)*piVar10 * 0x60);
  uStack_88 = auVar27._8_8_;
  local_90 = auVar27._0_8_;
  if (param_3 != '\0') {
    FUN_031e8310(param_1,piVar10,param_4,&local_c0);
    auVar7._8_8_ = uStack_98;
    auVar7._0_8_ = local_a0;
    auVar8._8_8_ = uStack_88;
    auVar8._0_8_ = local_90;
    uStack_188 = CONCAT44(uStack_b4,uStack_b8);
    auVar5._8_4_ = uStack_b8;
    auVar5._0_8_ = local_c0;
    auVar5._12_4_ = uStack_b4;
    auVar26 = NEON_fmin(auVar7,auVar5,4);
    local_190 = local_c0;
    uStack_178 = CONCAT44(uStack_a4,uStack_a8);
    auVar6._8_4_ = uStack_a8;
    auVar6._0_8_ = local_b0;
    auVar6._12_4_ = uStack_a4;
    auVar27 = NEON_fmax(auVar8,auVar6,4);
    local_180 = local_b0;
    uStack_98 = auVar26._8_8_;
    local_a0 = auVar26._0_8_;
    uStack_88 = auVar27._8_8_;
    local_90 = auVar27._0_8_;
  }
  if (*(int *)(param_1 + 0x188) < 1) {
    uVar25 = 0x3f800000;
    goto LAB_031e8080;
  }
  local_168 = 0xffffffff;
  local_160 = (undefined *)0x1;
  local_170 = &DAT_042f10e0;
  ppuVar21 = *(undefined ***)(param_1 + 400);
  if (ppuVar21 == (undefined **)0x0) {
    ppuVar13 = &local_160;
    ppuVar21 = &local_170;
LAB_031e7fc0:
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar4) {
        *ppuVar13 = *ppuVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else if (ppuVar21[1] != (undefined *)0x0) {
    ppuVar13 = ppuVar21 + 2;
    goto LAB_031e7fc0;
  }
  if (ppuVar21[1] != (undefined *)0x0) {
    ppuVar13 = ppuVar21 + 2;
    do {
      puVar16 = *ppuVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar4) {
        *ppuVar13 = puVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar16 + -1 == (undefined *)0x0) {
      (**(code **)(*ppuVar21 + 0x18))(ppuVar21);
    }
  }
  uVar11 = *puVar22;
  if ((char)*piVar23 == '\0') {
    pcVar15 = *(code **)(*ppuVar21 + 0x20);
LAB_031e806c:
    uVar25 = (*pcVar15)(ppuVar21,uVar11,&local_a0,param_1 + 0x150);
  }
  else {
    if (param_3 == '\0') {
      pcVar15 = *(code **)(*ppuVar21 + 0x28);
      goto LAB_031e806c;
    }
    uVar25 = (**(code **)(*ppuVar21 + 0x30))
                       (ppuVar21,uVar11,&local_a0,param_1 + 0x150,piVar10 + 0xc,param_4);
  }
  auVar26._8_8_ = uStack_98;
  auVar26._0_8_ = local_a0;
  auVar27._8_8_ = uStack_88;
  auVar27._0_8_ = local_90;
LAB_031e8080:
  local_100 = 0;
  local_108 = 0xffffffff;
  local_f8 = 0;
  local_110 = PTR_DAT_04388cf0 + 0x10;
  local_f0 = *puVar22;
  uStack_d8 = auVar26._8_8_;
  local_e0 = auVar26._0_8_;
  uStack_c8 = auVar27._8_8_;
  uStack_d0 = auVar27._0_8_;
  lVar18 = lVar24 + lVar14 * 0xd0;
  lVar19 = *(long *)(lVar18 + 0xb8);
  piVar10 = (int *)(lVar18 + 0xc0);
  iVar12 = *piVar10;
  iVar1 = iVar12 + 1;
  if ((int)(*(uint *)(lVar18 + 0xc4) & 0x3fffffff) <= iVar12) {
    lVar19 = FUN_031ee514(PTR_PTR_0434a080,iVar1);
    *(long *)(lVar18 + 0xb8) = lVar19;
    iVar12 = *piVar10;
  }
  puVar2 = (undefined4 *)(lVar19 + (long)iVar12 * 0x40);
  *piVar10 = iVar1;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 0xe) = 0x8000000000000000;
  *puVar2 = uVar25;
  *(undefined8 *)(puVar2 + 6) = uStack_98;
  *(undefined8 *)(puVar2 + 4) = local_a0;
  *(undefined8 *)(puVar2 + 10) = uStack_88;
  *(undefined8 *)(puVar2 + 8) = local_90;
  lVar18 = tpidr_el0;
  lVar19 = *(long *)(lVar18 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar18 + 0x38d490) = lVar19;
  }
  lVar19 = *(long *)(lVar19 + 0x10);
  if (lVar19 != 0) {
    puVar22 = *(undefined8 **)(lVar19 + 8);
    uVar17 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar17, puVar22 != (undefined8 *)0x0)) {
      *puVar22 = "TtqueryAabb";
      uVar11 = nn::os::GetSystemTick();
      puVar22[1] = uVar11;
    }
  }
  local_170 = &DAT_042f1050;
  local_168 = (ulong)CONCAT61((int6)((ulong)local_168 >> 0x10),param_3) << 8;
  local_160 = *(undefined **)(param_1 + 0xb0);
  puStack_158 = local_160 + (long)*(int *)(param_1 + 0xb8) * 0x60;
  uStack_128 = uStack_178;
  local_130 = local_180;
  local_140 = local_190;
  plVar9 = *(long **)(lVar24 + lVar14 * 0xd0 + 0x10);
  local_150 = param_2;
  local_120 = lVar24 + lVar14 * 0xd0;
  puStack_118 = puVar2;
  (**(code **)(*plVar9 + 0x48))(plVar9,&local_110,&local_170);
  lVar14 = *(long *)(lVar18 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar18 + 0x38d490) = lVar14;
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 != 0) {
    puVar22 = *(undefined8 **)(lVar14 + 8);
    uVar17 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar14 + 0x10)) &&
       (*(ulong *)(lVar14 + 8) = uVar17, puVar22 != (undefined8 *)0x0)) {
      *puVar22 = &DAT_0390f40e;
      uVar11 = nn::os::GetSystemTick();
      puVar22[1] = uVar11;
    }
  }
  lVar20 = lVar20 + (long)param_2 * 0x60;
  *(char *)piVar23 = param_3;
  *(undefined8 *)(lVar20 + 0x18) = uStack_188;
  *(undefined8 *)(lVar20 + 0x10) = local_190;
  *(undefined8 *)(lVar20 + 0x28) = uStack_178;
  *(undefined8 *)(lVar20 + 0x20) = local_180;
  return;
}


