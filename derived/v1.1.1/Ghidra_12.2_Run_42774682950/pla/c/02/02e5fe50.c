/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5fe50; name: FUN_02e5fe50
 */


void FUN_02e5fe50(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_02e625ac();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    FUN_02e622bc(lVar1 + 0x38,param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  return;
}


