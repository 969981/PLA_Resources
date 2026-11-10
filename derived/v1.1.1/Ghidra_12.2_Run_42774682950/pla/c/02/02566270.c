/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02566270; name: FUN_02566270
 */


void FUN_02566270(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04379c88;
  lVar4 = *param_2;
  if (lVar4 != *param_3) {
    do {
      plVar1 = (long *)puVar3;
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 0x58);
      }
      plVar2 = (long *)puVar3;
      if (*param_4 != 0) {
        plVar2 = (long *)(*param_4 + 0x58);
      }
      if ((*plVar1 == *plVar2) && (*(long *)(lVar4 + 0x40) == *param_5)) break;
      FUN_02566428(param_2);
      lVar4 = *param_2;
    } while (lVar4 != *param_3);
  }
  lVar4 = *param_2;
  lVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar5;
  *param_1 = lVar4;
  return;
}


