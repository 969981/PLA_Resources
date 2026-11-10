/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c9310; name: FUN_008c9310
 */


void FUN_008c9310(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  FUN_008c5a38();
  FUN_00923a74();
  FUN_02948a74();
  uVar3 = FUN_0295e400();
  uVar3 = FUN_0294cf6c(uVar3,*(undefined1 *)(param_1 + 0x79));
  uVar2 = FUN_02951778(uVar3,*(undefined4 *)(param_1 + 0x80));
  uVar1 = 0;
  if ((uVar2 & 0xff) < 4) {
    uVar1 = uVar2;
  }
  FUN_0293d0c0(param_2,*(undefined1 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
               *(undefined1 *)(param_1 + 0x79),uVar1);
  return;
}


