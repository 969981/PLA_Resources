/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fff30; name: FUN_003fff30
 */


void FUN_003fff30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    local_38 = param_1;
    local_30 = param_2;
    local_28 = lVar2;
    FUN_00400140(*(undefined8 *)(param_1 + 0x378));
    uVar1 = FUN_00405f40(*(undefined8 *)(param_1 + 0x28));
    FUN_00405f50(*(undefined8 *)(param_1 + 0x28),0);
    FUN_00405e20(lVar2,&LAB_003fffb0,&local_38);
    FUN_00405f50(*(undefined8 *)(param_1 + 0x28),uVar1);
    FUN_00400160(*(undefined8 *)(param_1 + 0x378));
  }
  return;
}


