/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133fa78; name: FUN_0133fa78
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0133fa78(long param_1,undefined8 param_2,long *param_3,long *param_4,uint param_5,
                 undefined4 param_6)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  lVar7 = *param_3;
  plVar14 = *(long **)(*(long *)(param_1 + 0x148) + 0x1c0);
  if (plVar14 == (long *)0x0) {
    lVar12 = *(long *)(lVar7 + 0xb0);
    if (lVar12 != 0) {
      plVar14 = *(long **)(lVar12 + 0x270);
      if (plVar14 != *(long **)(lVar12 + 0x278)) {
        iVar10 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar3 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar3 == *param_4) goto LAB_0133fd24;
          plVar14 = plVar14 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar14);
      }
    }
    iVar10 = 0;
LAB_0133fd24:
    FUN_02c2e33c(lVar7,iVar10,0);
  }
  else {
    plVar3 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = *(long *)(lVar7 + 0xb0);
    if (lVar12 != 0) {
      plVar11 = *(long **)(lVar12 + 0x270);
      if (plVar11 != *(long **)(lVar12 + 0x278)) {
        iVar10 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar2 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar2 == *param_4) goto LAB_0133fb18;
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar11);
      }
    }
    iVar10 = 0;
LAB_0133fb18:
    FUN_02c2e33c(lVar7,iVar10,plVar14);
    do {
      iVar10 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x148) + 0x1b8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar7 = plVar14[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar8;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar9 = (**(code **)(*plVar14 + 0x50))(plVar14,plVar14[0xd],param_6);
  if (param_5 < *(uint *)(plVar14 + 0x12)) {
    lVar13 = ((ulong)param_5 + (ulong)param_5 * 2) * 8;
    lVar7 = plVar14[0xd];
    *(ulong *)(plVar14[0x13] + lVar13 + 8) = uVar9 & 0xffff | 0x20000;
    lVar12 = plVar14[0x13];
    lVar13 = *(long *)(lVar12 + lVar13);
    if (*(char *)(lVar13 + 0x7c) != '\0') {
      uVar6 = FUN_02c30580(*(undefined8 *)(lVar13 + 0x58),*(undefined8 *)(lVar7 + 0x58),
                           *(undefined2 *)(lVar13 + 0x78));
      *(undefined2 *)(lVar13 + 0x7a) = uVar6;
      lVar12 = plVar14[0x13];
    }
    lVar7 = (ulong)param_5 * 0x18;
    *(undefined2 *)(lVar12 + lVar7 + 0x10) = 0;
    lVar7 = plVar14[0x13] + lVar7;
    *(ushort *)(lVar7 + 0x12) = *(ushort *)(lVar7 + 0x12) & 0xfffe;
  }
  lVar7 = plVar14[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  lVar12 = *(long *)(param_1 + 0x148);
  uVar8 = *(undefined8 *)(lVar12 + 0x1c0);
  lVar7 = *(long *)(lVar12 + 0x1c8);
  lVar13 = *(long *)(lVar12 + 0x1b8);
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,uVar8);
  if (*(char *)(lVar7 + 0x7c) != '\0') {
    **(undefined2 **)(lVar7 + 0x58) = 0;
    *(undefined2 *)(lVar7 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar7,uVar8,0,0);
  FUN_0283ce7c(lVar12,param_2,*(undefined8 *)(lVar12 + 0x1c8),10);
  return;
}


