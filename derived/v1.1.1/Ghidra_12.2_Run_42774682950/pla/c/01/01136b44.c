/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01136b44; name: FUN_01136b44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01136b44(long param_1,uint param_2,uint param_3,byte param_4,uint param_5,uint param_6)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  byte bVar13;
  uint uVar14;
  ulong uVar15;
  int local_868;
  ushort local_864 [2];
  int local_860 [512];
  
  if (((int)param_2 < 0x3d5) && ((param_3 & 0xffff) < 0x78)) {
    uVar15 = (ulong)param_2;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    plVar7 = *(long **)(lVar11 + 0xd0);
    if (plVar7 == (long *)0x0) {
      lVar11 = _DAT_00000168;
    }
    else {
      plVar1 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar11 = plVar7[0x2d];
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    piVar12 = &local_868;
    do {
      *piVar12 = 0;
      *(undefined2 *)(piVar12 + 1) = 0;
      piVar12[2] = 0;
      *(undefined4 *)((long)piVar12 + 0xb) = 0;
      piVar12[4] = 0;
      *(undefined2 *)(piVar12 + 5) = 0;
      piVar12[6] = 0;
      *(undefined4 *)((long)piVar12 + 0x1b) = 0;
      piVar12[8] = 0;
      *(undefined2 *)(piVar12 + 9) = 0;
      piVar12[10] = 0;
      *(undefined4 *)((long)piVar12 + 0x2b) = 0;
      piVar12[0xc] = 0;
      *(undefined2 *)(piVar12 + 0xd) = 0;
      piVar12[0xe] = 0;
      *(undefined4 *)((long)piVar12 + 0x3b) = 0;
      piVar12 = piVar12 + 0x10;
    } while (piVar12 != local_860 + 0x1fe);
    local_860[0x1fe] = 0;
    FUN_00d3ed48(lVar11,uVar15,&local_868);
    if (local_860[0x1fe] != 0) {
      lVar11 = 0;
      do {
        if (lVar11 == 0x800) {
                    /* WARNING: Subroutine does not return */
          FUN_01137490();
        }
        if (((uint)*(ushort *)((long)local_864 + lVar11) == (param_3 & 0xffff)) &&
           (*(int *)((long)local_860 + lVar11) == 3)) {
          lVar11 = param_1 + 0x6c;
          bVar13 = param_4;
          bVar9 = param_4;
          if (*(short *)(lVar11 + uVar15 * 0x58 + 0x7a) == 0) {
            if ((*(byte *)(lVar11 + uVar15 * 0x58 + 0x70) & 1) != 0) {
              lVar8 = FUN_011323d0(lVar11,uVar15,param_3);
              if (lVar8 == 0) {
                bVar4 = false;
              }
              else {
                bVar4 = (param_5 & 1) == 0;
                uVar10 = 6;
                if (bVar4) {
                  uVar10 = 2;
                }
                uVar14 = 4;
                if (bVar4) {
                  uVar14 = 0;
                }
                if ((param_6 & 1) == 0) {
                  uVar10 = uVar14;
                }
                bVar4 = (1 << (ulong)uVar10 & (uint)*(byte *)(lVar8 + 4)) != 0;
              }
              lVar11 = FUN_011323d0(lVar11,uVar15,param_3);
              if (lVar11 == 0) goto LAB_01136e70;
              bVar5 = (param_5 & 1) == 0;
              uVar10 = 7;
              if (bVar5) {
                uVar10 = 3;
              }
              uVar14 = 5;
              if (bVar5) {
                uVar14 = 1;
              }
              if ((param_6 & 1) == 0) {
                uVar10 = uVar14;
              }
              bVar2 = *(byte *)(lVar11 + 4);
              goto LAB_01136d30;
            }
          }
          else {
            lVar8 = FUN_011323d0(lVar11,uVar15,param_3);
            if (lVar8 == 0) {
              bVar4 = false;
            }
            else {
              bVar4 = (param_5 & 1) == 0;
              uVar10 = 6;
              if (bVar4) {
                uVar10 = 2;
              }
              uVar14 = 4;
              if (bVar4) {
                uVar14 = 0;
              }
              if ((param_6 & 1) == 0) {
                uVar10 = uVar14;
              }
              bVar4 = (1 << (ulong)uVar10 & (uint)*(byte *)(lVar8 + 5)) != 0;
            }
            lVar11 = FUN_011323d0(lVar11,uVar15,param_3);
            if (lVar11 == 0) {
LAB_01136e70:
              if (!bVar4) goto LAB_01136d5c;
LAB_01136e74:
              bVar9 = 0;
            }
            else {
              bVar5 = (param_5 & 1) == 0;
              uVar10 = 7;
              if (bVar5) {
                uVar10 = 3;
              }
              uVar14 = 5;
              if (bVar5) {
                uVar14 = 1;
              }
              if ((param_6 & 1) == 0) {
                uVar10 = uVar14;
              }
              bVar2 = *(byte *)(lVar11 + 5);
LAB_01136d30:
              bVar5 = (1 << (ulong)uVar10 & (uint)bVar2) != 0;
              if (bVar4) {
                if (!bVar5) goto LAB_01136e74;
              }
              else {
                bVar13 = bVar5 | param_4;
              }
            }
          }
LAB_01136d5c:
          bVar2 = param_4 & 1;
          param_4 = bVar9;
          if (bVar2 == 0) {
            param_4 = bVar13;
          }
          break;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)(uint)local_860[0x1fe] * 0x10 != lVar11);
    }
    param_1 = param_1 + uVar15 * 0x58;
    uVar10 = *(uint *)(param_1 + 0xdc) | 8;
    if ((param_4 & 1) == 0) {
      uVar10 = *(uint *)(param_1 + 0xdc) & 0xfffffff7;
    }
    uVar14 = uVar10 | 0x10;
    if ((param_5 & 1) == 0) {
      uVar14 = uVar10 & 0xffffffef;
    }
    uVar10 = uVar14 | 0x20;
    if ((param_6 & 1) == 0) {
      uVar10 = uVar14 & 0xffffffdf;
    }
    *(char *)(param_1 + 300) = (char)param_3;
    *(uint *)(param_1 + 0xdc) = uVar10;
  }
  return;
}


