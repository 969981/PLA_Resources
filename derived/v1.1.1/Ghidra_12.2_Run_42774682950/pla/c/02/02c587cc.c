/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c587cc; name: FUN_02c587cc
 */


void FUN_02c587cc(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,0);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,0);
  FUN_02c653d0(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,1);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,1);
  FUN_02c653d0(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,2);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,2);
  FUN_02c653d0(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,3);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,3);
  FUN_02c653d0(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,4);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,4);
  FUN_02c653d0(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,5);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,5);
  FUN_02c653d0(uVar1,uVar2);
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  return;
}


