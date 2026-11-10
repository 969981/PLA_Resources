/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fd7ec; name: FUN_027fd7ec
 */


void FUN_027fd7ec(long param_1,uint param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  uint local_24;
  
  local_38 = (long *)0x0;
  local_50 = 0xf368632e9e83aa26;
  pcStack_48 = "View_BG";
  local_40 = 7;
  uVar1 = FUN_027f4f4c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x2cdf244e558aa08f;
  pcStack_48 = "EnableBG2D";
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  local_24 = param_2 & 1;
  plVar2 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50,&local_24);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0xdca5acb5512330bd;
  pcStack_48 = "HayabusaSkyEnable";
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  local_24 = ~param_2 & 1;
  plVar2 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50,&local_24);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d42690(uVar1,param_2 & 1,1);
  return;
}


