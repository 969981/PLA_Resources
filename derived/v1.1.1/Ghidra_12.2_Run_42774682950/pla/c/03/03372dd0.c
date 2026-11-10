/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372dd0; name: FUN_03372dd0
 */


int FUN_03372dd0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar3 = 0;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 0) {
      return iVar3;
    }
    uVar5 = *(undefined8 *)(param_1 + (long)param_2 * 8);
    uVar4 = (uint)uVar5;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar2 = (uint)((ulong)uVar5 >> 0x20);
    uVar2 = uVar2 >> 1 | uVar2;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    iVar1 = 0x40 - ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    if (uVar2 != 0) {
      iVar1 = 0x20 - uVar2;
    }
    iVar3 = iVar1 + iVar3;
  } while (iVar1 == 0x40);
  return iVar3;
}


