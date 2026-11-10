/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d3788; name: FUN_017d3788
 */


void FUN_017d3788(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  char local_98 [8];
  undefined1 auStack_90 [48];
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  param_1[4] = 0;
  puVar4 = PTR_DAT_0437a6d0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  lVar11 = DAT_043d1110;
  param_1[5] = 0;
  param_1[6] = (long)&DAT_cbf29ce484222645;
  param_1[7] = (long)&DAT_03996322;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar5 = PTR_DAT_04381930;
  puVar4 = PTR_DAT_04381928;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar10 = *(int *)(lVar11 + 0xc);
    do {
      plVar12 = *(long **)(lVar11 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar9 = FUN_017d2a78();
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
      iVar7 = *piVar1;
      if (iVar7 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          plVar12 = (long *)(lVar11 + -0x50);
          FUN_0180f074(local_98,plVar12);
          if (local_98[0] != '\0') {
            FUN_017d3974(param_1,auStack_90);
            plVar6 = local_48;
            param_1[6] = local_60;
            param_1[7] = lStack_58;
            param_1[8] = local_50;
            if (local_48 != (long *)0x0) {
              (**(code **)(*local_48 + 0x18))(local_48);
            }
            plVar8 = (long *)param_1[9];
            param_1[9] = (long)plVar6;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            if (local_98[0] != '\0') {
              if (local_48 != (long *)0x0) {
                (**(code **)(*local_48 + 0x20))();
              }
              FUN_00984b00(auStack_90);
              local_98[0] = '\0';
            }
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar7;
    } while (iVar7 != 0);
  }
  return;
}


