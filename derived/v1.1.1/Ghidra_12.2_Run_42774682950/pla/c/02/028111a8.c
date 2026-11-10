/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028111a8; name: FUN_028111a8
 */


undefined8 FUN_028111a8(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 == 0) {
    plVar3 = *(long **)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(*(long *)(param_1 + 0x468) + 8);
    lVar2 = *(long *)(param_1 + 0x448);
    local_50 = *(undefined8 *)(lVar2 + 0xa8);
    local_48 = *(char **)(lVar2 + 0xb0);
    local_40 = *(undefined8 *)(lVar2 + 0xb8);
    local_38 = *(long **)(lVar2 + 0xc0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
    (**(code **)(*plVar3 + 0x98))(plVar3,param_1 + 0x428,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xa4) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    FUN_0281073c(param_1);
    local_50 = 0x898ac1bbdbe7b512;
    local_48 = "PLAY_UI_COMMON_CATCH";
    local_40 = 0x14;
    local_38 = (long *)0x0;
    FUN_028354b0(&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar1 = 1;
  }
  else if (*(int *)(*(long *)(param_1 + 0x420) + 0x68) == 0) {
    lVar2 = *(long *)(param_1 + 0x448);
    local_50 = *(undefined8 *)(lVar2 + 0xa8);
    uVar1 = *(undefined8 *)(param_1 + 0x408);
    local_48 = *(char **)(lVar2 + 0xb0);
    local_40 = *(undefined8 *)(lVar2 + 0xb8);
    local_38 = *(long **)(lVar2 + 0xc0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
    local_60 = CONCAT44((float)*(int *)(param_1 + 0x464),(float)*(int *)(param_1 + 0x460));
    uStack_58 = 0;
    FUN_0281133c(uVar1,&local_50,&local_60);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0xa4) = 1;
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


