/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f0ad8; name: FUN_031f0ad8
 */


void FUN_031f0ad8(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  if (0 < param_2) {
    do {
      lVar7 = *param_1;
      uVar6 = param_2 - 1;
      if (**(float **)(lVar7 + (long)((int)uVar6 >> 1) * 0x10 + 8) <
          **(float **)(lVar7 + (long)param_2 * 0x10 + 8)) {
        return;
      }
      puVar1 = (undefined8 *)(lVar7 + (long)param_2 * 0x10);
      puVar2 = (undefined8 *)(lVar7 + ((long)((ulong)uVar6 << 0x20) >> 0x21) * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      param_2 = (int)uVar6 >> 1;
    } while (1 < (int)uVar6);
  }
  return;
}


