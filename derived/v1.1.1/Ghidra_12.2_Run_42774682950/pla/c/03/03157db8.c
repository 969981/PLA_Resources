/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03157db8; name: FUN_03157db8
 */


uint FUN_03157db8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint local_18 [2];
  
  lVar1 = *(long *)(param_1 + 0x18) + (param_2 >> 0x16 & 0x3ff) * 0x20;
  local_18[0] = (uint)param_2 & 0x3fffff;
  lVar2 = FUN_03157e1c(lVar1,local_18);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 4);
    uVar4 = ((int)lVar2 - (int)*(undefined8 *)(lVar1 + 0x10)) * 0x20000000;
  }
  return ~(uVar3 | uVar4) >> 0x1f;
}


