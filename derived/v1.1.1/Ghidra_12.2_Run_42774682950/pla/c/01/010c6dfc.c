/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6dfc; name: FUN_010c6dfc
 */


void FUN_010c6dfc(undefined8 param_1,undefined4 param_2,ushort param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      lVar1 = 4;
      uVar2 = 4;
    }
    else {
      if (param_3 != 1) {
        return;
      }
      lVar1 = 8;
      uVar2 = 8;
    }
  }
  else if (param_3 == 0xff) {
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    lVar1 = 10;
    uVar2 = 10;
  }
  if ((0x2efUL >> lVar1 & 1) == 0) {
    local_80 = 0xaecff13bebdf63e3;
    pcStack_78 = "common/bag_pocket.dat";
    local_70 = 0x15;
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
      FUN_02c35d04(param_1,param_2,lVar1,uVar2,0);
    }
  }
  return;
}


