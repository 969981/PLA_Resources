/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec8c4; name: FUN_007ec8c4
 */


/* WARNING: Removing unreachable block (ram,0x007ec9a8) */

uint FUN_007ec8c4(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar6 = *(byte **)(param_1 + 8);
  if (pbVar6 != (byte *)0x0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    if (uVar4 != 0) {
      if (*(int *)(param_1 + 0x18) != 1) {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x18) == 2) {
          uVar2 = uVar4 >> 1;
        }
        return uVar2;
      }
      bVar5 = *pbVar6;
      pbVar1 = pbVar6;
      uVar2 = 0;
      while( true ) {
        if ((bVar5 == 0) || ((long)(ulong)uVar4 <= (long)pbVar1 - (long)pbVar6)) {
          return uVar2;
        }
        if ((char)bVar5 < 0) {
          if ((int)(char)bVar5 + 0x3eU < 0x1e) {
            uVar7 = 2;
          }
          else if ((bVar5 & 0xf0) == 0xe0) {
            uVar7 = 3;
          }
          else if ((bVar5 & 0xf8) == 0xf0) {
            uVar7 = 4;
          }
          else {
            uVar7 = 5;
            if (((bVar5 & 0xfc) != 0xf8) && (uVar7 = 6, (bVar5 & 0xfe) != 0xfc)) {
              uVar7 = 0;
            }
          }
        }
        else {
          uVar7 = 1;
        }
        uVar3 = uVar7;
        if (uVar7 == 0) {
          uVar3 = 1;
        }
        pbVar1 = pbVar1 + uVar3;
        if (uVar7 == 0) break;
        bVar5 = *pbVar1;
        uVar2 = uVar2 + 1;
      }
      return uVar2;
    }
  }
  return 0;
}


