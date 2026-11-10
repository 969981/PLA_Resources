/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b3950; name: FUN_008b3950
 */


bool FUN_008b3950(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_24 [4];
  
  uVar3 = FUN_02c63a24(*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60));
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_24[0] = FUN_00931f0c(param_2);
    uVar4 = FUN_00923bc4(**(undefined8 **)(param_1 + 0x70));
    iVar2 = FUN_009982d4(uVar4,local_24);
    bVar1 = iVar2 != 1;
  }
  return bVar1;
}


