/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015061ec; name: FUN_015061ec
 */


void FUN_015061ec(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x630) + 0xa8) +
                                    (param_2 & 0xffffffff) * 8) * 0x10;
  uVar2 = FUN_02c61820(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(lVar1 + 0x640));
  if ((uVar2 & 1) == 0) {
    *(uint *)(lVar1 + 0x648) = *(uint *)(lVar1 + 0x648) ^ 1;
    FUN_0150654c(param_1,lVar1 + 0x63c,param_4);
    FUN_015065d4(param_1);
    FUN_01504f70(param_1);
    FUN_01506874(param_1,lVar1 + 0x63c);
    if (*(long *)(param_1 + 0x440) != 0) {
      FUN_02831440();
      return;
    }
  }
  else {
    FUN_015050c4(param_1,0);
    *(undefined4 *)(param_1 + 0x5ac) = 4;
  }
  return;
}


