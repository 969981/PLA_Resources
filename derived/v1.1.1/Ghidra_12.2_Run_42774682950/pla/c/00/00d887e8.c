/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d887e8; name: FUN_00d887e8
 */


void FUN_00d887e8(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar1 = *param_1;
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)param_1[2]) {
    if (param_2 == plVar5) {
      FUN_00d87ee0(param_1 + 3,param_2,param_3);
      param_1[1] = param_1[1] + 0x20;
    }
    else {
      lVar4 = (long)param_2 - lVar1 >> 5;
      FUN_00d88958(param_1,param_2,plVar5,param_2 + 4);
      lVar3 = *param_3;
      *param_3 = 0;
      lVar2 = *param_2;
      *param_2 = lVar3;
      if (lVar2 != 0) {
        FUN_00d85e08(lVar1 + lVar4 * 0x20 + 8);
      }
      lVar2 = param_3[1];
      lVar1 = lVar1 + lVar4 * 0x20;
      lVar3 = param_3[3];
      *(long *)(lVar1 + 0x10) = param_3[2];
      *(long *)(lVar1 + 0x18) = lVar3;
      *(long *)(lVar1 + 8) = lVar2;
    }
  }
  else {
    lVar1 = FUN_00d889f4(param_1,((long)plVar5 - lVar1 >> 5) + 1);
    plVar5 = param_1 + 3;
    lVar2 = *param_1;
    local_60 = 0;
    plStack_58 = plVar5;
    if (lVar1 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar1 << 5,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xb8))();
      }
    }
    lStack_70 = local_78 + ((long)param_2 - lVar2 >> 5) * 0x20;
    local_60 = local_78 + lVar1 * 0x20;
    local_68 = lStack_70;
    FUN_00d88a44(&local_78,param_3);
    FUN_00d88bbc(param_1,&local_78,param_2);
    FUN_00d87da4(&local_78);
  }
  return;
}


