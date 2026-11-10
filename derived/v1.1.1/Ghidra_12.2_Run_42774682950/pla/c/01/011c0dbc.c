/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c0dbc; name: FUN_011c0dbc
 */


void FUN_011c0dbc(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0xb7ef1e6f056a34be;
  pcStack_48 = "anime_L_wazainfo_00_L_skilltype_00_change";
  local_40 = 0x29;
  uStack_38 = 0;
  FUN_0283b1e8(*param_1,&local_50);
  plVar3 = &DAT_0428af30 + (ulong)*param_2 * 6;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    plVar5 = &DAT_0428af30;
  }
  else {
    plVar5 = &DAT_0428af30;
    if (*(char *)(lVar4 + 0x1e1) != '\0') {
      plVar5 = plVar3;
    }
  }
  fVar7 = 2.0;
  piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
  if (((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar6 != 0)) &&
     (*(char *)((long)piVar1 + uVar6) != '\0')) {
    plVar5 = &DAT_0428af30;
    if ((lVar4 != 0) && (plVar5 = &DAT_0428af30, *(char *)(lVar4 + 0x1e1) != '\0')) {
      plVar5 = plVar3;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar6 != 0)) &&
       (bVar2 = *(byte *)((long)piVar1 + uVar6), bVar2 != 0 && bVar2 != 3)) {
      fVar7 = (float)(int)(bVar2 - 1);
    }
  }
  local_50 = 0xb7ef1e6f056a34be;
  pcStack_48 = "anime_L_wazainfo_00_L_skilltype_00_change";
  local_40 = 0x29;
  uStack_38 = 0;
  FUN_0283b748(fVar7,*param_1,&local_50);
  return;
}


