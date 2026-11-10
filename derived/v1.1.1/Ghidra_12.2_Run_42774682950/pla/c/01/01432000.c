/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01432000; name: FUN_01432000
 */


void FUN_01432000(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 uVar10;
  long *plVar11;
  long *local_28;
  
  plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x148);
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)(param_1 + 0x4f8) == '\0') goto joined_r0x014321d0;
  if (*(char *)(param_1 + 0x4f9) != '\0') {
    if ((**(char **)(param_1 + 0x170) != '\0') &&
       ((lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x148), lVar9 == 0 ||
        (uVar7 = FUN_0283b5c4(lVar9,param_1 + 0x168), (uVar7 & 1) != 0)))) {
      lVar9 = *(long *)(param_1 + 0x288);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(undefined1 *)(param_1 + 0x38) = 0;
        *(byte *)(*(long *)(param_1 + 0x40) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x40) + 0x58) & 0xfe;
      }
      *(undefined2 *)(param_1 + 0x4f8) = 0;
      *(undefined1 *)(param_1 + 0x4fb) = 0;
    }
    goto joined_r0x014321d0;
  }
  if (*(char *)(param_1 + 0x4fa) == '\0') goto joined_r0x014321d0;
  if (*(long *)(param_1 + 0x4c8) != 0) {
    FUN_00b907c8(&local_28,*(long *)(param_1 + 0x4c8));
    if (local_28 != (long *)0x0) {
      if ((((char)local_28[0xc3] == '\0') ||
          ((*(long *)(param_1 + 0x4c0) != 0x6b8f1aecf51ff115 &&
           (*(long *)(param_1 + 0x4c0) != -0x224018e1d268f681)))) &&
         ((*(char *)((long)local_28 + 0x619) == '\0' ||
          (*(long *)(param_1 + 0x4c0) != -0x3806ebeab04927e7)))) {
        uVar7 = FUN_01432340(param_1,*(char *)((long)local_28 + 0x61a) == '\0');
        if ((uVar7 & 1) == 0) {
          FUN_01432598(param_1);
          FUN_014326b8(param_1,param_2,param_3,0x1e);
        }
        else {
          bVar3 = *(byte *)((long)local_28 + 0x61d);
          if (((*(char *)(param_1 + 0x4b8) != '\0') &&
              (lVar9 = *(long *)(param_1 + 0x490), lVar9 != 0)) && (*(long *)(param_1 + 0x498) != 0)
             ) {
            *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | bVar3;
            *(byte *)(*(long *)(param_1 + 0x498) + 0x58) =
                 (*(byte *)(*(long *)(param_1 + 0x498) + 0x58) & 0xfe | bVar3) ^ 1;
          }
          *(byte *)(param_1 + 0x4fc) = bVar3;
          FUN_01432a6c(param_1,*(char *)((long)local_28 + 0x61c) == '\0');
          if (((*(long *)(param_1 + 0x4c8) != 0) &&
              (*(int *)(*(long *)(param_1 + 0x4c8) + 0xc) != 0)) &&
             (*(char *)(param_1 + 0x4fb) != '\0')) {
            plVar8 = (long *)local_28[0xbd];
            if (plVar8 == (long *)0x0) goto LAB_014322bc;
            plVar2 = plVar8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar6 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            FUN_01432d1c(param_1,param_2,param_3,0x1e);
            lVar9 = *(long *)(param_1 + 800);
            uVar10 = 0;
            if (lVar9 != 0) {
              uVar10 = *(undefined1 *)(lVar9 + 0x261);
            }
            *(undefined4 *)(local_28 + 0xc2) = *(undefined4 *)(lVar9 + 600);
            *(undefined1 *)((long)local_28 + 0x614) = uVar10;
          }
        }
      }
      else {
LAB_014322bc:
        if (*(char *)(param_1 + 0x4fa) != '\0') {
          FUN_0143425c(param_1,0);
        }
      }
      lVar9 = local_28[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))(local_28);
      }
      goto joined_r0x014321d0;
    }
    if (*(char *)(param_1 + 0x4fa) == '\0') goto joined_r0x014321d0;
  }
  FUN_0143425c(param_1,0);
joined_r0x014321d0:
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  return;
}


