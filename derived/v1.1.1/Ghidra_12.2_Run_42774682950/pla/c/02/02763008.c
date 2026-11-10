/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02763008; name: FUN_02763008
 */


void FUN_02763008(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar3;
  if (param_2[1] - *param_2 != 0) {
    FUN_0276132c(param_1,param_2[1] - *param_2 >> 2);
    puVar1 = (undefined4 *)*param_2;
    puVar2 = (undefined4 *)param_2[1];
    if (puVar1 != puVar2) {
      puVar5 = (undefined4 *)param_1[1];
      uVar7 = (long)puVar2 + (-4 - (long)puVar1);
      puVar4 = puVar1;
      if (((uint)uVar7 >> 2 & 1) == 0) {
        puVar4 = puVar1 + 1;
        *puVar5 = *puVar1;
        puVar5 = (undefined4 *)(param_1[1] + 4);
        param_1[1] = puVar5;
      }
      if (3 < uVar7) {
        do {
          *puVar5 = *puVar4;
          lVar6 = param_1[1];
          param_1[1] = lVar6 + 4;
          *(undefined4 *)(lVar6 + 4) = puVar4[1];
          puVar4 = puVar4 + 2;
          puVar5 = (undefined4 *)(param_1[1] + 4);
          param_1[1] = puVar5;
        } while (puVar4 != puVar2);
      }
    }
  }
  return;
}


