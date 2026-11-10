/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00230294; name: FUN_00230294
 */


void FUN_00230294(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04372a80 + 0x10;
  plVar2 = param_1 + 3;
  param_1[4] = (long)plVar2;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 1);
  lVar3 = param_2 + 0x18;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)plVar2;
  param_1[5] = *(long *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = 0;
  lVar7 = *(long *)(param_2 + 0x20);
  bVar4 = lVar3 != lVar7;
  if (param_3 == (long *)0x0) {
    while (bVar4) {
      lVar5 = *(long *)(lVar7 + 0x10);
      plVar6 = (long *)FUN_00232654(0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[2] = lVar5;
        *plVar6 = *plVar2;
        plVar6[1] = (long)plVar2;
        *(long **)(*plVar2 + 8) = plVar6;
        *plVar2 = (long)plVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      bVar4 = lVar3 != lVar7;
    }
  }
  else {
    while (bVar4) {
      lVar5 = (**(code **)(*param_3 + 0x78))(param_3,*(long *)(lVar7 + 0x10) + 0xb0,1);
      plVar6 = (long *)FUN_00232654(0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[2] = lVar5;
        *plVar6 = *plVar2;
        plVar6[1] = (long)plVar2;
        *(long **)(*plVar2 + 8) = plVar6;
        *plVar2 = (long)plVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      bVar4 = lVar3 != lVar7;
    }
  }
  return;
}


