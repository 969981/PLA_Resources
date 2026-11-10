/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031467ec; name: FUN_031467ec
 */


void FUN_031467ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_LAB_042da740;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = 0x3c23d70a;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar1 = DAT_0388a140;
  param_1[5] = DAT_0388a148;
  param_1[4] = uVar1;
  return;
}


