/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a360a0; name: FUN_01a360a0
 */


void FUN_01a360a0(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 *local_48 [2];
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  piVar2 = (int *)(param_1 + 0xddb0);
  if (*(long *)(param_1 + 0xeca0) == 0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_30);
    if (local_30 != (long *)0x0) {
      FUN_01aed8d0(local_48);
      if (local_48[0] == (undefined8 *)0x0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_0095dafc(&local_38);
        if (local_48[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_48[0] + 1);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            local_48[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_28 = *local_48[0];
            FUN_02a44274(lVar10 + 0xd8,&local_28);
          }
        }
      }
      if (local_38 != (long *)0x0) {
        bVar7 = *(byte *)(param_1 + 0xddd4);
        bVar6 = FUN_01a8d4d0();
        if ((bVar7 != (bVar6 & 1)) && (uVar9 = (**(code **)(*local_38 + 0x250))(), (uVar9 & 1) == 0)
           ) {
          bVar7 = FUN_01a8d4d0(local_38);
          *(byte *)(param_1 + 0xddd4) = bVar7 & 1;
        }
        if (local_38 != (long *)0x0) {
          lVar10 = local_38[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
      }
      if (local_30 != (long *)0x0) {
        lVar10 = local_30[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  iVar8 = 1;
  if (*(char *)(param_1 + 0xddd4) == '\0') {
    iVar8 = -1;
  }
  iVar8 = iVar8 + *piVar2;
  *piVar2 = iVar8;
  iVar3 = *(int *)(param_1 + 0xddb4);
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else {
    piVar1 = (int *)(param_1 + 0xddb4);
    if (iVar8 <= iVar3) {
      piVar1 = piVar2;
    }
    iVar8 = *piVar1;
  }
  fVar11 = 1.0;
  fVar12 = 1.0;
  *piVar2 = iVar8;
  if (0 < iVar3) {
    fVar12 = (float)iVar8 / (float)iVar3;
  }
  if (*(uint *)(param_1 + 0xddd0) != 0xffffffff) {
    fVar11 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0xddd0) * 8))(fVar12)
    ;
  }
  *(ulong *)(param_1 + 0xdda8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xddc8) >> 0x20) * fVar11,
                (float)*(undefined8 *)(param_1 + 0xddc8) * fVar11);
  *(ulong *)(param_1 + 0xdda0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xddc0) >> 0x20) * fVar11,
                (float)*(undefined8 *)(param_1 + 0xddc0) * fVar11);
  *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(param_1 + 0xdda0);
  *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_1 + 0xdda8);
  return;
}


