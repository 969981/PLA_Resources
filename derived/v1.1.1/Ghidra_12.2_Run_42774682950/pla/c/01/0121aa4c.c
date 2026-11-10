/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121aa4c; name: FUN_0121aa4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0121aa4c(long param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_70 [6];
  
  local_70[5] = 0;
  local_70[0] = 0xafc30606ba712626;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[1] = 1;
  local_70[2] = 0;
  iVar5 = FUN_00d5294c();
  uVar6 = FUN_00d4bf2c(param_1,iVar5);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar11 = *(long **)(lVar10 + 0x248);
  if (plVar11 == (long *)0x0) {
    uVar13 = (ulong)DAT_000004a9;
  }
  else {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
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
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    uVar13 = (ulong)*(byte *)((long)plVar11 + 0x4a9);
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
  lVar10 = FUN_0121fbdc(param_1,iVar5,uVar13,uVar6);
  if (lVar10 == 0) {
    uVar12 = 1;
  }
  else {
    iVar7 = FUN_02c6849c(*(undefined8 *)(lVar10 + 0x98));
    uVar12 = 1;
    if (iVar7 != 0) {
      puVar2 = (uint *)(param_1 + uVar13 * 4 + 0x169c);
      if (iVar5 != 0) {
        puVar2 = (uint *)(param_1 + 0x171c);
      }
      if ((*puVar2 & 1 << (ulong)(uVar6 & 0x1f)) == 0) {
        local_70[2] = 0x406ba7122c0;
      }
      else {
        local_70[2] = 0x706ba7127d9;
      }
      local_70[2] = local_70[2] | 0xafc3000000000000;
      uVar12 = 2;
      local_70[3] = local_70[3] & 0xffffffff00000000;
    }
  }
  uVar9 = FUN_012206e0(param_1);
  uVar13 = uVar12;
  if ((uVar9 & 1) != 0) {
    local_70[uVar12 * 2] = 0xafc30506ba712473;
    uVar13 = (ulong)((int)uVar12 + 1);
    *(undefined4 *)((long)local_70 + uVar12 * 0x10 + 8) = 2;
  }
  FUN_012201cc(param_1,local_70,uVar13);
  return;
}


