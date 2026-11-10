/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0226a960; name: FUN_0226a960
 */


void FUN_0226a960(undefined8 param_1,byte *param_2,undefined8 *param_3)

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
  puVar4 = (undefined8 *)FUN_0226ac10();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  puVar4[2] = param_3[2];
  puVar4[3] = uVar3;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  FUN_0226adac(&local_30);
  return;
}


