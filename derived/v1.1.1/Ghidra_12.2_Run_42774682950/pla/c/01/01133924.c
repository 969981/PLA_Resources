/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01133924; name: FUN_01133924
 */


int FUN_01133924(long param_1)

{
  short *psVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar2 = 0x388;
  psVar1 = (short *)(param_1 + 0x196);
  while( true ) {
    if (psVar1[-0x2c] != 0) {
      iVar3 = iVar3 + 1;
    }
    if (lVar2 == 0) break;
    if (*psVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    lVar2 = lVar2 + -2;
    psVar1 = psVar1 + 0x58;
  }
  return iVar3;
}


