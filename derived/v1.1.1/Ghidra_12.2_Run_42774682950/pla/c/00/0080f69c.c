/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080f69c; name: FUN_0080f69c
 */


uint FUN_0080f69c(long param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [32];
  
  FUN_007f0ce0(auStack_70);
  (**(code **)(**(long **)(param_1 + 0x120) + 0x48))(*(long **)(param_1 + 0x120),param_2,auStack_70)
  ;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  if ((((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x1c0) == 0)) ||
     (sVar1 = FUN_007f63a4(param_1,auStack_70), -1 < sVar1)) {
    uVar2 = FUN_007f70b8(param_1,param_2);
  }
  else {
    FUN_007f0fc8(auStack_40,auStack_70);
    local_88 = 0;
    local_90 = 0x10;
    FUN_007e45fc(auStack_40,&local_90);
    FUN_007e34a4(auStack_40);
    FUN_007f0ce0(&local_90);
    FUN_007f0fc8(auStack_40,auStack_70);
    FUN_007f105c(&local_90,auStack_40);
    FUN_007e34a4(auStack_40);
    FUN_007f0fc8(auStack_40,&local_90);
    local_48 = 0;
    local_50 = 0x10;
    FUN_007e45fc(auStack_40,&local_50);
    FUN_007e34a4(auStack_40);
    FUN_0080fd30(*(undefined8 *)(param_1 + 0x11d8),&local_90);
    uVar2 = 0;
  }
  return uVar2 & 1;
}


