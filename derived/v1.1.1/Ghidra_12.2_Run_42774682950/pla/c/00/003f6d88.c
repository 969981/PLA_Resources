/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6d88; name: FUN_003f6d88
 */


void FUN_003f6d88(void)

{
  if (DAT_0439cd40 != (undefined8 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker_registry.cc",0x4e,2,
                 "assertion failed: %s","g_handshaker_factory_lists == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_0439cd40 = (undefined8 *)FUN_002e2ec0(PTR_FUN_04373078,0x30);
  if (DAT_0439cd40 != (undefined8 *)0x0) {
    *DAT_0439cd40 = 0;
    DAT_0439cd40[3] = 0;
  }
  return;
}


