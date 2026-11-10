/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d34c20; name: FUN_00d34c20
 */


void FUN_00d34c20(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  plVar9 = (long *)*param_2;
  *param_2 = 0;
  puVar4 = PTR_DAT_043796a0;
  uVar7 = plVar9[0x14];
  if ((int)uVar7 == 0) {
LAB_00d34d58:
    if (plVar9 != (long *)0x0) {
      plVar11 = plVar9 + 10;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d34dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
    return;
  }
  uVar13 = 0;
  if (uVar7 == 0) goto LAB_00d34d3c;
  do {
    if ((*(char *)(plVar9[0x13] + uVar13 * 0x30 + 0x28) == '\0') &&
       (plVar11 = *(long **)(plVar9[0x13] + uVar13 * 0x30 + 0x20), plVar11 != (long *)0x0)) {
      plVar1 = plVar11 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar8 = *(long *)PTR_DAT_04379698;
      *(long *)puVar4 = lVar8;
      lVar8 = *(long *)(*(long *)(lVar8 + 0x50) + 0x2fa0);
      if (*(int *)(lVar8 + 0x590) != 0) {
        FUN_0022bb08(plVar11[0xc],lVar8 + 0x10,*(long *)(*(long *)(lVar8 + 0x98) + 600) + 0x80);
        uVar6 = *(uint *)(lVar8 + 0x590);
        if (1 < uVar6) {
          lVar12 = lVar8 + 0xc0;
          uVar10 = 1;
          do {
            if (uVar10 < uVar6) {
              FUN_0022bb08(plVar11[0xc],lVar12,*(long *)(*(long *)(lVar12 + 0x88) + 600) + 0x80);
              uVar6 = *(uint *)(lVar8 + 0x590);
            }
            uVar10 = uVar10 + 1;
            lVar12 = lVar12 + 0xb0;
          } while (uVar10 < uVar6);
        }
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
LAB_00d34d3c:
    do {
      uVar13 = uVar13 + 1;
      if (uVar13 == (uVar7 & 0xffffffff)) goto LAB_00d34d58;
    } while ((ulong)plVar9[0x14] <= uVar13);
  } while( true );
}


