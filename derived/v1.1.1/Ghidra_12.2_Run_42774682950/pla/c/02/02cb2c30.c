/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb2c30; name: FUN_02cb2c30
 */


int FUN_02cb2c30(long param_1,undefined8 *param_2,char *param_3,char *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *local_16a0;
  char acStack_1694 [64];
  int local_1654;
  char acStack_1650 [5600];
  DeliveryCacheDirectory aDStack_70 [16];
  
  nn::bcat::DeliveryCacheDirectory::DeliveryCacheDirectory(aDStack_70);
  memset(acStack_1650,0,0x15e0);
  local_1654 = 0;
  iVar5 = nn::bcat::DeliveryCacheDirectory::Open((char *)aDStack_70);
  if ((iVar5 == 0) &&
     (iVar5 = nn::bcat::DeliveryCacheDirectory::Read
                        ((int *)aDStack_70,(DeliveryCacheDirectoryEntry *)&local_1654,
                         (int)acStack_1650), iVar5 == 0)) {
    if (local_1654 < 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      do {
        if (*param_3 != '\0') break;
        snprintf(acStack_1694,0x3f,"%s/%s",param_4,acStack_1650 + lVar9 * 0x38);
        lVar8 = param_1 + lVar9 * 0x50;
        plVar7 = (long *)*param_2;
        local_16a0 = plVar7;
        if (plVar7 == (long *)0x0) {
          iVar5 = FUN_02cb2b40(lVar8,&local_16a0,acStack_1694,0);
        }
        else {
          lVar10 = plVar7[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar6;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          iVar5 = FUN_02cb2b40(lVar8,&local_16a0,acStack_1694,0);
          lVar8 = plVar7[0xb];
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
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
        }
        if (iVar5 != 0) goto LAB_02cb2dd8;
        lVar9 = lVar9 + 1;
      } while (lVar9 < local_1654);
    }
    iVar5 = 0;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (int)lVar9;
    }
  }
LAB_02cb2dd8:
  nn::bcat::DeliveryCacheDirectory::Close();
  nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory(aDStack_70);
  return iVar5;
}


