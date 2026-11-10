/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23bd4; name: FUN_02e23bd4
 */


void FUN_02e23bd4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0xc4) != 0) {
      FUN_02e25328(lVar1,*(undefined8 *)(param_1 + 0x10));
      if (1 < *(uint *)(param_1 + 0xc4)) {
        uVar2 = 1;
        lVar1 = 0x18;
        do {
          FUN_02e25328(*(long *)(param_1 + 0x60) + lVar1,*(undefined8 *)(param_1 + 0x10));
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x18;
        } while (uVar2 < *(uint *)(param_1 + 0xc4));
      }
      lVar1 = *(long *)(param_1 + 0x60);
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


