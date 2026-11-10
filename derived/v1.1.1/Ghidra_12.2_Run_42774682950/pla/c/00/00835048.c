/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00835048; name: FUN_00835048
 */


void FUN_00835048(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  undefined8 local_18;
  
  lVar2 = FUN_008473ec();
  if (lVar2 != 0) {
    lVar2 = FUN_008473ec(param_1);
    lVar3 = FUN_00847388(param_1);
    if (lVar2 == lVar3) {
      *(short *)(param_1 + 0xdc) = *(short *)(param_1 + 0xdc) + 1;
      FUN_0084066c(param_1 + 0x180,&local_18,&local_24);
      uVar1 = FUN_00838320(param_1,local_18,local_24);
      FUN_00840228(param_1 + 0x180,uVar1);
    }
  }
  return;
}


