/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033526dc; name: FUN_033526dc
 */


void FUN_033526dc(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  if (4 < *(int *)(param_2 + 0x24)) {
    uVar1 = 4;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 << 1;
    } while ((int)uVar2 < *(int *)(param_2 + 0x24));
    FUN_0335274c(param_1,param_2,uVar2 >> 1,auStack_50,auStack_80);
    FUN_033526dc(param_1,auStack_50);
    FUN_033526dc(param_1,auStack_80);
  }
  return;
}


