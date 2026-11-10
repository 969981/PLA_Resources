/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c592a8; name: FUN_02c592a8
 */


void FUN_02c592a8(long *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      (**(code **)(*param_1 + 0x50))(param_1,uVar2);
      FUN_02c637c4();
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  return;
}


