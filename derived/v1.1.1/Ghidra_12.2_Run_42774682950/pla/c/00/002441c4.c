/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002441c4; name: FUN_002441c4
 */


void FUN_002441c4(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  uVar1 = (bVar2 & 0x10) >> 4;
  if (((bVar2 >> 6 & 1) == 0) && ((param_3 & 1) != 0 || uVar1 != 0)) {
    *(byte *)(param_1 + 0x58) = bVar2 & 0xef;
    FUN_00243438(param_1,param_2);
  }
  for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != param_1 + 0x20; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_002441c4(lVar3 + -8,param_2,param_3 & 1 | uVar1);
  }
  return;
}


