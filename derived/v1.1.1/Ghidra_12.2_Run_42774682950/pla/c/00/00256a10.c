/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00256a10; name: FUN_00256a10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00256a10(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long *param_4,
            float *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  float extraout_var_09;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_80;
  float local_68;
  float local_64;
  
  uVar15 = param_3._4_4_;
  uVar14 = param_3._0_4_;
  uVar13 = param_2._4_4_;
  uVar12 = param_2._0_4_;
  uVar5 = FUN_00244c1c();
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  plVar8 = (long *)param_4[3];
  if (((*PTR_DAT_04372b00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04372b00), iVar4 != 0))
  {
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
      *(undefined8 *)PTR_DAT_043729f0 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    *(undefined **)PTR_DAT_04372b08 = PTR_DAT_043729f0;
    __cxa_guard_release(PTR_DAT_04372b00);
  }
  if (plVar8 != (long *)0x0) {
    for (plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_04372b08) goto LAB_00256a94;
    }
    plVar8 = (long *)0x0;
  }
LAB_00256a94:
  *(long **)(param_5 + 4) = param_4;
  *param_5 = *(float *)(param_4 + 10);
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  bVar1 = *(byte *)(param_4 + 0xb);
  if (((*PTR_DAT_043729d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_043729d8), iVar4 != 0))
  {
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
      *(undefined8 *)PTR_DAT_043729f0 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    *(undefined **)PTR_DAT_043729e0 = PTR_DAT_043729f0;
    __cxa_guard_release(PTR_DAT_043729d8);
  }
  puVar7 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
  if (puVar7 != (undefined8 *)0x0) {
LAB_00256ad4:
    if (puVar7 != (undefined8 *)PTR_DAT_043729e0) goto code_r0x00256adc;
    if (param_4 != (long *)0x0) {
      bVar1 = *(byte *)(param_4 + 0xb);
      local_64 = 3.4028235e+38;
      local_68 = -3.4028235e+38;
      FUN_00258590(param_4);
      uStack_98 = CONCAT44(extraout_var_07,extraout_var_03);
      local_a0 = CONCAT44(extraout_var,extraout_s0);
      uStack_90 = CONCAT44(uVar13,uVar12);
      fVar9 = 0.0;
      local_80 = CONCAT44(uVar15,uVar14);
      plVar6 = (long *)param_4[5];
      if (plVar6 != param_4 + 4) {
        do {
          FUN_00258730(plVar6 + -1,&local_64,&local_68,&local_a0);
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != param_4 + 4);
        if (local_64 <= local_68) {
          local_68 = local_68 - uStack_98._4_4_;
          local_64 = local_64 - uStack_98._4_4_;
          fVar9 = local_68 - local_64;
          param_5[2] = (local_68 + local_64) * 0.5;
        }
      }
      *param_5 = fVar9;
      goto joined_r0x00256b80;
    }
  }
