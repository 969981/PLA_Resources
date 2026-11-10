/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6f28; name: FUN_010c6f28
 */


void FUN_010c6f28(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  long lVar1;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  
  local_80 = 0x1433b2d24a872d48;
  pcStack_78 = "common/trtype.dat";
  local_70 = 0x11;
  local_68 = (long *)0x0;
  FUN_010c4b50(local_60,&local_80,10);
  lVar1 = FUN_010c5c78(param_1,local_60);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (lVar1 != 0) {
    FUN_02c35d04(param_1,param_2,lVar1,param_3,0);
  }
  return;
}


