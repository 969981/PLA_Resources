/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c8c4; name: FUN_0020c8c4
 */


void FUN_0020c8c4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 5;
  *(undefined2 *)((long)param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  param_1[2] = uVar1;
  return;
}


