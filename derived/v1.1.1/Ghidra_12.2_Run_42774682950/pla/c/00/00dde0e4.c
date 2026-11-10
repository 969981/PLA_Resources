/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dde0e4; name: FUN_00dde0e4
 */


void FUN_00dde0e4(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  pbStack_28 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  local_30 = param_1;
  puVar3 = (undefined8 *)FUN_00dde390();
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  FUN_00dde52c(&local_30);
  return;
}


