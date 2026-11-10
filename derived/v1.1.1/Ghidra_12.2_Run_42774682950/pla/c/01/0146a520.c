/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146a520; name: FUN_0146a520
 */


/* WARNING: Removing unreachable block (ram,0x0146a59c) */

void FUN_0146a520(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  
  plVar6 = *(long **)(param_2 + 0x2c8);
  if (plVar6 == (long *)0x0) {
    FUN_0283d118(0,0x7d,10);
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0283d118(plVar6,0x7d,10);
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  *(undefined1 *)(param_2 + 0x5ac) = 10;
  uVar8 = 10;
  do {
    lVar5 = FUN_0146a220(param_1,0);
    if (((((((((lVar5 == param_2) || (*(char *)(lVar5 + 0x5ab) == '\0')) ||
             (uVar8 != *(byte *)(lVar5 + 0x5ac))) &&
            (((lVar5 = FUN_0146a220(param_1,1), lVar5 == param_2 ||
              (*(char *)(lVar5 + 0x5ab) == '\0')) || (uVar8 != *(byte *)(lVar5 + 0x5ac))))) &&
           (((lVar5 = FUN_0146a220(param_1,2), lVar5 == param_2 ||
             (*(char *)(lVar5 + 0x5ab) == '\0')) || (uVar8 != *(byte *)(lVar5 + 0x5ac))))) &&
          (((lVar5 = FUN_0146a220(param_1,3), lVar5 == param_2 || (*(char *)(lVar5 + 0x5ab) == '\0')
            ) || (uVar8 != *(byte *)(lVar5 + 0x5ac))))) &&
         (((lVar5 = FUN_0146a220(param_1,4), lVar5 == param_2 || (*(char *)(lVar5 + 0x5ab) == '\0'))
          || (uVar8 != *(byte *)(lVar5 + 0x5ac))))) &&
        (((((lVar5 = FUN_0146a220(param_1,5), lVar5 == param_2 || (*(char *)(lVar5 + 0x5ab) == '\0')
            ) || (uVar8 != *(byte *)(lVar5 + 0x5ac))) &&
          (((lVar5 = FUN_0146a220(param_1,6), lVar5 == param_2 || (*(char *)(lVar5 + 0x5ab) == '\0')
            ) || (uVar8 != *(byte *)(lVar5 + 0x5ac))))) &&
         (((lVar5 = FUN_0146a220(param_1,7), lVar5 == param_2 || (*(char *)(lVar5 + 0x5ab) == '\0'))
          || (uVar8 != *(byte *)(lVar5 + 0x5ac))))))) &&
       (((lVar5 = FUN_0146a220(param_1,8), lVar5 == param_2 || (*(char *)(lVar5 + 0x5ab) == '\0'))
        || (uVar8 != *(byte *)(lVar5 + 0x5ac))))) {
      lVar5 = FUN_0146a220(param_1,9);
      uVar7 = uVar8;
      if (((lVar5 != param_2) && (*(char *)(lVar5 + 0x5ab) != '\0')) &&
         (uVar8 == *(byte *)(lVar5 + 0x5ac))) goto LAB_0146a794;
    }
    else {
LAB_0146a794:
      param_2 = lVar5;
      plVar6 = *(long **)(param_2 + 0x2c8);
      uVar7 = uVar8 - 1;
      if (plVar6 == (long *)0x0) {
        FUN_0283d118(0,0x7d,uVar7);
      }
      else {
        plVar1 = plVar6 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_0283d118(plVar6,0x7d,uVar7);
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      *(char *)(param_2 + 0x5ac) = (char)uVar7;
    }
    if ((uVar8 == uVar7) || (uVar8 = uVar7, uVar7 == 0)) {
      return;
    }
  } while( true );
}


