/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d54ec; name: FUN_001d54ec
 */


undefined8 FUN_001d54ec(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar2;
    lVar4 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar4 != 0) {
    FUN_032d5af0(lVar4,"TtREBUILD",9);
  }
  iVar1 = FUN_02fc8118(*(long *)(param_1 + 0x18) + 0x18,
                       *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x34),1,0x20,0x10);
  uVar3 = 0x80040200;
  if (-1 < iVar1) {
    uVar3 = 0;
  }
  if (lVar4 != 0) {
    FUN_032d5b34(lVar4,&DAT_0390f40e);
  }
  return uVar3;
}


