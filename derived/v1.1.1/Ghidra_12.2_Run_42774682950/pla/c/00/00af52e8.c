/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af52e8; name: FUN_00af52e8
 */


void FUN_00af52e8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *local_60 [2];
  long *local_50;
  undefined8 local_48;
  
  FUN_00af55ec(local_60);
  FUN_00af5c18(&local_50,local_60);
  if (local_60[0] != (undefined8 *)0x0) {
    piVar7 = (int *)(local_60[0] + 1);
    do {
      iVar5 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *local_60[0];
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (local_50 != (long *)0x0) {
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      if (*(int *)(param_1 + 0x240) == 1) {
        if (((*PTR_DAT_0437a708 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a708);
        }
        uVar8 = *(undefined8 *)PTR_DAT_0437a710;
        *(undefined8 *)PTR_DAT_0437a718 = uVar8;
        piVar7 = (int *)FUN_010aa4a0(uVar8,*(undefined4 *)(param_1 + 0x250),
                                     *(undefined2 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600)
                                    );
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x23) ||
           (uVar11 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x11], uVar11 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)((long)piVar7 + uVar11);
        }
        (**(code **)(*local_50 + 0x58))(local_50,param_1 + 0x2b4,uVar9);
        if (*(ushort *)((long)piVar7 - (long)*piVar7) < 0x23) {
          uVar9 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x11];
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = *(undefined4 *)((long)piVar7 + uVar11);
          }
        }
      }
      else {
        (**(code **)(*local_50 + 0x58))(local_50,param_1 + 0x2b4);
        uVar9 = *(undefined4 *)(param_1 + 0x240);
      }
      lVar10 = *(long *)(param_1 + 0x210);
      *(undefined4 *)(param_1 + 0x248) = uVar9;
      puVar4 = PTR_DAT_0437a408;
      puVar3 = PTR_DAT_0437a400;
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
        piVar7 = (int *)(lVar10 + 0xc);
        iVar5 = *(int *)(lVar10 + 0xc);
        do {
          plVar12 = *(long **)(lVar10 + 0x10);
          if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
            uVar8 = FUN_009cdcc0();
            *(undefined8 *)puVar4 = uVar8;
            __cxa_guard_release(puVar3);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00af53b8;
            if (plVar12 == (long *)puVar4) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar7;
          if (iVar6 == iVar5) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB_00af5524;
            lVar10 = *(long *)(lVar10 + 0x18);
            plVar12 = (long *)(lVar10 + -0x50);
            if (lVar10 != 0) {
              (**(code **)(*plVar12 + 0x98))(plVar12);
              lVar10 = *(long *)(lVar10 + 8);
              piVar7 = (int *)(lVar10 + 0xc);
              do {
                iVar5 = *piVar7;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar2) {
                  *piVar7 = iVar5 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar5 + -1 != 0) break;
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
              if (local_50 == (long *)0x0) {
                return;
              }
              goto LAB_00af53c0;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_00af5524:
          iVar5 = iVar6;
        } while (iVar6 != 0);
      }
    }
LAB_00af53b8:
    if (local_50 != (long *)0x0) {
LAB_00af53c0:
      (**(code **)(*local_50 + 0x18))();
    }
  }
  return;
}


