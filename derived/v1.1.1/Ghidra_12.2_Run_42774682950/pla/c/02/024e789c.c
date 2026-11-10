/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024e789c; name: FUN_024e789c
 */


void FUN_024e789c(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar3 = FUN_024e794c(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  local_50 = 0;
  local_68 = 0;
  plStack_48 = param_1 + 2;
  if (lVar3 != 0) {
    local_68 = FUN_024e7998(lVar3);
  }
  lVar1 = local_68 + (lVar2 - lVar1 >> 4) * 0x10;
  local_50 = local_68 + lVar3 * 0x10;
  lStack_60 = lVar1;
  FUN_008e8b84(lVar1,*param_2,*param_3);
  local_58 = lVar1 + 0x10;
  FUN_008e9468(param_1,&local_68);
  FUN_008e94e8(&local_68);
  return;
}


