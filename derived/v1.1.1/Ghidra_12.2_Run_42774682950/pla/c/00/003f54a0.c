/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f54a0; name: FUN_003f54a0
 */


bool FUN_003f54a0(long param_1)

{
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0xa5,1,"grpc_auth_context_peer_is_authenticated(ctx=%p)",param_1);
  }
  return *(long *)(param_1 + 0x30) != 0;
}


