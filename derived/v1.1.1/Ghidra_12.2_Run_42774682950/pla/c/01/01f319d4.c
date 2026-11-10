/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f319d4; name: FUN_01f319d4
 */


void FUN_01f319d4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (*param_1 != 0) {
    FUN_01f37cc8(&local_18);
    if (local_18 != (long *)0x0) {
      FUN_0257f728(local_18[0xba],0);
      lVar5 = local_18[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f31a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*local_18 + 0x20))(local_18);
        return;
      }
    }
  }
  return;
}


