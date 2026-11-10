/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054f1b0; name: FUN_0054f1b0
 */


void FUN_0054f1b0(char *param_1)

{
  undefined *puVar1;
  void *__ptr;
  size_t __n;
  byte local_48 [8];
  size_t local_40;
  void *local_38;
  
  if (*param_1 == '\0') {
                    /* try { // try from 0054f254 to 0054f277 has its CatchHandler @ 0054f2cc */
    std::__put_character_sequence<char,std::char_traits<char>>((ostream *)(param_1 + 8),"\n",1);
    FUN_002e6d50(local_48,param_1 + 0x10);
    __ptr = (void *)((ulong)local_48 | 1);
    __n = (ulong)(local_48[0] >> 1);
    if ((local_48[0] & 1) != 0) {
      __ptr = local_38;
      __n = local_40;
    }
    fwrite(__ptr,1,__n,*(FILE **)PTR_stderr_04372330);
    *param_1 = '\x01';
    if ((local_48[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
  }
  puVar1 = PTR_DAT_04373800 + 0x40;
  *(undefined **)(param_1 + 8) = PTR_DAT_04373800 + 0x18;
  *(undefined **)(param_1 + 0x78) = puVar1;
  *(undefined **)(param_1 + 0x10) = PTR_DAT_04373808 + 0x10;
  if ((param_1[0x50] & 1U) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x60));
  }
  std::streambuf::~streambuf((streambuf *)(param_1 + 0x10));
  std::ostream::~ostream((ostream *)(param_1 + 8));
  std::ios::~ios((ios *)(param_1 + 0x78));
  return;
}


