/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251180; name: FUN_00251180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00251180(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = DAT_0388a148;
  uVar1 = DAT_0388a140;
  uVar4 = _UNK_03889a88;
  uVar3 = _DAT_03889a80;
  param_1[1] = _UNK_03889a88;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  param_1[5] = _UNK_03888d18;
  param_1[4] = uVar1;
  uVar6 = _UNK_03889fd8;
  uVar5 = _DAT_03889fd0;
  if ((*(byte *)(param_2 + 0x18e) >> 3 & 1) != 0) {
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[5] = uVar2;
    param_1[4] = uVar1;
  }
  return;
}


