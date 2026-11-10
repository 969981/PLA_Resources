/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dbe70; name: FUN_032dbe70
 */


undefined8 FUN_032dbe70(long *param_1,int *param_2,long param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((-1 < *param_2) && (0 < param_5)) {
    lVar3 = *(long *)(*param_1 + 0x38) + (long)*param_2 * 0x18;
    iVar2 = *(int *)(lVar3 + 0x10);
    if (0 < iVar2) {
      lVar3 = *(long *)(lVar3 + 8);
      lVar5 = (long)iVar2 + -1;
      plVar1 = (long *)(lVar3 + lVar5 * 0x10);
      iVar4 = 0;
      do {
        (*(code *)plVar1[1])(*plVar1 + param_3);
        if (0 < lVar5) {
          plVar6 = (long *)(lVar3 + (long)iVar2 * 0x10 + -0x20);
          lVar7 = lVar5;
          do {
            lVar7 = lVar7 + -1;
            (*(code *)plVar6[1])(*plVar6 + param_3);
            plVar6 = plVar6 + -2;
          } while (0 < lVar7);
        }
        iVar4 = iVar4 + 1;
        param_3 = param_2[1] + param_3;
      } while (iVar4 != param_5);
    }
  }
  return 0;
}


