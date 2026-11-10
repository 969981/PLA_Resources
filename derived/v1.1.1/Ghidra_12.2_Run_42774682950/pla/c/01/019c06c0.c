/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c06c0; name: FUN_019c06c0
 */


void FUN_019c06c0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  long *local_58;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_00bd2290(&local_58);
    if (((local_58 != (long *)0x0) &&
        (FUN_01e82e30(local_58,param_2,param_3), plVar8 = local_58, local_58 != (long *)0x0)) &&
       (uVar10 = FUN_02a43a5c(local_58[0xb]), (uVar10 & 1) != 0)) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      lVar12 = *(long *)(param_1 + 0x88);
      pbVar4 = PTR_DAT_043794d0;
      puVar5 = (undefined8 *)PTR_DAT_043794d8;
      pbVar6 = PTR_DAT_04381fd0;
      puVar7 = (undefined8 *)PTR_DAT_04381fd8;
      goto joined_r0x019c076c;
    }
  }
  lVar12 = *(long *)(param_1 + 0x88);
  pbVar4 = PTR_DAT_043794d0;
  puVar5 = (undefined8 *)PTR_DAT_043794d8;
  pbVar6 = PTR_DAT_04381fd0;
  puVar7 = (undefined8 *)PTR_DAT_04381fd8;
joined_r0x019c076c:
  PTR_DAT_043794d0 = pbVar4;
  PTR_DAT_043794d8 = (undefined *)puVar5;
  PTR_DAT_04381fd0 = pbVar6;
  PTR_DAT_04381fd8 = (undefined *)puVar7;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar13 = *(int *)(lVar12 + 0xc);
    do {
      puVar14 = *(undefined8 **)(lVar12 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar6), iVar9 != 0)) {
        if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *puVar5 = uVar11;
          __cxa_guard_release(pbVar4);
        }
        *puVar7 = puVar5;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (puVar14 == (undefined8 *)0x0) {
          return;
        }
        if (puVar14 == puVar7) break;
        puVar14 = (undefined8 *)*puVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          *(undefined8 *)(lVar12 + 0x1c8) = param_2[1];
          *(undefined8 *)(lVar12 + 0x1c0) = *param_2;
          uVar10 = FUN_02a43a5c(*(undefined8 *)(lVar12 + 8));
          if ((uVar10 & 1) == 0) {
            return;
          }
          (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


