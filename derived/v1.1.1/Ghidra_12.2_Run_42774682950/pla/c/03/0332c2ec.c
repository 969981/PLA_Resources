/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332c2ec; name: FUN_0332c2ec
 */


bool FUN_0332c2ec(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 1) {
    bVar2 = true;
  }
  else {
    if (uVar1 == 2) {
      FUN_0332c35c(param_1);
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    if ((uVar1 & 0x230) != 0) {
      FUN_0332c498(param_1);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    bVar2 = *(int *)(param_1 + 8) <= *(int *)(param_1 + 0x14);
  }
  return bVar2;
}


