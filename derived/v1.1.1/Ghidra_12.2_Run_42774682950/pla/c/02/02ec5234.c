/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec5234; name: FUN_02ec5234
 */


undefined4 FUN_02ec5234(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar4 = (long *)FUN_02e96f44(DAT_0440a120 + 0x188);
  if (plVar4 == (long *)0x0) {
    return 2;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar7 = (uint)*param_3;
    if (uVar1 != 0) {
      uVar2 = uVar7 / uVar1;
    }
    for (plVar5 = *(long **)(*param_1 + (ulong)(uVar7 - uVar2 * uVar1) * 8); plVar5 != (long *)0x0;
        plVar5 = (long *)plVar5[3]) {
      if (plVar5[2] == *param_3) goto LAB_02ec52a0;
    }
  }
  plVar5 = (long *)FUN_02f59e30(0,0x20);
  if (plVar5 != (long *)0x0) {
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = *param_3;
    uVar6 = FUN_02ec5364(param_1,plVar5);
    if ((uVar6 & 1) == 0) {
      FUN_02f59e60(0,plVar5);
    }
    else {
LAB_02ec52a0:
      if (*(uint *)(plVar5 + 1) != 0) {
        lVar9 = (ulong)*(uint *)(plVar5 + 1) << 3;
        puVar8 = (undefined8 *)*plVar5;
        do {
          if ((long *)*puVar8 == plVar4) goto LAB_02ec52e4;
          lVar9 = lVar9 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      plVar5 = (long *)FUN_02ec6804(plVar5);
      if (plVar5 != (long *)0x0) {
        *plVar5 = (long)plVar4;
        (**(code **)(*plVar4 + 0x10))(plVar4);
LAB_02ec52e4:
        uVar3 = FUN_02ec53cc(plVar4,param_3);
        goto LAB_02ec5310;
      }
    }
  }
  uVar3 = 2;
LAB_02ec5310:
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return uVar3;
}


