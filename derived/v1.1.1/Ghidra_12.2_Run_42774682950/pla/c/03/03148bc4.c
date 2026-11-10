/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148bc4; name: FUN_03148bc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03148bc4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_031474bc(param_1,param_2,param_3);
  *param_1 = &PTR_LAB_042daec0;
  *(undefined1 *)(param_1 + 3) = 4;
  FUN_032c7c38(param_1 + 4,"MountedBallGun");
  uVar1 = _DAT_0388a520;
  param_1[0x15] = _UNK_0388a528;
  param_1[0x14] = uVar1;
  return;
}


