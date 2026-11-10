/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eb3c4; name: FUN_007eb3c4
 */


void FUN_007eb3c4(undefined1 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  memset(param_1,0xff,0x10);
  *param_1 = 0x1e;
  param_1[3] = 1;
  param_1[1] = param_2;
  sVar2 = FUN_007eb6c4();
  sVar3 = FUN_007eb290();
  *(short *)(param_1 + 4) = sVar3 + sVar2;
  FUN_00821b80(auStack_30);
  local_18 = FUN_00821c88(auStack_30);
  memcpy(param_1 + 6,&local_18,8);
  uVar1 = FUN_00821c5c(auStack_30);
  param_1[0xe] = uVar1;
  FUN_007e90c0(param_1 + 0x10);
  return;
}


