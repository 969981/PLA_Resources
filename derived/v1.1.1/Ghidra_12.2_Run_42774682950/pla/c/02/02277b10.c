/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02277b10; name: FUN_02277b10
 */


void FUN_02277b10(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined1 *)*param_1;
    *puVar1 = 0;
    *(undefined1 **)(puVar1 + 4) = &DAT_3f0000003f000000;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


