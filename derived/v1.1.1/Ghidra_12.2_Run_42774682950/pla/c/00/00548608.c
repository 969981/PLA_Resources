/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00548608; name: FUN_00548608
 */


void FUN_00548608(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374ca8 + 0x10);
  if (*(char *)(*(long *)(param_1[1] + 0x38) + 0x10) != '\0') {
                    /* try { // try from 00548644 to 0054865f has its CatchHandler @ 00548664 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0x53,1,"resolving_lb=%p: resolver shutdown complete");
  }
  FUN_0054853c(param_1 + 1);
  return;
}


