/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02896380; name: FUN_02896380
 */


uint FUN_02896380(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6,int param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  long *plVar13;
  
  nn::os::LockMutex((MutexType *)(param_3 + 0x158));
  puVar4 = PTR_DAT_043831e8;
  if ((*param_6 == 0) || (*(int *)(*param_6 + 0xc) == 0)) {
    uVar12 = 0;
  }
  else {
    lVar8 = *param_6;
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0xc) == 0)) {
LAB_028963e8:
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar8 + 0xc);
      puVar9 = (undefined8 *)PTR_DAT_043831f0;
      iVar10 = *(int *)(lVar8 + 0xc);
      do {
        puVar11 = *(undefined8 **)(lVar8 + 0x10);
        if ((*puVar4 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar4);
          puVar9 = (undefined8 *)PTR_DAT_043831f0;
          if (iVar6 != 0) {
            uVar7 = FUN_00fd7558();
            *(undefined8 *)PTR_DAT_043831f0 = uVar7;
            __cxa_guard_release(puVar4);
            puVar9 = (undefined8 *)PTR_DAT_043831f0;
          }
        }
        if (puVar11 == (undefined8 *)0x0) goto LAB_028963e8;
        while (puVar11 != puVar9) {
          puVar11 = (undefined8 *)*puVar11;
          plVar13 = (long *)0x0;
          if (puVar11 == (undefined8 *)0x0) goto LAB_028963ec;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar8 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar8 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_028963ec:
    if ((int)plVar13[0xd] == 2) {
      if ((ulong)(long)param_7 < (ulong)((plVar13[0x15] - plVar13[0x14] >> 3) * -0x3333333333333333)
         ) {
        uVar5 = FUN_028965d0(param_1,param_2,param_3,
                             *(undefined8 *)
                              (*(long *)(plVar13[0x14] + (long)param_7 * 0x28 + 8) + 0xc0),param_4,
                             param_5,param_8);
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar12 = 0;
      uVar5 = 0;
      if (plVar13 == (long *)0x0) goto LAB_02896484;
    }
    uVar12 = uVar5;
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
LAB_02896484:
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x158));
  return uVar12 & 1;
}


