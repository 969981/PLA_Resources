/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d8f0; name: FUN_0016d8f0
 */


void FUN_0016d8f0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x50);
  lVar2 = FUN_0015cc60(param_1,0x14,param_2 + 0x19);
  *(undefined4 *)(lVar2 + 0xc) = uVar1;
  *(undefined1 *)(lVar2 + 10) = 0;
  *(undefined1 *)(lVar2 + param_2 + 0x18) = 0;
  *(long *)(lVar2 + 0x10) = param_2;
  return;
}


