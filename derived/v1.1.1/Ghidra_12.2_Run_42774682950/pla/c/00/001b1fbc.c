/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b1fbc; name: FUN_001b1fbc
 */


long FUN_001b1fbc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  lVar2 = FUN_032cf5b0(0x30);
  FUN_001b1d70();
  FUN_001b206c(&local_28,*(undefined8 *)(param_1 + 0x18));
  lVar1 = local_28;
  local_28 = 0;
  lVar4 = *(long *)(lVar2 + 0x18);
  *(long *)(lVar2 + 0x18) = lVar1;
  if (lVar4 != 0) {
    FUN_001c3678(lVar4);
    FUN_032cf640(lVar4,0x200);
    lVar1 = local_28;
    if (local_28 != 0) {
      FUN_001c3678(local_28);
      FUN_032cf640(lVar1,0x200);
    }
  }
  *(long *)(*(long *)(lVar2 + 0x18) + 0x30) = lVar2;
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar3 = 0;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  }
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  return lVar2;
}


