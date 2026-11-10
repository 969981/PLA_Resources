/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013eb68c; name: FUN_013eb68c
 */


void FUN_013eb68c(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  lVar3 = *param_1;
  local_50 = (undefined1 *)0xc3ea7ae1fd807b8c;
  pcStack_48 = "View_Research";
  local_40 = 0xd;
  uVar1 = FUN_013eb034(*(undefined8 *)(lVar3 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = &DAT_982ac928c78c196b;
  pcStack_48 = "View_Distribution";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  uVar2 = FUN_013eb178(*(undefined8 *)(lVar3 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_0140ee94(uVar1,param_2);
  FUN_0140ac74(uVar2,param_2);
  return;
}


