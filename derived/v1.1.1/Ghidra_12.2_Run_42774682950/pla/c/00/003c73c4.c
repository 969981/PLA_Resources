/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c73c4; name: FUN_003c73c4
 */


void FUN_003c73c4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 003c73dc to 003c73f7 has its CatchHandler @ 003c7608 */
    FUN_003c9e40();
  }
  (**(code **)(*DAT_0439a678 + 0x18))(DAT_0439a678,param_1);
  puVar5 = PTR_LAB_04373088;
  puVar9 = *(undefined8 **)(param_1 + 0x170);
  if (puVar9 != (undefined8 *)0x0) {
    if (*(undefined8 **)(param_1 + 0x178) == puVar9) {
      puVar8 = puVar9;
    }
    else {
      puVar10 = *(undefined8 **)(param_1 + 0x178) + -1;
      puVar8 = (undefined8 *)*puVar10;
      *puVar10 = 0;
      if (puVar8 != (undefined8 *)0x0) goto LAB_003c7434;
      while (puVar9 != puVar10) {
        while( true ) {
          puVar10 = puVar10 + -1;
          puVar8 = (undefined8 *)*puVar10;
          *puVar10 = 0;
          if (puVar8 == (undefined8 *)0x0) break;
LAB_003c7434:
          (**(code **)*puVar8)(puVar8);
          FUN_002e2ea0(puVar5,puVar8);
          if (puVar9 == puVar10) goto LAB_003c7458;
        }
      }
LAB_003c7458:
      puVar8 = *(undefined8 **)(param_1 + 0x170);
    }
    *(undefined8 **)(param_1 + 0x178) = puVar9;
    FUN_002e2ea0(PTR_LAB_04373088,puVar8);
  }
  if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x148));
  }
  puVar5 = PTR_DAT_04373140;
                    /* try { // try from 003c74a4 to 003c74a7 has its CatchHandler @ 003c75f4 */
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x198))(*(long **)PTR_DAT_04373140,param_1 + 0xf0);
  FUN_003c7a6c(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  plVar6 = *(long **)puVar5;
                    /* try { // try from 003c74c4 to 003c74c7 has its CatchHandler @ 003c75e0 */
  (**(code **)(*plVar6 + 0x198))(plVar6,param_1 + 0xb8);
  FUN_003c7a6c(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xd8));
  FUN_003c7e4c(param_1 + 0x98,*(undefined8 *)(param_1 + 0xa0));
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = *(long **)(param_1 + 0x78);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      bVar2 = *(byte *)(param_1 + 0x58);
      goto joined_r0x003c753c;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x58);
joined_r0x003c753c:
  if ((bVar2 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x68));
  }
  plVar6 = *(long **)puVar5;
                    /* try { // try from 003c7560 to 003c7563 has its CatchHandler @ 003c75dc */
  (**(code **)(*plVar6 + 0x78))(plVar6,param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


