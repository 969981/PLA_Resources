/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5c7dc; name: FUN_01e5c7dc
 */


uint FUN_01e5c7dc(long *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar16 = *(long **)(param_1[0x1a] + 0x188);
  if (plVar16 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    do {
      lVar11 = plVar16[3];
      plVar13 = (long *)plVar16[5];
      if (plVar13 != (long *)0x0) {
        lVar14 = plVar13[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e5cb34;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = (long *)plVar16[6];
      if (plVar15 != (long *)0x0) {
        lVar14 = plVar15[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e5cb34;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((int)lVar11 == param_2) {
        puVar2 = (undefined8 *)PTR_PTR_04379d00;
        if (*(long *)(plVar15[0xe] + 0x218) != 0) {
          puVar2 = (undefined8 *)(*(long *)(plVar15[0xe] + 0x218) + 0x60);
        }
        pbVar10 = (byte *)*puVar2;
        bVar4 = *pbVar10;
        if (bVar4 == 0) {
          puVar12 = &DAT_cbf29ce484222645;
        }
        else {
          puVar12 = &DAT_cbf29ce484222645;
          do {
            pbVar10 = pbVar10 + 1;
            puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar10;
          } while (bVar4 != 0);
        }
        if (puVar12 == (undefined1 *)*param_3) {
          local_94 = 0;
        }
        else {
          lVar11 = param_1[1];
          lVar14 = param_1[0xb];
          local_70 = param_1;
          if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01e5cb34:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar14 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
            *(undefined8 *)(lVar14 + 0x10) = uVar8;
          }
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          local_90 = *param_4;
          local_88 = param_4[1];
          local_80 = param_4[2];
          local_78 = (long *)param_4[3];
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x18))();
          }
          FUN_0196b38c(&local_68,plVar15,lVar11,&local_70,&local_90);
          FUN_01e56b70(param_1,&local_68);
          if (local_68 != (long *)0x0) {
            lVar11 = local_68[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar3 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          if (local_70 != (long *)0x0) {
            lVar11 = local_70[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar3 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 == 1) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_70 + 0x20))();
            }
          }
          local_94 = 1;
        }
        bVar6 = true;
        if (plVar15 == (long *)0x0) goto LAB_01e5ca28;
LAB_01e5ca0c:
        lVar11 = plVar15[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 != 0) goto LAB_01e5ca28;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
        if (plVar13 != (long *)0x0) goto LAB_01e5ca2c;
LAB_01e5ca48:
        if (bVar6) {
LAB_01e5cb2c:
          uVar9 = local_94;
          break;
        }
      }
      else {
        bVar6 = false;
        if (plVar15 != (long *)0x0) goto LAB_01e5ca0c;
LAB_01e5ca28:
        if (plVar13 == (long *)0x0) goto LAB_01e5ca48;
LAB_01e5ca2c:
        lVar11 = plVar13[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 != 0) goto LAB_01e5ca48;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
        if (bVar6) goto LAB_01e5cb2c;
      }
      plVar16 = (long *)*plVar16;
      uVar9 = 0;
    } while (plVar16 != (long *)0x0);
  }
  return uVar9 & 1;
}


