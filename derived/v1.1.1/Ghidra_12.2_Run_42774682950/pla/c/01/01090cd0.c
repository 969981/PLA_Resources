/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090cd0; name: FUN_01090cd0
 */


bool FUN_01090cd0(long param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  
  FUN_02c5d628();
  uVar4 = FUN_010a2f00();
  uVar3 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98));
  bVar2 = (uVar4 & 1) != 0;
  uVar1 = uVar3 & 0xffff;
  if (bVar2) {
    uVar1 = uVar3 % 1000000;
  }
  *param_2 = uVar1;
  return bVar2;
}


