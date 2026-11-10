/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6b710; name: FUN_00d6b710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6b710(long param_1,uint param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  plVar11 = _DAT_00000148;
  lVar3 = _DAT_00000150;
  if (((DAT_043acd60 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&DAT_043acd60), plVar11 = _DAT_00000148, lVar3 = _DAT_00000150,
     iVar6 != 0)) {
    DAT_043acb80 = 0xcdd2be437a4907c0;
    DAT_043acb88 = "pane_L_optionguide_l_00";
    DAT_043acba0 = 0xcdd2bf437a490973;
    DAT_043acba8 = "pane_L_optionguide_l_01";
    DAT_043acbc0 = 0xcdd2c0437a490b26;
    DAT_043acbc8 = "pane_L_optionguide_l_02";
    DAT_043acbe0 = 0xcdd2c1437a490cd9;
    DAT_043acbe8 = "pane_L_optionguide_l_03";
    DAT_043acb90 = 0x17;
    DAT_043acb98 = 0;
    DAT_043acbb0 = 0x17;
    DAT_043acbb8 = 0;
    DAT_043acbd0 = 0x17;
    DAT_043acbd8 = 0;
    DAT_043acc00 = 0xcdd2c2437a490e8c;
    DAT_043acc08 = "pane_L_optionguide_l_04";
    DAT_043acbf0 = 0x17;
    DAT_043acbf8 = 0;
    DAT_043acc20 = 0x95835afc09a3be2a;
    DAT_043acc28 = "pane_L_optionguide_r_00";
    DAT_043acc10 = 0x17;
    DAT_043acc18 = 0;
    DAT_043acc40 = 0x95835bfc09a3bfdd;
    DAT_043acc48 = "pane_L_optionguide_r_01";
    DAT_043acc30 = 0x17;
    DAT_043acc38 = 0;
    DAT_043acc60 = 0x958358fc09a3bac4;
    DAT_043acc68 = "pane_L_optionguide_r_02";
    DAT_043acc50 = 0x17;
    DAT_043acc58 = 0;
    DAT_043acc80 = 0x958359fc09a3bc77;
    DAT_043acc88 = "pane_L_optionguide_r_03";
    DAT_043acca0 = 0x958356fc09a3b75e;
    DAT_043acca8 = "pane_L_optionguide_r_04";
    DAT_043accc0 = 0xff77d06d3382190b;
    DAT_043accc8 = "pane_L_optionguide_c_00";
    DAT_043acce0 = 0xff77cf6d33821758;
    DAT_043acce8 = "pane_L_optionguide_c_01";
    DAT_043acd00 = 0xff77d26d33821c71;
    DAT_043acd08 = "pane_L_optionguide_c_02";
    DAT_043acd20 = 0xff77d16d33821abe;
    DAT_043acd28 = "pane_L_optionguide_c_03";
    DAT_043acc70 = 0x17;
    DAT_043acc78 = 0;
    DAT_043acc90 = 0x17;
    DAT_043acc98 = 0;
    DAT_043accb0 = 0x17;
    DAT_043accb8 = 0;
    DAT_043accd0 = 0x17;
    DAT_043accd8 = 0;
    DAT_043accf0 = 0x17;
    DAT_043accf8 = 0;
    DAT_043acd10 = 0x17;
    DAT_043acd18 = 0;
    DAT_043acd30 = 0x17;
    DAT_043acd38 = 0;
    DAT_043acd40 = 0xff77d46d33821fd7;
    DAT_043acd48 = "pane_L_optionguide_c_04";
    DAT_043acd50 = 0x17;
    DAT_043acd58 = 0;
    FUN_00100250(&LAB_00d6e130,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043acd60);
    plVar11 = _DAT_00000148;
    lVar3 = _DAT_00000150;
  }
  _DAT_00000148 = plVar11;
  _DAT_00000150 = lVar3;
  if (param_2 < 0xf) {
    plVar9 = *(long **)(param_1 + 0x2c8);
    if (plVar9 == (long *)0x0) {
      lVar13 = (&DAT_043acb80)[(ulong)param_2 * 4];
      plVar9 = (long *)(&DAT_043acb98)[(ulong)param_2 * 4];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      plVar12 = plVar11;
      if ((lVar3 != 0) && (*plVar11 != lVar13)) {
        lVar8 = lVar3 * 0x30;
        plVar10 = plVar11 + lVar3 * 6;
        do {
          lVar8 = lVar8 + -0x30;
          plVar12 = plVar10;
          if (lVar8 == 0) break;
          plVar2 = plVar11 + 6;
          plVar11 = plVar11 + 6;
          plVar12 = plVar11;
        } while (*plVar2 != lVar13);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe | param_3 & 1;
    }
    else {
      plVar11 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar12 = (long *)plVar9[0x29];
      lVar3 = plVar9[0x2a];
      lVar13 = (&DAT_043acb80)[(ulong)param_2 * 4];
      plVar10 = (long *)(&DAT_043acb98)[(ulong)param_2 * 4];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar2 = plVar12;
      if ((lVar3 != 0) && (*plVar12 != lVar13)) {
        lVar8 = lVar3 * 0x30;
        plVar7 = plVar12 + lVar3 * 6;
        do {
          lVar8 = lVar8 + -0x30;
          plVar2 = plVar7;
          if (lVar8 == 0) break;
          plVar1 = plVar12 + 6;
          plVar12 = plVar12 + 6;
          plVar2 = plVar12;
        } while (*plVar1 != lVar13);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe | param_3 & 1;
      do {
        iVar6 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d6b85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}


