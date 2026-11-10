/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032153b0; name: FUN_032153b0
 */


void FUN_032153b0(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint local_34;
  
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  do {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint)uVar6 < (uint)(uVar6 >> 0x20)) {
      local_34 = (uint)uVar6;
    }
    else {
      iVar5 = FUN_0332bfc4(param_1 + 0x30,iVar1,1,&local_34);
      if (iVar5 == 0) {
        return;
      }
      uVar6 = (ulong)local_34;
    }
    FUN_031f2adc(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 0x918) + 0x30) + (long)(int)uVar6 * 8),
                 *(long *)(param_1 + 0x918) + 0x68);
  } while( true );
}


