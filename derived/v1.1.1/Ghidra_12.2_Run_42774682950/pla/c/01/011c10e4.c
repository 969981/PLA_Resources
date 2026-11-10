/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c10e4; name: FUN_011c10e4
 */


void FUN_011c10e4(long *param_1,ulong param_2,int param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  plVar6 = *(long **)(*param_1 + 0x148);
  lVar10 = *(long *)(*param_1 + 0x150);
  plVar4 = plVar6 + lVar10 * 6;
  if (lVar10 == 0) {
    uVar7 = *(undefined4 *)(plVar6[4] + 0x30);
    uVar8 = *(undefined4 *)(plVar6[4] + 0x34);
    if (plVar6 == plVar4) goto LAB_011c1344;
LAB_011c11d0:
    lVar10 = plVar6[4];
  }
  else {
    if (*plVar6 == *(long *)(&DAT_041f6e38 + (param_2 & 0xff) * 0x18)) {
      uVar7 = *(undefined4 *)(plVar6[4] + 0x30);
      uVar8 = *(undefined4 *)(plVar6[4] + 0x34);
LAB_011c1180:
      if (*plVar6 != 0x4e86e9fd27852723) {
        lVar10 = lVar10 * 0x30;
        plVar5 = plVar6;
        do {
          lVar10 = lVar10 + -0x30;
          if (lVar10 == 0) goto LAB_011c1344;
          plVar6 = plVar5 + 6;
          plVar1 = plVar5 + 6;
          plVar5 = plVar6;
        } while (*plVar1 != 0x4e86e9fd27852723);
      }
    }
    else {
      lVar9 = 0;
      do {
        if (lVar10 * 0x30 + -0x30 == lVar9) {
          plVar5 = plVar4;
          goto LAB_011c1174;
        }
        lVar2 = lVar9 + 0x30;
        lVar3 = lVar9 + 0x30;
        lVar9 = lVar2;
      } while (*(long *)((long)plVar6 + lVar3) != *(long *)(&DAT_041f6e38 + (param_2 & 0xff) * 0x18)
              );
      plVar5 = (long *)((long)plVar6 + lVar2);
LAB_011c1174:
      uVar7 = *(undefined4 *)(plVar5[4] + 0x30);
      uVar8 = *(undefined4 *)(plVar5[4] + 0x34);
      if (lVar10 != 0) goto LAB_011c1180;
    }
    if (plVar6 != plVar4) goto LAB_011c11d0;
LAB_011c1344:
    lVar10 = 0;
  }
  *(undefined4 *)(lVar10 + 0x30) = uVar7;
  *(undefined4 *)(lVar10 + 0x34) = uVar8;
  *(undefined4 *)(lVar10 + 0x38) = 0;
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  local_80 = 0x577eb1a71e2ca554;
  pcStack_78 = "anime_L_waza_ef_00_mode_00";
  local_70 = 0x1a;
  uStack_68 = 0;
  FUN_0283b430(*param_1,&local_80);
  local_80 = 0x577eb3a71e2ca8ba;
  pcStack_78 = "anime_L_waza_ef_00_mode_02";
  local_70 = 0x1a;
  uStack_68 = 0;
  FUN_0283b430(*param_1,&local_80);
  local_80 = 0x577eb2a71e2ca707;
  pcStack_78 = "anime_L_waza_ef_00_mode_01";
  local_70 = 0x1a;
  uStack_68 = 0;
  FUN_0283b430(*param_1,&local_80);
  local_80 = 0x577eb4a71e2caa6d;
  pcStack_78 = "anime_L_waza_ef_00_mode_03";
  local_70 = 0x1a;
  uStack_68 = 0;
  FUN_0283b430(*param_1,&local_80);
  if (param_4 == 0) {
    if (param_3 == 0) {
      lVar10 = *param_1;
      local_80 = 0x577eb1a71e2ca554;
      pcStack_78 = "anime_L_waza_ef_00_mode_00";
      goto LAB_011c12b4;
    }
    if (param_3 == 1) {
      lVar10 = *param_1;
      local_80 = 0x577eb3a71e2ca8ba;
      pcStack_78 = "anime_L_waza_ef_00_mode_02";
      goto LAB_011c12b4;
    }
    if (param_3 == 2) {
      lVar10 = *param_1;
      local_80 = 0x577eb2a71e2ca707;
      pcStack_78 = "anime_L_waza_ef_00_mode_01";
      goto LAB_011c12b4;
    }
    if (param_3 != 3) {
      return;
    }
  }
  lVar10 = *param_1;
  local_80 = 0x577eb4a71e2caa6d;
  pcStack_78 = "anime_L_waza_ef_00_mode_03";
LAB_011c12b4:
  local_70 = 0x1a;
  uStack_68 = 0;
  FUN_0283b1e8(lVar10,&local_80);
  return;
}