LAB_00256ba8:
  uVar5 = FUN_00244cdc(param_4);
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)param_4[5];
    if (plVar6 != param_4 + 4) {
      bVar1 = *(byte *)(param_4 + 0xb);
      local_64 = 3.4028235e+38;
      local_68 = -3.4028235e+38;
      FUN_00258590(param_4);
      uStack_98 = CONCAT44(extraout_var_08,extraout_var_04);
      local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
      uStack_90 = CONCAT44(uVar13,uVar12);
      local_80 = CONCAT44(uVar15,uVar14);
      do {
        FUN_00258730(plVar6 + -1,&local_64,&local_68,&local_a0);
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != param_4 + 4);
      if (local_64 <= local_68) {
        local_68 = local_68 - uStack_98._4_4_;
        local_64 = local_64 - uStack_98._4_4_;
        fVar9 = local_68 - local_64;
        param_5[2] = (local_68 + local_64) * 0.5;
        *param_5 = fVar9;
      }
      else {
        fVar9 = 0.0;
        *param_5 = 0.0;
      }
joined_r0x00256b80:
      if (((bVar1 & 1) == 0) || (fVar9 == 0.0)) goto LAB_0025706c;
      goto LAB_00256b8c;
    }
  }
  if (((*PTR_DAT_04372ab0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04372ab0), puVar3 = PTR_DAT_043729f0, iVar4 != 0)) {
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
      *(undefined8 *)puVar3 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    *(undefined **)PTR_DAT_04372ab8 = puVar3;
    __cxa_guard_release(PTR_DAT_04372ab0);
  }
  for (plVar6 = (long *)(**(code **)(*param_4 + 0x10))(param_4); plVar6 != (long *)0x0;
      plVar6 = (long *)*plVar6) {
    if (plVar6 == (long *)PTR_DAT_04372ab8) {
      if (param_4 != (long *)0x0) {
        (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
        fVar20 = (float)uStack_98;
        fVar9 = (float)local_a0;
        (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
        fVar10 = 0.0;
        bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
        fVar21 = *(float *)(param_4 + 10);
        fVar22 = *(float *)((long)param_4 + 0x54);
        if (bVar2 != 1) {
          if (bVar2 == 2) {
            fVar10 = -fVar21;
          }
          else {
            fVar10 = fVar21 * -0.5;
          }
        }
        bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
        fVar11 = 0.0;
        if ((bVar2 != 1) && (fVar11 = fVar22, bVar2 != 2)) {
          fVar11 = fVar22 * 0.5;
        }
        FUN_00258080(fVar21,fVar22,fVar10,fVar11,fVar20 - fVar9,local_a0._4_4_ - uStack_98._4_4_,
                     &local_a0,param_4);
        *param_5 = (float)uStack_98 - (float)local_a0;
        param_5[2] = ((float)uStack_98 - (float)local_a0) * 0.5 +
                     ((float)local_a0 - *(float *)(param_4 + 6));
        goto joined_r0x00257068;
      }
      break;
    }
  }
  fVar9 = 0.0;
  fVar21 = *(float *)(param_4 + 10);
  fVar20 = *(float *)((long)param_4 + 0x54);
  bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
  if (bVar2 != 1) {
    if (bVar2 == 2) {
      fVar9 = -fVar21;
    }
    else {
      fVar9 = fVar21 * -0.5;
    }
  }
  bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
  fVar22 = 0.0;
  if ((bVar2 != 1) && (fVar22 = fVar20, bVar2 != 2)) {
    fVar22 = fVar20 * 0.5;
  }
  fVar10 = fVar21 * 0.5;
  fVar11 = fVar20 * 0.5;
  FUN_00258590(param_4);
  fVar16 = (float)_DAT_03889a80 * extraout_s0_01 + extraout_var_01 * 0.0 +
           (float)_DAT_03888d10 * extraout_var_05 + 0.0;
  fVar17 = (float)((ulong)_DAT_03889a80 >> 0x20) * extraout_s0_01 + extraout_var_01 * 1.0 +
           (float)((ulong)_DAT_03888d10 >> 0x20) * extraout_var_05 + 0.0;
  fVar18 = (float)_UNK_03889a88 * extraout_s0_01 + extraout_var_01 * 0.0 +
           (float)_UNK_03888d18 * extraout_var_05 + 0.0;
  fVar19 = extraout_var_09 +
           (fVar10 + fVar9) * extraout_s0_01 + (fVar22 - fVar11) * extraout_var_01 +
           extraout_var_05 * 0.0;
  fVar9 = fVar19 + fVar16 * fVar21 * -0.5 + fVar17 * fVar11 + fVar18 * 0.0;
  fVar11 = fVar19 + fVar16 * fVar10 + fVar17 * fVar11 + fVar18 * 0.0;
  fVar10 = fVar19 + fVar16 * fVar10 + fVar17 * fVar20 * -0.5 + fVar18 * 0.0;
  fVar22 = fVar9;
  if (3.4028235e+38 < fVar9) {
    fVar22 = 3.4028235e+38;
  }
  if (fVar9 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar19 = fVar19 + fVar16 * fVar21 * -0.5 + fVar17 * fVar20 * -0.5 + fVar18 * 0.0;
  if (fVar11 <= fVar22) {
    fVar22 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  if (fVar10 <= fVar22) {
    fVar22 = fVar10;
  }
  if (fVar9 <= fVar19) {
    fVar9 = fVar19;
  }
  if (fVar19 <= fVar22) {
    fVar22 = fVar19;
  }
  *param_5 = fVar9 - fVar22;
  bVar2 = *(byte *)((long)param_4 + 0x5b);
  if ((bVar2 & 0xf) != 0) {
    fVar20 = 0.0;
    fVar21 = *(float *)(param_4 + 10);
    fVar9 = 0.0;
    if ((bVar2 & 3) == 1) {
LAB_00256f68:
      fVar22 = *(float *)((long)param_4 + 0x54);
    }
    else {
      if ((bVar2 & 3) != 2) {
        fVar9 = fVar21 * -0.5;
        goto LAB_00256f68;
      }
      fVar9 = -fVar21;
      fVar22 = *(float *)((long)param_4 + 0x54);
    }
    bVar2 = bVar2 >> 2 & 3;
    if ((bVar2 != 1) && (fVar20 = fVar22, bVar2 != 2)) {
      fVar20 = fVar22 * 0.5;
    }
    FUN_00258590(param_4);
    param_5[2] = param_5[2] +
                 extraout_s0_02 * (fVar21 * 0.5 + fVar9) + extraout_var_02 * (fVar20 - fVar22 * 0.5)
                 + extraout_var_06 * 0.0 + 0.0;
  }
joined_r0x00257068:
  if ((bVar1 & 1) == 0) {
LAB_0025706c:
    param_5[1] = 0.0;
    return 0;
  }
LAB_00256b8c:
  uVar5 = FUN_00244c7c(param_4);
  if ((uVar5 & 1) == 0) {
    param_5[1] = *(float *)(plVar8 + 0x1b);
  }
  else {
    fVar9 = (float)FUN_00244d3c(*(undefined8 *)(param_5 + 4));
    param_5[1] = fVar9;
  }
  return 1;
code_r0x00256adc:
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_00256ba8;
  goto LAB_00256ad4;
}


