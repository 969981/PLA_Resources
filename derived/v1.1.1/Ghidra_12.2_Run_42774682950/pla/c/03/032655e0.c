/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032655e0; name: FUN_032655e0
 */


void FUN_032655e0(long param_1,ushort param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x128);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      puVar1 = (ushort *)(*(long *)(param_1 + 0x120) + (ulong)(uVar4 & 0xffff) * 8);
      uVar3 = *puVar1;
      if (param_2 <= uVar3) {
        *puVar1 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}


