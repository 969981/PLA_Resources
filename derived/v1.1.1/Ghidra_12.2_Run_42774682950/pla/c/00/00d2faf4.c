/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2faf4; name: FUN_00d2faf4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d2faf4(float param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float local_54;
  
  uVar7 = (uint)(param_1 * 0.01 * 39.37);
  uVar13 = uVar7 / 0xc;
  uVar12 = uVar7 % 0xc;
  if (uVar7 < 0xc) {
    lVar9 = -0x3b5d7b702c3a8aa8;
  }
  else if (uVar12 == 0) {
    lVar9 = -0x3b5d74702c3a7ec3;
  }
  else {
    lVar9 = -0x3b5d7a702c3a88f5;
    if (9 < uVar12) {
      lVar9 = -0x3b5d79702c3a8742;
    }
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar8 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar8;
  lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x50) + 0x2d10) + 8);
  if (lVar8 == 0) {
    plVar10 = (long *)0x0;
    lVar8 = _DAT_000000b0;
  }
  else {
    plVar11 = *(long **)(lVar8 + 0x78);
    if (plVar11 != (long *)0x0) {
      lVar8 = plVar11[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)plVar11[0xd];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar8 = plVar11[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      lVar8 = plVar10[0x16];
    }
    else {
      lVar8 = plVar10[0x16];
    }
  }
  if (lVar8 != 0) {
    plVar11 = *(long **)(lVar8 + 0x270);
    if (plVar11 != *(long **)(lVar8 + 0x278)) {
      iVar5 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar11 != 0) {
          plVar2 = (long *)(*plVar11 + 0x58);
        }
        if (*plVar2 == lVar9) goto LAB_00d2fc98;
        plVar11 = plVar11 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar11);
    }
  }
  iVar5 = 0;
LAB_00d2fc98:
  FUN_02c2e33c(plVar10,iVar5,param_3);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  lVar9 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar9;
  if (*(char *)(lVar9 + 0x50) == '\x02') {
    uVar6 = 0;
  }
  else {
    fVar14 = modff(param_1 * 0.01,&local_54);
    uVar6 = 2;
    uVar13 = (uint)local_54;
    uVar7 = (uint)(fVar14 * 100.0);
    if (99 < uVar7) {
      uVar13 = uVar13 + 1;
    }
    uVar12 = 0;
    if (uVar7 < 100) {
      uVar12 = uVar7;
    }
  }
  FUN_02c395d0(param_4,0,uVar13 & 0xffff,3,0,1);
  FUN_02c395d0(param_4,1,uVar12 & 0xffff,2,uVar6,1);
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


