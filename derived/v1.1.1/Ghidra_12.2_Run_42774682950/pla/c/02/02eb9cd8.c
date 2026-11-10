/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9cd8; name: FUN_02eb9cd8
 */


undefined8
FUN_02eb9cd8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  char local_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_54 [4];
  
  local_54[0] = '\0';
  iVar3 = *(int *)(param_2 + 0x14);
  iVar2 = FUN_02eb9c74();
  if (iVar3 <= iVar2) {
    iVar3 = iVar2;
  }
  FUN_02ec4e58(&local_c0,param_3);
  local_80 = local_b0;
  local_70 = CONCAT71(uStack_9f,local_a0);
  local_78 = uStack_a8;
  local_68 = uStack_98;
  local_90 = local_c0;
  local_88 = uStack_b8;
  if (0 < iVar3) {
    local_68 = 0;
    if (local_a0 != -1) {
      local_88 = uStack_b8 & 0xffffffff00000000;
    }
    if (1 < iVar3) {
      local_78 = CONCAT71((int7)((ulong)uStack_a8 >> 8),0xff);
      local_70 = CONCAT71(uStack_9f,0xff);
      local_80 = local_b0 & 0xffffffff00000000;
      local_88 = local_88 & 0xffffffff00000000;
      if (iVar3 != 2) {
        local_90 = 0;
      }
    }
  }
  plVar1 = param_1 + 7;
  plVar4 = (long *)FUN_02eb9ed4(plVar1,&local_90);
  if (plVar4 != (long *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x40))
                      (param_1,*plVar4,param_3,*(undefined8 *)(param_2 + 8),iVar3,local_54);
    if (lVar5 != 0) {
      if (*plVar4 != lVar5) {
        *(int *)(lVar5 + 0x74) = *(int *)(lVar5 + 0x74) + 1;
        puVar7 = (undefined8 *)*plVar4;
        if ((puVar7 != (undefined8 *)0x0) &&
           (iVar3 = *(int *)((long)puVar7 + 0x74) + -1, *(int *)((long)puVar7 + 0x74) = iVar3,
           iVar3 == 0)) {
          (**(code **)*puVar7)(puVar7);
          (*DAT_0442d150)(0,puVar7);
        }
        *plVar4 = lVar5;
      }
      if (param_5 != (long *)0x0) {
        uVar6 = FUN_02eb9f60(param_5,lVar5,param_3,param_2);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        if (((int)param_5[1] != -1) && (*param_5 != 0)) {
          FUN_02ec6ca0();
        }
      }
      if (local_54[0] != '\0') {
        iVar3 = FUN_02ef4510((int)param_1[2],&local_90);
        if (iVar3 == 1) {
          FUN_02ec2194(param_4,lVar5);
        }
        else {
          FUN_02eba2b8(plVar1,&local_90);
        }
      }
      return 1;
    }
    if (*plVar4 == 0) {
      FUN_02eb9fc8(plVar1,&local_90);
    }
  }
  return 2;
}


