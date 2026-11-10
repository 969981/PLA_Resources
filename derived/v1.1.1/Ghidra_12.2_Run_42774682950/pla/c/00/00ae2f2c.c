/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae2f2c; name: FUN_00ae2f2c
 */


void FUN_00ae2f2c(float param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  
  iVar9 = *(int *)(param_2 + 0x118);
  if (iVar9 == 1) {
    puVar13 = *(undefined8 **)(param_2 + 0xe0);
    puVar2 = *(undefined8 **)(param_2 + 0xe8);
    if (puVar13 == puVar2) {
      return;
    }
    do {
      plVar11 = (long *)*puVar13;
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar8 = (**(code **)(*plVar11 + 0x40))(plVar11,(int)param_1);
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
      if ((uVar8 & 1) != 0) {
        uVar8 = FUN_00adcd20(*(undefined8 *)(param_2 + 0x68),param_2 + 0x78);
        if ((uVar8 & 1) == 0) {
          *(undefined4 *)(param_2 + 0x118) = 2;
          return;
        }
        *(undefined4 *)(param_2 + 0x118) = 0;
        goto LAB_00ae2f5c;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
    iVar9 = *(int *)(param_2 + 0x118);
  }
  if (iVar9 == 0) {
LAB_00ae2f5c:
    puVar13 = *(undefined8 **)(param_2 + 0xe0);
    puVar2 = *(undefined8 **)(param_2 + 0xe8);
    if (puVar13 != puVar2) {
      uVar10 = (uint)param_1;
      do {
        plVar11 = (long *)*puVar13;
        if (*(int *)((long)plVar11 + 0x84) != 2) {
          lVar12 = plVar11[0xf];
          uVar8 = (**(code **)(*plVar11 + 0x40))(plVar11,uVar10);
          if ((uVar8 & 1) == 0) {
            uVar6 = 0;
            iVar9 = *(int *)((long)plVar11 + 0x84);
          }
          else {
            uVar6 = (**(code **)(*plVar11 + 0x40))(plVar11,uVar10 + 1);
            uVar6 = uVar6 ^ 1;
            iVar9 = *(int *)((long)plVar11 + 0x84);
          }
          if (iVar9 == 0) {
            uVar8 = (**(code **)(*plVar11 + 0x40))(plVar11,uVar10);
            if ((uVar8 & 1) != 0) {
              *(undefined4 *)((long)plVar11 + 0x84) = 1;
              (**(code **)(*plVar11 + 0x48))(plVar11);
            }
            iVar9 = *(int *)((long)plVar11 + 0x84);
          }
          if (iVar9 == 1) {
            fVar14 = (float)NEON_ucvtf((int)lVar12);
            fVar15 = (float)(uint)(int)(param_1 - fVar14);
            fVar5 = (float)uVar10;
            if ((uVar6 & 1) == 0) {
              fVar15 = param_1 - fVar14;
              fVar5 = param_1;
            }
            (**(code **)(*plVar11 + 0x50))(fVar5,fVar15,plVar11);
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
    }
  }
  return;
}


