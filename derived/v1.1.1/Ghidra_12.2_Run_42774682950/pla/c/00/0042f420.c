/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042f420; name: FUN_0042f420
 */


void FUN_0042f420(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x30);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      DataMemoryBarrier(2,1);
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          do {
            plVar5 = plVar5 + 1;
            FUN_0042db80(lVar6);
            lVar6 = *plVar5;
          } while (lVar6 != 0);
          plVar5 = *(long **)(param_1 + 0x20);
        }
        FUN_00400420(plVar5,"external/openssl/crypto/ec/ec_mult.c",0x62);
      }
      FUN_00400180(*(undefined8 *)(param_1 + 0x38));
      FUN_00400420(param_1,"external/openssl/crypto/ec/ec_mult.c",0x65);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/ec/ec_mult.c",0x5b);
    }
  }
  return;
}


