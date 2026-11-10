/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef5f0; name: FUN_002ef5f0
 */


void FUN_002ef5f0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base/src/core/lib/gpr/sync.cc",0x5d,
                  "gpr_ref_non_zero");
  }
  return;
}


