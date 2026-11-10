/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6a2c; name: FUN_02ec6a2c
 */


void FUN_02ec6a2c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)FUN_02f59e30(0,0x80);
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(undefined4 *)(param_1 + 0x20) = 4;
    do {
      puVar1 = puVar2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar3 = uVar3 + 1;
      *puVar1 = puVar1 + 4;
      puVar2 = puVar1 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
    *puVar1 = 0;
  }
  return;
}


