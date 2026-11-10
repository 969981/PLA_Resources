/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d9b0; name: FUN_0040d9b0
 */


undefined8 FUN_0040d9b0(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  int *local_58;
  uint local_50;
  undefined8 local_4c;
  int local_38;
  undefined4 uStack_34;
  
  iVar4 = FUN_0040c130(param_2);
  if (iVar4 != 0) {
    return 0;
  }
  FUN_0040e090(param_3);
  puVar5 = (undefined8 *)FUN_0040e240(param_3);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = param_1 + 8;
    lVar6 = FUN_0040c5d0(puVar1,param_2);
    if (lVar6 != 0) {
      iVar4 = FUN_0040c1d0(param_2,4);
      if (iVar4 != 0) {
        FUN_0040d3b0(puVar1,4);
      }
      puVar2 = param_1 + 2;
      param_1[0xc] = 0;
      FUN_0040c250(&local_58);
      local_58 = &local_38;
      local_4c = DAT_0388a688;
      iVar4 = FUN_0040c1d0(param_2,4);
      if (iVar4 != 0) {
        FUN_0040d3b0(&local_58,4);
      }
      iVar4 = FUN_0040c070(param_2);
      uVar7 = iVar4 + 0x3e;
      if (-1 < (int)(iVar4 + 0x1fU)) {
        uVar7 = iVar4 + 0x1fU;
      }
      *param_1 = uVar7 & 0xffffffe0;
      FUN_0040c6b0(puVar2,0);
      iVar4 = FUN_0040cd10(puVar2,0x20);
      if (iVar4 != 0) {
        local_38 = *(int *)*param_2;
        uStack_34 = 0;
        local_50 = (uint)(local_38 != 0);
        iVar4 = FUN_0040d220(&local_58);
        if (iVar4 == 0) {
          lVar6 = FUN_00410e10(puVar5,puVar2,&local_58,param_3);
          if (lVar6 == 0) goto LAB_0040dbec;
        }
        else {
          FUN_0040c6b0(puVar5,0);
        }
        iVar4 = FUN_00410600(puVar5,puVar5,0x20);
        if (iVar4 != 0) {
          iVar4 = FUN_0040c130(puVar5);
          if (iVar4 == 0) {
            iVar4 = FUN_0040be30(puVar5,1);
          }
          else {
            iVar4 = FUN_0040c6b0(puVar5,0xffffffff);
          }
          if ((iVar4 != 0) && (iVar4 = FUN_0040e5a0(puVar5,0,puVar5,&local_58,param_3), iVar4 != 0))
          {
            if (*(int *)(puVar5 + 1) < 1) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(uint *)*puVar5;
            }
            param_1[0x14] = uVar7;
            param_1[0x15] = 0;
            FUN_0040c6b0(puVar2,0);
            iVar4 = FUN_0040cd10(puVar2,*param_1 << 1);
            if ((iVar4 != 0) && (iVar4 = FUN_0040e5a0(0,puVar2,puVar2,puVar1,param_3), iVar4 != 0))
            {
              uVar3 = param_1[4];
              uVar7 = param_1[10];
              if ((int)uVar3 < (int)uVar7) {
                memset((void *)(*(long *)puVar2 + (long)(int)uVar3 * 4),0,
                       (ulong)(uVar7 + ~uVar3) * 4 + 4);
              }
              param_1[4] = uVar7;
              uVar8 = 1;
              goto LAB_0040dbf0;
            }
          }
        }
      }
    }
  }
LAB_0040dbec:
  uVar8 = 0;
LAB_0040dbf0:
  FUN_0040e1b0(param_3);
  return uVar8;
}


