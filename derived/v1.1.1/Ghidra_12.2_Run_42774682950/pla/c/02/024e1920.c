/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024e1920; name: FUN_024e1920
 */


void FUN_024e1920(undefined8 param_1)

{
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  undefined1 *puStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0;
  puStack_28 = &LAB_024e3acc;
  local_50 = 0;
  puStack_48 = &LAB_024e3ae8;
  local_40 = 0;
  puStack_38 = &LAB_024e3ad4;
  local_60 = 0;
  puStack_58 = &LAB_024e3af0;
  local_70 = 0;
  puStack_68 = &LAB_024e3b18;
  local_78 = &LAB_024e3b48;
  local_88 = &LAB_024e3b68;
  uStack_80 = 0;
  local_98 = &LAB_024e3b78;
  uStack_90 = 0;
  local_20 = 0;
  uStack_18 = param_1;
  FUN_024e1a20(&uStack_18,"StaminaData","GetMax",&puStack_28,"SetMax",&puStack_38,"GetStamina",
               &puStack_48,"SetStamina",&puStack_58,&DAT_03951440,&puStack_68,&DAT_039c0758,
               &local_78,"IsFull",&local_88,"GetPercentage",&local_98);
  return;
}


