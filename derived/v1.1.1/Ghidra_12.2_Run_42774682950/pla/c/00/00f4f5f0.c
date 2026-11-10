/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f4f5f0; name: FUN_00f4f5f0
 */


void FUN_00f4f5f0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 4) = 0xffffffff00000000;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


