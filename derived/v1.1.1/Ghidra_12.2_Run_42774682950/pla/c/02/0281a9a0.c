/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a9a0; name: FUN_0281a9a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0281a9a0(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  long *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_58;
  
  switch(*(undefined4 *)(param_1 + 0x888)) {
  case 0:
    plVar16 = *(long **)(param_1 + 0x880);
    if ((plVar16 != (long *)0x0) && (*(char *)((long)plVar16 + 0xa3) != '\0')) {
      *(undefined1 *)((long)plVar16 + 0xa3) = 0;
      (**(code **)(*plVar16 + 0xa0))(plVar16,0);
    }
    iVar14 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
    uVar12 = _UNK_03888fc8;
    puVar11 = _DAT_03888fc0;
    uVar10 = _UNK_03888d18;
    uVar9 = _DAT_03888d10;
    if (iVar14 != 0) {
      uVar21 = 0;
      do {
        uVar17 = (**(code **)(**(long **)(param_1 + 0x100) + 0x40))
                           (*(long **)(param_1 + 0x100),uVar21);
        if ((uVar17 & 1) != 0) {
          puVar2 = (undefined8 *)**(long **)(param_1 + 0x838);
          puVar5 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
          if ((puVar2 != puVar5) &&
             (*(char *)(puVar2 + 4) != '\0' || *(uint *)((long)puVar2 + 0x24) != uVar21)) {
            puVar13 = puVar2 + 6;
            do {
              puVar20 = puVar13;
              puVar2 = puVar5;
              if (puVar5 == puVar20) break;
              puVar13 = puVar20 + 6;
            } while ((*(char *)(puVar20 + 4) != '\0') ||
                    (puVar2 = puVar20, *(uint *)((long)puVar20 + 0x24) != uVar21));
          }
          if ((puVar2 != (undefined8 *)0x0) && (puVar5 != puVar2)) {
            uVar3 = *puVar2;
            uVar6 = puVar2[1];
            uVar4 = puVar2[2];
            plVar16 = (long *)puVar2[3];
            if (plVar16 == (long *)0x0) {
              local_b0 = 0;
              local_70 = (long *)0x0;
              local_90 = &local_b0;
              uStack_88 = uVar3;
              local_80 = uVar6;
              uStack_78 = uVar4;
            }
            else {
              (**(code **)(*plVar16 + 0x18))(plVar16);
              (**(code **)(*plVar16 + 0x18))(plVar16);
              local_b0 = 0;
              local_90 = &local_b0;
              uStack_88 = uVar3;
              local_80 = uVar6;
              uStack_78 = uVar4;
              local_70 = plVar16;
              (**(code **)(*plVar16 + 0x18))(plVar16);
            }
            FUN_02813244(param_1,&local_90,0);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            uVar3 = local_b0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))(plVar16);
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
            local_58 = uVar3;
            uStack_88 = uVar12;
            local_90 = puVar11;
            local_b8 = 2;
            uStack_b4 = 10;
            uStack_a8 = uVar10;
            local_b0 = uVar9;
            FUN_0281e0fc(&local_98,*(undefined8 *)(param_1 + 8),&local_58,&local_90,&local_b0,
                         &uStack_b4,&local_b8);
            local_c0 = local_98;
            local_98 = (long *)0x0;
            FUN_0115b43c(*(undefined8 *)(param_1 + 0x878),&local_c0,0x40);
            if (local_c0 != (long *)0x0) {
              lVar19 = local_c0[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar14 = *piVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar14 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_c0 + 0x20))();
              }
            }
            if (local_98 != (long *)0x0) {
              lVar19 = local_98[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar14 = *piVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar14 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_98 + 0x20))();
              }
            }
          }
        }
        uVar21 = uVar21 + 1;
        uVar15 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
      } while (uVar21 < uVar15);
    }
    uVar18 = 1;
    break;
  case 1:
    uVar17 = FUN_0281bd48(param_1);
    if ((uVar17 & 1) == 0) {
      return;
    }
    uVar18 = 2;
    break;
  case 2:
    FUN_0281bf64(param_1);
    uVar18 = 3;
    break;
  case 3:
    uVar17 = FUN_0281c0dc(param_1);
    if ((uVar17 & 1) == 0) {
      return;
    }
    uVar18 = 4;
    break;
  case 4:
    FUN_0281c1f0(param_1);
    uVar18 = 5;
    break;
  case 5:
    uVar17 = FUN_0281c29c(param_1);
    if ((uVar17 & 1) == 0) {
      return;
    }
    uVar18 = 6;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0xa4) = 1;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined4 *)(param_1 + 0x970) = 0;
  default:
    goto switchD_0281a9e4_default;
  }
  *(undefined4 *)(param_1 + 0x888) = uVar18;
switchD_0281a9e4_default:
  return;
}


