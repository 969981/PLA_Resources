/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1e10; name: FUN_003f1e10
 */


void FUN_003f1e10(undefined8 param_1,undefined8 param_2)

{
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/init.cc",0x82,1,
                 "grpc_register_plugin(init=%p, destroy=%p)",param_1,param_2);
  }
  if (DAT_0439c474 == 0x80) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/init.cc",0x83,2,
                 "assertion failed: %s","g_number_of_plugins != MAX_PLUGINS");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_0439c4e0)[(long)DAT_0439c474 * 2] = param_1;
  *(undefined8 *)(&DAT_0439c4e8 + (long)DAT_0439c474 * 0x10) = param_2;
  DAT_0439c474 = DAT_0439c474 + 1;
  return;
}


