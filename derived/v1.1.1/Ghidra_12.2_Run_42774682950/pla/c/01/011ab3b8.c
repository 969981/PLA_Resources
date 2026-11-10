/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ab3b8; name: FUN_011ab3b8
 */


void FUN_011ab3b8(long param_1,ulong param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar10[0x29];
  lVar9 = plVar10[0x2a];
  if ((lVar9 != 0) && (*plVar7 != -0x227db25ea396ef90)) {
    plVar8 = plVar7 + lVar9 * 6;
    lVar9 = lVar9 * 0x30;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) {
        plVar7 = plVar8;
        break;
      }
      plVar2 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar2;
    } while (*plVar1 != -0x227db25ea396ef90);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe | (param_3 ^ 1) & 1;
  plVar7 = (long *)plVar10[0x29];
  lVar9 = plVar10[0x2a];
  if ((lVar9 != 0) && (*plVar7 != -0x6459f225782734ed)) {
    plVar8 = plVar7 + lVar9 * 6;
    lVar9 = lVar9 * 0x30;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) {
        plVar7 = plVar8;
        break;
      }
      plVar2 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar2;
    } while (*plVar1 != -0x6459f225782734ed);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe | param_3 & 1;
  if ((param_2 & 1) == 0) {
    local_70 = 0x748d898ffa33e952;
    pcStack_68 = "anime_key_00_0_active";
    local_60 = 0x15;
    uStack_58 = 0;
    lVar9 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_70);
      lVar9 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x246885be95b99d53;
    pcStack_68 = "anime_key_00_1_active";
    local_60 = 0x15;
    uStack_58 = 0;
    lVar6 = 0;
    if (lVar9 != 0) {
      FUN_0283b430(lVar9,&local_70);
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x151fd57e4536adf6;
    pcStack_68 = "anime_key_01_active";
    local_60 = 0x13;
    uStack_58 = 0;
    lVar9 = 0;
    if (lVar6 != 0) {
      FUN_0283b430(lVar6,&local_70);
      lVar9 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x2b9f29eb67aefdcd;
    pcStack_68 = "anime_key_00_0_passive";
    local_60 = 0x16;
    uStack_58 = 0;
    lVar6 = 0;
    if (lVar9 != 0) {
      FUN_0283b1e8(lVar9,&local_70);
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x9b8e30a348fea032;
    pcStack_68 = "anime_key_00_1_passive";
    local_60 = 0x16;
    uStack_58 = 0;
    lVar9 = 0;
    if (lVar6 != 0) {
      FUN_0283b1e8(lVar6,&local_70);
      lVar9 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0xf33461dfa00b7a31;
    pcStack_68 = "anime_key_01_passive";
    local_60 = 0x14;
  }
  else {
    local_70 = 0x2b9f29eb67aefdcd;
    pcStack_68 = "anime_key_00_0_passive";
    local_60 = 0x16;
    uStack_58 = 0;
    lVar9 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_70);
      lVar9 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x9b8e30a348fea032;
    pcStack_68 = "anime_key_00_1_passive";
    local_60 = 0x16;
    uStack_58 = 0;
    lVar6 = 0;
    if (lVar9 != 0) {
      FUN_0283b430(lVar9,&local_70);
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0xf33461dfa00b7a31;
    pcStack_68 = "anime_key_01_passive";
    local_60 = 0x14;
    uStack_58 = 0;
    lVar9 = 0;
    if (lVar6 != 0) {
      FUN_0283b430(lVar6,&local_70);
      lVar9 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x748d898ffa33e952;
    pcStack_68 = "anime_key_00_0_active";
    local_60 = 0x15;
    uStack_58 = 0;
    lVar6 = 0;
    if (lVar9 != 0) {
      FUN_0283b1e8(lVar9,&local_70);
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x246885be95b99d53;
    pcStack_68 = "anime_key_00_1_active";
    local_60 = 0x15;
    uStack_58 = 0;
    lVar9 = 0;
    if (lVar6 != 0) {
      FUN_0283b1e8(lVar6,&local_70);
      lVar9 = *(long *)(param_1 + 0x2c8);
    }
    local_70 = 0x151fd57e4536adf6;
    pcStack_68 = "anime_key_01_active";
    local_60 = 0x13;
  }
  uStack_58 = 0;
  if (lVar9 != 0) {
    uStack_58 = 0;
    FUN_0283b1e8(lVar9,&local_70);
  }
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011ab73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))(plVar10);
      return;
    }
  }
  return;
}


