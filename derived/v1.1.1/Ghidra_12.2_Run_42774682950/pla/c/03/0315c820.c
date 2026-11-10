/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c820; name: FUN_0315c820
 */


void FUN_0315c820(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar3 = PTR_PTR_0434a080;
  uVar1 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar1) {
    puVar7 = (undefined4 *)*param_2;
    if ((int)uVar1 < 0x40000000) {
      uVar5 = 0;
    }
    else {
      FUN_032bd0a8(uVar1);
      uVar5 = (*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    puVar4 = (undefined4 *)FUN_032bd1d4(puVar3,uVar2,4,0,0,(uint *)((long)param_1 + 0xc));
    lVar6 = (long)(int)uVar1 << 2;
    *param_1 = puVar4;
    do {
      lVar6 = lVar6 + -4;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 1) = uVar1;
  return;
}


