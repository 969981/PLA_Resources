/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59c30; name: FUN_00d59c30
 */


int FUN_00d59c30(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  
  if (*(byte *)(param_1 + 0x6ef) == 0) {
    return 0;
  }
  iVar3 = 0;
  bVar1 = *(byte *)(param_1 + 0x6ee);
  uVar4 = 0;
  puVar5 = (uint *)(param_1 + 0x758);
  uVar6 = (uint)bVar1;
  uVar8 = (ulong)bVar1;
  if (uVar6 != 0) goto LAB_00d59c84;
  do {
    uVar2 = 0;
    while( true ) {
      uVar8 = (ulong)uVar2;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + (ulong)bVar1 * 0x14;
      if (uVar4 == *(byte *)(param_1 + 0x6ef)) {
        return iVar3;
      }
      if (uVar2 == 0) break;
LAB_00d59c84:
      if (1 < *(uint *)(param_1 + (ulong)(uVar4 * (int)uVar8) * 0x50 + 0x708)) {
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar6;
      if (1 < bVar1) {
        uVar7 = 1;
        puVar9 = puVar5;
        do {
          uVar7 = uVar7 + 1;
          if (1 < *puVar9) {
            iVar3 = iVar3 + 1;
          }
          puVar9 = puVar9 + 0x14;
        } while (uVar7 < bVar1);
      }
    }
  } while( true );
}


