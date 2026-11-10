/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf343c; name: FUN_01bf343c
 */


bool FUN_01bf343c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01bf34a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_01bf34a0(param_1);
    if ((uVar2 & 1) == 0) {
      bVar1 = true;
    }
    else {
      uVar2 = FUN_01a5badc(param_1,param_1 + 0xf98);
      bVar1 = (uVar2 & 0xff) == 0 || uVar2 >> 0x20 != 2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


