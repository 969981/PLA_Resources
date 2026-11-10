/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016833a4; name: FUN_016833a4
 */


void FUN_016833a4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  long *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  FUN_0165a7a0(&local_60);
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar4 = CONCAT44(uStack_5c,local_60);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0xc) != 0) {
      piVar1 = (int *)(lVar4 + 0xc);
      iVar13 = *(int *)(lVar4 + 0xc);
      do {
        plVar14 = *(long **)(lVar4 + 0x10);
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
          if (plVar14 == (long *)0x0) goto LAB_01683538;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar14 = (long *)0x0;
            if (*(long *)(lVar4 + 0x18) != 0) {
              plVar14 = (long *)(*(long *)(lVar4 + 0x18) + -0x50);
            }
            lVar4 = CONCAT44(uStack_5c,local_60);
            goto joined_r0x01683470;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01683538:
    plVar14 = (long *)0x0;
    lVar4 = CONCAT44(uStack_5c,local_60);
joined_r0x01683470:
    if (lVar4 != 0) {
      FUN_02a43934();
    }
    if (plVar14 != (long *)0x0) {
      FUN_0199d14c(&local_60,plVar14);
      if (CONCAT44(uStack_5c,local_60) == 0) {
        local_68 = (long *)0x0;
      }
      else {
        FUN_00959d38(&local_68);
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FUN_02a43934();
        }
      }
      if (local_68 != (long *)0x0) {
        local_60 = 5;
        FUN_02604d38(local_68,&local_60);
        plVar9 = local_68;
        if ((local_68 != (long *)0x0) && (uVar11 = FUN_02a43a5c(local_68[0xb]), (uVar11 & 1) != 0))
        {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      uVar11 = FUN_02a43a5c(plVar14[0xb]);
      if ((uVar11 & 1) != 0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  return;
}


