/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00612620; name: FUN_00612620
 */


void FUN_00612620(undefined **param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  MemoryResource *pMVar6;
  
  if ((DAT_0439f448 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0439f448);
    if (iVar3 != 0) {
      if (((DAT_0439f438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0439f438), iVar3 != 0)) {
        __cxa_guard_release(&DAT_0439f438);
      }
      DAT_0439f440 = &PTR_PTR_041909f8;
      __cxa_guard_release(&DAT_0439f448);
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x439f440,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_0439f440 = param_1;
    }
  } while (cVar1 != '\0');
  lVar4 = nn::util::pmr::GetDefaultResource();
  lVar5 = nn::util::pmr::NewDeleteResource();
  if (lVar4 == lVar5) {
    pMVar6 = (MemoryResource *)FUN_00612480();
    nn::util::pmr::SetDefaultResource(pMVar6);
    return;
  }
  return;
}


