/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a2d0; name: FUN_0016a2d0
 */


long FUN_0016a2d0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = FUN_0016d720(lVar4);
  plVar3 = *(long **)(lVar4 + 0x10);
  *(long **)(lVar4 + 0x10) = plVar3 + 2;
  *plVar3 = lVar1;
  *(uint *)(plVar3 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  puVar2 = (undefined4 *)
           FUN_00171c60(lVar4,*(undefined8 *)(param_1 + 0x50),*(long *)(lVar4 + 0x10) + -0x10);
  if (puVar2[2] == 0) {
    *puVar2 = 1;
    puVar2[2] = 1;
    if (0 < *(long *)(*(long *)(lVar4 + 0x18) + 0x18)) {
      FUN_0015dc70(lVar4);
    }
  }
  else {
    lVar1 = *(long *)(puVar2 + 4);
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -0x10;
  return lVar1;
}


