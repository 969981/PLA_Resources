/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01290530; name: FUN_01290530
 */


undefined8 FUN_01290530(long param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 local_4c [4];
  uint local_48;
  int iStack_44;
  
  if (*(long *)(param_1 + 0x16f0) != 0) {
    if (param_2 == 0) {
      pbVar9 = (byte *)(param_1 + (ulong)(param_3 >> 3) + 0x1678);
      uVar10 = param_3;
    }
    else {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar7 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar7;
      plVar8 = *(long **)(lVar7 + 0x238);
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[0xb];
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
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar10 = param_3 + (int)plVar8[0xa6] * 0x1e;
      pbVar9 = (byte *)(param_1 + (ulong)(uVar10 >> 3) + 0x16cd);
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
    }
    uVar2 = 1 << (ulong)(uVar10 & 7);
    uVar10 = *pbVar9 ^ uVar2;
    *pbVar9 = (byte)uVar10;
    if (*(code **)(param_1 + 0x16f0) != (code *)0x0) {
      local_4c[0] = (uVar10 & uVar2 & 0xff) != 0;
      local_48 = param_3;
      iStack_44 = param_2;
      (**(code **)(param_1 + 0x16f0))(param_1 + 0x1710,&iStack_44,&local_48,local_4c);
    }
  }
  return 0;
}


