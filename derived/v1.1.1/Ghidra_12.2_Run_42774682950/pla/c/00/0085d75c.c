/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085d75c; name: FUN_0085d75c
 */


void FUN_0085d75c(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_007f63fc();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  FUN_007f59c0(param_1,uVar2);
  FUN_0085f68c(*(undefined8 *)(param_1 + 0x1300),*(undefined8 *)(param_1 + 0x1308));
  return;
}


