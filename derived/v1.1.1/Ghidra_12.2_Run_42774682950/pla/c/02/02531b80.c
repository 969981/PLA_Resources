/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02531b80; name: FUN_02531b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02531b80(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03888ec8;
  uVar1 = _DAT_03888ec0;
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0x3f800000;
    param_1[5] = 0;
    param_1[2] = 0x500000002;
    param_1[3] = 0x3f80000000000000;
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


