/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020fdd74; name: FUN_020fdd74
 */


void FUN_020fdd74(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  byte *pbStack_28;
  
  pbStack_28 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  local_30 = param_1;
  puVar2 = (undefined8 *)FUN_020100d0();
  uVar1 = *(undefined4 *)(param_3 + 1);
  *puVar2 = *param_3;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  FUN_0201026c(&local_30);
  return;
}


