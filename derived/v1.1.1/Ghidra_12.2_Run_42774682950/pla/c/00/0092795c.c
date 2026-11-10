/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092795c; name: FUN_0092795c
 */


/* WARNING: Removing unreachable block (ram,0x00927aa4) */

void FUN_0092795c(long param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  bool bVar10;
  undefined1 local_44 [4];
  
  pbVar8 = *(byte **)(param_1 + 0x70);
  pbVar2 = *(byte **)(param_1 + 0x78);
  if ((pbVar8 != pbVar2) && ((uint)*pbVar8 != (param_2 & 0xff))) {
    do {
      pbVar8 = pbVar8 + 1;
      if (pbVar2 == pbVar8) goto LAB_009279bc;
    } while ((uint)*pbVar8 != (param_2 & 0xff));
  }
  if (pbVar2 == pbVar8) {
LAB_009279bc:
    lVar5 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_2);
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar9 = *(long **)(lVar7 + 0x298);
    if (plVar9 == (long *)0x0) {
      bVar10 = true;
    }
    else {
      lVar7 = plVar9[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
    }
    FUN_01133988(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0x70) + 0x60),param_3);
    local_44[0] = (undefined1)param_2;
    FUN_00927b9c(param_1 + 0x70,local_44);
    if (!bVar10) {
      lVar5 = plVar9[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar4 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  return;
}


