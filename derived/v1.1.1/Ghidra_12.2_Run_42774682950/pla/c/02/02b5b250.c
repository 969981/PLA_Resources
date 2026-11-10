/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5b250; name: FUN_02b5b250
 */


void FUN_02b5b250(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  float *pfVar14;
  long local_e0;
  float afStack_d8 [16];
  ulong local_98;
  float afStack_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  local_98._0_4_ = 0x22;
  local_e0._0_4_ = 1;
  FUN_02b76540(param_2,&local_e0,&local_98);
  iVar10 = *(int *)(param_2 + 0x40) + 0xc;
  *(int *)(param_2 + 0x40) = iVar10;
  uVar12 = (uint)*param_3;
  if ((uVar12 >> 1 & 1) != 0) {
    local_98._0_4_ = 0x22;
    local_e0._0_4_ = 2;
    FUN_02b76540(param_2,&local_e0,&local_98);
    iVar10 = *(int *)(param_2 + 0x40) + 0xc;
    *(int *)(param_2 + 0x40) = iVar10;
    uVar12 = (uint)*param_3;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    local_98 = CONCAT44(local_98._4_4_,0x16);
    local_e0 = CONCAT44(local_e0._4_4_,0x18);
    FUN_02b76540(param_2,&local_e0,&local_98);
    iVar10 = *(int *)(param_2 + 0x40) + 8;
    *(int *)(param_2 + 0x40) = iVar10;
  }
  *(undefined4 *)(param_2 + 0x44) = 0x18;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  local_98 = (ulong)(uint)(iVar10 * 0x18);
  afStack_90[0] = 5.60519e-45;
  afStack_90[1] = 0.0;
  local_e0 = *param_1;
  lVar6 = FUN_01b34908(auStack_38,*(undefined8 *)(local_e0 + 8),&local_e0);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bbfe84(lVar6,&local_98,1,0,0);
  plVar7 = *(long **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_2 + 0x38) = lVar6;
  uVar12 = *(uint *)(lVar6 + 0xa0);
  uVar13 = *(ulong *)(*(long *)(lVar6 + 0x98) + 0x138);
  uVar11 = (uint)uVar13;
  if (uVar12 < 3) {
    uVar11 = uVar11 & uVar12 - 1;
  }
  else {
    iVar10 = 0;
    if ((ulong)uVar12 != 0) {
      iVar10 = (int)(uVar13 / uVar12);
    }
    uVar11 = uVar11 - iVar10 * uVar12;
  }
  pcVar8 = (char *)FUN_02bc0470((long)(int)uVar11,lVar6 + 0x58);
  if (*pcVar8 == '\0' || *(long *)(pcVar8 + 8) == 0) {
    pfVar9 = (float *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar8 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    pfVar9 = (float *)(*DAT_043f0470)();
  }
  local_98 = 0x3f8000003f800000;
  afStack_90[0] = -1.0;
  afStack_90[1] = 1.0;
  local_78 = 0xbf800000bf800000;
  local_70 = 0xbf8000003f800000;
  local_58 = 0x3f800000bf800000;
  uStack_50 = 0xbf800000bf800000;
  lVar6 = 0;
  pfVar14 = afStack_d8;
  local_48 = 0xbf8000003f800000;
  uStack_40 = 0x3f8000003f800000;
  local_88 = 0xbf800000bf800000;
  local_80 = 0xbf800000bf800000;
  local_e0 = 0;
  afStack_d8[0] = -1.0;
  afStack_d8[1] = -1.0;
  afStack_d8[0xe] = 1.0;
  afStack_d8[0xf] = 0.0;
  afStack_d8[10] = 0.0;
  afStack_d8[0xb] = -1.0;
  afStack_d8[0xc] = 0.0;
  afStack_d8[0xd] = 0.0;
  local_68 = 0x3f8000003f800000;
  uStack_60 = 0x3f8000003f800000;
  afStack_d8[2] = 0.0;
  afStack_d8[3] = 0.0;
  afStack_d8[4] = 0.0;
  afStack_d8[5] = 0.0;
  afStack_d8[6] = 1.0;
  afStack_d8[7] = 1.0;
  afStack_d8[8] = 0.0;
  afStack_d8[9] = 0.0;
  do {
    uVar13 = (ulong)*(uint *)((long)&DAT_03a83e2c + lVar6);
    *pfVar9 = afStack_d8[uVar13 * 3 + 0x10] * 0.5;
    pfVar9[1] = afStack_90[uVar13 * 3 + -1] * 0.5;
    pfVar9[2] = afStack_90[uVar13 * 3] * 0.5;
    uVar12 = (uint)*param_3;
    if ((uVar12 >> 1 & 1) == 0) {
      pfVar9 = pfVar9 + 3;
    }
    else {
      pfVar9[3] = pfVar14[-2];
      pfVar9[4] = pfVar14[-1];
      pfVar9[5] = *pfVar14;
      pfVar9 = pfVar9 + 6;
      uVar12 = (uint)*param_3;
    }
    if ((uVar12 >> 2 & 1) != 0) {
      pfVar9[0] = 0.0;
      pfVar9[1] = 0.0;
      pfVar9 = pfVar9 + 2;
    }
    uVar13 = (ulong)*(uint *)((long)&DAT_03a83e30 + lVar6);
    *pfVar9 = afStack_d8[uVar13 * 3 + 0x10] * 0.5;
    pfVar9[1] = afStack_90[uVar13 * 3 + -1] * 0.5;
    pfVar9[2] = afStack_90[uVar13 * 3] * 0.5;
    uVar12 = (uint)*param_3;
    if ((uVar12 >> 1 & 1) == 0) {
      pfVar9 = pfVar9 + 3;
    }
    else {
      pfVar9[3] = pfVar14[-2];
      pfVar9[4] = pfVar14[-1];
      pfVar9[5] = *pfVar14;
      pfVar9 = pfVar9 + 6;
      uVar12 = (uint)*param_3;
    }
    if ((uVar12 >> 2 & 1) != 0) {
      pfVar9[0] = 0.0;
      pfVar9[1] = 1.0;
      pfVar9 = pfVar9 + 2;
    }
    uVar13 = (ulong)*(uint *)((long)&DAT_03a83e34 + lVar6);
    *pfVar9 = afStack_d8[uVar13 * 3 + 0x10] * 0.5;
    pfVar9[1] = afStack_90[uVar13 * 3 + -1] * 0.5;
    pfVar9[2] = afStack_90[uVar13 * 3] * 0.5;
    uVar12 = (uint)*param_3;
    if ((uVar12 >> 1 & 1) == 0) {
      pfVar9 = pfVar9 + 3;
    }
    else {
      pfVar9[3] = pfVar14[-2];
      pfVar9[4] = pfVar14[-1];
      pfVar9[5] = *pfVar14;
      pfVar9 = pfVar9 + 6;
      uVar12 = (uint)*param_3;
    }
    if ((uVar12 >> 2 & 1) != 0) {
      pfVar9[0] = 1.0;
      pfVar9[1] = 1.0;
      pfVar9 = pfVar9 + 2;
    }
    uVar13 = (ulong)*(uint *)((long)&DAT_03a83e38 + lVar6);
    *pfVar9 = afStack_d8[uVar13 * 3 + 0x10] * 0.5;
    pfVar9[1] = afStack_90[uVar13 * 3 + -1] * 0.5;
    pfVar9[2] = afStack_90[uVar13 * 3] * 0.5;
    uVar12 = (uint)*param_3;
    if ((uVar12 >> 1 & 1) == 0) {
      pfVar3 = pfVar9 + 3;
    }
    else {
      pfVar9[3] = pfVar14[-2];
      pfVar9[4] = pfVar14[-1];
      pfVar9[5] = *pfVar14;
      pfVar3 = pfVar9 + 6;
      uVar12 = (uint)*param_3;
    }
    pfVar9 = pfVar3;
    if ((uVar12 >> 2 & 1) != 0) {
      pfVar9 = pfVar3 + 2;
      pfVar3[0] = 1.0;
      pfVar3[1] = 0.0;
    }
    lVar6 = lVar6 + 0x10;
    pfVar14 = pfVar14 + 3;
  } while (lVar6 != 0x60);
  return;
}


