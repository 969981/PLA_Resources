/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f79164; name: FUN_01f79164
 */


void FUN_01f79164(long param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  long *plVar19;
  long lVar20;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if ((*(long *)(param_1 + 0x78) != 0) && (FUN_00ca554c(&local_40), local_40 != (long *)0x0)) {
    lVar9 = FUN_018b4864(local_40,&DAT_cbf29ce484222645);
    puVar14 = *(uint **)(*(long *)(lVar9 + 8) + 0x250);
    piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
    uVar15 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
    puVar3 = (uint *)((long)piVar2 + uVar15);
    uVar16 = (ulong)*puVar3;
    puVar3 = (uint *)((long)puVar3 + uVar16);
    puVar12 = puVar3 + 1;
    uVar13 = (ulong)*puVar3;
    if (uVar13 != 0) {
      puVar3 = puVar12 + uVar13;
      lVar9 = (long)puVar14 + uVar16 + uVar15 + (ulong)*puVar14 + 9;
LAB_01f7921c:
      piVar2 = (int *)((long)puVar12 + (ulong)*puVar12);
      uVar13 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
      puVar14 = (uint *)((long)piVar2 + uVar13);
      uVar15 = (ulong)*puVar14;
      bVar4 = *(byte *)((long)puVar14 + uVar15 + 4);
      puVar18 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar18 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar9 + uVar15 + uVar13 + (ulong)*puVar12);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar4 != 0);
      }
      if (puVar18 != param_2) goto code_r0x01f79274;
      if (*(long *)(param_1 + 0x88) == 0) {
        local_48 = (long *)0x0;
      }
      else {
        FUN_017e9e98(&local_48);
        if (local_48 != (long *)0x0) {
          plVar19 = (long *)local_48[0x23];
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar19;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          plVar10 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x150,0x10);
          if (plVar10 == (long *)0x0) {
            (**(code **)(*plVar19 + 0xb8))(plVar19);
          }
          FUN_01d33dd4(plVar10,piVar2,plVar19,param_3);
          plVar10[1] = (long)plVar19;
          plVar10[2] = (long)plVar10;
          plVar10[3] = 0x150;
          plVar10[4] = 0x10;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          if (plVar10 == (long *)0x0) goto LAB_01f793b0;
          lVar9 = plVar10[0xb];
          if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar9 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
              *(undefined8 *)(lVar9 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_01f793b0:
            if (*(long *)(param_1 + 0x88) == 0) {
              local_38 = (long *)0x0;
              goto LAB_01f795a8;
            }
            FUN_017e9e98(&local_38);
            if (local_38 == (long *)0x0) goto LAB_01f795a8;
            lVar9 = local_38[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            lVar20 = local_38[0x23];
            do {
              iVar8 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            local_50 = plVar10;
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_38 + 0x20))();
              if (plVar10 != (long *)0x0) goto LAB_01f793f4;
LAB_01f794d8:
              FUN_01f795bc(param_1,lVar20,piVar2,&local_50,0);
joined_r0x01f794f4:
              if (local_48 == (long *)0x0) goto LAB_01f79298;
LAB_01f79488:
              lVar9 = local_48[0xb];
              piVar2 = (int *)(lVar9 + 0xc);
              do {
                iVar8 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 + -1 != 0) goto LAB_01f79298;
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
              if (local_40 == (long *)0x0) {
                return;
              }
              goto LAB_01f792a0;
            }
            if (plVar10 == (long *)0x0) goto LAB_01f794d8;
LAB_01f793f4:
            lVar9 = plVar10[0xb];
            if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
              if (*(long *)(lVar9 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                *(undefined8 *)(lVar9 + 0x10) = uVar11;
              }
              plVar19 = local_50;
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              FUN_01f795bc(param_1,lVar20,piVar2,&local_50,0);
              if (plVar19 != (long *)0x0) {
                lVar9 = plVar19[0xb];
                piVar2 = (int *)(lVar9 + 0xc);
                do {
                  iVar8 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar8 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
              }
              lVar9 = plVar10[0xb];
              piVar2 = (int *)(lVar9 + 0xc);
              do {
                iVar8 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar10 + 0x20))(plVar10);
                goto joined_r0x01f794f4;
              }
              if (local_48 != (long *)0x0) goto LAB_01f79488;
              goto LAB_01f79298;
            }
          }
LAB_01f795a8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
    }
LAB_01f79298:
    if (local_40 != (long *)0x0) {
LAB_01f792a0:
      lVar9 = local_40[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  return;
code_r0x01f79274:
  puVar12 = puVar12 + 1;
  lVar9 = lVar9 + 4;
  if (puVar12 == puVar3) goto LAB_01f79298;
  goto LAB_01f7921c;
}


