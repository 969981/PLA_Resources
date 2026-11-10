/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a63da8; name: FUN_00a63da8
 */


void FUN_00a63da8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  float extraout_s0;
  float fVar8;
  float extraout_var;
  float fVar9;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar10 [16];
  undefined8 *local_48 [2];
  long *local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    FUN_01a8734c(0x3f99999a);
    FUN_01a8c8ac(*param_1);
    local_30 = extraout_s0;
    fStack_2c = extraout_var;
    fStack_28 = extraout_var_00;
    fStack_24 = extraout_var_01;
    FUN_01a853a8(*param_1,&local_30);
    FUN_01a82160(local_48,*param_1);
    FUN_009c685c(&local_38,local_48);
    fVar8 = local_30 * local_30;
    fVar9 = fStack_2c * fStack_2c;
    auVar10._4_4_ = fVar9;
    auVar10._0_4_ = fVar8;
    auVar10._8_4_ = fStack_28 * fStack_28;
    auVar10._12_4_ = fStack_24 * fStack_24;
    auVar4._4_4_ = fVar9;
    auVar4._0_4_ = fVar8;
    auVar4._8_4_ = fStack_28 * fStack_28;
    auVar4._12_4_ = fStack_24 * fStack_24;
    auVar10 = NEON_ext(auVar10,auVar4,8,1);
    fVar8 = SQRT(auVar10._0_4_ + fVar8 + auVar10._4_4_ + fVar9) * 0.5;
    if (2.0 < fVar8) {
      fVar8 = 2.0;
    }
    (**(code **)(*local_38 + 0x180))(fVar8);
    puVar5 = local_48[0];
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
        puVar5 = local_48[0];
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_18 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_18);
      }
    }
  }
  return;
}


