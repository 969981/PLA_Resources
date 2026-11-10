/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042cd80; name: FUN_0042cd80
 */


void FUN_0042cd80(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 7;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      DataMemoryBarrier(2,1);
      if ((*param_1 != 0) && (pcVar5 = *(code **)(*param_1 + 0x18), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1);
      }
      if (((long *)param_1[3] != (long *)0x0) &&
         (pcVar5 = *(code **)(*(long *)param_1[3] + 0x178), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1);
      }
      FUN_00400e80(8,param_1,param_1 + 8);
      FUN_00400180(param_1[9]);
      FUN_0042dac0(param_1[3]);
      FUN_0042db80(param_1[4]);
      FUN_0040c140(param_1[5]);
      FUN_00400620(param_1,0x50,"external/openssl/crypto/ec/ec_key.c",0x46);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/ec/ec_key.c",0x34);
    }
  }
  return;
}


