/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e740f4; name: FUN_02e740f4
 */


void FUN_02e740f4(int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  long local_40;
  long lStack_38;
  long local_30;
  long local_28;
  
  local_50 = *(undefined8 *)(param_2 + 0x30);
  local_40 = param_2 + 0x14;
  lStack_38 = param_2 + 0x1c;
  local_48 = param_1[1];
  local_44 = *(undefined4 *)(*(long *)(param_2 + 0x58) + 0x80);
  local_30 = param_2;
  lVar3 = FUN_02eb8600(param_2);
  local_28 = 0;
  if (lVar3 != 0) {
    local_28 = lVar3 + 0xa8;
  }
  local_60 = (**(code **)(**(long **)(param_2 + 0x50) + 0x10))();
  uVar1 = DAT_0440a188;
  if (*param_1 == 0) {
    uVar2 = (**(code **)(**(long **)(param_2 + 0x50) + 0x70))();
    FUN_02ea54c8(uVar1,uVar2,auStack_68);
  }
  else {
    FUN_02edd4c0(DAT_0440a170,*param_1,auStack_68);
  }
  return;
}


