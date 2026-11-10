/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02760f2c; name: FUN_02760f2c
 */


void FUN_02760f2c(undefined8 *param_1,undefined4 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_00612290();
  param_1[3] = uVar1;
  if (param_3 != 0) {
    FUN_0276132c(param_1,param_3);
    puVar2 = (undefined4 *)param_1[1];
    lVar4 = param_3 * 4 + -4;
    puVar3 = param_2;
    if (((uint)lVar4 >> 2 & 1) == 0) {
      puVar3 = param_2 + 1;
      *puVar2 = *param_2;
      puVar2 = (undefined4 *)(param_1[1] + 4);
      param_1[1] = puVar2;
    }
    if (lVar4 != 0) {
      do {
        *puVar2 = *puVar3;
        lVar4 = param_1[1];
        param_1[1] = lVar4 + 4;
        *(undefined4 *)(lVar4 + 4) = puVar3[1];
        puVar3 = puVar3 + 2;
        puVar2 = (undefined4 *)(param_1[1] + 4);
        param_1[1] = puVar2;
      } while (puVar3 != param_2 + param_3);
    }
  }
  return;
}


