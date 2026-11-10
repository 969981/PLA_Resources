/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00258080; name: FUN_00258080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00258080(float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
                 float param_6,float *param_7,long *param_8)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  float extraout_s0;
  float fVar5;
  float extraout_var;
  float fVar6;
  float extraout_var_00;
  float extraout_var_01;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float fStack_7c;
  float local_70;
  float fStack_6c;
  
  fVar15 = param_2._12_4_;
  fVar8 = param_2._8_4_;
  fVar13 = param_2._4_4_;
  fVar12 = param_2._0_4_;
  FUN_00258590(param_8);
  local_70 = param_5 * -0.5;
  param_1 = param_1 * 0.5;
  fVar16 = param_2._0_4_ * 0.5;
  fVar10 = (float)_UNK_03888d18;
  fVar9 = (float)_UNK_03889a88;
  fVar5 = (float)_DAT_03889a80;
  fVar6 = (float)((ulong)_DAT_03889a80 >> 0x20);
  local_80 = param_5 * 0.5;
  fVar11 = (float)_DAT_03888d10;
  fVar14 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fStack_8c = param_6 * 0.5;
  fStack_6c = param_6 * -0.5;
  if ((*PTR_DAT_04372ab0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04372ab0);
    puVar2 = PTR_DAT_043729f0;
    if (iVar3 != 0) {
      if (((*PTR_DAT_043729e8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_043729e8);
      }
      *(undefined **)PTR_DAT_04372ab8 = puVar2;
      __cxa_guard_release(PTR_DAT_04372ab0);
    }
  }
  fStack_90 = local_80;
  local_a0 = local_70;
  fStack_9c = fStack_8c;
  fStack_7c = fStack_6c;
  if (param_8 != (long *)0x0) {
    for (plVar4 = (long *)(**(code **)(*param_8 + 0x10))(param_8); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_04372ab8) {
        bVar1 = *(byte *)((long)param_8 + 0x116) & 3;
        if (bVar1 == 2) {
          fVar7 = param_1 - local_80;
          local_a0 = fVar7 + local_70;
          fStack_90 = fVar7 + local_80;
          local_80 = fVar7 + local_80;
          local_70 = fVar7 + local_70;
        }
        else if (bVar1 == 1) {
          fVar7 = param_1 - local_80;
          local_a0 = local_70 - fVar7;
          fStack_90 = local_80 - fVar7;
          local_80 = local_80 - fVar7;
          local_70 = local_70 - fVar7;
        }
        if ((*(byte *)((long)param_8 + 0x115) >> 4 & 1) == 0) {
          bVar1 = *(byte *)((long)param_8 + 0x116) >> 2 & 3;
          if (bVar1 == 2) {
            fVar7 = fVar16 - fStack_8c;
            fStack_9c = fStack_8c - fVar7;
            fStack_8c = fStack_8c - fVar7;
            fStack_7c = fStack_6c - fVar7;
            fStack_6c = fStack_6c - fVar7;
          }
          else if (bVar1 == 1) {
            fVar7 = fVar16 - fStack_8c;
            fStack_9c = fVar7 + fStack_8c;
            fStack_8c = fVar7 + fStack_8c;
            fStack_7c = fVar7 + fStack_6c;
            fStack_6c = fVar7 + fStack_6c;
          }
        }
        break;
      }
    }
  }
  fVar19 = fVar6 * extraout_s0 + extraout_var * 1.0 + fVar14 * extraout_var_00 + 0.0;
  fVar18 = fVar5 * extraout_s0 + extraout_var * 0.0 + fVar11 * extraout_var_00 + 0.0;
  fVar15 = fVar15 + (param_1 + param_3) * fVar12 + (param_4 - fVar16) * fVar13 + fVar8 * 0.0;
  fVar17 = fVar6 * fVar12 + fVar13 * 1.0 + fVar14 * fVar8 + 0.0;
  fVar7 = fVar5 * fVar12 + fVar13 * 0.0 + fVar11 * fVar8 + 0.0;
  fVar14 = extraout_var_01 +
           (param_1 + param_3) * extraout_s0 + (param_4 - fVar16) * extraout_var +
           extraout_var_00 * 0.0;
  fVar16 = fVar9 * extraout_s0 + extraout_var * 0.0 + fVar10 * extraout_var_00 + 0.0;
  fVar8 = fVar9 * fVar12 + fVar13 * 0.0 + fVar10 * fVar8 + 0.0;
  fVar12 = fVar14 + fVar18 * local_a0 + fVar19 * fStack_9c + fVar16 * 0.0;
  fVar13 = fVar15 + fVar7 * local_a0 + fVar17 * fStack_9c + fVar8 * 0.0;
  fVar9 = fVar14 + fVar18 * fStack_90 + fVar19 * fStack_8c + fVar16 * 0.0;
  fVar11 = fVar15 + fVar7 * fStack_90 + fVar17 * fStack_8c + fVar8 * 0.0;
  fVar5 = fVar14 + fVar18 * local_70 + fVar19 * fStack_6c + fVar16 * 0.0;
  fVar6 = fVar15 + fVar7 * local_70 + fVar17 * fStack_6c + fVar8 * 0.0;
  fVar14 = fVar14 + fVar18 * local_80 + fVar19 * fStack_7c + fVar16 * 0.0;
  fVar15 = fVar15 + fVar7 * local_80 + fVar17 * fStack_7c + fVar8 * 0.0;
  fVar8 = fVar12;
  if (fVar12 <= -3.4028235e+38) {
    fVar8 = -3.4028235e+38;
  }
  if (3.4028235e+38 < fVar12) {
    fVar12 = 3.4028235e+38;
  }
  fVar10 = fVar13;
  if (3.4028235e+38 < fVar13) {
    fVar10 = 3.4028235e+38;
  }
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar13 <= fVar11) {
    fVar13 = fVar11;
  }
  if (fVar9 <= fVar12) {
    fVar12 = fVar9;
  }
  if (fVar11 <= fVar10) {
    fVar10 = fVar11;
  }
  if (fVar8 <= fVar14) {
    fVar8 = fVar14;
  }
  if (fVar13 <= fVar15) {
    fVar13 = fVar15;
  }
  if (fVar14 <= fVar12) {
    fVar12 = fVar14;
  }
  if (fVar15 <= fVar10) {
    fVar10 = fVar15;
  }
  if (fVar8 <= fVar5) {
    fVar8 = fVar5;
  }
  if (fVar13 <= fVar6) {
    fVar13 = fVar6;
  }
  if (fVar5 <= fVar12) {
    fVar12 = fVar5;
  }
  if (fVar6 <= fVar10) {
    fVar10 = fVar6;
  }
  param_7[2] = fVar8;
  param_7[3] = fVar10;
  *param_7 = fVar12;
  param_7[1] = fVar13;
  return;
}


