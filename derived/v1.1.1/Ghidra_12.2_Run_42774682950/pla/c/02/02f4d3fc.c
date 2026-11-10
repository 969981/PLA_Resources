/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4d3fc; name: FUN_02f4d3fc
 */


undefined4 FUN_02f4d3fc(long *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  short sVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *local_50;
  ulong local_48;
  char local_34 [4];
  
  if ((int)param_1[3] != 0) {
    plVar8 = (long *)param_1[2];
    do {
      if (((long *)plVar8[2] != (long *)0x0) && ((*(uint *)(*plVar8 + 0x30) | 2) != 3)) {
        (**(code **)(*(long *)plVar8[2] + 0x10))();
      }
      plVar8[2] = 0;
      plVar8 = plVar8 + 3;
    } while (plVar8 != (long *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x18));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((int)param_1[7] != 0) {
    lVar10 = param_1[6];
    do {
      (**(code **)(**(long **)(lVar10 + 8) + 0x10))();
      lVar10 = lVar10 + 0x18;
    } while (lVar10 != param_1[6] + (ulong)*(uint *)(param_1 + 7) * 0x18);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    FUN_02f4c320(param_1,param_3 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_34[0] = '\0';
  iVar4 = FUN_02f4d6a8(*param_1 + 0x110,param_2,&local_50,local_34);
  puVar3 = local_50;
  uVar5 = 2;
  if ((iVar4 == 1) && (local_34[0] != '\0')) {
    uVar9 = local_48 & 0xffffffff;
    if ((int)local_48 != 0) {
      plVar8 = (long *)*local_50;
      uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if ((uVar6 & 1) == 0) {
        lVar10 = 8;
        do {
          iVar4 = FUN_02f4c45c(param_1,plVar8);
          if (iVar4 != 1) {
            FUN_02f4c804(param_1);
            uVar5 = 2;
            goto joined_r0x02f4d634;
          }
          if (uVar9 * 8 == lVar10) {
            uVar5 = FUN_02f4d1b0(param_1);
            goto joined_r0x02f4d634;
          }
          FUN_02f4d7e0(param_1,*(undefined8 *)((long)puVar3 + lVar10));
          plVar8 = *(long **)((long)puVar3 + lVar10);
          uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
          lVar10 = lVar10 + 8;
        } while ((uVar6 & 1) == 0);
      }
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[4];
        *(int *)(param_1 + 4) = (int)lVar10;
        *(bool *)(param_1 + 5) = (int)lVar10 != 0;
        *(int *)((long)param_1 + 0x24) = (int)plVar8[2];
        sVar7 = *(short *)((long)plVar8 + 0x14);
        if (sVar7 == 0) {
          sVar7 = 0;
        }
        else if ((short)plVar8[3] != 0 || *(short *)((long)plVar8 + 0x16) != 0) {
          iVar4 = (int)*(short *)((long)plVar8 + 0x16) + (int)sVar7;
          iVar1 = (int)(short)iVar4;
          iVar2 = (int)(short)((short)plVar8[3] + sVar7);
          if (iVar4 < 1) {
            iVar1 = 1;
          }
          if (iVar1 != iVar2) {
            DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
            iVar4 = (iVar2 - iVar1) + 1;
            sVar7 = 0;
            if (iVar4 != 0) {
              sVar7 = (short)((int)(uint)((ulong)DAT_0440a190 >> 0x21) / iVar4);
            }
            sVar7 = ((short)((ulong)DAT_0440a190 >> 0x21) - sVar7 * (short)iVar4) + (short)iVar1;
          }
        }
        uVar5 = 1;
        *(short *)((long)param_1 + 0x2a) = sVar7;
        goto joined_r0x02f4d634;
      }
    }
    uVar5 = 2;
  }
joined_r0x02f4d634:
  if (puVar3 != (undefined8 *)0x0) {
    local_48 = local_48 & 0xffffffff00000000;
    (*DAT_0442d150)(0,puVar3);
  }
  return uVar5;
}


