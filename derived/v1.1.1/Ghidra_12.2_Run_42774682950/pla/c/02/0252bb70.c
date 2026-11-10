/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0252bb70; name: FUN_0252bb70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0252bb70(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    param_1[2] = 0x33ca3d70a;
    param_1[3] = 0;
    uVar2 = _UNK_03889a88;
    uVar1 = _DAT_03889a80;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[8] = 0x3f8000003f800000;
    param_1[9] = 0;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


