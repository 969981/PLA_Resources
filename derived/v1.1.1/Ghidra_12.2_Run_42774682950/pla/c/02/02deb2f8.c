/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02deb2f8; name: FUN_02deb2f8
 */


int FUN_02deb2f8(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  long lVar8;
  ushort *puVar9;
  long *plVar10;
  undefined8 local_38;
  
  plVar1 = param_1 + 0xd;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x2a3) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x88))((long *)param_1[0xb],&local_38,plVar1,0);
  if ((iVar5 == 0x11) || (iVar5 == 0x2d)) {
    if ((int)param_1[0x12] == 0) {
      iVar5 = (**(code **)(*param_1 + 0x128))(param_1);
      if (iVar5 != 1) {
        return iVar5;
      }
      *(undefined4 *)(param_1 + 5) = 0;
      if (param_1[3] == 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = *(undefined2 *)(param_1[3] + 0x2a0);
      }
      *(undefined2 *)((long)param_1 + 0x54) = uVar7;
      iVar5 = (**(code **)(*param_1 + 0x138))(param_1,local_38,0);
      if (iVar5 != 1) {
        return iVar5;
      }
      uVar3 = *(uint *)(param_1 + 6);
      param_1[0xc] = param_1[0xc] + (ulong)uVar3;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar3;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar3;
    }
    else {
      iVar5 = (**(code **)(*param_1 + 0x138))(param_1,local_38,0);
      if (iVar5 != 1) {
        return iVar5;
      }
    }
    iVar5 = FUN_02deb5b8(param_1);
    if (iVar5 == 1) {
      if ((*(byte *)(param_1[3] + 0x2a5) >> 6 & 1) == 0) {
        iVar5 = 0;
        iVar6 = 1;
      }
      else {
        iVar5 = FUN_02f2017c(param_1);
        plVar10 = param_1 + 5;
        iVar6 = (**(code **)(*param_1 + 0x140))(param_1,iVar5,plVar10);
        if (iVar6 == 1) {
          lVar8 = param_1[3];
          *(int *)(lVar8 + 0x29c) = iVar5 - (int)param_1[5];
          puVar2 = (uint *)(lVar8 + 0x2a3);
          iVar6 = 1;
          *puVar2 = *puVar2 & 0xfe3fffff;
          iVar5 = (int)*plVar1;
        }
        else {
          iVar6 = 2;
          iVar5 = (int)*plVar1;
        }
        if (iVar5 != 0) {
          if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
            (**(code **)(*(long *)param_1[0xb] + 0x90))();
          }
          else {
            *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
          }
          param_1[0xc] = 0;
          *(undefined4 *)(param_1 + 0xd) = 0;
        }
        lVar8 = param_1[3];
        if ((*(byte *)(lVar8 + 0x2a5) >> 6 & 1) == 0) {
          iVar5 = *(int *)(lVar8 + 0x29c);
        }
        else {
          iVar5 = 0;
        }
        *(int *)plVar10 = (int)*plVar10 + iVar5;
        *(undefined4 *)(lVar8 + 0x29c) = 0;
        *(uint *)(lVar8 + 0x2a3) = *(uint *)(lVar8 + 0x2a3) & 0xfe3fffff;
      }
      if (*(short *)((long)param_1 + 0x54) == 1) {
        puVar9 = (ushort *)((long)param_1 + 0x10e);
      }
      else {
        puVar9 = (ushort *)((long)param_1 + 0x102);
      }
      uVar4 = *puVar9;
      *(int *)(param_1 + 0x1b) = iVar5;
      *(uint *)((long)param_1 + 0xdc) = (uint)uVar4;
      *(undefined4 *)(param_1 + 0x12) = 3;
      param_1[0x19] = -1;
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
      return iVar6;
    }
    if (iVar5 != 0x3f) {
      return iVar5;
    }
    if ((int)*plVar1 == 0) {
      if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
        (**(code **)(*(long *)param_1[0xb] + 0x90))();
      }
      else {
        *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
      }
      param_1[0xc] = 0;
      return 0x3f;
    }
  }
  else if (iVar5 != 0x2e) {
    return 2;
  }
  return 0x3f;
}


