/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0106c130; name: FUN_0106c130
 */


void FUN_0106c130(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04379570;
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = *(undefined8 *)puVar3;
    uVar2 = *(undefined8 *)(puVar3 + 8);
    *param_1 = &PTR_FUN_04287c58;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


