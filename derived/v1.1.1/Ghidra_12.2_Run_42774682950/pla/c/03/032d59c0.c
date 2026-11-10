/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d59c0; name: FUN_032d59c0
 */


void FUN_032d59c0(void *param_1,void *param_2,size_t param_3)

{
  if (param_1 >= param_2 && param_1 != param_2) {
    FUN_032d57d0();
    return;
  }
  if (param_1 < param_2) {
    memmove(param_1,param_2,param_3);
    return;
  }
  return;
}


