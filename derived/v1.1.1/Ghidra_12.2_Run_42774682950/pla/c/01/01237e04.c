/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01237e04; name: FUN_01237e04
 */


void FUN_01237e04(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *local_58;
  
  iVar4 = FUN_01236ca4(param_1,7);
  if (iVar4 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01149008(&local_58);
    iVar6 = 0;
    do {
      lVar7 = FUN_01236d4c(param_1,7,iVar6);
      plVar9 = *(long **)(lVar7 + 8);
      if (plVar9 == (long *)0x0) {
        plVar10 = *(long **)(lVar7 + 0x18);
        if (plVar10 != (long *)0x0) goto LAB_01237f64;
LAB_01237ebc:
        plVar11 = *(long **)(lVar7 + 0x20);
        if (plVar11 != (long *)0x0) goto LAB_01237f7c;
LAB_01237ec4:
        plVar12 = *(long **)(lVar7 + 0x30);
      }
      else {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        plVar10 = *(long **)(lVar7 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_01237ebc;
LAB_01237f64:
        (**(code **)(*plVar10 + 0x18))(plVar10);
        plVar11 = *(long **)(lVar7 + 0x20);
        if (plVar11 == (long *)0x0) goto LAB_01237ec4;
LAB_01237f7c:
        (**(code **)(*plVar11 + 0x18))(plVar11);
        plVar12 = *(long **)(lVar7 + 0x30);
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      uVar5 = FUN_0123738c(param_1 + 0x400,*(undefined8 *)(lVar7 + 0x40));
      uVar8 = FUN_010ed0f4(local_58,uVar5);
      if ((uVar8 & 1) == 0) {
        FUN_010ed0c0(local_58,uVar5);
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      iVar6 = iVar6 + 1;
    } while (iVar4 != iVar6);
    if (local_58 != (long *)0x0) {
      lVar7 = local_58[0xb];
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
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


