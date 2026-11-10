/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c4304; name: FUN_005c4304
 */


ulong * FUN_005c4304(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
    return param_1;
  }
  lVar2 = *(long *)(param_1[4] + 0x18);
  uVar3 = *(ulong *)(param_1[4] + 0x20);
  uVar4 = param_1[6];
  *(int *)(param_1 + 6) = (int)uVar4 + 1;
  if ((int)uVar4 == *(int *)((long)param_1 + 0x2c)) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar2 + uVar3;
  }
  else {
    auVar6 = FUN_004fa098(param_1 + 5,lVar2,uVar3,*param_1);
    if (lVar2 + uVar3 != auVar6._0_8_) goto LAB_005c4390;
  }
  *(undefined4 *)(param_1 + 1) = 1;
LAB_005c4390:
  uVar4 = *param_1;
  if (uVar3 < uVar4) {
    FUN_002ee770("absl::string_view::substr");
  }
  else {
    uVar5 = auVar6._0_8_ - (lVar2 + uVar4);
    uVar1 = uVar3 - uVar4;
    if (uVar5 <= uVar3 - uVar4) {
      uVar1 = uVar5;
    }
    if (-1 < (long)uVar1) {
      *param_1 = uVar4 + auVar6._8_8_ + uVar1;
      param_1[2] = lVar2 + uVar4;
      param_1[3] = uVar1;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"len <= kMaxSize\"",
                "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
}


