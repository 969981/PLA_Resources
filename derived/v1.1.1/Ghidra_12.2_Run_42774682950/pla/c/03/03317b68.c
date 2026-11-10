/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03317b68; name: FUN_03317b68
 */


void FUN_03317b68(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 unaff_x19;
  int iVar10;
  long unaff_x29;
  undefined8 unaff_x30;
  long *local_68;
  long lStack_60;
  ulong local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = (long)register0x00000008 + -0x10;
  pbVar8 = (byte *)param_1[1];
  bVar2 = *pbVar8;
  while ((bVar2 & 1) == 0) {
    pbVar8 = *(byte **)(pbVar8 + 8);
    bVar2 = *pbVar8;
  }
  switch(*(uint *)(pbVar8 + 0x10) & 0x1f) {
  case 2:
  case 4:
  case 5:
  case 6:
    return;
  case 3:
    break;
  case 7:
    FUN_032e2dd4(&local_50,param_1[1],0);
    do {
      if (local_50 + 1 < local_48) {
        local_50 = local_50 + 1;
      }
      else {
        uVar6 = FUN_032e2de0(&local_50);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      uVar9 = (uint)*(undefined8 *)*local_50;
      if (((uVar9 >> 0x11 & 1) != 0) &&
         (uVar9 = (uVar9 & 0x1ffff) - (uVar9 >> 1 & 0x5555),
         uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
         (*(ushort *)
           (*local_50 + (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12)
          >> 5 & 1) != 0)) {
        FUN_032e4868(&local_68,param_1,*local_50);
        FUN_0330a140(&local_68);
        if ((local_58 & 1) != 0) {
          plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
          plVar5 = plVar7 + 1;
          do {
            lVar1 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *(int *)plVar5 = (int)lVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar1 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
    } while( true );
  case 8:
    local_40 = 0;
    local_38 = 0;
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],&local_50);
    plVar5 = local_48;
    if (((local_48 != (long *)0x0) && (uVar6 = FUN_03317ed0(local_48), (uVar6 & 1) != 0)) &&
       (0 < (int)local_40)) {
      iVar10 = 0;
      lStack_60 = (long)plVar5;
      while( true ) {
        local_68 = (long *)((long)local_50 + (long)local_40._4_4_ * (long)iVar10);
        local_58 = local_38;
        if ((local_38 & 1) == 0) {
          FUN_0330a140(&local_68);
        }
        else {
          plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
          plVar5 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *(int *)plVar5 = (int)*plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_0330a140(&local_68);
          do {
            lVar1 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *(int *)plVar5 = (int)lVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar1 == 1)) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
        iVar10 = iVar10 + 1;
        if ((int)local_40 <= iVar10) break;
        lStack_60 = (long)local_48;
      }
    }
    plVar5 = (long *)FUN_032e3508(param_1[1]);
    (**(code **)(*plVar5 + 0x70))(plVar5,*param_1,param_1[1]);
    if ((local_38 & 1) != 0) {
      plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar5 = plVar7 + 1;
      do {
        lVar1 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = (int)lVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    return;
  default:
    unaff_x30 = 0x3317c1c;
    param_1 = (undefined8 *)
              FUN_03320b50(0x261011c5,
                           "../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x3b
                           ,"Bad var visitor switch",(long)register0x00000008 + -0x28);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x29 = lVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x19;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar5 = (long *)FUN_032e3508(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x03317c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x40))(plVar5,*param_1,param_1[1]);
  return;
}


