/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141fc60; name: FUN_0141fc60
 */


void FUN_0141fc60(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (param_2 == 0) {
    return;
  }
  plVar8 = *(long **)(*param_1 + 0x148);
  lVar10 = *(long *)(*param_1 + 0x150);
  if ((lVar10 != 0) && (*plVar8 != *(long *)(&DAT_0420df48 + (ulong)*(byte *)(param_1 + 4) * 0xc0)))
  {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != *(long *)(&DAT_0420df48 + (ulong)*(byte *)(param_1 + 4) * 0xc0));
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe;
  if (*(byte *)(*(long *)(param_2 + 0x70) + 0x368) <= *(byte *)(param_1 + 4)) {
    return;
  }
  uVar4 = *(uint *)(*(long *)(param_2 + 0x70) + (ulong)*(byte *)(param_1 + 4) * 0x1c + 0x300);
  if (uVar4 == 0) {
    return;
  }
  FUN_01420b98(param_1,uVar4);
  if (param_1[2] != 0) {
    lVar10 = (ulong)*(byte *)(param_1 + 4) * 0xc0;
    local_70 = *(undefined8 *)(&DAT_0420df78 + lVar10);
    puStack_68 = (&PTR_s_pane_L_status_button_skill_00_P__0420df80)
                 [(ulong)*(byte *)(param_1 + 4) * 0x18];
    local_60 = *(undefined8 *)(&DAT_0420df88 + lVar10);
    local_58 = (long *)0x0;
    lVar10 = FUN_00d63240(*param_1,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (lVar10 != 0) {
      FUN_0284fbb0(param_1[2],param_3,1,lVar10,0,0);
    }
  }
  FUN_01420e38(param_1,param_2);
  bVar5 = *(byte *)(param_1 + 4);
  bVar7 = FUN_02c618d4(*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60),(ulong)uVar4);
  plVar8 = *(long **)(*param_1 + 0x148);
  lVar10 = *(long *)(*param_1 + 0x150);
  if ((lVar10 != 0) && (*plVar8 != *(long *)(&DAT_0420df90 + (ulong)bVar5 * 0xc0))) {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != *(long *)(&DAT_0420df90 + (ulong)bVar5 * 0xc0));
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | bVar7 & 1;
  if ((param_5 & 1) != 0) {
    plVar8 = &DAT_0428af30 + (ulong)uVar4 * 6;
    lVar10 = *plVar8;
    if (lVar10 == 0) {
      plVar9 = &DAT_0428af30;
    }
    else {
      plVar9 = &DAT_0428af30;
      if (*(char *)(lVar10 + 0x1e1) != '\0') {
        plVar9 = plVar8;
      }
    }
    piVar3 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
    if (((0xe < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
        (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7], uVar11 != 0)) &&
       (*(char *)((long)piVar3 + uVar11) != '\0')) {
      plVar9 = &DAT_0428af30;
      if ((lVar10 != 0) && (plVar9 = &DAT_0428af30, *(char *)(lVar10 + 0x1e1) != '\0')) {
        plVar9 = plVar8;
      }
      piVar3 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
      if ((0xc < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar11 != 0)) {
        bVar6 = *(char *)((long)piVar3 + uVar11) != '\0';
        goto LAB_0141fed4;
      }
    }
  }
  bVar6 = false;
LAB_0141fed4:
  lVar10 = (ulong)*(byte *)(param_1 + 4) * 0xc0;
  local_70 = *(undefined8 *)(&DAT_0420dfd8 + lVar10);
  puStack_68 = (&PTR_s_pane_L_status_button_skill_00_P__0420dfe0)
               [(ulong)*(byte *)(param_1 + 4) * 0x18];
  local_60 = *(undefined8 *)(&DAT_0420dfe8 + lVar10);
  local_58 = (long *)0x0;
  lVar10 = FUN_00d63240(*param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (lVar10 != 0) {
    FUN_0284f6a4(param_1[3],param_4,1,lVar10,0,0);
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar6;
  }
  plVar8 = *(long **)(*param_1 + 0x148);
  lVar10 = *(long *)(*param_1 + 0x150);
  if ((lVar10 != 0) && (*plVar8 != *(long *)(&DAT_0420df48 + (ulong)*(byte *)(param_1 + 4) * 0xc0)))
  {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != *(long *)(&DAT_0420df48 + (ulong)*(byte *)(param_1 + 4) * 0xc0));
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) | 1;
  return;
}


