/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03010e8c; name: FUN_03010e8c
 */


void FUN_03010e8c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  if (((param_4 == (long *)0x0) || (lVar1 = FUN_03005754(param_4,&local_38), lVar1 == 0)) ||
     ((int)(*(uint *)(lVar1 + 4) | ((int)lVar1 - (int)param_4[2]) * 0x20000000) < 0)) {
    lVar1 = FUN_032cf5b0(0xe0);
    FUN_03010d84();
    uVar2 = *(undefined8 *)(lVar1 + 8);
    FUN_032c4a00(lVar1,local_38,0xe0);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    FUN_032d65d0(lVar1,1);
    if (param_4 != (long *)0x0) {
      local_40 = lVar1;
      FUN_03007ba4(param_4,&local_38,&local_40);
    }
    *param_1 = lVar1;
  }
  else {
    lVar1 = FUN_03005754(param_4,&local_38);
    if (lVar1 == 0) {
      FUN_032d645c();
    }
    else {
      lVar1 = *(long *)(*param_4 + (long)*(int *)(lVar1 + 4) * 0x10 + 8);
      *param_1 = lVar1;
      if (lVar1 != 0) {
        FUN_032d645c();
      }
    }
  }
  return;
}


