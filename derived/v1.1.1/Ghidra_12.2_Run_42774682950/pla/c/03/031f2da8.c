/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f2da8; name: FUN_031f2da8
 */


void FUN_031f2da8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  int local_50 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_48 = (undefined **)0x0;
  local_40 = *(undefined4 *)(param_3 + 0x48);
  local_50[0] = 1 << (ulong)(*(uint *)(param_3 + 0x34) & 0x1f);
  lStack_58 = *(long *)(param_3 + 0x68);
  local_70 = 0xffffffff;
  uStack_68 = 1;
  local_78 = &DAT_042f1158;
  if (lStack_58 != 0) {
    local_48 = &local_78;
  }
  local_80 = 1;
  local_7c = 0xffffffff;
  local_88 = CONCAT44(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x38));
  local_60 = param_1;
  FUN_033299e0(0x6971e8f4);
  uVar1 = FUN_031596dc(param_1,param_2,local_50,&local_88,param_4);
  *param_5 = uVar1;
  return;
}


