/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141e494; name: FUN_0141e494
 */


void FUN_0141e494(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0141dd38(param_1,1);
  FUN_0141df04(param_1,1);
  FUN_0141e0d0(param_1,1);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_1 + 0x5b4);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_1 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5d4);
  FUN_0141e3d0(param_1);
  FUN_0141d3f0(param_1);
  FUN_0141d60c(param_1);
  local_40 = 0x45935755e3ce0d10;
  pcStack_38 = "InputSkip";
  local_30 = 9;
  uStack_28 = 0;
  FUN_0141d694(param_1,&local_40,0);
  FUN_0141c648(param_1,1);
  return;
}


