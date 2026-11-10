/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a1350; name: FUN_026a1350
 */


void FUN_026a1350(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_28;
  
  FUN_01a5bd74(param_1,&DAT_03a7dc98,param_2 & 1);
  if (((*(long *)(param_1 + 0xbf0) != 0) && (FUN_009cf990(&local_28), local_28 != (long *)0x0)) &&
     (FUN_01a5bd74(local_28,&DAT_03a7dc98,param_2 & 1), local_28 != (long *)0x0)) {
    lVar5 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  *(byte *)(param_1 + 0xc6b) = param_2 & 1;
  *(undefined1 *)(param_1 + 0xc68) = 0;
  *(undefined4 *)(param_1 + 0xc6c) = 0;
  *(undefined4 *)(param_1 + 0xc71) = 0;
  *(undefined1 *)(param_1 + 0xc75) = 0;
  return;
}


