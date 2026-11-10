/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c0f00; name: FUN_011c0f00
 */


void FUN_011c0f00(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x765b77db80ae48a0;
  pcStack_48 = "pane_L_wazainfo_00_P_affinity_00";
  local_40 = 0x20;
  lVar2 = FUN_00d63240(*param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar2 == 0) {
    return;
  }
  plVar4 = &DAT_0428af30 + (ulong)*param_2 * 6;
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = plVar4;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) != '\0')) {
    plVar6 = &DAT_0428af30;
    if ((lVar5 != 0) && (plVar6 = &DAT_0428af30, *(char *)(lVar5 + 0x1e1) != '\0')) {
      plVar6 = plVar4;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar7 != 0)) &&
       ((*(char *)((long)piVar1 + uVar7) != '\0' && ((char)param_2[8] != '\0')))) {
      FUN_0284f6a4(param_1[3],param_2[7],1,lVar2,0,0);
      bVar3 = *(byte *)(lVar2 + 0x58) | 1;
      goto LAB_011c1044;
    }
  }
  bVar3 = *(byte *)(lVar2 + 0x58) & 0xfe;
LAB_011c1044:
  *(byte *)(lVar2 + 0x58) = bVar3;
  return;
}


