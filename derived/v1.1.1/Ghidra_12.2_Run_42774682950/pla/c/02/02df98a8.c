/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df98a8; name: FUN_02df98a8
 */


int FUN_02df98a8(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined2 uVar8;
  long *plVar9;
  undefined8 local_38;
  
  plVar1 = param_1 + 0xd;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x2a3) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x88))((long *)param_1[0xb],&local_38,plVar1,0);
  if (iVar5 == 0x2e) {
    return 0x3f;
  }
  if (iVar5 == 0x2d || iVar5 == 0x11) {
    if (*(int *)((long)param_1 + 0x24) == 0) {
      iVar5 = (**(code **)(*param_1 + 0x128))(param_1);
      if (iVar5 != 1) {
        return iVar5;
      }
      *(undefined4 *)(param_1 + 5) = 0;
      if (param_1[3] == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = *(undefined2 *)(param_1[3] + 0x2a0);
      }
      *(undefined2 *)((long)param_1 + 0x54) = uVar8;
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
    if ((*(int *)((long)param_1 + 0xac) == 0) && (iVar5 = FUN_02df9bcc(param_1), iVar5 != 1)) {
      return iVar5;
    }
    plVar9 = param_1 + 0x12;
    if (*plVar9 != 0) {
LAB_02df9a2c:
      if ((*(byte *)(param_1[3] + 0x2a5) >> 6 & 1) == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_02f2017c(param_1);
        iVar6 = (**(code **)(*param_1 + 0x140))(param_1,iVar5,param_1 + 5);
        if (iVar6 == 1) {
          lVar7 = param_1[3];
          *(int *)(lVar7 + 0x29c) = iVar5 - (int)param_1[5];
          puVar2 = (uint *)(lVar7 + 0x2a3);
          iVar5 = 1;
          *puVar2 = *puVar2 & 0xfe3fffff;
          iVar6 = (int)*plVar1;
        }
        else {
          iVar5 = 2;
          iVar6 = (int)*plVar1;
        }
        if (iVar6 != 0) {
          if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
            (**(code **)(*(long *)param_1[0xb] + 0x90))();
          }
          else {
            *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
          }
          param_1[0xc] = 0;
          *(undefined4 *)(param_1 + 0xd) = 0;
        }
        uVar3 = 0;
        if (*(uint *)(param_1 + 0x13) != 0) {
          uVar3 = *(uint *)(param_1 + 5) / *(uint *)(param_1 + 0x13);
        }
        uVar4 = (int)param_1[0x16] - 1;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        lVar7 = param_1[3];
        *(uint *)((long)param_1 + 0xa4) = uVar3;
        if ((*(byte *)(lVar7 + 0x2a5) >> 6 & 1) == 0) {
          iVar6 = *(int *)(lVar7 + 0x29c);
        }
        else {
          iVar6 = 0;
        }
        *(uint *)(param_1 + 5) = iVar6 + *(uint *)(param_1 + 5);
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + iVar6;
        *(undefined4 *)(lVar7 + 0x29c) = 0;
        *(uint *)(lVar7 + 0x2a3) = *(uint *)(lVar7 + 0x2a3) & 0xfe3fffff;
      }
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
      return iVar5;
    }
    iVar5 = FUN_02f35038(&DAT_0440b2d8,*(undefined4 *)((long)param_1 + 0x84),(int)param_1[0x11],
                         (int)param_1[0x13],(long)param_1 + 0x8c,plVar9);
    if (iVar5 == 1) {
      lVar7 = (*DAT_0442d138)(5,(int)param_1[0x13] * (int)param_1[0x11] * 2);
      param_1[0x1a] = lVar7;
      if (lVar7 != 0) {
        *(undefined1 *)(param_1 + 0x17) = 1;
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0x84) / 400;
        goto LAB_02df9a2c;
      }
      if (*plVar9 == 0) {
        return 2;
      }
      (&DAT_0440b2e0)[*(uint *)((long)param_1 + 0x8c)] = 2;
      param_1[0x12] = 0;
      if (param_1[0x1a] == 0) {
        return 2;
      }
      (*DAT_0442d150)(5);
      param_1[0x1a] = 0;
    }
  }
  return 2;
}


