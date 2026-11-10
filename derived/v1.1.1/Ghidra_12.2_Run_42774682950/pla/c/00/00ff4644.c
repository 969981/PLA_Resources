/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ff4644; name: FUN_00ff4644
 */


void FUN_00ff4644(undefined8 param_1,byte *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  byte *pbStack_28;
  
  pbStack_28 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  local_30 = param_1;
  puVar4 = (undefined8 *)FUN_00ff4900();
  *puVar4 = &PTR_FUN_04287c30;
  puVar4[2] = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  puVar4[5] = *(undefined8 *)(param_3 + 0x28);
  puVar4[6] = uVar3;
  puVar4[3] = uVar1;
  puVar4[4] = uVar2;
  FUN_00ff4a9c(&local_30);
  return;
}


