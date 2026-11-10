/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96e20; name: FUN_02e96e20
 */


void FUN_02e96e20(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8);
      plVar2 = *(long **)(lVar1 + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar2;
          if (plVar2[4] != 0) {
            *(undefined4 *)(plVar2 + 5) = 0;
            (*DAT_0442d150)(0);
            plVar2[4] = 0;
            *(undefined4 *)((long)plVar2 + 0x2c) = 0;
          }
          (*DAT_0442d150)(0,plVar2);
          plVar2 = plVar4;
        } while (plVar4 != (long *)0x0);
        lVar1 = *(long *)(param_1 + 8);
      }
      *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


