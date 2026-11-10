/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b51290; name: FUN_01b51290
 */


void FUN_01b51290(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long *in_d3;
  float fVar14;
  long *local_80 [2];
  undefined1 auStack_68 [8];
  
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  if (*(char *)(param_1 + 0x218) != '\0') {
    lVar10 = *(long *)(param_1 + 0x200);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar12 = *(int *)(lVar10 + 0xc);
      do {
        plVar13 = *(long **)(lVar10 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar9;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar5 = puVar6;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01b512c8;
          if (plVar13 == (long *)puVar5) break;
          plVar13 = (long *)*plVar13;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            plVar13 = (long *)(lVar10 + -0x50);
            if (lVar10 != 0) {
              (**(code **)(*plVar13 + 0x40))(plVar13);
              local_80[0] = in_d3;
              FUN_01b51564(param_1,local_80);
              lVar10 = *(long *)(lVar10 + 8);
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01b512c8:
    if ((0.0 < *(float *)(param_1 + 0x210)) &&
       ((*(char *)(param_1 + 0x1f0) == '\0' || (*(char *)(param_1 + 0x1f1) != '\0')))) {
      fVar14 = *(float *)(param_1 + 0x214);
      lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar14 = *(float *)(param_1 + 0x210) +
               fVar14 * (float)((double)*(long *)(lVar10 + 8) / -1000000000.0);
      *(float *)(param_1 + 0x210) = fVar14;
      if (fVar14 <= 0.0) {
        *(undefined4 *)(param_1 + 0x210) = 0;
        *(undefined1 *)(param_1 + 0x218) = 0;
        if (*(char *)(param_1 + 0x1f0) == '\0') {
          FUN_009c69bc(local_80,param_1);
          lVar10 = FUN_009aff90(local_80[0] + 0x1e,auStack_68);
          if (local_80[0] != (long *)0x0) {
            lVar11 = local_80[0][0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_80[0] + 0x20))();
            }
          }
          if (lVar10 != 0) {
            FUN_01836814(lVar10,0);
          }
        }
      }
    }
  }
  return;
}


