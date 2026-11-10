/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162630; name: FUN_00162630
 */


ulong FUN_00162630(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return param_4 + param_3;
  case 1:
    return param_3 - param_4;
  case 2:
    return param_4 * param_3;
  case 3:
    uVar1 = FUN_001764e0(param_1,param_3,param_4);
    return uVar1;
  case 6:
    uVar1 = FUN_00176490(param_1,param_3,param_4);
    return uVar1;
  case 7:
    return param_4 & param_3;
  case 8:
    return param_4 | param_3;
  case 9:
    return param_4 ^ param_3;
  case 10:
    uVar1 = FUN_00176530(param_3,param_4);
    return uVar1;
  case 0xb:
    uVar1 = FUN_00176530(param_3,-param_4);
    return uVar1;
  case 0xc:
    return -param_3;
  case 0xd:
    uVar1 = ~param_3;
  }
  return uVar1;
}


