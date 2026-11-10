/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02598eb8; name: FUN_02598eb8
 */


void FUN_02598eb8(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04379d88;
  puVar5 = PTR_DAT_04379d80;
  puVar4 = PTR_DAT_043794d0;
  if (*(char *)(param_1 + 0x168) != '\0') {
    return;
  }
  local_6c = 0;
  local_68 = 0;
  lVar10 = *(long *)(param_1 + 0x78);
  if (lVar10 != 0) {
    param_2 = param_2 & 0xffffffff;
    if (*(int *)(lVar10 + 0xc) == 0) {
LAB_0259918c:
      iVar7 = 0;
LAB_02599138:
      plVar11 = *(long **)(param_1 + 0x130);
      goto joined_r0x02599140;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    iVar7 = *(int *)(lVar10 + 0xc);
    do {
      puVar13 = *(undefined8 **)(lVar10 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar5);
      }
      if (puVar13 == (undefined8 *)0x0) goto LAB_0259918c;
      while (puVar13 != (undefined8 *)puVar6) {
        puVar13 = (undefined8 *)*puVar13;
        if (puVar13 == (undefined8 *)0x0) goto LAB_02598ef8;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_025990a4;
        lVar10 = *(long *)(lVar10 + 0x18);
        plVar11 = (long *)(lVar10 + -0x50);
        if (lVar10 != 0) {
          FUN_025acc5c(plVar11,(long)&local_68 + 4,&local_68,&local_6c);
          iVar7 = FUN_025acbdc(plVar11);
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          goto LAB_02599138;
        }
        goto LAB_0259918c;
      }
      ClearExclusiveLocal();
LAB_025990a4:
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_02598ef8:
  iVar7 = 0;
  plVar11 = *(long **)(param_1 + 0x130);
joined_r0x02599140:
  if (plVar11 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      do {
        while( true ) {
          uVar9 = 0;
          iVar8 = local_68._4_4_ - *(int *)((long)plVar11 + 0x44);
          if (iVar8 == 0) {
            iVar8 = *(int *)((long)plVar11 + 0x4c);
          }
          else {
            iVar12 = 0;
            if (local_68._4_4_ < *(int *)((long)plVar11 + 0x44)) {
              iVar12 = 0x18;
            }
            iVar8 = iVar8 + iVar12 + *(int *)((long)plVar11 + 0x4c);
            *(int *)((long)plVar11 + 0x4c) = iVar8;
            *(int *)((long)plVar11 + 0x44) = local_68._4_4_;
            if ((iVar7 == 3) && ((int)plVar11[8] == 5)) {
              iVar8 = (int)plVar11[9];
              *(int *)((long)plVar11 + 0x4c) = iVar8;
              uVar9 = 1;
            }
          }
          if ((int)plVar11[9] <= iVar8) break;
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        FUN_0259744c(param_1,plVar11 + 3,uVar9);
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else if (iVar7 == 3) {
      do {
        while( true ) {
          iVar8 = local_68._4_4_ - *(int *)((long)plVar11 + 0x44);
          iVar7 = 0;
          if (iVar8 == 0 || local_68._4_4_ < *(int *)((long)plVar11 + 0x44)) {
            iVar7 = 0x18;
          }
          iVar7 = iVar8 + *(int *)((long)plVar11 + 0x4c) + iVar7;
          *(int *)((long)plVar11 + 0x4c) = iVar7;
          *(int *)((long)plVar11 + 0x44) = local_68._4_4_;
          if ((int)plVar11[8] != 5) break;
          *(int *)((long)plVar11 + 0x4c) = (int)plVar11[9];
          uVar9 = 1;
LAB_02599084:
          FUN_0259744c(param_1,plVar11 + 3,uVar9);
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        if ((int)plVar11[9] <= iVar7) {
          uVar9 = 0;
          goto LAB_02599084;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        iVar8 = local_68._4_4_ - *(int *)((long)plVar11 + 0x44);
        iVar7 = 0;
        if (iVar8 == 0 || local_68._4_4_ < *(int *)((long)plVar11 + 0x44)) {
          iVar7 = 0x18;
        }
        iVar7 = iVar8 + *(int *)((long)plVar11 + 0x4c) + iVar7;
        *(int *)((long)plVar11 + 0x4c) = iVar7;
        *(int *)((long)plVar11 + 0x44) = local_68._4_4_;
        if ((int)plVar11[9] <= iVar7) {
          FUN_0259744c(param_1,plVar11 + 3,0);
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


