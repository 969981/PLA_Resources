/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3633c; name: FUN_01a3633c
 */


void FUN_01a3633c(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  long *local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long *local_88;
  float local_34;
  
  if (*(char *)(param_1 + 0x3f8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x398) == '\0') {
LAB_01a36394:
    if (*(char *)(param_1 + 0x3fa) == '\0') goto LAB_01a3639c;
LAB_01a36424:
    FUN_01a44c64(*(undefined4 *)(param_1 + 0x3fc),param_1);
    *(undefined1 *)(param_1 + 0x3fa) = 0;
    cVar5 = *(char *)(param_1 + 0x3f9);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x3be);
    if (*(char *)(param_1 + 0x3bf) == '\0') {
joined_r0x01a363f8:
      if (bVar4 == 0) goto LAB_01a36394;
    }
    else {
      if ((*(char *)(param_1 + 0xdf60) == '\0') || (*(long *)(param_1 + 0xdf70) == 0)) {
        bVar4 = bVar4 | 1;
        goto joined_r0x01a363f8;
      }
      if (*(int *)(*(long *)(param_1 + 0xdf70) + 0xc) != 0 && bVar4 == 0) goto LAB_01a36394;
    }
    if (*(char *)(param_1 + 0x3f9) != '\0') goto LAB_01a36394;
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x460);
    FUN_01a44c64(0x43340000,param_1);
    if (*(char *)(param_1 + 0x3fa) != '\0') goto LAB_01a36424;
LAB_01a3639c:
    cVar5 = *(char *)(param_1 + 0x3f9);
  }
  if (cVar5 == '\0') {
    return;
  }
  local_34 = 1.0;
  iVar1 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar1;
  puVar7 = PTR_PTR_0437a4c8;
  if (0 < *(int *)(param_1 + 0x45c)) {
    local_34 = (float)iVar1 / (float)*(int *)(param_1 + 0x45c);
  }
  local_c0._0_4_ = 0x3f800000;
  pfVar9 = (float *)local_c0;
  if (local_34 <= 1.0) {
    pfVar9 = &local_34;
  }
  local_a0._0_8_ = (ulong)(uint)local_a0._4_4_ << 0x20;
  if (local_34 < 0.0) {
    pfVar9 = (float *)local_a0;
  }
  if (*(uint *)(param_1 + 0x464) == 0xffffffff) {
    uVar12 = 0x3f800000;
  }
  else {
    uVar12 = (**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x464) * 8))(*pfVar9);
  }
  local_a0._0_8_ = &DAT_f976cfc5b993016e;
  local_a0._8_8_ = "camera";
  local_c0._0_8_ = &DAT_bd27ed21e11933a2;
  local_c0._8_8_ = "reset_turn_keep_update_target";
  local_90 = 6;
  local_88 = (long *)0x0;
  local_b0 = 0x1d;
  local_a8 = (long *)0x0;
  local_34 = (float)uVar12;
  uVar8 = FUN_00e9e50c(local_a0,local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((uVar8 & 1) != 0) &&
     (FUN_00956dac(local_c0,param_1 + 0x300), (long *)local_c0._0_8_ != (long *)0x0)) {
    local_a0._8_8_ = *(long *)(local_c0._0_8_ + 200);
    local_a0._0_8_ = *(long *)(local_c0._0_8_ + 0xc0);
    FUN_00cb8d18(local_a0);
    *(float *)(param_1 + 0x404) =
         extraout_var_00 +
         *(float *)(param_1 + 0x408) *
         (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
    if ((long *)local_c0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)(local_c0._0_8_ + 0x58);
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar1 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar1 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar1 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*(long *)local_c0._0_8_ + 0x20))();
      }
    }
  }
  uVar13 = *(undefined4 *)(param_1 + 0x404);
  *(double *)(param_1 + 0x700) = (double)*(float *)(param_1 + 0x410);
  if ((float)uVar12 < 1.0) {
    local_a0 = FUN_009a7ff4(*(undefined4 *)(param_1 + 0x400),0,0);
    local_c0 = FUN_009a7ff4(*(undefined4 *)(param_1 + 0x404),0,0);
    local_d0 = FUN_009c6b1c(uVar12,local_a0,local_c0);
    FUN_00cb8d18(local_d0);
    fVar14 = *(float *)(param_1 + 0x40c);
    fVar15 = *(float *)(param_1 + 0x410);
    fVar11 = (float)(**(code **)(puVar7 + 0x10))(uVar12);
    *(double *)(param_1 + 0x700) = (double)(fVar14 + (fVar15 - fVar14) * fVar11);
    cVar5 = *(char *)(param_1 + 0xe110);
    uVar13 = extraout_var;
  }
  else {
    *(undefined1 *)(param_1 + 0x3f9) = 0;
    cVar5 = *(char *)(param_1 + 0xe110);
  }
  if ((cVar5 == '\0') && (*(char *)(param_1 + 0xde00) == '\0')) {
    if (*(int *)(param_1 + 0x3e4) == 1) {
      fVar11 = *(float *)(param_1 + 0x54c);
    }
    else if ((*(int *)(param_1 + 0x3e4) != 2) ||
            (fVar11 = *(float *)(param_1 + 0x54c), 1.0 <= fVar11)) goto LAB_01a36574;
    *(undefined4 *)(param_1 + 0x4e0) = uVar13;
    FUN_018324c8(local_a0,fVar11,param_1 + 0x480);
    if (*(char *)(param_1 + 0x370) == '\0') {
      puVar3 = (undefined4 *)(param_1 + 0x520);
      if (1.0 <= *(float *)(param_1 + 0x54c)) {
        puVar3 = (undefined4 *)(param_1 + 0x4e0);
      }
      *(undefined4 *)(param_1 + 0x360) = *puVar3;
    }
  }
  else {
LAB_01a36574:
    if (*(char *)(param_1 + 0x370) == '\0') {
      *(undefined4 *)(param_1 + 0x360) = uVar13;
    }
  }
  return;
}


