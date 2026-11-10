/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00428310; name: FUN_00428310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00428310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_03889228;
  uVar3 = _DAT_03889220;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = _UNK_03888f68;
  uVar1 = _DAT_03888f60;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar4 = _UNK_0388a498;
  uVar3 = _DAT_0388a490;
  uVar2 = _UNK_03889c58;
  uVar1 = _DAT_03889c50;
  param_1[0x1a] = 0x2000000000;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return 1;
}


