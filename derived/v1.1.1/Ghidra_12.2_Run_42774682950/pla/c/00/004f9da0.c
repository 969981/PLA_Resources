/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9da0; name: FUN_004f9da0
 */


undefined * FUN_004f9da0(ulong param_1)

{
  if (1 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/alpn/alpn.cc",0x2a,2,
                 "assertion failed: %s","i < GPR_ARRAY_SIZE(supported_versions)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (&PTR_s_grpc_exp_04184498)[param_1];
}


