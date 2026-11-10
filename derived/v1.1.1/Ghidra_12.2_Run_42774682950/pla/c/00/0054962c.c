/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054962c; name: FUN_0054962c
 */


void FUN_0054962c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374b68 + 0x10);
  if (4 < (ulong)param_1[1]) {
                    /* try { // try from 0054964c to 0054965b has its CatchHandler @ 00549664 */
    FUN_002f0430(param_1[1],
                 "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy.h",
                 0x186);
  }
  return;
}


