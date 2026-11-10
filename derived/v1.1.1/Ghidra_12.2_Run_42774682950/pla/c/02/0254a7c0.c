/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0254a7c0; name: FUN_0254a7c0
 */


void FUN_0254a7c0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar3 = PTR_DAT_0437a100;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = *(undefined8 *)puVar3;
    uVar2 = *(undefined8 *)(puVar3 + 8);
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[2] = 0;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


