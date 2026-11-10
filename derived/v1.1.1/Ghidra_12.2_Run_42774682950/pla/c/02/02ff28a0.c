/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff28a0; name: FUN_02ff28a0
 */


void FUN_02ff28a0(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long local_48;
  undefined8 local_38;
  
  if (((param_4 == (long *)0x0) ||
      (local_38 = param_2, lVar1 = FUN_02f79850(param_4,&local_38), lVar1 == 0)) ||
     ((int)(*(uint *)(lVar1 + 4) | ((int)lVar1 - (int)param_4[2]) * 0x20000000) < 0)) {
    lVar1 = FUN_032cf5b0(0x68);
    FUN_02ff2280(lVar1,param_2,param_3,param_4,0);
    if (param_4 != (long *)0x0) {
      local_48 = lVar1;
      local_38 = param_2;
      if (lVar1 != 0) {
        FUN_032d645c(lVar1);
      }
      FUN_02f6f888(param_4,&local_38,&local_48);
      if (local_48 != 0) {
        FUN_032d647c();
      }
    }
    *param_1 = lVar1;
  }
  else {
    local_38 = param_2;
    lVar1 = FUN_02f79850(param_4,&local_38);
    if ((lVar1 == 0) ||
       (plVar2 = (long *)(*param_4 + (long)*(int *)(lVar1 + 4) * 0x10 + 8), *plVar2 == 0)) {
      *param_1 = 0;
    }
    else {
      FUN_032d645c();
      lVar1 = *plVar2;
      *param_1 = lVar1;
      if (lVar1 != 0) {
        FUN_032d645c(lVar1);
        FUN_032d647c(lVar1);
      }
    }
  }
  return;
}


