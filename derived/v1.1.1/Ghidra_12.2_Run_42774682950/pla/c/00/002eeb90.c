/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eeb90; name: FUN_002eeb90
 */


undefined1  [16] FUN_002eeb90(uint param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_1 == 2) {
    FUN_002eeea0(&local_20);
    auVar1._8_8_ = uStack_18;
    auVar1._0_8_ = local_20;
    return auVar1;
  }
  if (param_1 == 3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time_posix.cc",0x5a,2,
                 "assertion failed: %s","clock_type != GPR_TIMESPAN");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 < 2) {
    nn::os::GetSystemTick();
    uVar2 = nn::os::ConvertToTimeSpan();
    uVar4 = ((long)uVar2 >> 0x20) * 0x26d694b3 + ((uVar2 & 0xffffffff) * 0x26d694b3 >> 0x20);
    piVar3 = (int *)(((long)(((long)uVar2 >> 0x20) * 0x112e0be8 + ((long)uVar4 >> 0x20) +
                            ((uVar2 & 0xffffffff) * 0x112e0be8 + (uVar4 & 0xffffffff) >> 0x20)) >>
                     0x1a) - ((long)uVar2 >> 0x3f));
    uVar4 = (ulong)(uint)((int)uVar2 + (int)piVar3 * -1000000000);
  }
  else {
    piVar3 = __errno_location();
    uVar4 = 0;
    *piVar3 = 0x16;
  }
  auVar5._8_8_ = uVar4 | (ulong)param_1 << 0x20;
  auVar5._0_8_ = piVar3;
  return auVar5;
}


