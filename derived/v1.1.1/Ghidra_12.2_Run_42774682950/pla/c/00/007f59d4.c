/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f59d4; name: FUN_007f59d4
 */


void FUN_007f59d4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  uVar6 = FUN_00847388();
  uVar1 = (uint)((ulong)uVar6 >> 0x20) ^ (uint)uVar6;
  local_60 = 0;
  FUN_007ecf14(&local_60);
  FUN_00821bd4(auStack_50,local_60 & 0xffffffff);
  FUN_00821c5c(auStack_50);
  FUN_00821c5c(auStack_50);
  FUN_00821c5c(auStack_50);
  uVar2 = FUN_00821c5c(auStack_50);
  uVar3 = FUN_00821c5c(auStack_50);
  uVar4 = FUN_00821c5c(auStack_50);
  uVar5 = FUN_00821c5c(auStack_50);
  FUN_00821c18(&local_60,uVar2 ^ uVar1,uVar3 ^ uVar1,uVar4 ^ uVar1,uVar5 ^ uVar1);
  *(ulong *)(param_2 + 0x1194) = local_60;
  *(undefined8 *)(param_2 + 0x119c) = uStack_58;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  FUN_00847298(param_1,param_2,&local_80);
  return;
}


