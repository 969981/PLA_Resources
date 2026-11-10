/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aa6864; name: FUN_01aa6864
 */


undefined8 FUN_01aa6864(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar4 != plVar1) {
    lVar3 = *param_1;
    do {
      if (*plVar4 != 0) {
        (*(code *)**(undefined8 **)(*plVar4 + 8))();
        uVar2 = FUN_01aa55e8();
        if ((uVar2 & 1) != 0) goto LAB_01aa68b4;
      }
      plVar4 = plVar4 + 1;
    } while (plVar1 != plVar4);
    plVar4 = plVar1;
LAB_01aa68b4:
    if (plVar4 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar4 + 0x70))();
      *(undefined1 *)(lVar3 + 0x123) = 1;
      return 1;
    }
  }
  return 0;
}


