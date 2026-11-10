/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe8b5c; name: FUN_02fe8b5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fe8b5c(undefined8 *param_1,long param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *local_38;
  
  FUN_02fe942c();
  *param_1 = &PTR_LAB_042baa28;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *param_1 = &PTR_LAB_042bab10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = uVar4;
  if (param_3 != 0) {
    lVar5 = param_1[8];
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + (long)(param_1 + 8);
    }
    if (*(long *)(lVar6 + 8) == 0) {
      return;
    }
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
  FUN_02fe95fc(&local_38,param_1,param_4);
  plVar1 = param_1 + 8;
  if (local_38 == (long *)0x0) {
    *plVar1 = 0;
  }
  else {
    lVar6 = (long)local_38 - (long)plVar1;
    *plVar1 = lVar6;
    if (lVar6 != 0) {
      lVar6 = lVar6 + (long)plVar1;
      lVar5 = *(long *)(lVar6 + 8);
      goto joined_r0x02fe8c94;
    }
  }
  lVar6 = 0;
  lVar5 = _DAT_00000008;
joined_r0x02fe8c94:
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((local_38 != (long *)0x0) && (local_38[1] != 0)) {
    plVar1 = local_38 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  return;
}


