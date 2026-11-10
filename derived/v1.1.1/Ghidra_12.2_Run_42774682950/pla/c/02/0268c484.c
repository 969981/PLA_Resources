/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0268c484; name: FUN_0268c484
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0268c484(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *local_58;
  long *local_48;
  
  plVar9 = *(long **)(param_1 + 0x5c0);
  *(undefined1 *)(param_1 + 0xcf0) = 0;
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  local_58 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_02689a70(param_1,&local_58,0);
    lVar10 = *(long *)(param_1 + 0xce0);
joined_r0x0268c608:
    if (lVar10 != 0) goto LAB_0268c57c;
LAB_0268c51c:
    local_48 = (long *)0x0;
  }
  else {
    lVar10 = plVar9[0xb];
    puVar7 = *(undefined8 **)(lVar10 + 0x18);
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      puVar7 = (undefined8 *)(**(code **)*puVar7)();
      *(undefined8 **)(lVar10 + 0x10) = puVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02689a70(puVar7,&local_58,0);
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
      lVar10 = *(long *)(param_1 + 0xce0);
      goto joined_r0x0268c608;
    }
    if (*(long *)(param_1 + 0xce0) == 0) goto LAB_0268c51c;
LAB_0268c57c:
    FUN_0269251c(&local_48);
    if ((local_48 != (long *)0x0) &&
       (FUN_0267d64c(0,local_48,*(undefined4 *)(param_1 + 0xcf4)), local_48 != (long *)0x0)) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
        lVar10 = *(long *)(param_1 + 0xd10);
        pbVar4 = PTR_DAT_0437a6d8;
        puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
        goto joined_r0x0268c5d0;
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0xd10);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x0268c5d0:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar7;
  if (lVar10 == 0) {
    *(undefined8 *)(param_1 + 0xd10) = 0;
  }
  else {
    if (*(int *)(lVar10 + 0xc) != 0) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar6 = *(int *)(lVar10 + 0xc);
      do {
        plVar9 = *(long **)(lVar10 + 0x10);
        if (((*pbVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar4), iVar5 != 0)) {
          uVar8 = FUN_00ad3750();
          *puVar7 = uVar8;
          __cxa_guard_release(pbVar4);
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_0268c6a4;
          if (plVar9 == puVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 != 0) {
              plVar9 = (long *)(lVar10 + -0x50);
              FUN_02c91f14(plVar9);
              lVar10 = *(long *)(lVar10 + 8);
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar6 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))(plVar9);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar5;
      } while (iVar5 != 0);
    }
LAB_0268c6a4:
    puVar7 = *(undefined8 **)(param_1 + 0xd10);
    *(undefined8 *)(param_1 + 0xd10) = 0;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar7[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = (long *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xd18) = 0;
  *(undefined1 *)(param_1 + 0xd04) = 0;
  *(undefined4 *)(param_1 + 0xd08) = 0;
  *(undefined8 *)(param_1 + 0xd20) = 0;
  *(undefined4 *)(param_1 + 0xd00) = 0;
  return;
}


