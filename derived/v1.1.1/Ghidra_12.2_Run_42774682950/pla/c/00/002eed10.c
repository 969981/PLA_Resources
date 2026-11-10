/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eed10; name: FUN_002eed10
 */


void FUN_002eed10(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  timespec local_50;
  
  puVar1 = PTR_PTR_04373850;
  if (2 < (uint)(param_2 >> 0x20)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time_posix.cc",0xb3,2,
                 "assertion failed: %s",
                 "clock_type == GPR_CLOCK_MONOTONIC || clock_type == GPR_CLOCK_REALTIME || clock_type == GPR_CLOCK_PRECISE"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  while( true ) {
    auVar4 = (**(code **)puVar1)(param_2 >> 0x20);
    if (999999999 < auVar4._8_4_) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time_posix.cc",0xb6,2,
                   "assertion failed: %s","ts.tv_nsec >= 0 && ts.tv_nsec < 1e9");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar2 = FUN_002eef40(param_1,param_2,auVar4._0_8_,auVar4._8_8_);
    if (iVar2 < 1) break;
    auVar3 = FUN_002ef280(param_1,param_2,auVar4._0_8_,auVar4._8_8_);
    local_50.tv_sec = auVar3._0_8_;
    local_50.tv_nsec = (long)auVar3._8_4_;
    iVar2 = nanosleep(&local_50,(timespec *)0x0);
    if (iVar2 == 0) {
      return;
    }
  }
  return;
}


