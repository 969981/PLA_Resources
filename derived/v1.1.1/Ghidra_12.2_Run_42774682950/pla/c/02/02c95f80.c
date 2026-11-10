/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c95f80; name: FUN_02c95f80
 */


void FUN_02c95f80(long param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x460);
  lVar3 = *(long *)(param_1 + 0x468);
  if (lVar5 != lVar3) {
    do {
      if (**(char **)(lVar5 + 0x148) == '\0') goto LAB_02c95fc0;
      lVar5 = lVar5 + 0x178;
    } while (lVar3 != lVar5);
    lVar5 = lVar3;
  }
LAB_02c95fc0:
  *(undefined8 *)(lVar5 + 0x140) = *param_2;
  *(undefined8 *)(lVar5 + 0x148) = param_2[1];
  *(undefined8 *)(lVar5 + 0x150) = param_2[2];
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = *(long **)(lVar5 + 0x158);
  *(long **)(lVar5 + 0x158) = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(uint *)(lVar5 + 0x160) = param_3;
  (**(code **)(**(long **)(lVar5 + 0x168) + 0x48))(*(long **)(lVar5 + 0x168),0);
  if ((0x10 < param_3) || (bVar1 = true, (1 << (ulong)(param_3 & 0x1f) & 0x10014U) == 0)) {
    bVar1 = param_3 == 0xffffffff;
  }
  *(bool *)(lVar5 + 0x174) = bVar1;
  return;
}


