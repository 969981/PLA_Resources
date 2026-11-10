/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0bc88; name: FUN_00b0bc88
 */


void FUN_00b0bc88(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined4 local_a4;
  undefined1 *local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x270)) {
      iVar12 = 0;
      do {
        puVar9 = (undefined8 *)FUN_02a9b354(lVar8,iVar12);
        local_80 = *puVar9;
        local_78 = puVar9[1];
        local_70 = puVar9[2];
        local_68 = (long *)puVar9[3];
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
        puVar9 = (undefined8 *)FUN_02a9b144(*param_1,&local_80);
        plVar13 = (long *)*puVar9;
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 10;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_98 = "ObjectAlpha";
        local_a0 = &DAT_cfb6c0f3820db5c2;
        local_90 = 0x1f;
        local_88 = (long *)0x0;
        local_a4 = 1;
        plVar14 = (long *)plVar13[0x1d];
        plVar1 = (long *)plVar13[0x1e];
        if (plVar14 != plVar1) {
          do {
            plVar2 = *(long **)(*plVar14 + 0x98);
            for (plVar15 = *(long **)(*plVar14 + 0x90); plVar15 != plVar2; plVar15 = plVar15 + 1) {
              plVar10 = (long *)(*(long *)(*plVar15 + 0x120) + 0x58);
              (**(code **)(*plVar10 + 0x50))(plVar10,&local_a0,&local_a4);
            }
            plVar14 = plVar14 + 1;
          } while (plVar14 != plVar1);
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
        }
        plVar1 = (long *)plVar13[0x1e];
        for (plVar14 = (long *)plVar13[0x1d]; plVar14 != plVar1; plVar14 = plVar14 + 1) {
          plVar2 = *(long **)(*plVar14 + 0x98);
          for (plVar15 = *(long **)(*plVar14 + 0x90); plVar15 != plVar2; plVar15 = plVar15 + 1) {
            plVar3 = *(long **)(*plVar15 + 0x80);
            for (plVar10 = *(long **)(*plVar15 + 0x78); plVar10 != plVar3; plVar10 = plVar10 + 1) {
              plVar4 = *(long **)(*plVar10 + 0xe8);
              for (plVar11 = *(long **)(*plVar10 + 0xe0); plVar11 != plVar4; plVar11 = plVar11 + 1)
              {
                FUN_02bb6fe4(*(undefined8 *)(*plVar11 + 0x60),0,1);
              }
            }
          }
        }
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 10;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(int *)plVar14 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        lVar8 = *param_1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar8 + 0x270));
    }
    if (*(long *)(lVar8 + 0x1f0) != 0) {
      *(byte *)(*(long *)(lVar8 + 0x1f0) + 0x180) = param_2 & 1;
    }
  }
  return;
}


