/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083f0a8; name: FUN_0083f0a8
 */


void FUN_0083f0a8(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0083fd98(param_1 + 0x68);
  if ((lVar2 == param_2) && (uVar1 = FUN_0083fda0(param_1 + 0x68), param_3 == (uVar1 & 0xffff))) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return;
}


