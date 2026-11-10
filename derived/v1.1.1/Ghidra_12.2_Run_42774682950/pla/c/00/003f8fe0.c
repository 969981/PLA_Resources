/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f8fe0; name: FUN_003f8fe0
 */


long FUN_003f8fe0(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0xcc,2,"assertion failed: %s","num_alpn_protocols != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_004f9d90();
  *param_1 = uVar1;
  lVar2 = FUN_002ebd50(uVar1 << 3);
  if (*param_1 != 0) {
    uVar1 = 0;
    do {
      uVar3 = FUN_004f9da0(uVar1);
      *(undefined8 *)(lVar2 + uVar1 * 8) = uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
  }
  return lVar2;
}


