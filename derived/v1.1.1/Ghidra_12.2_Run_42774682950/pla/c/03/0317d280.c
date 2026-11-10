/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317d280; name: FUN_0317d280
 */


void FUN_0317d280(long param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  
  do {
    puVar6 = (undefined4 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0xc);
    local_70 = *puVar6;
    local_6c = puVar6[1];
    local_68 = *(undefined2 *)(puVar6 + 2);
    local_66 = *(undefined2 *)((long)puVar6 + 10);
    iVar10 = param_3;
    iVar9 = param_2;
    do {
      puVar4 = (undefined8 *)(param_1 + (long)iVar9 * 0xc);
      do {
        iVar2 = iVar9;
        puVar12 = puVar4;
        cVar5 = (*param_4)(puVar12,&local_70);
        puVar4 = (undefined8 *)((long)puVar12 + 0xc);
        iVar9 = iVar2 + 1;
      } while (cVar5 != '\0');
      puVar3 = (undefined2 *)(param_1 + 0x16 + (long)iVar10 * 0xc);
      iVar10 = iVar10 + 1;
      do {
        iVar11 = iVar10;
        puVar7 = puVar3;
        cVar5 = (*param_4)(&local_70,puVar7 + -0xb);
        iVar10 = iVar11 + -1;
        puVar3 = puVar7 + -6;
      } while (cVar5 != '\0');
      iVar9 = iVar2;
      if (iVar2 <= iVar10) {
        if (iVar2 != iVar10) {
          uVar8 = *(undefined8 *)(puVar7 + -0xb);
          *(undefined4 *)(puVar7 + -0xb) = *(undefined4 *)puVar12;
          *(undefined4 *)(puVar7 + -9) = *(undefined4 *)((long)puVar12 + 4);
          uVar1 = *(undefined4 *)(puVar7 + -7);
          puVar7[-7] = *(undefined2 *)(puVar12 + 1);
          puVar7[-6] = *(undefined2 *)((long)puVar12 + 10);
          *puVar12 = uVar8;
          *(undefined4 *)(puVar12 + 1) = uVar1;
        }
        iVar10 = iVar11 + -2;
        iVar9 = iVar2 + 1;
      }
    } while (iVar9 <= iVar10);
    if (param_2 < iVar10) {
      FUN_0317d280(param_1,param_2,iVar10,param_4);
    }
    param_2 = iVar9;
  } while (iVar9 < param_3);
  return;
}


