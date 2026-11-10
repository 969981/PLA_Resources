/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00500740; name: FUN_00500740
 */


void FUN_00500740(void)

{
  if (DAT_0439ebb0 != (undefined8 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config_parser.cc"
                 ,0x21,2,"assertion failed: %s","g_registered_parsers == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_0439ebb0 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (DAT_0439ebb0 != (undefined8 *)0x0) {
    *DAT_0439ebb0 = 0;
  }
  return;
}


