/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eec80; name: FUN_002eec80
 */


void FUN_002eec80(uint param_1)

{
  uint extraout_w1;
  
  if (2 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time_posix.cc",0xb3,2,
                 "assertion failed: %s",
                 "clock_type == GPR_CLOCK_MONOTONIC || clock_type == GPR_CLOCK_REALTIME || clock_type == GPR_CLOCK_PRECISE"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)PTR_PTR_04373850)();
  if (999999999 < extraout_w1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time_posix.cc",0xb6,2,
                 "assertion failed: %s","ts.tv_nsec >= 0 && ts.tv_nsec < 1e9");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


