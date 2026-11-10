/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131bd9c; name: FUN_0131bd9c
 */


int FUN_0131bd9c(char *param_1,ulong param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  char local_48 [8];
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  if (param_4 != 5) goto LAB_0131bdd0;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar12 = *(long **)(lVar7 + 0x228);
  if (plVar12 != (long *)0x0) {
    lVar7 = plVar12[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar8 = ((long *)plVar12[0x3b])[1];
    if (uVar8 != 0) {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & 0xe56748a23aa6ae3;
      }
      else if (uVar8 < 0xe56748a23aa6ae4) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = 0xe56748a23aa6ae3 / uVar8;
        }
        uVar10 = 0xe56748a23aa6ae3 - uVar10 * uVar8;
      }
      else {
        uVar10 = 0xe56748a23aa6ae3;
      }
      plVar11 = *(long **)(*(long *)plVar12[0x3b] + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar11[1] == 0xe56748a23aa6ae3) {
              if (plVar11[2] == 0xe56748a23aa6ae3) goto LAB_0131bf24;
            }
            else if ((plVar11[1] & uVar8 - 1) != uVar10) goto LAB_0131bfb0;
            plVar11 = (long *)*plVar11;
            uVar13 = 0;
          } while (plVar11 != (long *)0x0);
          goto LAB_0131bf28;
        }
        do {
          uVar9 = plVar11[1];
          if (uVar9 == 0xe56748a23aa6ae3) {
            if (plVar11[2] == 0xe56748a23aa6ae3) goto LAB_0131bf24;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
LAB_0131bfb0:
    uVar13 = 0;
    goto LAB_0131bf28;
  }
LAB_0131bfb8:
  iVar5 = 0;
  goto LAB_0131bf78;
LAB_0131bf24:
  uVar13 = *(uint *)(plVar11 + 3);
LAB_0131bf28:
  lVar7 = plVar12[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (uVar13 >> 4 < 0x271) goto LAB_0131bfb8;
  iVar5 = uVar13 / 10000 - 1;
  if (69999 < uVar13) {
    iVar5 = 5;
  }
LAB_0131bf78:
  snprintf(local_48,8,"_%02d",iVar5);
LAB_0131bdd0:
  iVar5 = snprintf(param_1,param_2 & 0xffffffff,"%s%s%s%s",PTR_s_bin_appli_map_map_texture__04204a18
                   ,(&PTR_s_map_lmap_pic_00_04204a28)[(long)param_3 * 7 + (long)param_4],local_48,
                   PTR_s__bntx_04204a20);
  return iVar5;
}


