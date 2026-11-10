/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2047c; name: FUN_02f2047c
 */


int FUN_02f2047c(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long local_38;
  
  plVar1 = param_1 + 0xd;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x2a3) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  do {
    iVar4 = (**(code **)(*(long *)param_1[0xb] + 0x88))((long *)param_1[0xb],&local_38,plVar1,0);
    if (iVar4 == 0x2e) {
      return 0x3f;
    }
    if ((iVar4 != 0x2d && iVar4 != 0x11) || (local_38 == 0)) {
      return 2;
    }
    iVar4 = (**(code **)(*param_1 + 0x128))(param_1);
    if (iVar4 == 1) {
      if ((*(byte *)(param_1[3] + 0x2a5) >> 6 & 1) == 0) {
        iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x78))((long *)param_1[0xb],0);
        iVar4 = *(int *)((long)param_1 + 0x74);
        iVar6 = (**(code **)(*param_1 + 0x138))(param_1,local_38,0);
        uVar3 = (int)param_1[6] - (iVar4 + iVar5);
        param_1[0xc] = param_1[0xc] + (ulong)uVar3;
        *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar3;
        *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar3;
      }
      else {
        iVar4 = FUN_02f2017c(param_1);
        iVar6 = (**(code **)(*param_1 + 0x140))(param_1,iVar4,param_1 + 5);
        if (iVar6 == 1) {
          lVar7 = param_1[3];
          *(int *)(lVar7 + 0x29c) = iVar4 - (int)param_1[5];
          puVar2 = (uint *)(lVar7 + 0x2a3);
          iVar6 = 1;
          *puVar2 = *puVar2 & 0xfe3fffff;
          iVar4 = (int)*plVar1;
        }
        else {
          iVar6 = 2;
          iVar4 = (int)*plVar1;
        }
        if (iVar4 != 0) {
          if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
            (**(code **)(*(long *)param_1[0xb] + 0x90))();
            *(int *)plVar1 = 0;
          }
          else {
            *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
            *(int *)plVar1 = 0;
          }
        }
      }
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
      return iVar6;
    }
  } while (iVar4 == 0x3f);
  return iVar4;
}


