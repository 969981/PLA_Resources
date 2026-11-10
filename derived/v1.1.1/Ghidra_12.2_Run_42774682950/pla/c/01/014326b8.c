/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014326b8; name: FUN_014326b8
 */


void FUN_014326b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long alStack_150 [12];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [14];
  
  lVar11 = *(long *)(param_1 + 0x10);
  plVar7 = *(long **)(lVar11 + 0x148);
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = PTR_DAT_04379e60;
  puVar4 = PTR_DAT_04379e58;
  lVar14 = *(long *)(param_1 + 0x4e8);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar15 = *(int *)(lVar14 + 0xc);
    do {
      plVar13 = *(long **)(lVar14 + 0x10);
      if (((*puVar4 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(puVar4,param_2,param_3,param_4), iVar6 != 0)) {
        uVar8 = FUN_00b65f6c();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01432704;
        if (plVar13 == (long *)puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar15) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_014327cc;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          uVar12 = (uint)*(float *)(lVar14 + 0xaf0);
          uVar9 = *(uint *)(param_1 + 0x47c);
          if (uVar9 != uVar12) {
            if (((uVar12 < uVar9) &&
                ((((uVar12 == 0 ||
                   ((fVar16 = ((float)uVar12 / 100.0) * 100.0, 0x4b < uVar9 && (fVar16 <= 75.0))))
                  || ((0x32 < uVar9 && (fVar16 <= 50.0)))) || ((0x19 < uVar9 && (fVar16 <= 25.0)))))
                ) && ((**(char **)(param_1 + 0x270) != '\0' && (*(long *)(lVar11 + 0x148) != 0)))) {
              FUN_0283b1e8(*(long *)(lVar11 + 0x148),param_1 + 0x268);
              uVar9 = *(uint *)(param_1 + 0x47c);
            }
            if ((int)uVar12 < 1) {
              local_f0 = &LAB_014357e4;
              local_e8 = FUN_01435a40;
              local_e0 = &LAB_01435a44;
              local_d8 = &LAB_01435a50;
              alStack_d0[0] = param_1;
              FUN_0143338c(param_1,param_2,param_3,uVar9,uVar12,0x1e,&local_f0,1);
              pcVar10 = local_e8;
              if (local_e8 != (code *)0x0) {
                plVar13 = alStack_d0;
                local_e0 = (undefined1 *)0x0;
                local_d8 = (undefined1 *)0x0;
                local_f0 = (undefined1 *)0x0;
                local_e8 = (code *)0x0;
                goto LAB_0143297c;
              }
            }
            else {
              local_160 = 0;
              uStack_158 = 0;
              local_170 = 0;
              local_168 = (code *)0x0;
              FUN_0143338c(param_1,param_2,param_3,uVar9,uVar12,param_4 & 0xffffffff,&local_170,0);
              pcVar10 = local_168;
              if (local_168 != (code *)0x0) {
                plVar13 = alStack_150;
                local_160 = 0;
                uStack_158 = 0;
                local_170 = 0;
                local_168 = (code *)0x0;
LAB_0143297c:
                (*pcVar10)(plVar13);
              }
            }
            if ((**(char **)(param_1 + 0x1f0) != '\0') && (*(long *)(lVar11 + 0x148) != 0)) {
              FUN_0283b1e8(*(long *)(lVar11 + 0x148),param_1 + 0x1e8);
            }
            *(uint *)(param_1 + 0x47c) = uVar12;
          }
          iVar15 = *(int *)(lVar14 + 0xaf8);
          if (*(int *)(param_1 + 0x480) != iVar15) {
            *(int *)(param_1 + 0x480) = iVar15;
            if (iVar15 == 2) {
              if ((**(char **)(param_1 + 0x230) != '\0') &&
                 (lVar11 = *(long *)(lVar11 + 0x148), lVar11 != 0)) {
                param_1 = param_1 + 0x228;
                goto LAB_01432a28;
              }
            }
            else if (((iVar15 == 1) && (**(char **)(param_1 + 0x210) != '\0')) &&
                    (lVar11 = *(long *)(lVar11 + 0x148), lVar11 != 0)) {
              param_1 = param_1 + 0x208;
LAB_01432a28:
              FUN_0283b1e8(lVar11,param_1);
            }
          }
          lVar11 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar15 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
          if (plVar7 == (long *)0x0) {
            return;
          }
          goto LAB_01432708;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_014327cc:
      param_4 = param_4 & 0xffffffff;
      iVar15 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01432704:
  if (plVar7 != (long *)0x0) {
LAB_01432708:
    plVar13 = plVar7 + 10;
    do {
      iVar15 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return;
}


