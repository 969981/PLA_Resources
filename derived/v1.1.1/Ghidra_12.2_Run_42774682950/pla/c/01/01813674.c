/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01813674; name: FUN_01813674
 */


/* WARNING: Removing unreachable block (ram,0x018136d8) */

void FUN_01813674(float param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  FUN_01813750(&local_28);
  if (local_28 != (long *)0x0) {
    local_48 = 0x5dcae9b5c318e2e6;
    pcStack_40 = "CHARA_VELOCITY";
    local_38 = 0xe;
    local_30 = (long *)0x0;
    fVar6 = 0.0;
    if (0.0 <= param_1 * 100.0) {
      fVar6 = param_1 * 100.0;
    }
    (**(code **)(*local_28 + 0xf8))(fVar6,local_28,&local_48,0);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
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
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


