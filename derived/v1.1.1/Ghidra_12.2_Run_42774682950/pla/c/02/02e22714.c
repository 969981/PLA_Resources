/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22714; name: FUN_02e22714
 */


void FUN_02e22714(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)*DAT_044094f8 + 0x18))();
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = *puVar4;
    puVar2 = puVar4 + ((ulong)uVar3 - 1);
    if (puVar4 < puVar2) {
      uVar6 = (ulong)uVar3 * 8 - 9;
      uVar3 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
      if ((uVar3 & 3) != 0) {
        lVar7 = -((ulong)uVar3 & 3);
        puVar5 = puVar4;
        do {
          puVar4 = puVar5 + 1;
          *puVar5 = *puVar4;
          bVar1 = lVar7 != -1;
          lVar7 = lVar7 + 1;
          puVar5 = puVar4;
        } while (bVar1);
      }
      if (0x17 < uVar6) {
        do {
          *puVar4 = puVar4[1];
          puVar4[1] = puVar4[2];
          puVar4[2] = puVar4[3];
          puVar5 = puVar4 + 4;
          puVar4[3] = *puVar5;
          puVar4 = puVar5;
        } while (puVar5 < puVar2);
      }
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar3 - 1;
  }
  return;
}


