/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c620; name: FUN_02f0c620
 */


void FUN_02f0c620(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    for (puVar4 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar3 * uVar1) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 2)) {
      if (*puVar4 == uVar2) {
        FUN_02f0c6a0(puVar4 + 10);
        return;
      }
    }
  }
  return;
}


