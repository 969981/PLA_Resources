/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d8b40; name: FUN_027d8b40
 */


void FUN_027d8b40(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    iVar5 = FUN_02c5be48();
    if ((iVar5 == 0x1ec) && (sVar4 = FUN_02c5be50(*param_2), sVar4 == 1)) {
      FUN_02c62fcc(*param_2,0,0);
    }
    lVar6 = *param_2;
    *param_1 = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


