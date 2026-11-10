/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b50bcc; name: FUN_01b50bcc
 */


void FUN_01b50bcc(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  
  puVar5 = PTR_DAT_0437f9f8;
  puVar4 = PTR_DAT_0437f9f0;
  lVar8 = *(long *)(param_1 + 0x230);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar10 = *(int *)(lVar8 + 0xc);
    do {
      puVar11 = *(undefined8 **)(lVar8 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_009cdcc0();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (puVar11 == (undefined8 *)0x0) goto LAB_01b50bec;
        if (puVar11 == (undefined8 *)puVar5) break;
        puVar11 = (undefined8 *)*puVar11;
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
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + -0x50);
            if (*(int *)(param_1 + 0x248) != param_2) {
              *(int *)(lVar8 + 0x6c) = param_2;
              if ((*(byte *)(param_1 + 0x270) & 7) == 0) {
                FUN_02de61e8(plVar9);
                FUN_02de6194(plVar9);
              }
            }
            lVar8 = *(long *)(lVar8 + 8);
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
              (**(code **)(*plVar9 + 0x20))(plVar9);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01b50bec:
  *(int *)(param_1 + 0x248) = param_2;
  return;
}


