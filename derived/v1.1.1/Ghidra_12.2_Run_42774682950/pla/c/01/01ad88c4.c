/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad88c4; name: FUN_01ad88c4
 */


void FUN_01ad88c4(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *local_18;
  
  if (*(int *)(*(long *)(param_1 + 0x5c8) + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x6f8);
    *(ulong *)(lVar5 + 0x68) = *(ulong *)(lVar5 + 0x68) | 1L << (param_2 & 0x3f);
    if ((*(long *)(lVar5 + 0x88) != 0) && (FUN_01857de4(&local_18), local_18 != (long *)0x0)) {
      if (((int)local_18[0x72] != 0) && ((char)local_18[0x3e] != '\0')) {
        *(undefined4 *)(local_18 + 0x72) = 2;
        *(undefined1 **)(*(long *)(*(long *)(local_18[0x6c] + 0x100) + 0x38) + 8) =
             &DAT_cbf29ce484222645;
      }
      lVar6 = local_18[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    *(undefined4 *)(lVar5 + 0x70) = 0;
  }
  return;
}


