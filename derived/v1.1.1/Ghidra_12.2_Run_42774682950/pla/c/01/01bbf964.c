/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbf964; name: FUN_01bbf964
 */


void FUN_01bbf964(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_01bbfa44(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  lVar5 = 0;
  plStack_48 = plVar1;
  if ((lVar4 != 0) &&
     (lVar5 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 7,0x10), lVar5 == 0))
  {
    (**(code **)(*(long *)*plVar1 + 0xb8))((long *)*plVar1);
  }
  lVar2 = lVar5 + (lVar3 - lVar2 >> 7) * 0x80;
  local_50 = lVar5 + lVar4 * 0x80;
  local_68 = lVar5;
  lStack_60 = lVar2;
  FUN_01b67c00(plVar1,lVar2,param_2);
  local_58 = lVar2 + 0x80;
  FUN_01b67da8(param_1,&local_68);
  FUN_01b67e50(&local_68);
  return;
}


