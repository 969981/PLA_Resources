/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4811c; name: FUN_02e4811c
 */


undefined8 FUN_02e4811c(long param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x10) = param_2[2];
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x18) = param_2[4];
  uVar1 = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x39);
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  return 1;
}


