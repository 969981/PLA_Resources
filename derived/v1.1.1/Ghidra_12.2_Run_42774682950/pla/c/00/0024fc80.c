/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024fc80; name: FUN_0024fc80
 */


long * FUN_0024fc80(long *param_1,char *param_2,byte param_3)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  
  plVar3 = (long *)FUN_00232654(0xd8);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    puVar1 = PTR_DAT_04372a50 + 0x10;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[7] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *plVar3 = (long)puVar1;
    plVar3[1] = -1;
    FUN_0087ed04(plVar3 + 8);
    FUN_0087e7c0(plVar3 + 0x11);
    plVar3[0x1a] = -0x100000000;
  }
  plVar4 = (long *)FUN_00232654(0xa0);
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    lVar5 = 0;
    plVar4[0x12] = (long)plVar3;
    *plVar4 = (long)plVar4;
    plVar4[1] = (long)plVar4;
    *(byte *)(plVar4 + 0x13) = param_3 & 1;
    *(undefined1 *)(plVar4 + 2) = 0;
    cVar2 = *param_2;
    plVar7 = plVar4;
    while (cVar2 != '\0') {
      *(char *)(plVar7 + 2) = cVar2;
      if (((int)lVar5 == 0x7e) || (param_2[lVar5 + 1] == '\0')) {
        lVar5 = lVar5 + 1;
        plVar7 = (long *)((long)plVar7 + 0x11);
        goto LAB_0024fd58;
      }
      *(char *)((long)plVar7 + 0x11) = param_2[lVar5 + 1];
      lVar5 = lVar5 + 2;
      plVar7 = (long *)((long)plVar4 + lVar5);
      cVar2 = param_2[lVar5];
    }
    plVar7 = plVar7 + 2;
LAB_0024fd58:
    *(undefined1 *)plVar7 = 0;
    pcVar6 = param_2 + lVar5;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    lVar5 = *plVar4;
    *plVar4 = *param_1;
    *(long **)(lVar5 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar4;
    *param_1 = lVar5;
  }
  return plVar3;
}


