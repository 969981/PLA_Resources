/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332daac; name: FUN_0332daac
 */


void FUN_0332daac(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined8 *local_c8;
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  ulong local_68;
  long *local_58;
  
  *param_1 = &PTR_LAB_0435e6b8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_1 + 5;
  param_1[4] = 0x8000002000000000;
  FUN_0332b928(param_1 + 0x29,0,1000,0);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)((long)param_1 + 0x174) = 0;
  param_1[0x2f] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0x184) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if (param_3 != 0) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (param_1[0x28] != 0) {
      *(undefined4 *)(param_1[0x28] + 0x380) = *(undefined4 *)(param_2 + 4);
    }
    iVar2 = *(int *)(param_2 + 4);
    if ((int)(*(uint *)((long)param_1 + 0x24) & 0x3fffffff) < iVar2) {
      uVar6 = FUN_0332e9a4(PTR_PTR_0434a080,iVar2,param_1[3],*(undefined4 *)(param_1 + 4));
      param_1[3] = uVar6;
    }
    if (*(int *)(param_1 + 4) != iVar2) {
      *(int *)(param_1 + 4) = iVar2;
    }
    if (0 < *(int *)(param_2 + 4)) {
      lVar8 = 0;
      do {
        puVar4 = (undefined8 *)FUN_032cf5b0(0x60);
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0xffffffff;
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
        FUN_0332b928(puVar4 + 4,0,1,0);
        puVar4[0xb] = 0;
        lVar1 = lVar8 + 1;
        *(undefined8 **)(param_1[3] + lVar8 * 8) = puVar4;
        *puVar4 = param_1;
        *(undefined2 *)(puVar4 + 3) = 0;
        uVar7 = (undefined4)lVar1;
        *(undefined4 *)(puVar4 + 1) = uVar7;
        if (*(int *)(param_2 + 0x10) < 1) {
          *(undefined1 *)(puVar4 + 2) = 1;
        }
        else {
          *(undefined1 *)(puVar4 + 2) = *param_2;
          uVar7 = *(undefined4 *)(*(long *)(param_2 + 8) + lVar8 * 4);
        }
        *(undefined4 *)((long)puVar4 + 0xc) = uVar7;
        FUN_0333d158(&local_80);
        local_80 = param_1[0x2f];
        local_78 = (long)*(int *)(param_1 + 0x30);
        local_70 = *(undefined4 *)((long)param_1 + 0x184);
        if (*(char *)(puVar4 + 2) == '\x02') {
          local_68 = (ulong)*(uint *)((long)puVar4 + 0xc);
        }
        FUN_0333de70(auStack_d0,0,8,&LAB_0332ea2c,&LAB_0332ea40);
        *local_c8 = puVar4;
        FUN_032ba248(&local_58,&local_80,auStack_d0);
        plVar3 = local_58;
        local_58 = (long *)0x0;
        plVar5 = (long *)puVar4[0xb];
        puVar4[0xb] = plVar3;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 8))();
          }
        }
        FUN_0333ddd4(auStack_d0);
        if (*(char *)(puVar4 + 2) != '\x02') {
          FUN_032ba1b0(puVar4[0xb],*(undefined4 *)((long)puVar4 + 0xc));
        }
        lVar8 = lVar1;
      } while (lVar1 < *(int *)(param_2 + 4));
    }
  }
  return;
}


