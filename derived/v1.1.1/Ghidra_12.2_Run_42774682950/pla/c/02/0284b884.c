/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284b884; name: FUN_0284b884
 */


void FUN_0284b884(long param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long *local_60;
  undefined4 local_58;
  long *local_40;
  undefined *local_28;
  
  *(int *)(param_1 + 0x2f0) = param_2;
  local_28 = PTR_s_bin_appli_msg_bin_msg_loud_01_ar_0426f958;
  FUN_009f1b84(&local_60,&local_28);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  FUN_02836384(param_1,&local_60,"msg_loud_01.bflyt",1);
  FUN_02836778(param_1);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    if (param_2 != 1) goto LAB_0284b92c;
    uVar8 = 0x3f800000;
  }
  FUN_02837e70(uVar8,param_1,2,0,1);
LAB_0284b92c:
  local_60 = (long *)0x0;
  local_58 = 0;
  plVar6 = *(long **)(param_1 + 200);
  if (plVar6 == (long *)0x0) {
  }
  else {
    lVar7 = plVar6[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (local_60 != (long *)0x0) {
      lVar7 = local_60[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        lVar7 = *local_60;
        local_60 = plVar6;
        (**(code **)(lVar7 + 0x20))();
        plVar6 = local_60;
      }
    }
  }
  local_60 = plVar6;
  local_58 = 3;
  FUN_02848430(*(undefined8 *)(param_1 + 0x2e8),&local_60);
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


