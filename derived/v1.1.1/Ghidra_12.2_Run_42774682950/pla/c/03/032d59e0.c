/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d59e0; name: FUN_032d59e0
 */


void FUN_032d59e0(undefined8 *param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  puVar6 = param_1;
  uVar4 = param_3;
  if (((ulong)param_1 & 0xf) != 0) {
    uVar4 = 4 - (((ulong)param_1 & 0xf) >> 2);
    uVar7 = param_3;
    if (uVar4 <= param_3) {
      uVar7 = uVar4;
    }
    uVar4 = param_3 - uVar7;
    for (; puVar6 < (undefined8 *)((long)param_1 + uVar7 * 4);
        puVar6 = (undefined8 *)((long)puVar6 + 4)) {
      *(undefined4 *)puVar6 = param_2;
    }
  }
  if ((3 < uVar4) && (0 < (long)(uVar4 & 0xfffffffffffffffc))) {
    puVar2 = (undefined8 *)((long)puVar6 + (uVar4 & 0xfffffffffffffffc) * 4);
    puVar3 = puVar2;
    if (puVar2 <= puVar6 + 2) {
      puVar3 = puVar6 + 2;
    }
    uVar7 = ~(ulong)puVar6;
    uVar1 = ((uint)((long)puVar3 + uVar7 >> 4) & 0xfffffff) + 1;
    uVar4 = (ulong)uVar1 & 7;
    puVar5 = puVar6;
    if ((uVar1 & 7) != 0) {
      do {
        uVar4 = uVar4 - 1;
        puVar6 = puVar5 + 2;
        puVar5[1] = CONCAT44(param_2,param_2);
        *puVar5 = CONCAT44(param_2,param_2);
        puVar5 = puVar6;
      } while (uVar4 != 0);
    }
    if (0x6f < (long)puVar3 + uVar7) {
      do {
        puVar6[1] = CONCAT44(param_2,param_2);
        *puVar6 = CONCAT44(param_2,param_2);
        puVar6[3] = CONCAT44(param_2,param_2);
        puVar6[2] = CONCAT44(param_2,param_2);
        puVar6[5] = CONCAT44(param_2,param_2);
        puVar6[4] = CONCAT44(param_2,param_2);
        puVar6[7] = CONCAT44(param_2,param_2);
        puVar6[6] = CONCAT44(param_2,param_2);
        puVar6[9] = CONCAT44(param_2,param_2);
        puVar6[8] = CONCAT44(param_2,param_2);
        puVar6[0xb] = CONCAT44(param_2,param_2);
        puVar6[10] = CONCAT44(param_2,param_2);
        puVar6[0xd] = CONCAT44(param_2,param_2);
        puVar6[0xc] = CONCAT44(param_2,param_2);
        puVar6[0xf] = CONCAT44(param_2,param_2);
        puVar6[0xe] = CONCAT44(param_2,param_2);
        puVar6 = puVar6 + 0x10;
      } while (puVar6 < puVar2);
    }
  }
  for (; puVar6 < (undefined8 *)((long)param_1 + param_3 * 4);
      puVar6 = (undefined8 *)((long)puVar6 + 4)) {
    *(undefined4 *)puVar6 = param_2;
  }
  return;
}


