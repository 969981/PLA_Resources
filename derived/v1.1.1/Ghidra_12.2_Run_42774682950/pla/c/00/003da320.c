/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003da320; name: FUN_003da320
 */


void FUN_003da320(int param_1,long param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == 2) {
    if (param_2 != 0) {
      FUN_003d887c(param_2);
      FUN_002e2ea0(PTR_LAB_04373088,param_2);
      return;
    }
  }
  else if (param_1 == 3) {
    plVar1 = &DAT_0439a9a0 + (ulong)(param_3 & 0xf) * 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


