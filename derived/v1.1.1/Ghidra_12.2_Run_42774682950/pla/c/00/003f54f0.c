/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f54f0; name: FUN_003f54f0
 */


void FUN_003f54f0(long *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0xac,1,"grpc_auth_context_property_iterator(ctx=%p)",param_2);
  }
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  return;
}


