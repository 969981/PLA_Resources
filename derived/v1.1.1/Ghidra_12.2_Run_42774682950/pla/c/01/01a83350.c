/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a83350; name: FUN_01a83350
 */


uint FUN_01a83350(float param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = param_2[0xb8];
  if (param_1 < *(float *)(lVar4 + 0x70)) {
    uVar3 = 0;
  }
  else if (param_1 < *(float *)(lVar4 + 0x74)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
    if (*(float *)(lVar4 + 0x78) <= param_1) {
      uVar3 = 3;
    }
  }
  uVar2 = (**(code **)(*param_2 + 0x238))(param_2);
  uVar1 = uVar3;
  if (((uVar2 & 1) != 0) &&
     (uVar1 = *(uint *)((long)param_2 + 0x9d4), uVar3 <= *(uint *)((long)param_2 + 0x9d4))) {
    uVar1 = uVar3;
  }
  return uVar1;
}


