/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d300f4; name: FUN_00d300f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d300f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  undefined2 local_54 [2];
  undefined2 local_48 [2];
  float local_44;
  
  fVar14 = modff((float)param_1 * 100.0 * 0.0022046,&local_44);
  uVar8 = (uint)local_44;
  local_48[0] = (undefined2)uVar8;
  uVar10 = (uint)(fVar14 * 10.0);
  local_54[0] = (undefined2)uVar10;
  if (9 < uVar10) {
    uVar10 = 0;
    uVar8 = uVar8 + 1;
    local_54[0] = 0;
    local_48[0] = (undefined2)uVar8;
  }
  lVar9 = 0x406c1f917834a539;
  if (uVar10 != 0) {
    lVar9 = 0x406c1d917834a1d3;
  }
  lVar2 = 0x406c1e917834a386;
  if ((uVar8 & 0xffff) != 0) {
    lVar2 = lVar9;
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar9 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar9;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x50) + 0x2d10) + 8);
  if (lVar9 == 0) {
    plVar11 = (long *)0x0;
    lVar9 = _DAT_000000b0;
  }
  else {
    plVar13 = *(long **)(lVar9 + 0x78);
    if (plVar13 != (long *)0x0) {
      lVar9 = plVar13[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar13[0xd];
    if (plVar11 != (long *)0x0) {
      plVar3 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar9 = plVar13[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
      lVar9 = plVar11[0x16];
    }
    else {
      lVar9 = plVar11[0x16];
    }
  }
  if (lVar9 != 0) {
    plVar13 = *(long **)(lVar9 + 0x270);
    if (plVar13 != *(long **)(lVar9 + 0x278)) {
      iVar6 = 0;
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (*plVar13 != 0) {
          plVar3 = (long *)(*plVar13 + 0x58);
        }
        if (*plVar3 == lVar2) goto LAB_00d302bc;
        plVar13 = plVar13 + 1;
        iVar6 = iVar6 + 1;
      } while (*(long **)(lVar9 + 0x278) != plVar13);
    }
  }
  iVar6 = 0;
LAB_00d302bc:
  FUN_02c2e33c(plVar11,iVar6,param_3);
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 10;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  uVar7 = 1;
  lVar9 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar9;
  uVar12 = 0;
  switch(*(undefined1 *)(lVar9 + 0x50)) {
  case 2:
    goto switchD_00d30338_caseD_2;
  case 3:
    uVar7 = 3;
    break;
  case 4:
    uVar7 = 4;
    break;
  case 5:
    uVar7 = 5;
    break;
  case 7:
    uVar7 = 6;
    break;
  case 8:
    uVar7 = 7;
    break;
  case 9:
    uVar7 = 8;
    break;
  case 10:
    uVar7 = 9;
  }
  FUN_02c2d9f0(param_1,local_48,local_54,uVar7);
  uVar12 = 2;
switchD_00d30338_caseD_2:
  FUN_02c395d0(param_4,0,local_48[0],4,0,1);
  FUN_02c395d0(param_4,1,local_54[0],2,uVar12,1);
  *(undefined4 *)(param_4 + 0x124) = 0;
  *(undefined2 *)(param_4 + 0x128) = 0;
  *(undefined4 *)(param_4 + 300) = 0;
  *(undefined4 *)(param_4 + 0x134) = 0;
  FUN_02c33414(param_4,param_3);
  if (*(char *)(param_2 + 0x7c) != '\0') {
    **(undefined2 **)(param_2 + 0x58) = 0;
    *(undefined2 *)(param_2 + 0x7a) = 0;
  }
  FUN_02c338a4(param_4,param_2,param_3,0,0);
  return;
}


