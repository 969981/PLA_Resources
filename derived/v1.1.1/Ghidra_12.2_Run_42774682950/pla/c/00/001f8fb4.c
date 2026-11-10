/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8fb4; name: FUN_001f8fb4
 */


undefined1  [16] FUN_001f8fb4(void)

{
  undefined1 auVar1 [16];
  timeval local_20;
  
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = local_20._0_12_;
  return auVar1;
}


