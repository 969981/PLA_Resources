/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053e100; name: FUN_0053e100
 */


void FUN_0053e100(undefined8 *param_1,ulong param_2)

{
  char *local_30;
  undefined4 local_28;
  
  if (*(undefined8 **)(param_1[1] + 0x68) == param_1) {
    *(undefined8 *)(param_1[1] + 0x68) = 0;
                    /* try { // try from 0053e130 to 0053e137 has its CatchHandler @ 0053e1d0 */
    (**(code **)*param_1)(param_1);
    if ((param_2 & 1) != 0) {
      if (*(char *)(param_1[1] + 0x60) != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                     ,0x24f,2,"assertion failed: %s","!health_check_client_->shutting_down_");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
        FUN_0053db60();
      }
      else {
        FUN_0053ed04(param_1[1] + 0x70);
        FUN_0053cf58(param_1[1]);
      }
    }
  }
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc";
  local_28 = 0x25d;
  FUN_005363bc(param_1[0x19],&local_30,"call_ended");
  return;
}


