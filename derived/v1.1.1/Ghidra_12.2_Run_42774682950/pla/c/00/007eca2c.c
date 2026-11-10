/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eca2c; name: FUN_007eca2c
 */


/* WARNING: Removing unreachable block (ram,0x007ecae8) */

int FUN_007eca2c(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = -1;
  bVar3 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    if ((bVar3 == 0) || ((long)(ulong)param_2 <= (long)pbVar1 - (long)param_1)) {
      return iVar4 + 1;
    }
    if ((char)bVar3 < 0) {
      if ((int)(char)bVar3 + 0x3eU < 0x1e) {
        uVar5 = 2;
      }
      else if ((bVar3 & 0xf0) == 0xe0) {
        uVar5 = 3;
      }
      else if ((bVar3 & 0xf8) == 0xf0) {
        uVar5 = 4;
      }
      else {
        uVar5 = 5;
        if (((bVar3 & 0xfc) != 0xf8) && (uVar5 = 6, (bVar3 & 0xfe) != 0xfc)) {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 1;
    }
    uVar2 = uVar5;
    if (uVar5 == 0) {
      uVar2 = 1;
    }
    pbVar1 = pbVar1 + uVar2;
    iVar4 = iVar4 + 1;
    if (uVar5 == 0) break;
    bVar3 = *pbVar1;
  }
  return iVar4;
}


