/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012a1df0; name: FUN_012a1df0
 */


void FUN_012a1df0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar4 != 0))
  {
    uVar7 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar7;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)PTR_DAT_04379c98) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)PTR_DAT_04379c98; plVar5 = (long *)*plVar5) {
    }
  }
  local_40 = &DAT_753f74378b49da9c;
  pcStack_38 = "View_Top";
  local_30 = 8;
  local_28 = (long *)0x0;
  lVar6 = FUN_012a11fc(puVar8[0x8f],&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *param_1 = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar6 + 0xc);
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
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


