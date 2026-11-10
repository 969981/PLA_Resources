/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b1f8; name: FUN_02e7b1f8
 */


undefined8 FUN_02e7b1f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar2 = (undefined8 *)FUN_02f59e30(0,0x80);
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0x34;
  }
  else {
    uVar4 = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(undefined4 *)(param_1 + 0x20) = 4;
    do {
      puVar1 = puVar2;
      puVar1[2] = 0;
      uVar4 = uVar4 + 1;
      *(undefined2 *)(puVar1 + 3) = 0xffff;
      *puVar1 = puVar1 + 4;
      puVar2 = puVar1 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
    uVar3 = 1;
    *puVar1 = 0;
  }
  return uVar3;
}


