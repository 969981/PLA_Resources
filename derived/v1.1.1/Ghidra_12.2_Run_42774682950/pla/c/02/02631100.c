/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02631100; name: FUN_02631100
 */


void FUN_02631100(undefined4 param_1,undefined4 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  float fVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar10 = *(long *)(param_3 + 0x1f0);
  *(undefined4 *)(param_3 + 0x334) = param_1;
  *(undefined4 *)(param_3 + 0x340) = param_2;
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
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
          lVar7 = FUN_02c90d14(plVar12);
          if (lVar7 == 0) goto LAB_0263128c;
          local_70 = 0x7ae129403ce05f36;
          pcStack_68 = "basurao";
          local_60 = 7;
          local_58 = (long *)0x0;
          local_90 = 0x7d51ab1a16ed3926;
          pcStack_88 = "vfx_dash_partice_scale_method";
          local_80 = 0x1d;
          local_78 = (long *)0x0;
          lVar8 = FUN_00ea3260(&local_70,&local_90);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          if (lVar8 == 0x2cb5da1b0eddd897) {
            uVar15 = *(ulong *)(lVar7 + 0x138);
            uVar9 = CONCAT44(*(undefined4 *)(param_3 + 0x334),*(undefined4 *)(param_3 + 0x334));
LAB_02631280:
            *(ulong *)(lVar7 + 0x138) = uVar15;
            *(undefined8 *)(lVar7 + 0x130) = uVar9;
          }
          else {
            if (lVar8 == -0x29259705bd089ba9) {
              uVar14 = *(uint *)(param_3 + 0x334);
              uVar9 = CONCAT44(uVar14,uVar14);
              uVar15 = (ulong)uVar14;
              goto LAB_02631280;
            }
            if (lVar8 == -0x24d89c6758499257) {
              fVar13 = *(float *)(param_3 + 0x334);
              *(ulong *)(lVar7 + 0x128) = (ulong)(uint)fVar13;
              *(ulong *)(lVar7 + 0x120) = CONCAT44(fVar13,fVar13);
              *(ulong *)(lVar7 + 0x148) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xf8) >> 0x20) * 0.0,
                            (float)*(undefined8 *)(lVar7 + 0xf8) * fVar13);
              *(ulong *)(lVar7 + 0x140) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xf0) >> 0x20) * fVar13,
                            (float)*(undefined8 *)(lVar7 + 0xf0) * fVar13);
            }
          }
          *(undefined4 *)(lVar7 + 0x210) = *(undefined4 *)(param_3 + 0x340);
LAB_0263128c:
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
  return;
}


