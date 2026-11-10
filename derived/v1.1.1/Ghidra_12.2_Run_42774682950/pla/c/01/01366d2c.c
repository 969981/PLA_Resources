/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01366d2c; name: FUN_01366d2c
 */


void FUN_01366d2c(double param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_70 = &DAT_753f74378b49da9c;
  pcStack_68 = "View_Top";
  local_60 = 8;
  local_58 = (long *)0x0;
  plVar6 = (long *)FUN_01369b84(*(undefined8 *)(param_2 + 0x4c8),&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar3 = (int)param_1;
      if (0x5b8d7e < (uint)(int)param_1) {
        uVar3 = 5999999;
      }
      FUN_0136c06c(plVar6,0,uVar3 / 10 + (uVar3 / 100) * -10);
      FUN_0136c06c(plVar6,1,uVar3 / 100 + (uVar3 / 1000) * -10);
      uVar9 = uVar3 / 1000 + (uVar3 / 60000) * -0x3c;
      uVar8 = (uVar9 & 0xff) / 10;
      FUN_0136c06c(plVar6,2,uVar9 + uVar8 * -10 & 0xff);
      FUN_0136c06c(plVar6,3,uVar8);
      uVar3 = uVar3 / 60000 + (uVar3 / 6000000) * -100;
      uVar9 = (uVar3 & 0xff) / 10;
      FUN_0136c06c(plVar6,4,uVar3 + uVar9 * -10 & 0xff);
      FUN_0136c06c(plVar6,5,uVar9);
      lVar10 = plVar6[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


