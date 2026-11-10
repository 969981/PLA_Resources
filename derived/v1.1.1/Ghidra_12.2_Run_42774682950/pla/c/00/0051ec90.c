/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051ec90; name: FUN_0051ec90
 */


void FUN_0051ec90(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 != 0) {
    lVar1 = *param_3;
    lVar2 = 0;
    lVar3 = 0;
    do {
                    /* try { // try from 0051ecc0 to 0051ecc7 has its CatchHandler @ 0051ecf8 */
      FUN_0051ed4c(param_2 + lVar2,lVar1);
      lVar3 = lVar3 + 1;
      lVar1 = *param_3 + 0x18;
      lVar2 = lVar2 + 0x18;
      *param_3 = lVar1;
    } while (param_4 != lVar3);
  }
  return;
}


