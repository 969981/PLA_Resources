/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef280; name: FUN_002ef280
 */


undefined1  [16] FUN_002ef280(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar5 = param_2 >> 0x20;
  iVar6 = (int)((ulong)param_4 >> 0x20);
  if (iVar6 == 3) {
    uVar7 = uVar5;
    if ((int)param_4 < 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time.cc",0xaf,2,
                   "assertion failed: %s","b.tv_nsec >= 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if ((int)(param_2 >> 0x20) != iVar6) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time.cc",0xb1,2,
                   "assertion failed: %s","a.clock_type == b.clock_type");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = 3;
  }
  uVar4 = (int)param_2 - (int)param_4;
  uVar1 = uVar4 + 1000000000;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if (1 < param_1 + 0x8000000000000001U) {
    if ((param_3 != 0x8000000000000000) &&
       ((0 < (long)param_3 || (param_1 < (long)(param_3 + 0x7fffffffffffffff))))) {
      if (param_3 == 0x7fffffffffffffff) {
        auVar9._8_8_ = 0x100000000;
        auVar9._0_8_ = 0x8000000000000000;
        return auVar9;
      }
      if ((-1 < (long)param_3) && (param_1 <= (long)(param_3 | 0x8000000000000000))) {
        auVar10._8_8_ = 0x100000000;
        auVar10._0_8_ = 0x8000000000000000;
        return auVar10;
      }
      param_1 = param_1 - param_3;
      lVar3 = -0x8000000000000000;
      if (param_1 != -0x7fffffffffffffff || -1 < (int)uVar4) {
        lVar3 = param_1 - (ulong)(uVar4 >> 0x1f);
      }
      uVar2 = 0;
      if (param_1 != -0x7fffffffffffffff || -1 < (int)uVar4) {
        uVar2 = uVar1;
      }
      else {
        uVar7 = 1;
      }
      auVar11._8_8_ = (ulong)uVar2 | uVar7 << 0x20;
      auVar11._0_8_ = lVar3;
      return auVar11;
    }
    param_2 = 0;
    uVar5 = 1;
    param_1 = 0x7fffffffffffffff;
  }
  auVar8._8_8_ = param_2 & 0xffffffff | uVar5 << 0x20;
  auVar8._0_8_ = param_1;
  return auVar8;
}


