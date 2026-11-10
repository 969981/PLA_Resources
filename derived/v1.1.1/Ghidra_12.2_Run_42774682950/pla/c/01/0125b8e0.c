/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125b8e0; name: FUN_0125b8e0
 */


void FUN_0125b8e0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffff00000000;
  uVar1 = FUN_02c5d638(param_2);
  param_1[6] = uVar1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  FUN_01090b20(param_1,param_2);
  return;
}


