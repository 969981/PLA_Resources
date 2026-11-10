/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6640; name: FUN_02ea6640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ea6640(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (8 < *(byte *)(param_1 + 1) || _DAT_042ab268 != *(ushort *)(param_1 + 2)) {
    (*DAT_0442d158)(5,*param_1);
LAB_02ea66a4:
    *param_1 = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    return;
  }
  plVar1 = &DAT_0440a3d0 + (*(byte *)(param_1 + 1) - 1);
  do {
    lVar4 = *plVar1;
    *(long *)*param_1 = lVar4;
    lVar5 = *param_1;
    while (*plVar1 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_02ea66a4;
    }
    ClearExclusiveLocal();
  } while( true );
}


