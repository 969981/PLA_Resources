/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd3748; name: FUN_00cd3748
 */


uint FUN_00cd3748(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long *unaff_x21;
  long *plVar14;
  long *local_70 [2];
  
  FUN_00b5f644(local_70,*(undefined8 *)(param_1 + 0xa0));
  plVar4 = local_70[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_70[0] != (long *)0x0) {
    if (*(int *)((long)local_70[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_70[0] + 0xc);
      iVar9 = *(int *)((long)local_70[0] + 0xc);
      do {
        plVar14 = (long *)plVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          unaff_x21 = plVar4;
          if (plVar14 == (long *)0x0) goto LAB_00cd38e0;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar14 = (long *)0x0;
            if (plVar4[3] != 0) {
              plVar14 = (long *)(plVar4[3] + -0x50);
            }
            goto joined_r0x00cd382c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00cd38e0:
    plVar14 = (long *)0x0;
    plVar4 = unaff_x21;
joined_r0x00cd382c:
    if (local_70[0] != (long *)0x0) {
      FUN_02a43934();
    }
    uVar13 = (uint)plVar4;
    if (plVar14 != (long *)0x0) {
      FUN_0199c708(local_70,plVar14);
      if (local_70[0] == (long *)0x0) {
        bVar3 = false;
      }
      else {
        iVar9 = FUN_025993f4();
        uVar13 = (uint)(iVar9 == *(int *)(param_1 + 0xb8));
        if ((local_70[0] != (long *)0x0) &&
           (uVar11 = FUN_02a43a5c(local_70[0][0xb]), (uVar11 & 1) != 0)) {
          (**(code **)(*local_70[0] + 0x20))(local_70[0]);
        }
        bVar3 = true;
      }
      uVar11 = FUN_02a43a5c(plVar14[0xb]);
      if ((uVar11 & 1) != 0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (bVar3) goto LAB_00cd3784;
    }
  }
  uVar13 = 0;
LAB_00cd3784:
  return uVar13 & 1;
}


