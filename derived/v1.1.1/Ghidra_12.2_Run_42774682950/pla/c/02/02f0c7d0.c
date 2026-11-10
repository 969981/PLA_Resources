/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c7d0; name: FUN_02f0c7d0
 */


undefined8 FUN_02f0c7d0(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long local_38;
  
  if (param_2 == 0) {
    return 0x34;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  plVar1 = (long *)(param_1 + 0x18);
  local_38 = param_2;
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    for (plVar6 = *(long **)(*plVar1 + (ulong)((uint)param_2 - uVar3 * uVar2) * 8);
        plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
      if (*plVar6 == param_2) {
        FUN_02f0c620(param_1,plVar6);
        *(undefined4 *)(plVar6 + 2) = param_3;
        goto LAB_02f0c850;
      }
    }
  }
  plVar6 = (long *)(*DAT_0442d138)(2,0x18);
  if (plVar6 == (long *)0x0) {
    FUN_02f0ca80(plVar1,&local_38);
  }
  else {
    *(undefined1 *)((long)plVar6 + 0x14) = 1;
    *plVar6 = param_2;
    *(undefined4 *)(plVar6 + 2) = param_3;
    FUN_02f0c918(plVar1,plVar6);
LAB_02f0c850:
    lVar4 = FUN_02f0c974(param_1,param_3);
    if (lVar4 == 0) {
      FUN_02f0ca80(plVar1,&local_38);
      if (plVar6 == (long *)0x0) {
        return 0x34;
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_02f0d83c(lVar4 + 0x28,plVar6);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = plVar6;
        return 1;
      }
      FUN_02f0ca80(plVar1,&local_38);
    }
    FUN_02f0c620(param_1,plVar6);
    (*DAT_0442d150)(2,plVar6);
  }
  return 0x34;
}


