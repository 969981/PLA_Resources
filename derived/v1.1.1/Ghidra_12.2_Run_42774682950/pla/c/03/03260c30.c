/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260c30; name: FUN_03260c30
 */


void FUN_03260c30(long *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *param_1;
  puVar1 = (uint *)(lVar7 + (long)(int)param_2 * 0x10);
  uVar4 = *puVar1;
  uVar8 = *(undefined8 *)(puVar1 + 1);
  uVar5 = puVar1[3];
  while (param_2 != 1) {
    uVar6 = param_2 >> 1;
    if (*(uint *)(lVar7 + (ulong)uVar6 * 0x10) <= uVar4) break;
    puVar3 = (undefined8 *)(lVar7 + (ulong)uVar6 * 0x10);
    puVar2 = (undefined8 *)(lVar7 + (long)(int)param_2 * 0x10);
    puVar2[1] = puVar3[1];
    *puVar2 = *puVar3;
    lVar7 = *param_1;
    param_2 = uVar6;
  }
  puVar1 = (uint *)(lVar7 + (long)(int)param_2 * 0x10);
  *puVar1 = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(puVar1 + 1) = uVar8;
  return;
}


