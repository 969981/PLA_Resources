/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da28bc; name: FUN_00da28bc
 */


void FUN_00da28bc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_30 [16];
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x240);
  }
  FUN_01087260(auStack_30,*(undefined8 *)(lVar2 + 0x250),uVar1);
  FUN_010868c8(lVar3 + 0x38,auStack_30);
  *(undefined1 *)(lVar3 + 0x48) = 1;
  FUN_00da2978(param_1[1]);
  return;
}


