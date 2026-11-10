/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fcb40; name: FUN_027fcb40
 */


void FUN_027fcb40(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 local_44;
  ulong local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xf368632e9e83aa26;
  pcStack_38 = "View_BG";
  local_30 = 7;
  local_28 = (long *)0x0;
  uVar1 = FUN_027f4f4c(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((param_2 & 1) == 0) {
    local_44 = 0;
    local_40 = 0x2cdf244e558aa08f;
    pcStack_38 = "EnableBG2D";
    local_30 = 0x1f;
    local_28 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = local_40 & 0xffffffff00000000;
  }
  else {
    local_40 = 0x2cdf244e558aa08f;
    pcStack_38 = "EnableBG2D";
    local_30 = 0x1f;
    local_28 = (long *)0x0;
    local_44 = 1;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = CONCAT44(local_40._4_4_,1);
  }
  FUN_00d41334(uVar1,&local_40);
  return;
}


