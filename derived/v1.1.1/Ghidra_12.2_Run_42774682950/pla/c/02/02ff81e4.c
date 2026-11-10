/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff81e4; name: FUN_02ff81e4
 */


void FUN_02ff81e4(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_48;
  undefined8 local_38;
  
  if (((param_4 == (long *)0x0) ||
      (local_38 = param_2, lVar1 = FUN_02f79850(param_4,&local_38), lVar1 == 0)) ||
     ((int)(*(uint *)(lVar1 + 4) | ((int)lVar1 - (int)param_4[2]) * 0x20000000) < 0)) {
    lVar1 = tpidr_el0;
    lVar2 = *(long *)(lVar1 + 0x38d490);
    if (lVar2 == 0) {
      lVar2 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar2;
    }
    plVar3 = *(long **)(*(long *)(lVar2 + 8) + 0x58);
    lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0xd0,0);
    FUN_02ff76f4(lVar1,param_2,param_3,param_4);
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
       (plVar3 = (long *)(*param_4 + (long)*(int *)(lVar1 + 4) * 0x10 + 8), *plVar3 == 0)) {
      *param_1 = 0;
    }
    else {
      FUN_032d645c();
      lVar1 = *plVar3;
      *param_1 = lVar1;
      if (lVar1 != 0) {
        FUN_032d645c(lVar1);
        FUN_032d647c(lVar1);
      }
    }
  }
  return;
}


