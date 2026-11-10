/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f20808; name: FUN_02f20808
 */


undefined8 FUN_02f20808(long *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int local_18 [2];
  
  *param_2 = '\0';
  lVar6 = param_1[3];
  if (((*(byte *)(*(long *)(lVar6 + 0x230) + 0xc) >> 1 & 1) != 0) &&
     ((*(byte *)(lVar6 + 0x2a5) >> 6 & 1) == 0)) {
    lVar7 = *(long *)(lVar6 + 0x2c8);
    iVar4 = *(int *)(lVar6 + 0x2d0);
    *(int *)(param_1 + 0xd) = iVar4;
    bVar3 = lVar7 != 0 && iVar4 != 0;
    *param_2 = bVar3;
    bVar1 = *(byte *)((long)param_1 + 0x82) & 0xfc |
            *(byte *)((long)param_1 + 0x82) & 1 | bVar3 << 1;
    *(byte *)((long)param_1 + 0x82) = bVar1;
    if (*param_2 != '\0') {
      *(byte *)((long)param_1 + 0x82) = bVar1 | 0x10;
      uVar5 = (**(code **)(*param_1 + 0x128))(param_1,lVar7);
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      uVar5 = (**(code **)(*param_1 + 0x138))(param_1,lVar7,1);
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      if ((*(byte *)((long)param_1 + 0x82) >> 6 & 1) == 0) {
        lVar6 = param_1[0xd];
        iVar4 = (**(code **)(*(long *)param_1[0xb] + 0x80))
                          ((long *)param_1[0xb],(int)lVar6,0,local_18);
        if (iVar4 != 1) {
          return 2;
        }
        *(int *)(param_1 + 0xe) = local_18[0];
        *(int *)((long)param_1 + 0x74) = (int)lVar6 - local_18[0];
      }
      uVar2 = *(uint *)(param_1 + 6);
      param_1[0xc] = param_1[0xc] + (ulong)uVar2;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar2;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar2;
    }
  }
  return 1;
}


