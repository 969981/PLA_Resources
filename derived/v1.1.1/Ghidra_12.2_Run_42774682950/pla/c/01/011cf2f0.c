/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cf2f0; name: FUN_011cf2f0
 */


void FUN_011cf2f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  long *local_48;
  
  lVar1 = *(long *)(param_1 + 0x5b8) - *(long *)(param_1 + 0x5b0);
  if (lVar1 != 0) {
    uVar2 = 0;
    ppuVar3 = &PTR_s_anime_L_pokeicon_00_select_041f7a28;
    do {
      if (uVar2 == *(byte *)(param_1 + 0x658)) {
        local_60 = ppuVar3[-1];
        local_58 = *ppuVar3;
        local_50 = ppuVar3[1];
      }
      else {
        local_60 = ppuVar3[2];
        local_58 = ppuVar3[3];
        local_50 = ppuVar3[4];
      }
      local_48 = (long *)0x0;
      FUN_00d2df7c(param_1 + 0x180,&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 9;
    } while (uVar2 < (ulong)(lVar1 >> 6));
  }
  return;
}


