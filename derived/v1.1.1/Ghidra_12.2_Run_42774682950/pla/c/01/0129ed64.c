/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129ed64; name: FUN_0129ed64
 */


void FUN_0129ed64(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar5 = FUN_0129efa0();
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar8 = *param_2;
  uVar9 = 0;
  if (lVar8 < -0x1c4412fb859ba949) {
    if (lVar8 < -0x1c4413fb859baafc) {
      if (lVar8 == -0x1c4415fb859bae62) {
        uVar9 = 4;
      }
      else if (lVar8 == -0x1c4414fb859bacaf) {
        uVar9 = 5;
      }
      else if (lVar8 == -0x1c4417fb859bb1c8) {
        uVar9 = 6;
      }
    }
    else if (lVar8 == -0x1c4413fb859baafc) {
      uVar9 = 2;
    }
  }
  else if (lVar8 == -0x1c4410fb859ba5e3) {
    uVar9 = 1;
  }
  else if (lVar8 == -0x1c4412fb859ba949) {
    uVar9 = 3;
  }
  uVar5 = FUN_0129f180(uVar5,uVar9);
  if ((uVar5 & 1) == 0) {
    FUN_0129f31c(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x688) = 0;
  local_50 = &DAT_753f74378b49da9c;
  pcStack_48 = "View_Top";
  local_40 = 8;
  local_38 = (long *)0x0;
  plVar6 = (long *)FUN_012a11fc(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_012a272c(plVar6,uVar9);
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


