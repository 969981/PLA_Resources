/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e540; name: FUN_0031e540
 */


undefined8 FUN_0031e540(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_1 + 0x28))();
  local_38 = *(undefined4 *)PTR_DAT_04373a40;
  local_40 = 0x7fffffff00000000;
  local_30 = 0;
  uStack_28 = 0;
  uStack_34 = 0x80000000;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uVar1 = FUN_00322db4(auStack_90,param_2);
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar1,auStack_90);
  if (lVar2 == 0) {
    return 0;
  }
  if ((int)local_40 == 1) {
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    FUN_0031e2b4(param_1);
  }
  return 0;
}


