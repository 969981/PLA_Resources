/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01813454; name: FUN_01813454
 */


void FUN_01813454(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  FUN_01813750(&local_28);
  if (local_28 != (long *)0x0) {
    local_50 = *(undefined8 *)(param_1 + 0x200);
    uStack_48 = *(undefined8 *)(param_1 + 0x208);
    local_40 = *(undefined8 *)(param_1 + 0x210);
    local_38 = (long *)0x0;
    if ((param_2 & 1) == 0) {
      puVar5 = (undefined8 *)(param_1 + 0x218);
    }
    else {
      puVar5 = (undefined8 *)(param_1 + 0x230);
    }
    local_70 = *puVar5;
    uStack_68 = puVar5[1];
    local_60 = puVar5[2];
    local_58 = (long *)0x0;
    (**(code **)(*local_28 + 0xf0))(local_28,&local_50,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    lVar6 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


