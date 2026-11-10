/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276bfd8; name: FUN_0276bfd8
 */


void FUN_0276bfd8(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    FUN_027bd1a0(auStack_68,0);
    FUN_02729d38(param_1,0,auStack_68);
  }
  else {
    local_40 = 0xfabe4ab2184ef34d;
    pcStack_38 = "SkipConnectInternet";
    local_30 = 0x13;
    local_28 = (long *)0x0;
    FUN_02729a10(param_1,&local_40,&DAT_03a7e048);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


