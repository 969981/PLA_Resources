/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008519b0; name: FUN_008519b0
 */


bool FUN_008519b0(long param_1,char param_2)

{
  if ((((((*(char *)(param_1 + 0x94) == param_2) || (*(char *)(param_1 + 0x95) == param_2)) ||
        (*(char *)(param_1 + 0x96) == param_2)) ||
       (((*(char *)(param_1 + 0x97) == param_2 || (*(char *)(param_1 + 0x98) == param_2)) ||
        ((*(char *)(param_1 + 0x99) == param_2 ||
         ((*(char *)(param_1 + 0x9a) == param_2 || (*(char *)(param_1 + 0x9b) == param_2)))))))) ||
      ((*(char *)(param_1 + 0x9c) == param_2 ||
       ((((((*(char *)(param_1 + 0x9d) == param_2 || (*(char *)(param_1 + 0x9e) == param_2)) ||
           (*(char *)(param_1 + 0x9f) == param_2)) ||
          ((*(char *)(param_1 + 0xa0) == param_2 || (*(char *)(param_1 + 0xa1) == param_2)))) ||
         ((*(char *)(param_1 + 0xa2) == param_2 ||
          ((*(char *)(param_1 + 0xa3) == param_2 || (*(char *)(param_1 + 0xa4) == param_2)))))) ||
        (*(char *)(param_1 + 0xa5) == param_2)))))) ||
     ((((*(char *)(param_1 + 0xa6) == param_2 || (*(char *)(param_1 + 0xa7) == param_2)) ||
       (*(char *)(param_1 + 0xa8) == param_2)) ||
      ((*(char *)(param_1 + 0xa9) == param_2 || (*(char *)(param_1 + 0xaa) == param_2)))))) {
    return true;
  }
  return *(char *)(param_1 + 0xab) == param_2;
}


