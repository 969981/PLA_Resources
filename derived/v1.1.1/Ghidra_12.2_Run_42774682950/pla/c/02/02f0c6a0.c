/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c6a0; name: FUN_02f0c6a0
 */


void FUN_02f0c6a0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  char local_14 [4];
  
  puVar1 = (undefined8 *)FUN_02f0d340(param_1,param_2,local_14);
  if ((puVar1 != (undefined8 *)0x0) && (local_14[0] != '\0')) {
    uVar3 = *(uint *)(param_1 + 1);
    puVar2 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8 + -8);
    if (puVar1 < puVar2) {
      uVar5 = (*param_1 + (ulong)uVar3 * 8 + ~(ulong)puVar1) - 8;
      uVar3 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
      uVar6 = (ulong)uVar3 & 3;
      if ((uVar3 & 3) != 0) {
        puVar4 = puVar1;
        do {
          puVar1 = puVar4 + 1;
          *puVar4 = *puVar1;
          uVar6 = uVar6 - 1;
          puVar4 = puVar1;
        } while (uVar6 != 0);
      }
      if (0x17 < uVar5) {
        do {
          *puVar1 = puVar1[1];
          puVar1[1] = puVar1[2];
          puVar1[2] = puVar1[3];
          puVar4 = puVar1 + 4;
          puVar1[3] = *puVar4;
          puVar1 = puVar4;
        } while (puVar4 < puVar2);
      }
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar3 - 1;
  }
  return;
}


