/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b59084; name: FUN_02b59084
 */


void FUN_02b59084(long param_1,int param_2,long *param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58;
  int iStack_54;
  
  lVar6 = *(long *)(param_1 + 0x60);
  uVar10 = (ulong)param_5;
  if ((param_6 & 1) == 0) {
    FUN_02bb0c88(lVar6,2,param_2);
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,2);
    local_78._0_8_ = local_78._0_8_ & 0xffffffffffffff00;
    piVar8 = *(int **)(lVar6 + 0x120);
    local_58 = param_2;
    if (piVar8 != *(int **)(lVar6 + 0x128)) {
LAB_02b590f0:
      if ((*piVar8 != 2) || (piVar8[1] != param_2)) goto LAB_02b590e4;
      lVar6 = *param_3;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar6;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      goto LAB_02b5917c;
    }
LAB_02b59168:
    FUN_02bb199c(lVar6 + 0x120,&local_68,&local_58,param_3,local_78);
  }
LAB_02b5917c:
  lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x80);
  if (((int)param_4 < 3) && ((int)param_5 < 0xe)) {
    pcVar11 = (char *)(lVar6 + (ulong)param_4 * 0xe0 + uVar10 * 0x10 + 8);
    if (*pcVar11 == '\0') {
      local_78 = FUN_02b5b7f0(lVar6,param_4,uVar10);
      *(long *)pcVar11 = local_78._0_8_;
      *(long *)(lVar6 + (ulong)param_4 * 0xe0 + uVar10 * 0x10 + 0x10) = local_78._8_8_;
    }
    else {
      local_78._8_8_ = *(undefined8 *)(lVar6 + (ulong)param_4 * 0xe0 + uVar10 * 0x10 + 0x10);
      local_78._0_8_ = *(undefined8 *)pcVar11;
    }
  }
  else {
    local_78 = FUN_02b5b7f0(lVar6,param_4,uVar10);
  }
  lVar6 = *(long *)(param_1 + 0x60);
  iStack_54 = param_2;
  if ((param_6 & 1) == 0) {
    local_58 = 2;
    local_68 = 0;
    for (piVar8 = *(int **)(lVar6 + 0xe8); piVar8 != *(int **)(lVar6 + 0xf0); piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == param_2)) {
        cVar3 = (char)*(int *)*(undefined1 (*) [16])(piVar8 + 4);
        if ((cVar3 == '\0') || ((local_78._0_8_ & 0xff) == 0)) {
          if (cVar3 == '\0' && (local_78._0_8_ & 0xff) == 0) {
            return;
          }
        }
        else if (*(long *)(piVar8 + 6) == local_78._8_8_) {
          return;
        }
        *(undefined1 (*) [16])(piVar8 + 4) = local_78;
        goto LAB_02b592f4;
      }
    }
    FUN_02bb1e80((undefined8 *)(lVar6 + 0xe8),&local_58,&iStack_54,&local_68,local_78);
LAB_02b592f4:
    lVar9 = *(long *)(lVar6 + 0x240);
    for (lVar6 = *(long *)(lVar6 + 0x238); lVar6 != lVar9; lVar6 = lVar6 + 0x18) {
      *(undefined1 *)(lVar6 + 0x10) = 1;
    }
  }
  else {
    local_58 = 2;
    local_68 = 0;
    for (piVar8 = *(int **)(lVar6 + 0x120); piVar8 != *(int **)(lVar6 + 0x128); piVar8 = piVar8 + 8)
    {
      if ((*piVar8 == 2) && (piVar8[1] == param_2)) {
        *(undefined1 (*) [16])(piVar8 + 4) = local_78;
        return;
      }
    }
    FUN_02bb1e80(lVar6 + 0x120,&local_58,&iStack_54,&local_68,local_78);
  }
  return;
LAB_02b590e4:
  piVar8 = piVar8 + 8;
  if (*(int **)(lVar6 + 0x128) == piVar8) goto LAB_02b59168;
  goto LAB_02b590f0;
}


