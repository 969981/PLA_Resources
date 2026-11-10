/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e46f58; name: FUN_02e46f58
 */


void FUN_02e46f58(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x2200)) {
    if (*(long *)(lVar2 + 0x2210) != 0) goto LAB_02e46fa8;
  }
  lVar2 = FUN_02f59e30(10,0x2218);
  if (lVar2 != 0) {
    FUN_02e46ff0();
    if (*param_1 == 0) {
      *param_1 = lVar2;
      *(undefined8 *)(lVar2 + 0x2200) = 0;
      plVar1 = *(long **)(lVar2 + 0x2210);
    }
    else {
      *(long *)(lVar2 + 0x2200) = *param_1;
      *param_1 = lVar2;
LAB_02e46fa8:
      plVar1 = *(long **)(lVar2 + 0x2210);
    }
    if (plVar1 != (long *)0x0) {
      if (*plVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x2210) = 0;
      }
      else {
        *(long *)(lVar2 + 0x2210) = *plVar1;
      }
      *(int *)(lVar2 + 0x2208) = *(int *)(lVar2 + 0x2208) + -1;
    }
  }
  return;
}


