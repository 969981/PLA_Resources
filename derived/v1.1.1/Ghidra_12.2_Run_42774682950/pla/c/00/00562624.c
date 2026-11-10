/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00562624; name: FUN_00562624
 */


undefined8 FUN_00562624(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if ((uVar1 >> 4 & 1) == 0) {
    lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar2 != 0) {
      FUN_0055da3c(lVar2,0xf,*param_1);
    }
    FUN_00562088(param_1,lVar2);
    return 1;
  }
  *param_1 = uVar1 | 0x2000;
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (lVar2 != 0) {
    FUN_0055da3c(lVar2,0x13,*param_1);
  }
  FUN_00562088(param_1,lVar2);
  *param_1 = uVar1;
  return 1;
}


