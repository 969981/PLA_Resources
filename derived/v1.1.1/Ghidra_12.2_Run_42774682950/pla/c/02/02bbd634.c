/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbd634; name: FUN_02bbd634
 */


void FUN_02bbd634(long param_1,long param_2,uint param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  
  lVar8 = *(long *)(param_1 + 0x1c0);
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x1c8) != 0)) {
    plVar6 = (long *)(*(long *)(param_1 + 0x1c8) + 0x58);
    (**(code **)(*plVar6 + 0x10))(plVar6,lVar8,lVar8 + 0x40,lVar8 + 0x80);
  }
  FUN_02bac564(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x58),
               *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x138));
  if (((*param_4 == '\0') && (param_4[1] == '\0')) &&
     (lVar8 = *(long *)(param_1 + 0x80), *(char *)(lVar8 + 0x278) != '\0')) {
    pcVar9 = (char *)(*(long *)(lVar8 + 0x238) + (ulong)*(uint *)(lVar8 + 0x270) * 0x18);
    lVar2 = 0;
    if (*pcVar9 != '\0') {
      lVar2 = *(long *)(pcVar9 + 8);
    }
    *(undefined8 *)(*(long *)(param_2 + 8) + (ulong)param_3 * 8) = *(undefined8 *)(lVar2 + 0xa0);
    if (*(char *)(lVar8 + 0x278) != '\0') goto LAB_02bbd6b8;
  }
  FUN_02bbd758(param_1);
  FUN_02bbda10(param_1,param_2,param_3,param_4);
LAB_02bbd6b8:
  plVar6 = *(long **)(param_1 + 0x88);
  plVar10 = *(long **)(param_1 + 0x90);
  while (plVar10 != plVar6) {
    plVar10 = plVar10 + -6;
    plVar7 = (long *)*plVar10;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  *(long **)(param_1 + 0x90) = plVar6;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd8);
  return;
}


