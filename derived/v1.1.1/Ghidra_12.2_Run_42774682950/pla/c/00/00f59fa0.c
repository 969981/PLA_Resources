/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f59fa0; name: FUN_00f59fa0
 */


void FUN_00f59fa0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    *param_1 = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_00f5a01c(param_1);
    *param_1 = &PTR_LAB_041eec00;
    param_1[9] = &PTR_LAB_041eec30;
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


