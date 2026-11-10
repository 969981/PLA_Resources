/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01548ee0; name: FUN_01548ee0
 */


void FUN_01548ee0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long *local_68;
  
  FUN_02837d60(*param_2,0,0);
  if (*(char *)(param_1 + 0x4b7) == '\0') {
    if (*(char *)(param_1 + 0x4b4) != '\0') goto LAB_01548f38;
    FUN_02837bec(*param_2);
  }
  *(undefined1 *)(param_1 + 0x4b4) = 1;
LAB_01548f38:
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (*(char *)(param_1 + 0x4b5) != '\0') {
    lVar10 = *(long *)(param_1 + 0x98);
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01548f48:
      plVar11 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar12 = *(int *)(lVar10 + 0xc);
      do {
        puVar13 = *(undefined8 **)(lVar10 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_01548f48;
        while (puVar13 != (undefined8 *)puVar7) {
          puVar13 = (undefined8 *)*puVar13;
          plVar11 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_01548f4c;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar11 = (long *)0x0;
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar11 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar11 = (long *)0x0;
        iVar12 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01548f4c:
    local_98 = 0x131714486cde11ac;
    local_90 = "message_wait";
    uStack_88 = 0xc;
    FUN_02a4754c(auStack_80,&local_98);
    FUN_01585c34(plVar11,auStack_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  return;
}


