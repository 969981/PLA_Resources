/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fea00; name: FUN_002fea00
 */


undefined8 FUN_002fea00(char *param_1,ulong param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *local_40;
  ulong uStack_38;
  
  *param_5 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  if ((param_2 == 0) || (*param_1 != '[')) {
    uVar3 = FUN_002fee98(&local_40,0x3a,0);
    if (uVar3 == 0xffffffffffffffff) {
LAB_002feab0:
      param_3[1] = uStack_38;
      *param_3 = (long)local_40;
      *param_4 = 0;
      param_4[1] = 0;
      return 1;
    }
    lVar5 = uVar3 + 1;
    lVar4 = FUN_002fee98(&local_40,0x3a,lVar5);
    if (lVar4 != -1) goto LAB_002feab0;
    uVar6 = uStack_38;
    if (uVar3 <= uStack_38) {
      uVar6 = uVar3;
    }
    if ((long)uVar6 < 0) goto LAB_002febb4;
    *param_3 = (long)local_40;
    param_3[1] = uVar6;
    if (uVar3 < uStack_38) {
      uVar6 = uStack_38 - lVar5;
      if (uStack_38 + ~uVar3 <= uStack_38 - lVar5) {
        uVar6 = uStack_38 + ~uVar3;
      }
      if (-1 < (long)uVar6) {
        *param_4 = (long)(local_40 + lVar5);
        param_4[1] = uVar6;
        *param_5 = 1;
        return 1;
      }
      goto LAB_002febb4;
    }
LAB_002febd4:
    FUN_002ee770("absl::string_view::substr");
LAB_002febe0:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"i < size()\"","external/com_google_absl\\absl/strings/string_view.h",
                  0x11e,"operator()");
  }
  uVar3 = FUN_002fee98(&local_40,0x5d,1);
  if (uVar3 == 0xffffffffffffffff) {
    return 0;
  }
  uVar6 = uStack_38 - 1;
  if (uVar3 == uVar6) {
    *param_4 = 0;
    param_4[1] = 0;
    if (uStack_38 == 0) goto LAB_002febd4;
    if (uVar3 - 1 <= uVar6) {
      uVar6 = uVar3 - 1;
    }
  }
  else {
    if (uStack_38 <= uVar3 + 1) goto LAB_002febe0;
    if (local_40[uVar3 + 1] != ':') {
      return 0;
    }
    uVar1 = uVar3 + 2;
    if (uStack_38 < uVar1) goto LAB_002febd4;
    uVar7 = (uStack_38 - uVar3) - 2;
    uVar2 = uStack_38 - uVar1;
    if (uVar7 <= uStack_38 - uVar1) {
      uVar2 = uVar7;
    }
    if ((long)uVar2 < 0) goto LAB_002febb4;
    *param_4 = (long)(local_40 + uVar1);
    param_4[1] = uVar2;
    *param_5 = 1;
    if (uVar3 - 1 <= uVar6) {
      uVar6 = uVar3 - 1;
    }
  }
  if (-1 < (long)uVar6) {
    *param_3 = (long)(local_40 + 1);
    param_3[1] = uVar6;
    lVar5 = FUN_002fee98(param_3,0x3a,0);
    if (lVar5 == -1) {
      *param_3 = 0;
      param_3[1] = 0;
      return 0;
    }
    return 1;
  }
LAB_002febb4:
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"len <= kMaxSize\"",
                "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
}


