/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117962c; name: FUN_0117962c
 */


void FUN_0117962c(long param_1,int param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 1) {
    uVar3 = 0;
    bVar2 = false;
    uVar1 = 1;
  }
  else if (param_2 == 2) {
    uVar1 = 0;
    uVar3 = 1;
    bVar2 = 1 < *(uint *)(param_1 + 0x5c0);
  }
  else if (param_2 == 3) {
    uVar1 = 0;
    bVar2 = false;
    uVar3 = 1;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    bVar2 = false;
  }
  local_50 = 0x45935755e3ce0d10;
  pcStack_48 = "InputSkip";
  local_40 = 9;
  uStack_38 = 0;
  FUN_01179178(param_1,&local_50,uVar1);
  local_50 = 0x98360caeb96d3207;
  pcStack_48 = "button_next";
  local_40 = 0xb;
  uStack_38 = 0;
  FUN_011792f8(param_1,&local_50,uVar3);
  local_50 = 0x55249f90b9dd8192;
  pcStack_48 = "button_page_l";
  local_40 = 0xd;
  uStack_38 = 0;
  FUN_01179478(param_1,&local_50,bVar2);
  local_50 = 0x5524b190b9dda028;
  pcStack_48 = "button_page_r";
  local_40 = 0xd;
  uStack_38 = 0;
  FUN_01179478(param_1,&local_50,bVar2);
  if (*(long *)(param_1 + 0x440) == 0) {
    return;
  }
  FUN_02831440();
  return;
}


