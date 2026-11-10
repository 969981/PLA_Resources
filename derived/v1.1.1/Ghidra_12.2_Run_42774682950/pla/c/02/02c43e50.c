/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c43e50; name: FUN_02c43e50
 */


void FUN_02c43e50(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  char *pcVar9;
  
  if (*(uint *)(param_1 + 0x278) <= param_2) {
    return;
  }
  lVar6 = *(long *)(param_1 + 600);
  pcVar4 = (char *)(lVar6 + (ulong)param_2 * 0x48 + 8);
  uVar5 = (ulong)param_2;
  if (*pcVar4 != '\0') {
    pcVar9 = (char *)(lVar6 + uVar5 * 0x48 + 10);
    if (*pcVar9 != '\0') {
      lVar2 = lVar6 + uVar5 * 0x48;
      plVar1 = *(long **)(lVar2 + 0x40);
      (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(lVar2 + 0x10));
      *pcVar9 = '\0';
    }
    lVar6 = lVar6 + uVar5 * 0x48;
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    plVar1 = *(long **)(lVar6 + 0x40);
    (**(code **)(*plVar1 + 0x18))(plVar1,*puVar7);
    if (*pcVar4 != '\0') {
      *puVar7 = 0;
      *pcVar4 = '\0';
    }
  }
  lVar2 = *(long *)(param_1 + 0x88);
  lVar6 = FUN_00232654(0x40);
  if (lVar6 != 0) {
    FUN_0022776c(lVar6);
    plVar1 = (long *)(lVar6 + 8);
    lVar3 = *plVar1;
    plVar8 = (long *)(lVar2 + 8);
    *plVar1 = *plVar8;
    *(long **)(lVar3 + 8) = plVar8;
    *(long **)(*plVar8 + 8) = plVar1;
    *plVar8 = lVar3;
  }
  FUN_02c478c0(*(long *)(param_1 + 600) + uVar5 * 0x48,*(undefined8 *)(param_1 + 0x88),lVar6,
               *(undefined8 *)(param_1 + 0x358),param_3,*(undefined8 *)(param_1 + 0x88));
  FUN_02c479e0(*(long *)(param_1 + 600) + uVar5 * 0x48,*(undefined8 *)(param_1 + 0x88),param_4 & 1);
  return;
}


