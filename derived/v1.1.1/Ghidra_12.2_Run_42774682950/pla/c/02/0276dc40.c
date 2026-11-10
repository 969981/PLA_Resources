/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276dc40; name: FUN_0276dc40
 */


void FUN_0276dc40(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 auStack_d0 [12];
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar4 = FUN_02786f44();
  if ((uVar4 & 1) == 0) {
    local_50 = 0x247f3959cb4f59d3;
    pcStack_48 = "NoScanOtherData";
    local_40 = 0xf;
    local_38 = (long *)0x0;
    FUN_02729a10(param_1,&local_50,&DAT_03a7e048);
    plVar2 = local_38;
  }
  else {
    local_70 = 0x7bfd7b1169182eba;
    pcStack_68 = "ScanOtherData";
    local_60 = 0xd;
    local_58 = (long *)0x0;
    local_f0 = &LAB_02783a60;
    local_e8 = FUN_02783c68;
    local_e0 = &LAB_02783f9c;
    local_d8 = &LAB_02783fa8;
    auStack_d0[0] = param_2;
    FUN_0276d964(param_1,&local_70,&local_f0);
    pcVar3 = local_e8;
    bVar1 = local_e8 != (code *)0x0;
    local_e8 = (code *)0x0;
    plVar2 = local_58;
    if (bVar1) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar3)(auStack_d0);
      plVar2 = local_58;
    }
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  return;
}


