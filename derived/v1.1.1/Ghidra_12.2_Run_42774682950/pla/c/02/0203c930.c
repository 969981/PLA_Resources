/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0203c930; name: FUN_0203c930
 */


void FUN_0203c930(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  local_30 = 0;
  FUN_0203c280(param_1,1,&local_30);
  lVar1 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_0202fb18();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  if (lVar1 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar3 = (long *)FUN_0201fe00();
    *plVar3 = lVar1;
    FUN_0201ff4c(&local_30);
  }
  return;
}


