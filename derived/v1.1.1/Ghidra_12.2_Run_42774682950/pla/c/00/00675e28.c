/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00675e28; name: FUN_00675e28
 */


void FUN_00675e28(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_0064e76c(param_1);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar1 = param_2 + 9;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
  }
  FUN_0064ea98(param_1,&DAT_0398d884,lVar1);
  thunk_FUN_006d9ee4(param_1,"ussid",*(undefined4 *)(param_2 + 0x48));
  thunk_FUN_006d9ee4(param_1,"ucsid",*(undefined4 *)(param_2 + 0x4c));
  thunk_FUN_006d9ee4(param_1,"upcsid",*(undefined4 *)(param_2 + 0x50));
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    param_2 = param_2 + 0x59;
  }
  else {
    param_2 = *(long *)(param_2 + 0x68);
  }
  FUN_0064ea98(param_1,&DAT_03906deb,param_2);
  return;
}


