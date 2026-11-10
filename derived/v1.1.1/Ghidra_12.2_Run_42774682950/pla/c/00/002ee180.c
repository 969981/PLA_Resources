/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee180; name: FUN_002ee180
 */


undefined8 FUN_002ee180(byte *param_1,long param_2,long *param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char local_28 [4];
  int local_24;
  byte *local_20;
  long lStack_18;
  
  *param_3 = 0;
  local_24 = param_4;
  local_20 = param_1;
  lStack_18 = param_2;
  uVar2 = FUN_002ee4e0(&local_20,&local_24,local_28);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = (ulong)local_24;
  if (local_28[0] == '\0') {
    if (local_24 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("base >= 0","external/com_google_absl/absl/strings/numbers.cc",0x31e,
                    "safe_parse_positive_int");
    }
    if (1 < local_24) {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = 0x7fffffffffffffff / uVar2;
      }
      if (uVar5 != *(ulong *)(&DAT_039f9050 + uVar2 * 8)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("base < 2 || nn::npln::gnp::std::numeric_limits<IntType>::max() / base == vmax_over_base"
                      ,"external/com_google_absl/absl/strings/numbers.cc",0x322,
                      "safe_parse_positive_int");
      }
    }
    if (0 < lStack_18) {
      lVar4 = 0;
      pbVar1 = local_20 + lStack_18;
      do {
        if (local_24 <= "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*local_20])
        goto LAB_002ee310;
        if ((long)*(ulong *)(&DAT_039f9050 + uVar2 * 8) < lVar4) {
LAB_002ee324:
          *param_3 = 0x7fffffffffffffff;
          return 0;
        }
        lVar3 = (long)(int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*local_20];
        if (0x7fffffffffffffff - lVar3 < (long)(lVar4 * uVar2)) goto LAB_002ee324;
        local_20 = local_20 + 1;
        lVar4 = lVar4 * uVar2 + lVar3;
      } while (local_20 < pbVar1);
      goto LAB_002ee2e4;
    }
  }
  else {
    lVar3 = *(long *)(&DAT_039f9178 + uVar2 * 8);
    if (1 < local_24) {
      lVar4 = 0;
      if (uVar2 != 0) {
        lVar4 = -0x8000000000000000 / (long)uVar2;
      }
      if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("base < 2 || nn::npln::gnp::std::numeric_limits<IntType>::min() / base == vmin_over_base"
                      ,"external/com_google_absl/absl/strings/numbers.cc",0x345,
                      "safe_parse_negative_int");
      }
    }
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = -0x8000000000000000 / (long)uVar2;
    }
    if (0 < (long)(-0x8000000000000000 - lVar4 * uVar2)) {
      lVar3 = lVar3 + 1;
    }
    if (0 < lStack_18) {
      lVar4 = 0;
      pbVar1 = local_20 + lStack_18;
      do {
        if (local_24 <= "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*local_20]) {
LAB_002ee310:
          *param_3 = lVar4;
          return 0;
        }
        if (lVar4 < lVar3) {
LAB_002ee2f8:
          *param_3 = -0x8000000000000000;
          return 0;
        }
        uVar5 = (ulong)(int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*local_20];
        if ((long)(lVar4 * uVar2) < (long)(uVar5 | 0x8000000000000000)) goto LAB_002ee2f8;
        local_20 = local_20 + 1;
        lVar4 = lVar4 * uVar2 - uVar5;
      } while (local_20 < pbVar1);
      goto LAB_002ee2e4;
    }
  }
  lVar4 = 0;
LAB_002ee2e4:
  *param_3 = lVar4;
  return 1;
}


