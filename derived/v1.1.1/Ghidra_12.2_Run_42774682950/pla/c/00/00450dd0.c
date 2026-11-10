/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00450dd0; name: FUN_00450dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00450dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03889a18;
  uVar1 = _DAT_03889a10;
  *(undefined4 *)(param_1 + 2) = 0xc3d2e1f0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  return 1;
}


