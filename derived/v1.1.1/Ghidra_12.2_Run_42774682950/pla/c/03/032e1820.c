/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e1820; name: FUN_032e1820
 */


byte * FUN_032e1820(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)0x0;
  while( true ) {
    if (param_2 == (byte *)0x0) {
      return pbVar1;
    }
    bVar2 = param_2 == param_1;
    pbVar3 = param_2;
    if ((*param_2 & 1) == 0) {
      do {
        if (bVar2) {
          return pbVar1;
        }
        pbVar3 = *(byte **)(pbVar3 + 8);
        bVar2 = pbVar3 == param_1;
      } while ((*pbVar3 & 1) == 0);
    }
    if (bVar2) break;
    pbVar1 = param_2;
    param_2 = *(byte **)(pbVar3 + 8);
  }
  return pbVar1;
}


