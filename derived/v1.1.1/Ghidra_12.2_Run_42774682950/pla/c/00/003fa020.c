/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fa020; name: FUN_003fa020
 */


void FUN_003fa020(ulong *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  *param_1 = 0;
  *(int *)(param_1 + 1) = param_2;
  param_1[4] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x18);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 1) = 2;
    *param_1 = *(ulong *)(param_3 + 0x20);
    return;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
    return;
  }
  uVar5 = *(ulong *)(param_3 + 0x20);
  if (param_2 == 2) {
    *param_1 = uVar5;
    return;
  }
  auVar6 = FUN_004fa098(param_1 + 5,lVar4,uVar5,0);
  if (lVar4 + uVar5 == auVar6._0_8_) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  uVar2 = *param_1;
  if (uVar5 < uVar2) {
    FUN_002ee770("absl::string_view::substr");
  }
  else {
    uVar3 = auVar6._0_8_ - (lVar4 + uVar2);
    uVar1 = uVar5 - uVar2;
    if (uVar3 <= uVar5 - uVar2) {
      uVar1 = uVar3;
    }
    if (-1 < (long)uVar1) {
      param_1[2] = lVar4 + uVar2;
      param_1[3] = uVar1;
      *param_1 = uVar2 + auVar6._8_8_ + uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"len <= kMaxSize\"",
                "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
}


