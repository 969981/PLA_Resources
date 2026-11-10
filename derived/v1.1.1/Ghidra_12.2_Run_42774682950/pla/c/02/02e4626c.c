/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4626c; name: FUN_02e4626c
 */


void FUN_02e4626c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar2 = **(long **)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
    do {
      if (*(int *)(param_1 + 0x20) - 1 == uVar3) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = (*(long **)(param_1 + 0x18))[uVar3 & 0xffffffff];
    } while (lVar2 == 0);
  }
  else {
    uVar3 = 0;
  }
  do {
    do {
      *(undefined4 *)(lVar2 + 0x80) = 0;
      *(undefined2 *)(lVar2 + 0x94) = 1;
      (*(code *)**(undefined8 **)(lVar2 + 0x88))((undefined8 *)(lVar2 + 0x88));
      lVar2 = *(long *)(lVar2 + 0x48);
    } while (lVar2 != 0);
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8);
    } while (lVar2 == 0);
  } while( true );
}


