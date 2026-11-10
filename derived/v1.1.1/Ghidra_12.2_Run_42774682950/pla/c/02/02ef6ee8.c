/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6ee8; name: FUN_02ef6ee8
 */


undefined8 FUN_02ef6ee8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  char local_14 [4];
  
  puVar1 = (undefined8 *)FUN_02ef7dac(param_1,param_2,local_14);
  uVar2 = 0;
  if ((puVar1 != (undefined8 *)0x0) && (local_14[0] != '\0')) {
    uVar4 = *(uint *)(param_1 + 1);
    puVar3 = (undefined8 *)(*param_1 + (ulong)uVar4 * 8 + -8);
    if (puVar1 < puVar3) {
      uVar6 = (*param_1 + (ulong)uVar4 * 8 + ~(ulong)puVar1) - 8;
      uVar4 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
      uVar7 = (ulong)uVar4 & 3;
      if ((uVar4 & 3) != 0) {
        puVar5 = puVar1;
        do {
          puVar1 = puVar5 + 1;
          *puVar5 = *puVar1;
          uVar7 = uVar7 - 1;
          puVar5 = puVar1;
        } while (uVar7 != 0);
      }
      if (0x17 < uVar6) {
        do {
          *puVar1 = puVar1[1];
          puVar1[1] = puVar1[2];
          puVar1[2] = puVar1[3];
          puVar5 = puVar1 + 4;
          puVar1[3] = *puVar5;
          puVar1 = puVar5;
        } while (puVar5 < puVar3);
      }
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
    uVar2 = 1;
  }
  return uVar2;
}


