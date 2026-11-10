/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4da7c; name: FUN_02e4da7c
 */


void FUN_02e4da7c(float param_1,long *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = FUN_02e4f730();
  if (lVar6 != 0) {
    uVar5 = (int)param_2[1] - 1;
    while (uVar5 != 0) {
      uVar4 = uVar5 - 1 >> 1;
      pfVar1 = (float *)(*param_2 + (ulong)uVar4 * 0x10);
      if (*pfVar1 <= param_1) break;
      puVar2 = (undefined8 *)(*param_2 + (long)(int)uVar5 * 0x10);
      uVar3 = *(undefined8 *)(pfVar1 + 2);
      *puVar2 = *(undefined8 *)pfVar1;
      puVar2[1] = uVar3;
      uVar5 = uVar4;
    }
    *(float *)(*param_2 + (long)(int)uVar5 * 0x10) = param_1;
  }
  return;
}


