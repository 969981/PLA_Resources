/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d610; name: FUN_0028d610
 */


void FUN_0028d610(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-11_4_0-Release");
  lVar2 = *(long *)(param_1 + 0xa8);
  if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
    FUN_00878478(lVar2);
    FUN_00878498(lVar2,param_2,lVar3);
    FUN_0028ed60(lVar2,&DAT_03979804);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0028d7d0(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  return;
}


