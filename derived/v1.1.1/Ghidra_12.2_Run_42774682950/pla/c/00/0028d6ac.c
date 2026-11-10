/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d6ac; name: FUN_0028d6ac
 */


void FUN_0028d6ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-11_4_0-Release");
  if ((*(long *)(param_1 + 0xa8) != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
    param_4 = (param_4 - param_1) + *(long *)(*(long *)(param_1 + 0xb0) + 8);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0028d888(*(long *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  return;
}


