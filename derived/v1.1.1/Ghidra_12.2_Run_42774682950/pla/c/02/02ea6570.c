/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6570; name: FUN_02ea6570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ea6570(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  uVar5 = _DAT_042ab268;
  uVar8 = (uint)*(ushort *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 1);
  if (*(ushort *)(param_1 + 2) < _DAT_042ab268) {
    uVar8 = _DAT_042ab268 & 0xffff;
    *(short *)(param_1 + 2) = (short)_DAT_042ab268;
    if (8 < bVar2) goto LAB_02ea65ec;
  }
  else if (8 < bVar2) goto LAB_02ea65ec;
  if (uVar5 == uVar8) {
    plVar1 = &DAT_0440a3d0 + (bVar2 - 1);
    plVar6 = (long *)*plVar1;
    while (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      while ((long *)*plVar1 == plVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_02ea660c;
      }
      ClearExclusiveLocal();
      plVar6 = (long *)*plVar1;
    }
    uVar8 = (uint)*(ushort *)(param_1 + 2);
  }
LAB_02ea65ec:
  plVar6 = (long *)(*DAT_0442d140)(5,bVar2 * uVar8 * 4,0x10);
  if (plVar6 == (long *)0x0) {
    uVar7 = 0x34;
  }
  else {
LAB_02ea660c:
    *param_1 = (long)plVar6;
    uVar7 = 1;
    *(undefined2 *)((long)param_1 + 0x12) = 0;
  }
  return uVar7;
}


