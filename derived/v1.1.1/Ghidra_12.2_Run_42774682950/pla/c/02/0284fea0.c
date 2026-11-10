/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284fea0; name: FUN_0284fea0
 */


void FUN_0284fea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  local_28 = "bin/appli/parameter/constant_data.prmb";
  FUN_009f1b84(local_60,&local_28);
  FUN_00938764(param_1 + 0x50,0,local_60,0,param_2,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x240);
  }
  FUN_01087260(local_60,*(undefined8 *)(lVar2 + 0x250),uVar1);
  FUN_010868c8(param_1 + 0x80,local_60);
  return;
}


