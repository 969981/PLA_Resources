/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb25c; name: FUN_011fb25c
 */


uint FUN_011fb25c(long param_1,undefined8 param_2,byte param_3,undefined2 param_4,undefined2 param_5
                 )

{
  uint uVar1;
  long lVar2;
  byte local_18 [2];
  undefined2 local_16;
  undefined2 local_14;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x78);
  uVar1 = 0;
  if (lVar2 != 0) {
    local_18[0] = param_3 & 1;
    local_16 = param_4;
    local_14 = param_5;
    uVar1 = FUN_027d95ac(lVar2,param_2,local_18);
  }
  return uVar1 & 1;
}


