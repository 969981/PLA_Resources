/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010dbe10; name: FUN_010dbe10
 */


int FUN_010dbe10(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  ulong uVar4;
  
  uVar1 = FUN_010dac08(param_1,0);
  iVar2 = 0;
  if (uVar1 != 0) {
    uVar4 = (ulong)uVar1;
    puVar3 = (undefined2 *)(param_1 + 0x68);
    do {
      uVar1 = FUN_02c5072c(*puVar3,param_2);
      iVar2 = iVar2 + (uVar1 & 1);
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar4 != 0);
  }
  return iVar2;
}


