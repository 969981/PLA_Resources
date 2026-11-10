/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011baf0c; name: FUN_011baf0c
 */


void FUN_011baf0c(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [24];
  long *local_38;
  
  lVar1 = param_1 + 0x180;
  FUN_02a4754c(auStack_50,&DAT_041f6520);
  FUN_00d2df7c(lVar1,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (param_2 == 0) {
    FUN_02a4754c(auStack_50,&DAT_041f6520);
    uVar2 = 0x3f800000;
  }
  else {
    if (param_2 != 1) goto LAB_011baf94;
    FUN_02a4754c(auStack_50,&DAT_041f6520);
    uVar2 = 0;
  }
  FUN_00d2e4b8(uVar2,lVar1,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
LAB_011baf94:
  FUN_02a4754c(auStack_50,&DAT_041f6538);
  FUN_00d2df7c(lVar1,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d42690(param_1,1,1);
  return;
}


