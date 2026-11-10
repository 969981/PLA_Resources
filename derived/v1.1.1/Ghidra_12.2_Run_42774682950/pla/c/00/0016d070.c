/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d070; name: FUN_0016d070
 */


void FUN_0016d070(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_50;
  undefined4 local_48;
  
  lVar2 = *(long *)(param_1 + 0x18);
  FUN_0016cc80(param_1,param_1);
  uVar1 = FUN_00171cf0(param_1);
  *(undefined8 *)(lVar2 + 0x40) = uVar1;
  *(undefined4 *)(lVar2 + 0x48) = 0x45;
  FUN_00171860(param_1,uVar1,2,0);
  local_48 = 0x48;
  local_50 = param_1;
  FUN_00171ba0(param_1,uVar1,1,&local_50);
  local_50 = FUN_00171cf0(param_1);
  local_48 = 0x45;
  FUN_00171ba0(param_1,uVar1,2,&local_50);
  FUN_0016d530(param_1);
  FUN_00173830(param_1);
  FUN_00169d70(param_1);
  *(undefined1 *)(lVar2 + 0x57) = 1;
  uVar1 = FUN_0014fe90(0);
  *(undefined8 *)(lVar2 + 0xd0) = uVar1;
  return;
}


