/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02635430; name: FUN_02635430
 */


void FUN_02635430(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  float fVar13;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  FUN_02634828(param_1,0);
  local_70 = &DAT_7f1d939d8653868;
  pcStack_68 = "ride_change";
  local_60 = 0xb;
  local_58 = (long *)0x0;
  local_90 = 0x39880c1126be82bb;
  pcStack_88 = "enable_ride_off_player_effect";
  local_80 = 0x1d;
  local_78 = (long *)0x0;
  uVar7 = FUN_00e9e50c(&local_70,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar7 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x228);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0xd8) = param_3[1];
      *(undefined8 *)(lVar10 + 0xd0) = *param_3;
      *(undefined1 *)(lVar10 + 0xe0) = 1;
    }
    puVar5 = PTR_DAT_0437a6e0;
    puVar4 = PTR_DAT_0437a6d8;
    lVar10 = *(long *)(param_1 + 0x218);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar11 = *(int *)(lVar10 + 0xc);
      do {
        plVar12 = *(long **)(lVar10 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00ad3750();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) {
            return;
          }
          if (plVar12 == (long *)puVar5) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 == 0) {
              return;
            }
            plVar12 = (long *)(lVar10 + -0x50);
            FUN_02c90b50(plVar12,1);
            lVar8 = FUN_02c90d14(plVar12);
            if (lVar8 != 0) {
              fVar13 = (float)FUN_0263563c(param_2);
              *(ulong *)(lVar8 + 0x128) = (ulong)(uint)fVar13;
              *(ulong *)(lVar8 + 0x120) = CONCAT44(fVar13,fVar13);
              *(ulong *)(lVar8 + 0x148) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0xf8) >> 0x20) * 0.0,
                            (float)*(undefined8 *)(lVar8 + 0xf8) * fVar13);
              *(ulong *)(lVar8 + 0x140) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0xf0) >> 0x20) * fVar13,
                            (float)*(undefined8 *)(lVar8 + 0xf0) * fVar13);
            }
            lVar10 = *(long *)(lVar10 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
  }
  return;
}


