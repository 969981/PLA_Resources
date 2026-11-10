/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f07c0; name: FUN_012f07c0
 */


undefined8 FUN_012f07c0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar10 = *(long **)(lVar8 + 0x280);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar5;
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
      uVar6 = FUN_010dac08(plVar10,0);
      if ((int)uVar6 != 0) {
        uVar11 = 0;
        uVar12 = uVar6 & 0xffffffff;
        do {
          uVar6 = FUN_010dac08(uVar6,0);
          if (uVar11 < (uVar6 & 0xffffffff)) {
            uVar7 = *(uint *)((long)plVar10 + uVar11 * 4 + 0x68);
            uVar9 = uVar7 >> 0x10;
          }
          else {
            uVar9 = 0;
            uVar7 = 0;
          }
          if ((uVar7 & 0xffff) == 0 && uVar9 == 0) {
            uVar5 = 1;
            goto LAB_012f0890;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
      }
      uVar5 = 0;
LAB_012f0890:
      lVar8 = plVar10[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


