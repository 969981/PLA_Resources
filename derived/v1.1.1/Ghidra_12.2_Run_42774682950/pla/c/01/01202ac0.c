/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01202ac0; name: FUN_01202ac0
 */


undefined8 FUN_01202ac0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  lVar1 = FUN_001511d0(param_1,1);
  plVar3 = *(long **)(*(long *)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7)) + 0x78);
  if ((plVar3 != (long *)0x0) && (uVar2 = FUN_02a43a5c(plVar3[0xb]), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return 0;
}


