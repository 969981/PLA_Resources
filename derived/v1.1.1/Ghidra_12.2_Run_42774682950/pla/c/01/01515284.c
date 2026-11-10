/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01515284; name: FUN_01515284
 */


undefined8 FUN_01515284(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  int local_64;
  
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *(long *)(param_1 + 0x98);
  local_64 = param_2;
  if (param_2 < 0) {
    if (lVar10 == 0) {
      plVar12 = (long *)0x0;
    }
    else if (*(int *)(lVar10 + 0xc) == 0) {
LAB_0151544c:
      plVar12 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar13 = *(int *)(lVar10 + 0xc);
      do {
        puVar9 = *(undefined8 **)(lVar10 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_0151544c;
        while (puVar9 != (undefined8 *)puVar7) {
          puVar9 = (undefined8 *)*puVar9;
          plVar12 = (long *)0x0;
          if (puVar9 == (undefined8 *)0x0) goto LAB_015152b8;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar12 = (long *)0x0;
        iVar13 = iVar8;
      } while (iVar8 != 0);
    }
LAB_015152b8:
    puVar9 = (undefined8 *)FUN_01517f48(plVar12 + 0x32,param_1 + 0x68);
    uVar11 = *puVar9;
    if (plVar12 == (long *)0x0) {
      return uVar11;
    }
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar13 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01515314:
      plVar12 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar13 = *(int *)(lVar10 + 0xc);
      do {
        puVar9 = *(undefined8 **)(lVar10 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_01515314;
        while (puVar9 != (undefined8 *)puVar7) {
          puVar9 = (undefined8 *)*puVar9;
          plVar12 = (long *)0x0;
          if (puVar9 == (undefined8 *)0x0) goto LAB_01515318;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar12 = (long *)0x0;
        iVar13 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01515318:
    puVar9 = (undefined8 *)FUN_01517f48(plVar12 + 0x32,&local_64);
    uVar11 = *puVar9;
    if (plVar12 == (long *)0x0) {
      return uVar11;
    }
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar13 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar13 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return uVar11;
}


