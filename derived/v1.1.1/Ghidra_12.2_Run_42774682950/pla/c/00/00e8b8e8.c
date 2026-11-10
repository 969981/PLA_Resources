/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e8b8e8; name: FUN_00e8b8e8
 */


void FUN_00e8b8e8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_0437c680;
  puVar4 = PTR_DAT_0437c678;
  plVar8 = *(long **)(param_2 + 0xc0);
  plVar11 = plVar8;
  if (*(long *)(param_2 + 200) != 0) {
    plVar11 = plVar8 + *(long *)(param_2 + 200);
    do {
      plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 0x50))();
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar9 = FUN_009311a8();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar5) {
          plVar11 = plVar8;
          goto LAB_00e8b950;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar11);
  }
LAB_00e8b950:
  if (plVar11 != (long *)(*(long *)(param_2 + 0xc0) + *(long *)(param_2 + 200) * 8)) {
    lVar10 = *plVar11;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x50))((undefined8 *)(lVar10 + 0x50));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar6 != 0)) {
      uVar9 = FUN_009311a8();
      *(undefined8 *)puVar5 = uVar9;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar5) {
        *param_1 = lVar10;
        lVar10 = *(long *)(lVar10 + 0x58);
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}


