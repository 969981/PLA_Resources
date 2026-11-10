/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4360; name: FUN_003e4360
 */


void FUN_003e4360(void)

{
  if ((DAT_0439c3e8 & 1) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel_init.cc",0x4e,2,
                 "assertion failed: %s","!g_finalized");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  qsort(DAT_0439c3f0,DAT_0439c3f8,0x20,(__compar_fn_t)&LAB_003e4410);
  qsort(DAT_0439c408,DAT_0439c410,0x20,(__compar_fn_t)&LAB_003e4410);
  qsort(DAT_0439c420,DAT_0439c428,0x20,(__compar_fn_t)&LAB_003e4410);
  qsort(DAT_0439c438,DAT_0439c440,0x20,(__compar_fn_t)&LAB_003e4410);
  qsort(DAT_0439c450,DAT_0439c458,0x20,(__compar_fn_t)&LAB_003e4410);
  DAT_0439c3e8 = 1;
  return;
}


