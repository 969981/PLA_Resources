/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a8d80; name: FUN_031a8d80
 */


void FUN_031a8d80(long param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  
  if (param_2 != param_3) {
    do {
      lVar7 = (long)*(int *)(param_1 + 0x28) + -1;
      iVar4 = *param_2;
      iVar6 = (int)lVar7;
      *(int *)(param_1 + 0x28) = iVar6;
      if (iVar6 != iVar4) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar7 * 0x20);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x20);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        uVar3 = puVar1[3];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar3;
      }
      iVar6 = *(int *)(param_1 + 0x250);
      lVar7 = *(long *)(param_1 + 0x248);
      iVar4 = iVar6 + 1;
      if ((int)(*(uint *)(param_1 + 0x254) & 0x3fffffff) <= iVar6) {
        lVar7 = FUN_031aaf24(PTR_PTR_0434a080,iVar4,lVar7,iVar6,param_1 + 0x254);
        iVar6 = *(int *)(param_1 + 0x250);
        *(long *)(param_1 + 0x248) = lVar7;
      }
      puVar5 = (undefined4 *)(lVar7 + (long)iVar6 * 0xa0);
      param_2 = param_2 + 1;
      *(int *)(param_1 + 0x250) = iVar4;
      *(undefined8 *)(puVar5 + 0x24) = 0;
      *(undefined8 *)(puVar5 + 0x26) = 0x8000000000000000;
      *puVar5 = 3;
      puVar5[4] = param_4;
    } while (param_3 != param_2);
  }
  return;
}


