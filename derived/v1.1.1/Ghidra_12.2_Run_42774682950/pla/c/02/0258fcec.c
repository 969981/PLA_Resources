/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0258fcec; name: FUN_0258fcec
 */


void FUN_0258fcec(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined1 local_34 [4];
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar7 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar7;
  plVar8 = *(long **)(*(long *)(lVar7 + 0x50) + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_0258ff1c;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = param_1 + (long)param_2 * 0x50;
  if (*(char *)(lVar7 + 0x1e0) == '\0') {
    if (plVar8 == (long *)0x0) {
      return;
    }
  }
  else {
    local_34[0] = param_2 == 1;
    local_60 = 0x7f7e4efd5cc9936b;
    pcStack_58 = "FabhView";
    local_50 = 8;
    local_48 = (long *)0x0;
    lVar6 = FUN_0146fe3c(plVar8[0x99],&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (lVar6 == 0) {
LAB_0258ff1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_01474838(lVar6,local_34);
    lVar6 = param_1 + (long)param_2 * 0x50;
    *(undefined1 *)(lVar7 + 0x1e0) = 0;
    puVar9 = *(undefined8 **)(lVar6 + 0x218);
    *(undefined8 *)(lVar6 + 0x210) = 0;
    *(undefined8 *)(lVar6 + 0x208) = 0;
    *(undefined8 *)(lVar6 + 0x1f8) = 0;
    *(undefined8 *)(lVar6 + 0x200) = 0;
    *(undefined8 *)(lVar6 + 0x1f0) = 0;
    *(undefined8 *)(lVar6 + 0x218) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_60 = *puVar9;
        FUN_02a44274(lVar7 + 0xd8,&local_60);
      }
    }
    *(undefined8 *)(param_1 + (long)param_2 * 0x50 + 0x220) = 0;
  }
  lVar7 = plVar8[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
}


