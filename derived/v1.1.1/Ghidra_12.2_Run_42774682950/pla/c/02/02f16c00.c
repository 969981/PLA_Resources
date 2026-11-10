/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f16c00; name: FUN_02f16c00
 */


void FUN_02f16c00(long param_1,long *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = 4;
LAB_02f16c28:
  uVar5 = uVar6 & 0xffffffff;
  lVar7 = (ulong)((int)uVar6 - 1) * 8 + 0xf0;
  do {
    plVar4 = *(long **)(param_1 + lVar7);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
      iVar3 = *(int *)((long)param_2 + 0x2c);
      if (iVar3 != 0x2b) {
        if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
          return;
        }
        if ((uint)uVar5 < 4) goto LAB_02f16c70;
LAB_02f16cf4:
        if (*param_2 != 0) {
          if (*(long *)(param_1 + 0x78) != 0) {
            FUN_02f21680(param_2,param_1 + 200);
          }
          if (*(long *)(param_1 + 0xa0) != 0) {
            FUN_02f21ea0(param_2,param_1 + 0xd8);
          }
          if ((*param_2 != 0) && (*(long *)(*(long *)(param_1 + 0x120) + 0x68) != 0)) {
            FUN_02f329d4(param_1 + 0x110,param_2);
          }
        }
        plVar4 = *(long **)(*(long *)(param_1 + 0x128) + 0x18);
        if (((*(byte *)((long)plVar4 + 10) >> 4 & 1) != 0) && (*(int *)((long)param_2 + 0x1c) != -1)
           ) {
          FUN_02ede458(DAT_0440a178,(int)plVar4[0x42]);
        }
        uVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4);
        if (uVar2 == 0xffffffff) {
          plVar4 = *(long **)(param_1 + 0x130);
        }
        else {
          if (uVar2 < *(ushort *)((long)param_2 + 0x12)) {
            *(short *)((long)param_2 + 0x12) = (short)uVar2;
          }
          *(undefined4 *)(param_1 + 0x140) = 2;
          plVar4 = *(long **)(param_1 + 0x130);
        }
        if ((plVar4 != (long *)0x0) && ((*(byte *)(plVar4 + 4) & 1) == 0)) {
          iVar3 = (**(code **)(*plVar4 + 0x70))
                            (plVar4,*(undefined8 *)(plVar4[3] + 0x2c8),
                             *(undefined4 *)(plVar4[3] + 0x2d0));
          if (iVar3 == 1) {
            *(byte *)(plVar4 + 4) = *(byte *)(plVar4 + 4) | 1;
          }
          else if (iVar3 == 2) {
            *(undefined4 *)((long)param_2 + 0x2c) = 2;
            return;
          }
        }
        iVar3 = *(int *)((long)param_2 + 0x2c);
        if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
          return;
        }
        *(int *)((long)param_2 + 0xc) = iVar3;
        *(long *)(param_1 + 0x58) = param_1 + 0x168;
        uVar1 = DAT_0440a170;
        uVar2 = *(uint *)(param_2 + 3);
        uVar6 = (ulong)uVar2;
        if (uVar2 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x150) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x148);
        }
        lVar7 = lVar7 + (ulong)*(uint *)((long)param_2 + 0x14) * 0x20;
        uVar5 = uVar6;
        do {
          FUN_02edd3b8(uVar1,*(undefined8 *)(lVar7 + 0x18),lVar7);
          uVar5 = uVar5 - 1;
          lVar7 = lVar7 + 0x20;
        } while (uVar5 != 0);
        (**(code **)(*(long *)(param_1 + 0x68) + 0x48))(param_1 + 0x68,uVar6);
        uVar2 = *(int *)(param_1 + 0x150) - uVar2;
        if (uVar2 != 0) {
          memmove(*(void **)(param_1 + 0x148),
                  (void *)((long)*(void **)(param_1 + 0x148) + uVar6 * 0x20),(ulong)uVar2 << 5);
        }
        *(uint *)(param_1 + 0x150) = uVar2;
        *(undefined8 *)((long)param_2 + 0x14) = 0;
        return;
      }
    }
    uVar5 = uVar5 - 1;
    lVar7 = lVar7 + -8;
  } while ((int)uVar5 != 0);
LAB_02f16cbc:
  FUN_02f2cb84(param_1,param_2);
  uVar5 = 0;
  if ((*(int *)((long)param_2 + 0x2c) != 0x2d) && (*(int *)((long)param_2 + 0x2c) != 0x11)) {
    return;
  }
LAB_02f16c70:
  uVar6 = uVar5 & 0xffffffff;
  do {
    plVar4 = *(long **)(param_1 + 0xf0 + uVar6 * 8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
      iVar3 = *(int *)((long)param_2 + 0x2c);
      if ((iVar3 != 0x2d) && (iVar3 != 0x11)) break;
    }
    uVar6 = uVar6 + 1;
    if ((int)uVar6 == 4) goto LAB_02f16cf4;
  } while( true );
  if (iVar3 != 0x2b) {
    return;
  }
  if ((int)uVar6 != 0) goto LAB_02f16c28;
  goto LAB_02f16cbc;
}


