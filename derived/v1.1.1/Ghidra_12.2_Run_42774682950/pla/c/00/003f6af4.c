/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6af4; name: FUN_003f6af4
 */


uint FUN_003f6af4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/security_connector.cc"
                 ,0x47,2,"assertion failed: %s","channel_creds() != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(ulong *)(param_2 + 0x20);
  if (uVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/security_connector.cc"
                 ,0x48,2,"assertion failed: %s","other_sc->channel_creds() != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 < uVar3) {
    return 0xffffffff;
  }
  if (uVar2 != uVar3) {
    return 1;
  }
  uVar1 = 0xffffffff;
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
    uVar1 = (uint)(*(ulong *)(param_2 + 0x28) < *(ulong *)(param_1 + 0x28));
  }
  return uVar1;
}


