/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002d40; name: FUN_03002d40
 */


void FUN_03002d40(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  FUN_032cf368(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x58),param_1,1,uVar1);
  return;
}


