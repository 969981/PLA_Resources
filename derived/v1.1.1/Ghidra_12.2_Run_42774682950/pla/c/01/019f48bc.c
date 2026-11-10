/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f48bc; name: FUN_019f48bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f48bc(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],int *param_5,undefined8 *param_6,undefined8 *param_7,
                 undefined8 *param_8,undefined4 param_9)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  long *plVar13;
  float extraout_s0;
  float fVar14;
  float fVar15;
  float extraout_var;
  float fVar16;
  float fVar17;
  float extraout_var_00;
  float fVar18;
  float fVar19;
  float extraout_var_01;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_120 [2];
  undefined **local_110;
  undefined4 local_108;
  undefined **local_100;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 local_b0;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined2 local_80;
  long *local_48;
  
  uVar26 = param_4._8_8_;
  uVar9 = param_4._0_8_;
  local_110 = &PTR_FUN_04235c88;
  local_108 = 1;
  local_90 = 1;
  local_120[0] = 0;
  local_100 = &PTR_FUN_04287c08;
  local_f0 = 0;
  uStack_e8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_8c = 0x3f000000bf800000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_84 = 0x3f000000;
  local_80 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar10 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar10;
  local_120[0] = *(undefined8 *)(lVar10 + 0x230);
  puVar11 = (ushort *)((long)param_5 - (long)*param_5);
  if (*puVar11 < 9) {
    fVar29 = 0.0;
    uVar27 = _DAT_00000004;
  }
  else {
    uVar27 = *(undefined4 *)
              ((long)((long)param_5 + (ulong)puVar11[4]) +
              (ulong)*(uint *)((long)param_5 + (ulong)puVar11[4]) + 4);
    fVar29 = 0.0;
    if ((10 < *puVar11) && ((ulong)puVar11[5] != 0)) {
      fVar29 = *(float *)((long)param_5 + (ulong)puVar11[5]);
    }
  }
  (**(code **)(*(long *)*param_6 + 0x40))();
  fVar14 = extraout_s0 * extraout_s0;
  fVar16 = extraout_var * extraout_var;
  auVar23._4_4_ = fVar16;
  auVar23._0_4_ = fVar14;
  auVar23._8_4_ = extraout_var_00 * extraout_var_00;
  auVar23._12_4_ = extraout_var_01 * extraout_var_01;
  auVar24._4_4_ = fVar16;
  auVar24._0_4_ = fVar14;
  auVar24._8_4_ = extraout_var_00 * extraout_var_00;
  auVar24._12_4_ = extraout_var_01 * extraout_var_01;
  auVar23 = NEON_ext(auVar23,auVar24,8,1);
  fVar22 = auVar23._0_4_;
  fVar25 = auVar23._4_4_;
  fVar28 = 0.0;
  fVar30 = 0.0;
  if (0xc < *(ushort *)((long)param_5 - (long)*param_5)) {
    uVar12 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[6];
    fVar30 = 0.0;
    if (uVar12 != 0) {
      fVar30 = *(float *)((long)param_5 + uVar12);
    }
  }
  (**(code **)(*(long *)*param_6 + 0x40))();
  fVar15 = auVar23._0_4_ * auVar23._0_4_;
  fVar17 = auVar23._4_4_ * auVar23._4_4_;
  fVar18 = auVar23._8_4_ * auVar23._8_4_;
  fVar20 = auVar23._12_4_ * auVar23._12_4_;
  auVar4._4_4_ = fVar17;
  auVar4._0_4_ = fVar15;
  auVar4._8_4_ = fVar18;
  auVar4._12_4_ = fVar20;
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar15;
  auVar5._8_4_ = fVar18;
  auVar5._12_4_ = fVar20;
  auVar23 = NEON_ext(auVar4,auVar5,8,1);
  if ((0xe < *(ushort *)((long)param_5 - (long)*param_5)) &&
     (uVar12 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[7], uVar12 != 0)) {
    fVar28 = *(float *)((long)param_5 + uVar12);
  }
  (**(code **)(*(long *)*param_6 + 0x40))();
  fVar18 = (float)uVar9 * (float)uVar9;
  fVar20 = (float)((ulong)uVar9 >> 0x20);
  fVar20 = fVar20 * fVar20;
  fVar19 = (float)uVar26 * (float)uVar26;
  fVar21 = (float)((ulong)uVar26 >> 0x20);
  fVar21 = fVar21 * fVar21;
  auVar6._4_4_ = fVar20;
  auVar6._0_4_ = fVar18;
  auVar6._8_4_ = fVar19;
  auVar6._12_4_ = fVar21;
  auVar7._4_4_ = fVar20;
  auVar7._0_4_ = fVar18;
  auVar7._8_4_ = fVar19;
  auVar7._12_4_ = fVar21;
  auVar24 = NEON_ext(auVar6,auVar7,8,1);
  local_f0 = CONCAT44(fVar30 * SQRT(auVar23._0_4_ + fVar15 + auVar23._4_4_ + fVar17),
                      fVar29 * SQRT(fVar22 + fVar14 + fVar25 + fVar16));
  uStack_e8 = (ulong)(uint)(fVar28 * SQRT(auVar24._0_4_ + fVar18 + auVar24._4_4_ + fVar20));
  local_80 = CONCAT11(local_80._1_1_,1);
  local_d0 = CONCAT44(local_d0._4_4_,param_9);
  plVar13 = (long *)*param_7;
  local_e0 = uVar27;
  if (plVar13 == (long *)0x0) {
    local_48 = (long *)0x0;
LAB_019f4b38:
    (*(code *)*param_8)(param_1,param_8 + 4,&local_48,local_120);
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar10 = plVar13[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    return;
  }
  lVar10 = plVar13[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar10 = plVar13[0xb];
    local_48 = plVar13;
    if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_019f4b38;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


