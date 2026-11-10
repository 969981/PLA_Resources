/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ca2cc; name: FUN_010ca2cc
 */


void FUN_010ca2cc(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  FUN_010ca7f4();
  do {
    nn::os::SleepThread(10000000);
    if (*(int *)(param_1 + 0x78) == 2) {
      return;
    }
    lVar7 = *(long *)(param_1 + 200);
  } while ((((((lVar7 == 0) || (*(char *)(lVar7 + 0x1e1) == '\0')) ||
             (*(long *)(param_1 + 0xf8) == 0)) ||
            ((((((*(char *)(*(long *)(param_1 + 0xf8) + 0x1e1) == '\0' ||
                 (*(long *)(param_1 + 0x168) == 0)) ||
                ((*(char *)(*(long *)(param_1 + 0x168) + 0x1e1) == '\0' ||
                 ((*(long *)(param_1 + 0x198) == 0 ||
                  (*(char *)(*(long *)(param_1 + 0x198) + 0x1e1) == '\0')))))) ||
               (*(long *)(param_1 + 0x208) == 0)) ||
              ((((*(char *)(*(long *)(param_1 + 0x208) + 0x1e1) == '\0' ||
                 (*(long *)(param_1 + 0x238) == 0)) ||
                (*(char *)(*(long *)(param_1 + 0x238) + 0x1e1) == '\0')) ||
               ((*(long *)(param_1 + 0x2a8) == 0 ||
                (*(char *)(*(long *)(param_1 + 0x2a8) + 0x1e1) == '\0')))))) ||
             ((((*(long *)(param_1 + 0x2d8) == 0 ||
                ((*(char *)(*(long *)(param_1 + 0x2d8) + 0x1e1) == '\0' ||
                 (*(long *)(param_1 + 0x348) == 0)))) ||
               (*(char *)(*(long *)(param_1 + 0x348) + 0x1e1) == '\0')) ||
              (((((*(long *)(param_1 + 0x378) == 0 ||
                  (*(char *)(*(long *)(param_1 + 0x378) + 0x1e1) == '\0')) ||
                 (*(long *)(param_1 + 1000) == 0)) ||
                ((*(char *)(*(long *)(param_1 + 1000) + 0x1e1) == '\0' ||
                 (*(long *)(param_1 + 0x418) == 0)))) ||
               (((*(char *)(*(long *)(param_1 + 0x418) + 0x1e1) == '\0' ||
                 ((*(long *)(param_1 + 0x488) == 0 ||
                  (*(char *)(*(long *)(param_1 + 0x488) + 0x1e1) == '\0')))) ||
                ((*(long *)(param_1 + 0x4b8) == 0 ||
                 (((*(char *)(*(long *)(param_1 + 0x4b8) + 0x1e1) == '\0' ||
                   (*(long *)(param_1 + 0x528) == 0)) ||
                  (*(char *)(*(long *)(param_1 + 0x528) + 0x1e1) == '\0')))))))))))))) ||
           (((((*(long *)(param_1 + 0x558) == 0 ||
               (*(char *)(*(long *)(param_1 + 0x558) + 0x1e1) == '\0')) ||
              ((*(long *)(param_1 + 0x5c8) == 0 ||
               ((*(char *)(*(long *)(param_1 + 0x5c8) + 0x1e1) == '\0' ||
                (*(long *)(param_1 + 0x5f8) == 0)))))) ||
             ((*(char *)(*(long *)(param_1 + 0x5f8) + 0x1e1) == '\0' ||
              (((((*(long *)(param_1 + 0x668) == 0 ||
                  (*(char *)(*(long *)(param_1 + 0x668) + 0x1e1) == '\0')) ||
                 (*(long *)(param_1 + 0x698) == 0)) ||
                ((*(char *)(*(long *)(param_1 + 0x698) + 0x1e1) == '\0' ||
                 (*(long *)(param_1 + 0x708) == 0)))) ||
               ((*(char *)(*(long *)(param_1 + 0x708) + 0x1e1) == '\0' ||
                ((*(long *)(param_1 + 0x738) == 0 ||
                 (*(char *)(*(long *)(param_1 + 0x738) + 0x1e1) == '\0')))))))))) ||
            (((*(long *)(param_1 + 0x7a8) == 0 ||
              (((*(char *)(*(long *)(param_1 + 0x7a8) + 0x1e1) == '\0' ||
                (*(long *)(param_1 + 0x7d8) == 0)) ||
               (*(char *)(*(long *)(param_1 + 0x7d8) + 0x1e1) == '\0')))) ||
             ((((*(long *)(param_1 + 0x848) == 0 ||
                (*(char *)(*(long *)(param_1 + 0x848) + 0x1e1) == '\0')) ||
               ((*(long *)(param_1 + 0x878) == 0 ||
                ((*(char *)(*(long *)(param_1 + 0x878) + 0x1e1) == '\0' ||
                 (*(long *)(param_1 + 0x8e8) == 0)))))) ||
              (*(char *)(*(long *)(param_1 + 0x8e8) + 0x1e1) == '\0')))))))) ||
          ((((((*(long *)(param_1 + 0x918) == 0 ||
               (*(char *)(*(long *)(param_1 + 0x918) + 0x1e1) == '\0')) ||
              (*(long *)(param_1 + 0x988) == 0)) ||
             (((*(char *)(*(long *)(param_1 + 0x988) + 0x1e1) == '\0' ||
               (*(long *)(param_1 + 0x9b8) == 0)) ||
              ((*(char *)(*(long *)(param_1 + 0x9b8) + 0x1e1) == '\0' ||
               ((*(long *)(param_1 + 0xa28) == 0 ||
                (*(char *)(*(long *)(param_1 + 0xa28) + 0x1e1) == '\0')))))))) ||
            (*(long *)(param_1 + 0xa58) == 0)) ||
           ((((*(char *)(*(long *)(param_1 + 0xa58) + 0x1e1) == '\0' ||
              (*(long *)(param_1 + 0xac8) == 0)) ||
             (*(char *)(*(long *)(param_1 + 0xac8) + 0x1e1) == '\0')) ||
            ((*(long *)(param_1 + 0xaf8) == 0 ||
             (*(char *)(*(long *)(param_1 + 0xaf8) + 0x1e1) == '\0'))))))));
  lVar8 = 0;
  while( true ) {
    local_48 = *(undefined8 *)(lVar7 + 0x250);
    lVar7 = FUN_00d12804(auStack_38,*(undefined8 *)(param_1 + 0xb20),&local_48);
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = (long *)(param_1 + lVar8 * 0xa0 + 0xb8);
    plVar6 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *plVar9 = lVar7;
    FUN_02c2e92c(lVar7 + 0xa8,param_1 + lVar8 * 0xa0 + 0xf0);
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x11) break;
    lVar7 = *(long *)(param_1 + lVar8 * 0xa0 + 200);
  }
  *(undefined4 *)(param_1 + 0x78) = 2;
  return;
}


