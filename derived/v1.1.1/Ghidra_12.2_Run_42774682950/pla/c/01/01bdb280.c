/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdb280; name: FUN_01bdb280
 */


void FUN_01bdb280(float param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  float local_64;
  
  lVar8 = *(long *)(param_2 + 0x1f0);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar10 = *(int *)(lVar8 + 0xc);
    local_64 = param_1;
    do {
      plVar11 = *(long **)(lVar8 + 0x10);
      lVar6 = FUN_00a3edb8();
      while( true ) {
        if (plVar11 == (long *)0x0) {
          return;
        }
        if (plVar11 == (long *)lVar6) break;
        plVar11 = (long *)*plVar11;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            return;
          }
          plVar11 = (long *)(lVar8 + -0x50);
          if (0 < *(int *)(lVar8 + 0x220)) {
            iVar10 = 0;
            do {
              puVar7 = (undefined8 *)FUN_02a9b354(plVar11,iVar10);
              local_90 = *puVar7;
              local_88 = puVar7[1];
              local_80 = puVar7[2];
              local_78 = (long *)puVar7[3];
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x18))();
              }
              puVar7 = (undefined8 *)FUN_02a9b144(plVar11,&local_90);
              plVar9 = (long *)*puVar7;
              if (plVar9 != (long *)0x0) {
                plVar2 = plVar9 + 10;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              local_b0 = &DAT_cfb6c0f3820db5c2;
              pcStack_a8 = "ObjectAlpha";
              local_a0 = 0x1f;
              local_98 = (long *)0x0;
              local_d0 = &DAT_cbf29ce484222645;
              puStack_c8 = &DAT_03996322;
              local_c0 = 0;
              local_b8 = (long *)0x0;
              FUN_02b39e1c(plVar9,&local_b0,&local_64,&local_d0);
              if (local_b8 != (long *)0x0) {
                (**(code **)(*local_b8 + 0x20))();
              }
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              if (*(char *)(param_2 + 0x219) == '\0') {
                *(bool *)(param_2 + 0x21a) = local_64 < 1.0;
                FUN_02b3c0f8(plVar9);
              }
              if (plVar9 != (long *)0x0) {
                plVar2 = plVar9 + 10;
                do {
                  iVar3 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar3;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar8 + 0x220));
          }
          lVar8 = *(long *)(lVar8 + 8);
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar3;
    } while (iVar3 != 0);
  }
  return;
}


