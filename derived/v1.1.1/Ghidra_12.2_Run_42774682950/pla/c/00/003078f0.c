/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003078f0; name: FUN_003078f0
 */


undefined8 FUN_003078f0(long *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_1[0x14] != 0) {
    return 0;
  }
  FUN_002ef750(param_1 + 0x15);
  lVar5 = *param_1;
  puVar1 = (ulong *)(lVar5 + 0x28);
  do {
    uVar6 = *(ulong *)(lVar5 + 0x28);
    uVar2 = uVar6 + param_2;
    if (*(ulong *)(lVar5 + 0x30) < uVar2) {
      uVar7 = 0;
LAB_00307978:
      FUN_002ef790(param_1 + 0x15);
      return uVar7;
    }
    while (*puVar1 == uVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        FUN_003079a0(param_1,param_2,0);
        uVar7 = 1;
        goto LAB_00307978;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


