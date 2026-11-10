/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ffa08; name: FUN_030ffa08
 */


void FUN_030ffa08(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined2 local_34;
  undefined1 local_32;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[0xe] = -0x8000000000000000;
  param_1[4] = -0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = -0x8000000000000000;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x15d8);
  if (iVar1 < 1) {
    iVar5 = 0;
  }
  else {
    lVar2 = FUN_031006dc(PTR_PTR_0434a080,iVar1,0,0,(long)param_1 + 0x24);
    iVar5 = (int)param_1[4];
    iVar3 = iVar1 - iVar5;
    param_1[3] = lVar2;
    if (iVar3 != 0 && iVar5 <= iVar1) {
      *(int *)(param_1 + 4) = iVar1;
      if (0 < iVar3) {
        puVar6 = (undefined8 *)(lVar2 + (long)iVar5 * 0x28);
        do {
          iVar3 = iVar3 + -1;
          *(undefined1 *)((long)puVar6 + 0x14) = 0;
          *(undefined4 *)(puVar6 + 2) = local_44;
          *puVar6 = local_54;
          puVar6[1] = local_4c;
          puVar6[3] = 0xffffffff00ffffff;
          *(undefined2 *)((long)puVar6 + 0x24) = 0;
          *(undefined1 *)((long)puVar6 + 0x17) = local_32;
          *(undefined2 *)((long)puVar6 + 0x15) = local_34;
          *(undefined1 *)((long)puVar6 + 0x26) = 0;
          puVar6 = puVar6 + 5;
        } while (iVar3 != 0);
      }
      goto LAB_030ffaf8;
    }
  }
  if (iVar1 < iVar5) {
    *(int *)(param_1 + 4) = iVar1;
  }
LAB_030ffaf8:
  iVar1 = *(int *)(*param_1 + 0x15d8);
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x3fffffff) < iVar1) {
    lVar2 = FUN_03100880(PTR_PTR_0434a080,iVar1,param_1[5],(int)param_1[6],(long)param_1 + 0x34);
    param_1[5] = lVar2;
  }
  if ((int)param_1[6] != iVar1) {
    *(int *)(param_1 + 6) = iVar1;
  }
  lVar2 = *param_3;
  iVar1 = *(int *)(*param_1 + 0x15d8);
  param_1[1] = lVar2;
  param_1[2] = lVar2 + (long)iVar1 * 0x20;
  if (*(char *)(*param_1 + 0x15de) != '\0') {
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_030a88f8(PTR_PTR_0434a080,iVar1,param_1[7],(int)param_1[8]);
      param_1[7] = lVar2;
    }
    if ((int)param_1[8] != iVar1) {
      *(int *)(param_1 + 8) = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_03100908(PTR_PTR_0434a080,iVar1,param_1[9],(int)param_1[10]);
      param_1[9] = lVar2;
    }
    iVar5 = (int)param_1[10];
    if (iVar5 < iVar1) {
      lVar2 = param_1[9];
      puVar4 = (undefined4 *)(lVar2 + (long)iVar5 * 0x3c);
      *(int *)(param_1 + 10) = iVar1;
      do {
        *puVar4 = 0xffffff;
        *(undefined8 *)(puVar4 + 1) = 0x5f7ffff000000000;
        puVar4[3] = 0xffffff;
        *(undefined8 *)(puVar4 + 4) = 0x5f7ffff000000000;
        puVar4[6] = 0xffffff;
        *(undefined8 *)(puVar4 + 7) = 0x5f7ffff000000000;
        puVar4[9] = 0xffffff;
        *(undefined8 *)(puVar4 + 10) = 0x5f7ffff000000000;
        puVar4[0xc] = 0xffffff;
        *(undefined8 *)(puVar4 + 0xd) = 0x5f7ffff000000000;
        puVar4 = puVar4 + 0xf;
      } while (puVar4 != (undefined4 *)(lVar2 + (long)iVar1 * 0x3c));
    }
    else if (iVar1 < iVar5) {
      *(int *)(param_1 + 10) = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 100) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_031006dc(PTR_PTR_0434a080,iVar1,param_1[0xb],(int)param_1[0xc]);
      param_1[0xb] = lVar2;
    }
    if ((int)param_1[0xc] != iVar1) {
      *(int *)(param_1 + 0xc) = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x15d8);
    if ((int)(*(uint *)((long)param_1 + 0x74) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_03100880(PTR_PTR_0434a080,iVar1,param_1[0xd],(int)param_1[0xe]);
      param_1[0xd] = lVar2;
    }
    if (((int)param_1[0xe] < iVar1) || (iVar1 < (int)param_1[0xe])) {
      *(int *)(param_1 + 0xe) = iVar1;
    }
  }
  return;
}


