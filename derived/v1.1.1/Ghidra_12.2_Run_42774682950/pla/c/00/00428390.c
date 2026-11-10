/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00428390; name: FUN_00428390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00428390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _UNK_038892c8;
  uVar1 = _DAT_038892c0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar4 = _UNK_0388a158;
  uVar3 = _DAT_0388a150;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar4 = _UNK_0388a168;
  uVar3 = _DAT_0388a160;
  uVar2 = _UNK_03889058;
  uVar1 = _DAT_03889050;
  param_1[0x1a] = 0x4000000000;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return 1;
}


