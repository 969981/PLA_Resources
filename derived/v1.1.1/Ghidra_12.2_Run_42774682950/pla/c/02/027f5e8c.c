/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f5e8c; name: FUN_027f5e8c
 */


void FUN_027f5e8c(long param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = &DAT_753f74378b49da9c;
  pcStack_48 = "View_Top";
  local_40 = 8;
  uVar1 = FUN_027f4740(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_028068f0(uVar1,param_2,param_3 & 1);
  return;
}


