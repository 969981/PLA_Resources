/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d4ba8; name: FUN_001d4ba8
 */


void FUN_001d4ba8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_1 + 0x18);
  FUN_001d5bd4(lVar3 + 0x18,lVar2 + 0x18);
  uVar1 = *(undefined4 *)(lVar2 + 0x34);
  *(undefined8 *)(lVar3 + 0x2c) = *(undefined8 *)(lVar2 + 0x2c);
  *(undefined4 *)(lVar3 + 0x34) = uVar1;
  return;
}


