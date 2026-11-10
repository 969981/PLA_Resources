/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1970; name: FUN_003f1970
 */


undefined8 FUN_003f1970(uint param_1,undefined8 *param_2)

{
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/compression_internal.cc",
                 0xaf,1,"grpc_message_compression_algorithm_name(algorithm=%d, name=%p)",param_1,
                 param_2);
  }
  if (param_1 < 3) {
    *param_2 = (&PTR_s_identity_041571b0)[(int)param_1];
    return 1;
  }
  return 0;
}


