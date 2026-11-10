/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7748; name: FUN_02ec7748
 */


undefined8 FUN_02ec7748(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  char local_24 [4];
  
  puVar1 = (undefined8 *)FUN_02ec7ac8(param_1 + 0xe0,param_2,local_24);
  if ((puVar1 != (undefined8 *)0x0) && (local_24[0] != '\0')) {
    puVar5 = (uint *)(puVar1 + 1);
    uVar3 = *puVar5;
    if (uVar3 < 2) {
      FUN_02ea800c(*puVar1);
      puVar5 = (uint *)(param_1 + 0xe8);
      uVar3 = *puVar5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe0) + (ulong)uVar3 * 0x10 + -0x10);
      if (puVar1 < puVar2) {
        uVar4 = (*(long *)(param_1 + 0xe0) + (ulong)uVar3 * 0x10 + ~(ulong)puVar1) - 0x10;
        puVar6 = puVar1;
        if (((uint)uVar4 >> 4 & 1) == 0) {
          puVar6 = puVar1 + 2;
          *puVar1 = *puVar6;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + 3);
        }
        if (0xf < uVar4) {
          do {
            *puVar6 = puVar6[2];
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + 3);
            puVar1 = puVar6 + 4;
            puVar6[2] = *puVar1;
            *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar6 + 5);
            puVar6 = puVar1;
          } while (puVar1 < puVar2);
        }
        uVar3 = *puVar5;
      }
    }
    *puVar5 = uVar3 - 1;
  }
  return 1;
}


