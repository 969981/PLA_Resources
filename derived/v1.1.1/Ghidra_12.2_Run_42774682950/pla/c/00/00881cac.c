/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00881cac; name: FUN_00881cac
 */


void FUN_00881cac(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_18;
  
  FUN_02956d1c();
  *param_1 = &PTR_LAB_041b4200;
  param_1[9] = &PTR_LAB_041b4250;
  param_1[0x575] = 0;
  *(undefined4 *)(param_1 + 0x576) = 0;
  param_1[0x57a] = 0;
  *(undefined4 *)(param_1 + 0x57b) = 0;
  *(undefined1 *)(param_1 + 0x574) = 0;
  param_1[0x56d] = 0;
  param_1[0x56e] = 0;
  param_1[0x56f] = 0;
  param_1[0x570] = 0;
  param_1[0x571] = 0;
  param_1[0x572] = 0;
  param_1[0x573] = 0;
  param_1[0x577] = 0;
  param_1[0x578] = 0;
  *(undefined4 *)(param_1 + 0x579) = 0;
  param_1[0x57c] = 0;
  param_1[0x57d] = 0;
  param_1[0x57e] = 0;
  param_1[0x57f] = 0;
  param_1[0x580] = 0;
  param_1[0x581] = 0;
  param_1[0x582] = 0;
  param_1[0x583] = 0;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  param_1[0x586] = 0;
  *(undefined4 *)(param_1 + 0x587) = 0;
  FUN_00881da0(&local_18,param_1[1]);
  plVar5 = (long *)param_1[0x572];
  param_1[0x572] = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  param_1[0x572] = local_18;
  return;
}


