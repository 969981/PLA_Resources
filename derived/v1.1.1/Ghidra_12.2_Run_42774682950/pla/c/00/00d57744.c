/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d57744; name: FUN_00d57744
 */


void FUN_00d57744(long param_1,int param_2,uint param_3,byte param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((*(int *)(param_1 + (long)param_2 * 0x60 + 0x640) != 0) &&
     (*(int *)(param_1 + (long)param_2 * 0x60 + 0x644) != 0)) {
    iVar1 = 0;
    if (param_2 != 2) {
      iVar1 = param_2;
    }
    lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
    lVar5 = **(long **)(lVar3 + 0x838);
    lVar3 = (*(long **)(lVar3 + 0x838))[1];
    if ((lVar5 != lVar3) && (*(char *)(lVar5 + 0x20) != '\0' || *(uint *)(lVar5 + 0x24) != param_3))
    {
      lVar2 = lVar5 + 0x30;
      do {
        lVar6 = lVar2;
        lVar5 = lVar3;
        if (lVar3 == lVar6) break;
        lVar2 = lVar6 + 0x30;
      } while ((*(char *)(lVar6 + 0x20) != '\0') ||
              (lVar5 = lVar6, *(uint *)(lVar6 + 0x24) != param_3));
    }
    if ((lVar5 != 0) &&
       (((lVar3 != lVar5 && (*(int *)(lVar5 + 0x28) != -1)) &&
        (plVar4 = (long *)FUN_00d57364(param_1,param_2), plVar4 != (long *)0x0)))) {
      if (*(int *)(*(long *)(*(long *)(*(long *)(param_1 + (long)param_2 * 0x60 + 0x638) + 0xa8) +
                            (ulong)param_3 * 0x10) + 8) == 1) {
        if (*(byte *)((long)plVar4 + 0xa2) != 0) {
          lVar5 = *plVar4;
          *(undefined1 *)((long)plVar4 + 0xa2) = 0;
          param_4 = 0;
          goto LAB_00d5788c;
        }
      }
      else {
        param_4 = param_4 & 1;
        if (*(byte *)((long)plVar4 + 0xa2) != param_4) {
          lVar5 = *plVar4;
          *(byte *)((long)plVar4 + 0xa2) = param_4;
LAB_00d5788c:
                    /* WARNING: Could not recover jumptable at 0x00d578a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x98))(plVar4,param_4);
          return;
        }
      }
    }
  }
  return;
}


