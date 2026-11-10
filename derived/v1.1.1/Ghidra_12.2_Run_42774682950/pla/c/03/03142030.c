/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03142030; name: FUN_03142030
 */


void FUN_03142030(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x114)) && (*(long *)(param_1 + 0x108) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x108),*(uint *)(param_1 + 0x114) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((-1 < *(int *)(param_1 + 0x104)) && (*(long *)(param_1 + 0xf8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xf8),*(int *)(param_1 + 0x104) << 2);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x80000000;
  if (*(int *)(param_1 + 0xf0) != 0) {
    plVar7 = *(long **)(param_1 + 0xe8);
    plVar8 = plVar7 + (long)*(int *)(param_1 + 0xf0) + -1;
    plVar5 = (long *)*plVar8;
    if (plVar5 != (long *)0x0) goto LAB_031420d8;
LAB_031420c8:
    if (plVar8 != plVar7) {
      while( true ) {
        plVar8 = plVar8 + -1;
        plVar5 = (long *)*plVar8;
        if (plVar5 == (long *)0x0) break;
LAB_031420d8:
        if (plVar5[1] == 0) break;
        plVar1 = plVar5 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 != 0) break;
        (**(code **)(*plVar5 + 0x18))();
        if (plVar8 == plVar7) goto LAB_0314210c;
      }
      goto LAB_031420c8;
    }
  }
LAB_0314210c:
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xf4)) && (*(long *)(param_1 + 0xe8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xe8),((ulong)*(uint *)(param_1 + 0xf4) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if ((-1 < *(int *)(param_1 + 0xe4)) && (*(long *)(param_1 + 0xd8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xd8),*(int *)(param_1 + 0xe4) << 2);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((-1 < *(int *)(param_1 + 0xd4)) && (*(long *)(param_1 + 200) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 200),*(int *)(param_1 + 0xd4) << 2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xc4)) && (*(long *)(param_1 + 0xb8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xb8),((ulong)*(uint *)(param_1 + 0xc4) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xa8),((ulong)*(uint *)(param_1 + 0xb4) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(long *)(param_1 + 0x98) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x98),((ulong)*(uint *)(param_1 + 0xa4) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(long *)(param_1 + 0x88) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x88),((ulong)*(uint *)(param_1 + 0x94) & 0x3fffffff) << 4
              );
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0314224c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


