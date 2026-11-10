/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6f080; name: FUN_02b6f080
 */


void FUN_02b6f080(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  short sVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  float fVar15;
  short local_6c [2];
  long *local_68 [3];
  
  lVar11 = *param_2;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar11;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  sVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x10))();
  local_6c[0] = 0;
  if (0 < sVar6) {
    iVar10 = 0;
    plVar7 = (long *)(param_1 + 0x60);
    plVar2 = (long *)(param_1 + 0x90);
    do {
      plVar8 = (long *)(*(long *)(param_1 + 0x58) + 0x58);
      puVar9 = (ulong *)(**(code **)(*plVar8 + 0x20))(plVar8,iVar10);
      uVar13 = *puVar9;
      uVar14 = *(ulong *)(param_1 + 0x68);
      if (uVar14 == 0) {
LAB_02b6f29c:
        FUN_01a788e4(local_68,plVar7,uVar13,puVar9,local_6c);
        fVar15 = (float)(*(long *)(param_1 + 0xb8) + 1);
        if ((uVar14 == 0) || (*(float *)(param_1 + 0xc0) * (float)uVar14 < fVar15)) {
          uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
          uVar12 = (ulong)(fVar15 / *(float *)(param_1 + 0xc0));
          if (uVar12 <= uVar14) {
            uVar12 = uVar14;
          }
          FUN_01a78a54(plVar7,uVar12);
          uVar14 = *(ulong *)(param_1 + 0x68);
          if ((uVar14 & uVar14 - 1) == 0) {
            unaff_x26 = uVar14 - 1 & uVar13;
          }
          else if (uVar13 < uVar14) {
            unaff_x26 = uVar13;
          }
          else {
            uVar12 = 0;
            if (uVar14 != 0) {
              uVar12 = uVar13 / uVar14;
            }
            unaff_x26 = uVar13 - uVar12 * uVar14;
          }
        }
        plVar8 = *(long **)(*plVar7 + unaff_x26 * 8);
        if (plVar8 == (long *)0x0) {
          *local_68[0] = *plVar2;
          *plVar2 = (long)local_68[0];
          *(long **)(*plVar7 + unaff_x26 * 8) = plVar2;
          if (*local_68[0] != 0) {
            uVar13 = *(ulong *)(*local_68[0] + 8);
            if ((uVar14 & uVar14 - 1) == 0) {
              uVar13 = uVar13 & uVar14 - 1;
            }
            else if (uVar14 <= uVar13) {
              uVar12 = 0;
              if (uVar14 != 0) {
                uVar12 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar12 * uVar14;
            }
            *(long **)(*plVar7 + uVar13 * 8) = local_68[0];
          }
        }
        else {
          *local_68[0] = *plVar8;
          *plVar8 = (long)local_68[0];
        }
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
      }
      else {
        uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          unaff_x26 = uVar14 - 1 & uVar13;
        }
        else {
          unaff_x26 = uVar13;
          if (uVar14 <= uVar13) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar13 / uVar14;
            }
            unaff_x26 = uVar13 - uVar5 * uVar14;
          }
        }
        plVar8 = *(long **)(*plVar7 + unaff_x26 * 8);
        if (plVar8 == (long *)0x0) goto LAB_02b6f29c;
        if (uVar12 < 2) {
          do {
            plVar8 = (long *)*plVar8;
            if ((plVar8 == (long *)0x0) ||
               (plVar8[1] != uVar13 && (plVar8[1] & uVar14 - 1) != unaff_x26)) goto LAB_02b6f29c;
          } while (plVar8[2] != uVar13);
        }
        else {
          do {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_02b6f29c;
            uVar12 = plVar8[1];
            if (uVar12 != uVar13) {
              if (uVar14 <= uVar12) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar12 / uVar14;
                }
                uVar12 = uVar12 - uVar5 * uVar14;
              }
              if (uVar12 != unaff_x26) goto LAB_02b6f29c;
            }
          } while (plVar8[2] != uVar13);
        }
      }
      local_6c[0] = local_6c[0] + 1;
      iVar10 = (int)local_6c[0];
    } while (iVar10 < sVar6);
  }
  return;
}


