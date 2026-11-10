/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01468b54; name: FUN_01468b54
 */


uint FUN_01468b54(long param_1,ushort *param_2)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  byte local_58;
  undefined1 local_57;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x718));
  if (*param_2 - 0x6e5 < 5) {
    FUN_014688d4(param_1);
    uVar12 = (uint)param_2[1];
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar10 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar10;
    plVar11 = *(long **)(lVar10 + 0x280);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01468db4;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (param_2[1] == 0) {
      uVar12 = 0;
    }
    else {
      uVar9 = FUN_010db41c(plVar11,*param_2,1,0xffffffff);
      bVar4 = (uVar9 & 1) == 0;
      if (bVar4) {
        bVar5 = 0;
      }
      else {
        bVar5 = FUN_010daa64(plVar11,*param_2);
        bVar5 = bVar5 ^ 1;
        FUN_010db1d8(plVar11,*param_2,1,0xffffffff);
      }
      uVar12 = (uint)!bVar4;
      if (1 < param_2[1]) {
        uVar13 = 1;
        do {
          uVar9 = FUN_010db41c(plVar11,*param_2,1,0xffffffff);
          if ((uVar9 & 1) != 0) {
            bVar6 = FUN_010daa64(plVar11,*param_2);
            bVar5 = bVar5 | bVar6 ^ 1;
            FUN_010db1d8(plVar11,*param_2,1,0xffffffff);
            uVar12 = uVar12 + 1;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < param_2[1]);
      }
      if (uVar12 != 0) {
        uVar2 = *param_2;
        lVar10 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
        if (lVar10 == 0) {
LAB_01468db4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        local_58 = bVar5 & 1;
        local_68 = (uint)uVar2;
        local_60 = 0xffffffff00000001;
        local_57 = 0;
        uStack_64 = uVar12;
        FUN_0148c1e0(lVar10,&local_68);
      }
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x718));
  return uVar12;
}


