/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a89ac; name: FUN_009a89ac
 */


uint FUN_009a89ac(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  long *local_40;
  undefined1 auStack_38 [8];
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  FUN_0098f80c(&local_40,lVar8 + 0xd8);
  plVar9 = (long *)local_40[0x13];
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
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_40 != (long *)0x0) {
    lVar8 = local_40[0xb];
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
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (plVar9 != (long *)0x0) {
    FUN_00956dac(&local_40,plVar9 + 0x35);
    uVar7 = FUN_009bd48c(local_40 + 0x1e,auStack_38);
    if (local_40 == (long *)0x0) {
LAB_009a8aa8:
      if (uVar7 != 0) goto LAB_009a8aac;
LAB_009a8b68:
      bVar3 = false;
    }
    else {
      lVar8 = local_40[0xb];
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
      if (iVar5 + -1 != 0) goto LAB_009a8aa8;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
      if (uVar7 == 0) goto LAB_009a8b68;
LAB_009a8aac:
      lVar8 = *(long *)(uVar7 + 0x1f8);
      if (((lVar8 == 0) ||
          (fVar12 = *(float *)(lVar8 + 0x6c) - *(float *)(lVar8 + 0x68),
          fVar12 < *(float *)(uVar7 + 0x20c))) ||
         (fVar11 = (float)FUN_025e974c(uVar7), fVar12 < fVar11 + -1.0)) {
        uVar7 = 0;
      }
      else {
        fVar11 = (float)FUN_025e974c(uVar7);
        uVar7 = (ulong)(fVar11 <= fVar12);
      }
      bVar3 = true;
    }
    uVar10 = (uint)uVar7;
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (bVar3) goto LAB_009a8af4;
  }
  uVar10 = 0;
LAB_009a8af4:
  return uVar10 & 1;
}


