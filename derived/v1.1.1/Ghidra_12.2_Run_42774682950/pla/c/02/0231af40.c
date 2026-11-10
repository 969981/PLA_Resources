/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0231af40; name: FUN_0231af40
 */


void FUN_0231af40(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    *param_1 = 1;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 2;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


