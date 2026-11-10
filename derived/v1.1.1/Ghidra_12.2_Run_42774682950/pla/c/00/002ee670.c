/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee670; name: FUN_002ee670
 */


int FUN_002ee670(byte *param_1,byte *param_2,long param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)(byte)PTR_DAT_04373830[*param_1] - (uint)(byte)PTR_DAT_04373830[*param_2] != 0) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return (uint)(byte)PTR_DAT_04373830[*param_1] - (uint)(byte)PTR_DAT_04373830[*param_2];
}


