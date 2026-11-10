/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01215c54; name: FUN_01215c54
 */


void FUN_01215c54(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + (long)param_2 * 0x60 + 0x638) + 0xa8) +
                    (ulong)param_3 * 0x10);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar12 = *(long **)(lVar9 + 0x248);
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = FUN_0121fbdc(param_1,param_2,*(undefined1 *)((long)plVar12 + 0x4a9),param_3);
  if (lVar9 == 0) goto LAB_01215d80;
  iVar6 = **(int **)(param_1 + 0x1648);
  if (iVar6 == 1) {
    uVar8 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
    if (((uVar8 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
LAB_01215d44:
      uVar8 = FUN_0121e94c(param_1,param_2,param_3);
      *(undefined8 *)(lVar13 + 0x34) = 0;
      *(undefined8 *)(lVar13 + 0x2c) = 0;
      *(undefined8 *)(lVar13 + 0x3c) = 0;
      *(undefined4 *)(lVar13 + 0x44) = 0;
      if ((uVar8 & 1) == 0) {
        uVar8 = 0x12;
      }
      else {
        uVar8 = 0x17;
      }
LAB_01215d74:
      puVar10 = (undefined4 *)(lVar13 + 0x34);
      *(ulong *)(lVar13 + 0x2c) = uVar8 | 0x600000000;
    }
    else {
LAB_01215e88:
      puVar10 = (undefined4 *)(lVar13 + 0x2c);
      *(undefined8 *)(lVar13 + 0x38) = 0;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(undefined8 *)(lVar13 + 0x30) = 0;
    }
  }
  else {
    if (iVar6 == 0) {
      cVar3 = *(char *)(param_1 + 0x1641);
      uVar5 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
      uVar1 = (*(byte *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) & 4) >> 2;
      if (cVar3 != '\0') {
        if ((uVar5 & 1) != 0 || uVar1 != 0) goto LAB_01215e88;
        goto LAB_01215d44;
      }
      if ((uVar5 & 1) == 0 && uVar1 == 0) {
        uVar8 = FUN_01091d40(lVar9);
        if ((uVar8 & 1) == 0) {
          *(undefined8 *)(lVar13 + 0x2c) = 0x60000000e;
          puVar10 = (undefined4 *)(lVar13 + 0x40);
          *(undefined4 *)(lVar13 + 0x44) = 0;
          *(undefined8 *)(lVar13 + 0x34) = 0xf00000018;
          *(undefined4 *)(lVar13 + 0x3c) = 3;
        }
        else {
          *(undefined8 *)(lVar13 + 0x34) = 0x800000018;
          *(undefined8 *)(lVar13 + 0x2c) = 0x60000000e;
          puVar10 = (undefined4 *)(lVar13 + 0x44);
          *(undefined8 *)(lVar13 + 0x3c) = 0x30000000f;
        }
        goto LAB_01215d78;
      }
      *(undefined4 *)(lVar13 + 0x44) = 0;
      uVar11 = 0xe;
    }
    else {
      if (iVar6 == 2) {
        uVar8 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
        if (((uVar8 & 1) != 0) ||
           ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) >> 2 & 1) != 0)) {
          *(undefined8 *)(lVar13 + 0x38) = 0;
          *(undefined8 *)(lVar13 + 0x40) = 0;
          puVar10 = (undefined4 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar13 + 0x30) = 0;
          goto LAB_01215d78;
        }
        uVar8 = 0x19;
        *(undefined8 *)(lVar13 + 0x38) = 0;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        goto LAB_01215d74;
      }
      uVar11 = 6;
      *(undefined4 *)(lVar13 + 0x44) = 0;
    }
    puVar10 = (undefined4 *)(lVar13 + 0x30);
    *(undefined8 *)(lVar13 + 0x3c) = 0;
    *(undefined8 *)(lVar13 + 0x34) = 0;
    *(undefined4 *)(lVar13 + 0x2c) = uVar11;
  }
LAB_01215d78:
  *puVar10 = 2;
LAB_01215d80:
  lVar13 = plVar12[0xb];
  piVar2 = (int *)(lVar13 + 0xc);
  do {
    iVar6 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01215e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x20))(plVar12);
    return;
  }
  return;
}


