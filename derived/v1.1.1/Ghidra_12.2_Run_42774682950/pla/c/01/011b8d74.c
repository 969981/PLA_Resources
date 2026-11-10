/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b8d74; name: FUN_011b8d74
 */


void FUN_011b8d74(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [24];
  long *local_38;
  
  lVar1 = param_1 + 0x180;
  FUN_02a4754c(auStack_50,&DAT_041f60b8);
  FUN_00d2df7c(lVar1,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (param_2 == 0) {
    FUN_02a4754c(auStack_50,&DAT_041f60b8);
    uVar2 = 0;
  }
  else {
    if (param_2 != 1) goto LAB_011b8e1c;
    FUN_02a4754c(auStack_50,&DAT_041f60b8);
    uVar2 = 0x3f800000;
  }
  FUN_00d2e4b8(uVar2,lVar1,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
LAB_011b8e1c:
  FUN_02a4754c(auStack_50,&DAT_041f60d0);
  FUN_00d2df7c(lVar1,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d42690(param_1,1,1);
  return;
}


