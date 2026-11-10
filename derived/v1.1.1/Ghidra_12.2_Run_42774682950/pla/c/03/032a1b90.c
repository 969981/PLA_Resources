/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a1b90; name: FUN_032a1b90
 */


uint FUN_032a1b90(byte *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x100);
  if ((int)*(uint *)(param_1 + 0x100) < 1) {
    uVar1 = 0;
    iVar2 = 4;
  }
  else {
    uVar1 = 0;
    pbVar4 = param_1 + 1;
    iVar2 = 4;
    puVar6 = param_2;
    uVar7 = uVar3;
    do {
      if (pbVar4[-1] == 0xb) {
        *puVar6 = uVar1;
        uVar1 = uVar1 + (uint)*pbVar4 * 0x10;
        iVar2 = 0x10;
      }
      uVar7 = uVar7 - 1;
      pbVar4 = pbVar4 + 8;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
    do {
      if (*param_1 != 0xb) {
        *param_2 = uVar1;
        if ((ulong)*param_1 == 8) {
          iVar5 = 4;
        }
        else {
          iVar5 = (uint)param_1[1] * (uint)(byte)(&DAT_03aac400)[*param_1];
        }
        uVar1 = uVar1 + iVar5 + 3 & 0xfffffffc;
      }
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 8;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  return (iVar2 + uVar1) - 1 & -iVar2;
}


