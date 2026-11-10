/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00269414; name: FUN_00269414
 */


void FUN_00269414(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0x101;
  *(undefined8 *)((long)param_1 + 0x24) = 0x417fd70a;
  uVar1 = FUN_0028d0f0(param_1 + 3);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x202;
  *(undefined8 *)((long)param_1 + 0x44) = 0x417fd70a;
  uVar1 = FUN_0028d0f0(param_1 + 7);
  param_1[2] = uVar1;
  return;
}


