/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eed6c; name: FUN_003eed6c
 */


void FUN_003eed6c(void)

{
  if (DAT_0439c468 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channelz_registry.cc",0x36,2,
                 "assertion failed: %s","g_channelz_registry != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


