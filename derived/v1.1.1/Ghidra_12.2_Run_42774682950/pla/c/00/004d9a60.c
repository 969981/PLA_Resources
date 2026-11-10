/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9a60; name: FUN_004d9a60
 */


bool FUN_004d9a60(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  bVar2 = *(int *)(param_1 + 0x38) != 0;
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
  lVar3 = 0x48;
  if (bVar2) {
    lVar3 = 0x38;
  }
  lVar1 = 0x40;
  if (bVar2) {
    lVar1 = 0x30;
  }
  lVar3 = (**(code **)(lVar4 + 0x28))
                    (param_1,*(undefined8 *)(lVar4 + lVar1),*(undefined8 *)(lVar4 + lVar3),
                     *(long *)(param_1 + 0xa8) + 0x1a0);
  *(long *)(*(long *)(param_1 + 0xa8) + 0x220) = lVar3;
  return lVar3 != 0;
}


