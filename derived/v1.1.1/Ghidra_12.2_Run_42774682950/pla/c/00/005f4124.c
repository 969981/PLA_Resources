/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f4124; name: FUN_005f4124
 */


void FUN_005f4124(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == 4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                 ,0x118,2,"assertion failed: %s","old_state != GRPC_CHANNEL_SHUTDOWN");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == 4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                 ,0x119,2,"assertion failed: %s","new_state != GRPC_CHANNEL_SHUTDOWN");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x220);
    if (lVar1 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                   ,0x11e,2,"assertion failed: %s","num_connecting_ > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar2 = (long *)(param_1 + 0x220);
  }
  else if (param_2 == 3) {
    lVar1 = *(long *)(param_1 + 0x228);
    if (lVar1 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                   ,0x121,2,"assertion failed: %s","num_transient_failure_ > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar2 = (long *)(param_1 + 0x228);
  }
  else {
    if (param_2 != 2) goto LAB_005f4184;
    lVar1 = *(long *)(param_1 + 0x218);
    if (lVar1 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                   ,0x11b,2,"assertion failed: %s","num_ready_ > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar2 = (long *)(param_1 + 0x218);
  }
  *plVar2 = lVar1 + -1;
LAB_005f4184:
  if (param_3 == 1) {
    plVar2 = (long *)(param_1 + 0x220);
  }
  else if (param_3 == 3) {
    plVar2 = (long *)(param_1 + 0x228);
  }
  else {
    if (param_3 != 2) {
      return;
    }
    plVar2 = (long *)(param_1 + 0x218);
  }
  *plVar2 = *plVar2 + 1;
  return;
}


