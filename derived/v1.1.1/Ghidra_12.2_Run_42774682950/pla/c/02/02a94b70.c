/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a94b70; name: FUN_02a94b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a94b70(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  
  fVar18 = param_4._8_4_;
  uVar17 = param_4._0_8_;
  fVar16 = param_3._12_4_;
  fVar15 = param_3._8_4_;
  fVar14 = param_3._4_4_;
  fVar13 = param_3._0_4_;
  fVar12 = param_2._12_4_;
  fVar11 = param_2._8_4_;
  fVar10 = param_2._4_4_;
  fVar9 = param_2._0_4_;
  if ((*(long *)(param_5 + 0x1a8) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_5 + 0x1a8) + 0x18), puVar7 != (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    puVar1 = (undefined8 *)PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar2 = PTR_DAT_043794c8,
       puVar1 = (undefined8 *)PTR_DAT_043794b8, iVar4 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar3 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)puVar3 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar2 = puVar3;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      puVar1 = (undefined8 *)PTR_DAT_043794b8;
      *(undefined **)PTR_DAT_043794b8 = puVar2;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    if (puVar5 != (undefined8 *)0x0) {
      do {
        if (puVar5 == puVar1) {
          plVar8 = puVar7 + -10;
          break;
        }
        puVar5 = (undefined8 *)*puVar5;
        plVar8 = (long *)0x0;
      } while (puVar5 != (undefined8 *)0x0);
      goto LAB_02a94be4;
    }
  }
  plVar8 = (long *)0x0;
LAB_02a94be4:
  (**(code **)(*plVar8 + 0x40))(plVar8);
  uVar20 = 0x3f800000;
  uVar6 = uVar17;
  fVar19 = fVar18;
  (**(code **)(*plVar8 + 0x40))(plVar8);
  uVar21 = (undefined4)_UNK_0388a138;
  fVar22 = (float)uVar17;
  fVar23 = (float)((ulong)uVar17 >> 0x20);
  *(ulong *)(param_5 + 0x268) = CONCAT44(uVar20,fVar19);
  *(undefined8 *)(param_5 + 0x260) = uVar6;
  *(ulong *)(param_5 + 0x278) = (ulong)(uint)fVar13;
  *(ulong *)(param_5 + 0x270) = CONCAT44(fVar9,extraout_s0);
  *(ulong *)(param_5 + 0x288) = (ulong)(uint)fVar14;
  *(ulong *)(param_5 + 0x280) = CONCAT44(fVar10,extraout_var);
  *(ulong *)(param_5 + 0x298) = CONCAT44(uVar21,fVar15);
  *(ulong *)(param_5 + 0x290) = CONCAT44(fVar11,extraout_var_00);
  *(ulong *)(param_5 + 0x2a8) =
       CONCAT44(0x3f800000,
                0.0 - (fVar13 * fVar22 + fVar14 * fVar23 + fVar15 * fVar18 + fVar16 * 1.0));
  *(ulong *)(param_5 + 0x2a0) =
       CONCAT44(0.0 - (fVar9 * fVar22 + fVar10 * fVar23 + fVar11 * fVar18 + fVar12 * 1.0),
                0.0 - (extraout_s0 * fVar22 + extraout_var * fVar23 + extraout_var_00 * fVar18 +
                      extraout_var_01 * 1.0));
  return;
}


