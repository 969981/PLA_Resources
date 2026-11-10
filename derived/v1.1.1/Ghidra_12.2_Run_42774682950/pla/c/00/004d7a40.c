/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7a40; name: FUN_004d7a40
 */


bool FUN_004d7a40(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [48];
  
  iVar1 = FUN_00427b20(auStack_40,0x30);
  if (iVar1 < 1) {
    return false;
  }
  uVar2 = FUN_0040c710(auStack_40,0x30,*(undefined8 *)(param_1 + 0x7c0));
  *(undefined8 *)(param_1 + 0x7c0) = uVar2;
  FUN_004006a0(auStack_40,0x30);
  lVar3 = FUN_004d8010(*(undefined8 *)(param_1 + 0x7c0),*(undefined8 *)(param_1 + 0x798),
                       *(undefined8 *)(param_1 + 0x7a0));
  *(long *)(param_1 + 0x7b8) = lVar3;
  return lVar3 != 0;
}


