/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005503fc; name: FUN_005503fc
 */


void FUN_005503fc(undefined1 *param_1)

{
  void *__ptr;
  size_t __n;
  byte local_38 [8];
  size_t local_30;
  void *local_28;
  
                    /* try { // try from 00550410 to 00550483 has its CatchHandler @ 00550484 */
  std::__put_character_sequence<char,std::char_traits<char>>((ostream *)(param_1 + 8),"\n",1);
  FUN_002e6d50(local_38,param_1 + 0x10);
  __ptr = (void *)((ulong)local_38 | 1);
  __n = (ulong)(local_38[0] >> 1);
  if ((local_38[0] & 1) != 0) {
    __ptr = local_28;
    __n = local_30;
  }
  fwrite(__ptr,1,__n,*(FILE **)PTR_stderr_04372330);
  *param_1 = 1;
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


