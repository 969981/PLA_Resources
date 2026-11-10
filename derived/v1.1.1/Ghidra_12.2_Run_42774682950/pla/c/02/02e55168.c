/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e55168; name: FUN_02e55168
 */


undefined8 FUN_02e55168(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_02e4a118(param_1 + 0x20);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_02e551c0(param_1);
    uVar2 = 0x34;
  }
  else {
    *(undefined4 *)(lVar1 + 0x280) = 0;
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined4 *)(lVar1 + 0x284) = 0;
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x40860a91;
  }
  return uVar2;
}


