/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02898b44; name: FUN_02898b44
 */


long FUN_02898b44(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  
  plVar6 = param_1 + 1;
  puVar8 = (undefined4 *)*plVar6;
  if ((undefined4 *)*plVar6 == (undefined4 *)0x0) {
    lVar5 = tpidr_el0;
    lVar7 = *(long *)(lVar5 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar7;
    }
    plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    puVar4 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x38,0);
    *puVar4 = 0;
    FUN_0332cf84(puVar4 + 2);
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    do {
      puVar8 = (undefined4 *)*plVar6;
      if (puVar8 != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        if (puVar4 != (undefined4 *)0x0) {
          FUN_0332ba4c(puVar4);
          lVar7 = *(long *)(lVar5 + 0x38d490);
          if (lVar7 == 0) {
            lVar7 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar7;
          }
          plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar4,0x38);
        }
        goto LAB_02898b68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = (long)puVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar8 = puVar4;
  }
LAB_02898b68:
  FUN_0332ba70(puVar8);
  if ((char)param_1[2] == '\0') {
    lVar5 = FUN_032d65c4(*param_1);
    if (lVar5 != 1) {
      FUN_033299e0(0x21dbd06c);
      lVar9 = *param_1;
      lVar5 = tpidr_el0;
      lVar7 = *(long *)(lVar5 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar7;
      }
      plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1b0,0);
      FUN_0318ccbc(lVar5,lVar9);
      FUN_033299e0(0x25659f08);
      DataMemoryBarrier(2,3);
      plVar6 = (long *)*param_1;
      *param_1 = lVar5;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar3 = plVar6 + 2;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_0332bbd0(puVar8);
  return *param_1;
}


