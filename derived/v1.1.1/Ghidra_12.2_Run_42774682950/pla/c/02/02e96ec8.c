/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96ec8; name: FUN_02e96ec8
 */


void FUN_02e96ec8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 8);
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        do {
          plVar1 = (long *)*plVar1;
          (*DAT_0442d150)(0);
        } while (plVar1 != (long *)0x0);
        lVar2 = *(long *)(param_1 + 8);
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


