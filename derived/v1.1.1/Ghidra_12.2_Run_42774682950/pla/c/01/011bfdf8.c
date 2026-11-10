/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bfdf8; name: FUN_011bfdf8
 */


void FUN_011bfdf8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  lVar6 = (ulong)*(byte *)(param_1 + 4) * 0x150;
  lVar4 = *(long *)(&DAT_041f68c8 + lVar6);
  puStack_48 = (&PTR_s_pane_L_waza_btn_00_P_type_affini_041f68d0)
               [(ulong)*(byte *)(param_1 + 4) * 0x2a];
  local_40 = *(undefined8 *)(&DAT_041f68d8 + lVar6);
  local_50 = lVar4;
  lVar6 = FUN_00d63240(*param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar6 == 0) {
    return;
  }
  FUN_0284f6a4(param_1[3],(int)param_1[8],0,lVar6,0,0);
  bVar5 = false;
  if (*(char *)((long)param_1 + 0x44) != '\0') {
    plVar7 = &DAT_0428af30 + (ulong)*(uint *)((long)param_1 + 0x24) * 6;
    lVar6 = *plVar7;
    if (lVar6 == 0) {
      plVar8 = &DAT_0428af30;
    }
    else {
      plVar8 = &DAT_0428af30;
      if (*(char *)(lVar6 + 0x1e1) != '\0') {
        plVar8 = plVar7;
      }
    }
    piVar3 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if (((0xe < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
        (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7], uVar9 != 0)) &&
       (*(char *)((long)piVar3 + uVar9) != '\0')) {
      plVar8 = &DAT_0428af30;
      if ((lVar6 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar6 + 0x1e1) != '\0')) {
        plVar8 = plVar7;
      }
      piVar3 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
      if ((0xc < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar9 != 0)) {
        bVar5 = *(char *)((long)piVar3 + uVar9) != '\0';
        goto LAB_011bff34;
      }
    }
    bVar5 = false;
  }
LAB_011bff34:
  plVar7 = *(long **)(*param_1 + 0x148);
  lVar6 = *(long *)(*param_1 + 0x150);
  if ((lVar6 != 0) && (*plVar7 != lVar4)) {
    plVar8 = plVar7 + lVar6 * 6;
    lVar6 = lVar6 * 0x30;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        plVar7 = plVar8;
        break;
      }
      plVar2 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar2;
    } while (*plVar1 != lVar4);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe | bVar5;
  return;
}


