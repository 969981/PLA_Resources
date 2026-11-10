/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df949c; name: FUN_02df949c
 */


int FUN_02df949c(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  void *__dest;
  uint uVar11;
  undefined1 auStack_68 [8];
  int local_54;
  
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) {
    plVar10 = *(long **)(param_1 + 0x58);
    iVar7 = *(int *)(param_1 + 0x68);
    iVar6 = (**(code **)(*plVar10 + 0x58))(plVar10,&local_54);
    if (iVar6 - 0x2dU < 2) {
      uVar8 = (**(code **)(*plVar10 + 0x60))(plVar10);
      if ((uint)(local_54 + iVar7) < uVar8) {
        iVar6 = 0x3f;
        goto LAB_02df9500;
      }
    }
    else if (iVar6 != 0x11) goto LAB_02df9500;
  }
  iVar6 = 1;
LAB_02df9500:
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    FUN_02dec630(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x68),auStack_68);
    FUN_02ede6bc(DAT_0440a178,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x210),param_1,auStack_68)
    ;
  }
  if (iVar6 == 1) {
    lVar9 = *(long *)(param_1 + 0x90);
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x3c) != 0)) {
      iVar6 = 1;
    }
    else if (*(int *)(lVar9 + 0x28) == *(int *)(lVar9 + 0x24)) {
      iVar6 = 0x3f;
    }
    else {
      bVar4 = false;
      do {
        iVar7 = FUN_02df8e40(param_1);
        if (iVar7 != 0x2d) {
          if ((iVar7 == 0x11) || (iVar7 == 0x2e)) {
            iVar6 = 0x3f;
          }
          else {
            iVar6 = 2;
          }
          if (!bVar4) {
            return iVar6;
          }
          goto LAB_02df9600;
        }
        uVar8 = *(uint *)(param_1 + 0xb4);
        uVar11 = uVar8;
        if (*(uint *)(param_1 + 0x98) <= uVar8) {
          uVar11 = *(uint *)(param_1 + 0x98);
        }
        lVar9 = *(long *)(param_1 + 0x90);
        *(uint *)(param_1 + 0xb4) = uVar8 - uVar11;
        __dest = (void *)(*(long *)(lVar9 + 0x18) + (ulong)*(ushort *)(lVar9 + 0x20) * 0x5f0);
        uVar8 = *(uint *)(param_1 + 0xe0);
        uVar2 = *(undefined1 *)(param_1 + 0xb8);
        memcpy(__dest,*(void **)(param_1 + 0xd8),(ulong)uVar8);
        *(uint *)((long)__dest + 0x5e4) = uVar8;
        *(uint *)((long)__dest + 0x5e8) = uVar11;
        *(undefined1 *)((long)__dest + 0x5ec) = uVar2;
        uVar11 = *(uint *)(lVar9 + 0x28);
        uVar8 = *(ushort *)(lVar9 + 0x20) + 1;
        sVar5 = 0;
        if (uVar11 != 0) {
          sVar5 = (short)(uVar8 / uVar11);
        }
        *(short *)(lVar9 + 0x20) = (short)uVar8 - sVar5 * (short)uVar11;
        piVar1 = (int *)(lVar9 + 0x24);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(undefined1 *)(param_1 + 0xb8) = 0;
        if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
          (*DAT_0442d150)(5);
          *(undefined1 *)(param_1 + 0xe4) = 0;
        }
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        bVar4 = true;
      } while (*(int *)(*(long *)(param_1 + 0x90) + 0x28) !=
               *(int *)(*(long *)(param_1 + 0x90) + 0x24));
      iVar6 = 0x3f;
LAB_02df9600:
      nn::os::SignalEvent((EventType *)&DAT_0440bd10);
    }
  }
  return iVar6;
}


