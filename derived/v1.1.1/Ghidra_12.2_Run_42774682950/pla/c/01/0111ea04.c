/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111ea04; name: FUN_0111ea04
 */


bool FUN_0111ea04(uint param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long local_40;
  int local_38;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar9 = *(long **)(lVar8 + 0x260);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
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
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar10 = *(uint *)((long)plVar9 + (ulong)(param_2 >> 5 & 0x7ff) * 4 + 0x1a8) &
           1 << (ulong)(param_2 & 0x1f);
  if ((*(uint *)((long)plVar9 + (ulong)(param_1 >> 5 & 0x7ff) * 4 + 0x1a8) &
      1 << (ulong)(param_1 & 0x1f)) == 0) {
    if (uVar10 != 0) {
      bVar4 = false;
      goto LAB_0111eaf4;
    }
  }
  else if (uVar10 == 0) {
    bVar4 = true;
    goto LAB_0111eaf4;
  }
  if (param_1 == 0) {
    uVar10 = 0xffffffff;
    if (param_2 != 0) goto LAB_0111eb30;
LAB_0111eae8:
    uVar7 = 0xffffffff;
  }
  else {
    FUN_02c4fb44(&local_40,param_1);
    uVar10 = ((uint)*(byte *)(local_40 + 0x16) << 0x1c | (uint)*(byte *)(local_40 + 0x18) << 0x10) +
             local_38;
    if (param_2 == 0) goto LAB_0111eae8;
LAB_0111eb30:
    FUN_02c4fb44(&local_40,param_2);
    uVar7 = ((uint)*(byte *)(local_40 + 0x16) << 0x1c | (uint)*(byte *)(local_40 + 0x18) << 0x10) +
            local_38;
  }
  bVar4 = uVar10 < uVar7;
LAB_0111eaf4:
  lVar8 = plVar9[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  return bVar4;
}


