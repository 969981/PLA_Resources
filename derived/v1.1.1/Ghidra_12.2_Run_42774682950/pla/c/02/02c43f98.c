/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c43f98; name: FUN_02c43f98
 */


void FUN_02c43f98(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  
  if (*(uint *)(param_1 + 0x278) <= param_3) {
    return;
  }
  lVar7 = *(long *)(param_1 + 600);
  pcVar5 = (char *)(lVar7 + (ulong)param_3 * 0x48 + 8);
  uVar6 = (ulong)param_3;
  if (*pcVar5 != '\0') {
    pcVar9 = (char *)(lVar7 + uVar6 * 0x48 + 10);
    if (*pcVar9 != '\0') {
      lVar2 = lVar7 + uVar6 * 0x48;
      plVar1 = *(long **)(lVar2 + 0x40);
      (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(lVar2 + 0x10));
      *pcVar9 = '\0';
    }
    lVar7 = lVar7 + uVar6 * 0x48;
    puVar8 = (undefined8 *)(lVar7 + 0x10);
    plVar1 = *(long **)(lVar7 + 0x40);
    (**(code **)(*plVar1 + 0x18))(plVar1,*puVar8);
    if (*pcVar5 != '\0') {
      *puVar8 = 0;
      *pcVar5 = '\0';
    }
  }
  lVar2 = *(long *)(param_2 + 0xe8);
  lVar7 = FUN_00232654(0x40);
  if (lVar7 != 0) {
    FUN_0022776c(lVar7);
    plVar1 = (long *)(lVar7 + 8);
    lVar3 = *plVar1;
    plVar4 = (long *)(lVar2 + 8);
    *plVar1 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar4 = lVar3;
  }
  FUN_02c478c0(*(long *)(param_1 + 600) + uVar6 * 0x48,lVar2,lVar7,*(undefined8 *)(param_1 + 0x358),
               param_4,lVar2);
  FUN_02c479e0(*(long *)(param_1 + 600) + uVar6 * 0x48,lVar2,param_5 & 1);
  return;
}


