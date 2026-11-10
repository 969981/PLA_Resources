/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154010; name: FUN_00154010
 */


void FUN_00154010(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  char *local_a0;
  
  iVar1 = FUN_00159110(param_1,0,auStack_b0);
  if (iVar1 == 0) {
    FUN_00154110(param_1,"bad argument #%d (%s)",param_2,param_3);
  }
  else {
    FUN_001594c0(param_1,&DAT_03940192,auStack_b0);
    iVar1 = strcmp(local_a0,"method");
    if ((iVar1 == 0) && (param_2 = param_2 + -1, param_2 == 0)) {
      FUN_00154110(param_1,"calling \'%s\' on bad self (%s)",local_a8,param_3);
    }
    else {
      if (local_a8 == (undefined *)0x0) {
        iVar1 = FUN_00154220(param_1,auStack_b0);
        if (iVar1 == 0) {
          local_a8 = &DAT_038f8f88;
        }
        else {
          local_a8 = (undefined *)FUN_00150da0(param_1,0xffffffff,0);
        }
      }
      FUN_00154110(param_1,"bad argument #%d to \'%s\' (%s)",param_2,local_a8,param_3);
    }
  }
  return;
}


