/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2b710; name: FUN_02b2b710
 */


void FUN_02b2b710(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *plStack_68;
  
  if (*(char *)(*param_2 + 300) != '\0') {
    FUN_02b292f0(*(undefined8 *)(param_1 + 0xd0),param_1 + 0x58,param_2,0);
    lVar7 = *param_2;
    lVar6 = *(long *)(lVar7 + 0xe0);
    if ((int)((ulong)(*(long *)(lVar7 + 0xe8) - lVar6) >> 3) != 0) {
      lVar8 = 0;
      lVar9 = 0;
      uVar10 = 0;
      do {
        plVar1 = (long *)(lVar6 + lVar8);
        plVar5 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
        (**(code **)(*plVar5 + 0x18))
                  (plVar5,*plVar1 + 0x60,
                   *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xd0) + 0xb0) + lVar9 + 0x40));
        lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0xd0) + 0xb0) + lVar9 + 0x48);
        local_80 = *(long **)(lVar6 + 8);
        local_78 = *(undefined8 *)(lVar6 + 0x10);
        local_70 = *(undefined8 *)(lVar6 + 0x18);
        plVar5 = *(long **)(lVar6 + 0x20);
        plStack_68 = plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        FUN_02b2cafc(param_1,*plVar1 + 0x60,&local_80,*(long *)(*plVar1 + 0x68) + 0x60);
        (**(code **)(*DAT_043ef740 + 0x78))(DAT_043ef740,plVar1);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        lVar6 = *(long *)(lVar7 + 0xe0);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0xd0;
        lVar8 = lVar8 + 8;
      } while (uVar10 < ((ulong)(*(long *)(lVar7 + 0xe8) - lVar6) >> 3 & 0xffffffff));
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      uVar10 = 0;
      do {
        FUN_02b3343c(&local_80,*(undefined8 *)(param_1 + 0x58),
                     *(long *)(param_1 + 0xd8) + uVar10 * 0x28);
        FUN_02b2c92c(param_1,param_2,&local_80);
        if (local_80 != (long *)0x0) {
          plVar1 = local_80 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulong *)(param_1 + 0x110));
    }
    *(undefined1 *)(*param_2 + 300) = 0;
  }
  return;
}


