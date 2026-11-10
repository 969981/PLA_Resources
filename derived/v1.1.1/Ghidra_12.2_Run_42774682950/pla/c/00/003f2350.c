/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2350; name: FUN_003f2350
 */


void FUN_003f2350(void)

{
  int iVar1;
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/init.cc",0x104,1,
                 "grpc_shutdown(void)");
  }
  FUN_002ef750(&DAT_0439c480);
  iVar1 = DAT_0439c47c + -1;
  if (DAT_0439c47c + -1 == 0) {
    DAT_0439c470 = (undefined1)DAT_0439c47c;
                    /* try { // try from 003f2394 to 003f239b has its CatchHandler @ 003f23d0 */
    FUN_002ef9b0(&DAT_0439c4c0);
    iVar1 = DAT_0439c47c;
  }
                    /* try { // try from 003f239c to 003f23a7 has its CatchHandler @ 003f23ec */
  DAT_0439c47c = iVar1;
  FUN_002ef790(&DAT_0439c480);
  return;
}


