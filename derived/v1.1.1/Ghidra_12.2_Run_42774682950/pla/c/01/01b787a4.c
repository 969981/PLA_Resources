/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b787a4; name: FUN_01b787a4
 */


void FUN_01b787a4(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_28;
  
  if (*(int *)(*param_2 + 0xf0) != 0x18) {
    lVar9 = *(long *)param_2[1];
    *param_1 = *(undefined8 *)(lVar9 + 0x480);
    param_1[1] = *(undefined8 *)(lVar9 + 0x488);
    plVar7 = *(long **)(lVar9 + 0x498);
    param_1[2] = *(undefined8 *)(lVar9 + 0x490);
    param_1[3] = plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01b78880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))();
    return;
  }
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_0191c300(&local_50,*(long *)param_2[1] + 0x340);
  if (local_50 != (undefined8 *)0x0) {
    FUN_0191cb34(&local_28);
    plVar7 = local_28;
    puVar5 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
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
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = (long *)*puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
    if (plVar7 != (long *)0x0) {
      if (*(long *)(*param_2 + 0x118) == -0x11b0c2d8ce712917) {
        uVar8 = 0x10995585d6e048b1;
      }
      else if (*(long *)(*param_2 + 0x118) == -0x3643fe5bcff0c525) {
        uVar8 = 0xcba39272cf2e5fd3;
      }
      else {
        uVar8 = 0xed3aa34e38170f68;
      }
      FUN_019225b0(&local_50,plVar7,uVar8);
      *param_1 = local_50;
      param_1[1] = uStack_48;
      param_1[2] = local_40;
      param_1[3] = uStack_38;
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 != 0) {
        return;
      }
      *(undefined8 *)(lVar9 + 0x18) = 0;
      pcVar10 = *(code **)(*plVar7 + 0x20);
      goto LAB_01b78860;
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  uVar8 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar8;
  plVar7 = *(long **)(puVar4 + 0x18);
  param_1[2] = *(undefined8 *)(puVar4 + 0x10);
  param_1[3] = plVar7;
  if (plVar7 == (long *)0x0) {
    return;
  }
  pcVar10 = *(code **)(*plVar7 + 0x18);
LAB_01b78860:
  (*pcVar10)(plVar7);
  return;
}


