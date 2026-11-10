/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00827e58; name: FUN_00827e58
 */


undefined8 FUN_00827e58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int local_40 [4];
  undefined4 local_30 [4];
  
  lVar2 = *(long *)(param_1 + 0x100);
  uVar1 = FUN_00828950(lVar2);
  lVar2 = *(long *)(*(long *)(lVar2 + 8) + (uVar1 & 0xffffffff) * 0x18);
  do {
    if (lVar2 == 0) {
      local_30[0] = 0x2c0a;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      uVar3 = 0;
LAB_00827ee0:
      FUN_007ee578(local_40,local_30);
      if (local_40[0] != 0) {
        uVar3 = 0;
      }
      return uVar3;
    }
    uVar1 = FUN_007e45a8(lVar2,param_2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      goto LAB_00827ee0;
    }
    lVar2 = *(long *)(lVar2 + 0x48);
  } while( true );
}


