/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8c8c; name: FUN_001f8c8c
 */


void FUN_001f8c8c(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    bVar2 = *param_2;
    bVar1 = bVar2 - 0x20;
    if (0x19 < bVar2 - 0x61) {
      bVar1 = bVar2;
    }
    *param_1 = bVar1;
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return;
}


