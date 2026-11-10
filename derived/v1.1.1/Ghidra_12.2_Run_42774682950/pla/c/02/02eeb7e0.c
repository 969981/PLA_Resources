/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeb7e0; name: FUN_02eeb7e0
 */


void FUN_02eeb7e0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  char local_14 [4];
  
  puVar1 = (undefined8 *)FUN_02eedca0(param_1,param_2,local_14);
  if ((puVar1 != (undefined8 *)0x0) && (local_14[0] != '\0')) {
    uVar4 = *(uint *)(param_1 + 1);
    puVar3 = (undefined8 *)(*param_1 + (ulong)uVar4 * 0x10 + -0x10);
    if (puVar1 < puVar3) {
      uVar5 = (*param_1 + (ulong)uVar4 * 0x10 + ~(ulong)puVar1) - 0x10;
      puVar2 = puVar1;
      if (((uint)uVar5 >> 4 & 1) == 0) {
        puVar2 = puVar1 + 2;
        *puVar1 = *puVar2;
        puVar1[1] = puVar1[3];
      }
      if (0xf < uVar5) {
        do {
          *puVar2 = puVar2[2];
          puVar2[1] = puVar2[3];
          puVar1 = puVar2 + 4;
          puVar2[2] = *puVar1;
          puVar2[3] = puVar2[5];
          puVar2 = puVar1;
        } while (puVar1 < puVar3);
      }
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}


