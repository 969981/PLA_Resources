/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142e0fc; name: FUN_0142e0fc
 */


void FUN_0142e0fc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  FUN_00d2f768(param_2 + 0x180,0x81,0);
  FUN_00d6b708(param_2,0);
  FUN_00d6b510(param_2);
  plVar2 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar3 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar3 == 0) || (*plVar2 == -0x6511f54e789ee445)) {
    plVar5 = plVar2;
  }
  else {
    lVar4 = lVar3 * 0x30;
    plVar6 = plVar2;
    do {
      lVar4 = lVar4 + -0x30;
      if (lVar4 == 0) goto LAB_0142e1c0;
      plVar1 = plVar6 + 6;
      plVar5 = plVar6 + 6;
      plVar6 = plVar6 + 6;
    } while (*plVar1 != -0x6511f54e789ee445);
  }
  if ((plVar5 != plVar2 + lVar3 * 6) && (plVar5[4] != 0)) {
    FUN_00d6c2c0(param_2,plVar5[4],0xe265adb2db981975,0,5);
  }
LAB_0142e1c0:
  *(long *)(param_1 + 0x810) = param_2;
  return;
}


