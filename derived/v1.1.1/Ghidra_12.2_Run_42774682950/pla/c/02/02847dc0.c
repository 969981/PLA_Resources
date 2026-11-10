/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02847dc0; name: FUN_02847dc0
 */


void FUN_02847dc0(long param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long *plVar8;
  long lVar9;
  long *local_68 [4];
  long *local_48;
  undefined *local_38;
  
  ppuVar7 = &PTR_s_bin_appli_msg_bin_msg_00_arc_0426f930;
  switch(param_2) {
  case 0:
    break;
  case 1:
    ppuVar7 = &PTR_s_bin_appli_msg_sys_bin_msg_sys_00_0426f938;
    break;
  case 2:
    ppuVar7 = &PTR_s_bin_appli_msg_demo_bin_msg_demo__0426f940;
    break;
  case 3:
    goto switchD_02847e04_caseD_3;
  case 4:
    ppuVar7 = &PTR_s_bin_appli_msg_bin_msg_loud_00_ar_0426f950;
    break;
  case 5:
    ppuVar7 = &PTR_s_bin_appli_msg_bin_msg_loud_01_ar_0426f958;
    break;
  default:
    goto switchD_02847e04_default;
  }
  local_38 = *ppuVar7;
  FUN_009f1b84(local_68,&local_38);
  uVar5 = FUN_00d24350(param_1 + (long)param_2 * 0x30 + 0x50,1,local_68,0,param_3,0);
  if (((uVar5 & 1) != 0) &&
     (plVar8 = *(long **)(param_1 + (long)param_2 * 0x30 + 0x78), plVar8 != (long *)0x0)) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
switchD_02847e04_default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68[0] != (long *)0x0) {
    (**(code **)(*local_68[0] + 0x20))();
  }
switchD_02847e04_caseD_3:
  return;
}


