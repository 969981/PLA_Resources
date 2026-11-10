/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef150; name: FUN_002ef150
 */


undefined1  [16] FUN_002ef150(long param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (param_4 >> 0x20 != 3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time.cc",0x89,2,
                 "assertion failed: %s","b.clock_type == GPR_TIMESPAN");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((int)param_4 < 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time.cc",0x8d,2,
                 "assertion failed: %s","b.tv_nsec >= 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = (int)param_4 + (int)param_2;
  uVar2 = uVar1 + 0xc4653600;
  if ((int)uVar1 < 1000000000) {
    uVar2 = uVar1;
  }
  uVar4 = param_2 & 0xffffffff;
  if (1 < param_1 + 0x8000000000000001U) {
    if ((param_3 == 0x7fffffffffffffff) ||
       ((-1 < param_3 && (0x7fffffffffffffff - param_3 <= param_1)))) {
      uVar4 = 0;
      param_1 = 0x7fffffffffffffff;
    }
    else if ((param_3 == -0x8000000000000000) ||
            ((param_3 < 1 && (param_1 <= -0x8000000000000000 - param_3)))) {
      uVar4 = 0;
      param_1 = -0x8000000000000000;
    }
    else {
      param_3 = param_3 + param_1;
      param_1 = 0x7fffffffffffffff;
      if (param_3 != 0x7ffffffffffffffe || (int)uVar1 < 1000000000) {
        param_1 = param_3 + (ulong)(999999999 < (int)uVar1);
      }
      uVar3 = 0;
      if (param_3 != 0x7ffffffffffffffe || (int)uVar1 < 1000000000) {
        uVar3 = uVar2;
      }
      uVar4 = (ulong)uVar3;
    }
  }
  auVar5._8_8_ = param_2 & 0xffffffff00000000 | uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}


