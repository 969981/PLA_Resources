/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e36828; name: FUN_02e36828
 */


undefined8 FUN_02e36828(long *param_1,long *param_2,uint param_3,ushort param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  void *__s;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  *(ushort *)((long)param_1 + 0xc) = param_4;
  *(short *)((long)param_1 + 0xe) = (short)param_3;
  if (param_4 != 0) {
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2,((ulong)param_4 + (ulong)param_4 * 4) * 8);
    *param_1 = lVar8;
    if (lVar8 == 0) {
      return 0x34;
    }
    uVar4 = param_3 & 0xffff;
    uVar11 = 0x14;
    if (uVar4 < 4) {
      uVar11 = 0;
    }
    uVar5 = uVar4 + (param_3 & 2) * 2 & 0x1fffc | param_3 & 1;
    uVar7 = uVar5 << 4;
    iVar1 = (uVar7 | 0xf) + (uVar11 | (param_3 & 1) << 7 | -(uVar4 >> 1 & 1) & 0x60);
    lVar12 = 0;
    lVar9 = 0;
    lVar6 = lVar8;
    while( true ) {
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar8 + lVar12);
        *(undefined1 *)(puVar2 + 4) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar9 = *param_1;
      }
      puVar3 = (ulong *)(lVar9 + lVar12);
      *(undefined1 *)(puVar3 + 4) = 0;
      *(int *)(puVar3 + 3) = iVar1;
      *(uint *)((long)puVar3 + 0x1c) = uVar4;
      __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,iVar1);
      puVar3[1] = (ulong)__s;
      if (__s == (void *)0x0) {
        return 0x34;
      }
      memset(__s,0,(ulong)(uint)puVar3[3]);
      uVar10 = puVar3[1] + 0xf & 0xfffffffffffffff0;
      *puVar3 = uVar10;
      *(uint *)(puVar3 + 3) = uVar7;
      puVar3[2] = uVar10 + (ulong)(uVar5 << 2) * 4;
      if ((ulong)param_4 * 0x28 + -0x28 == lVar12) break;
      lVar8 = *param_1;
      lVar12 = lVar12 + 0x28;
      lVar6 = lVar8 + lVar12;
      lVar9 = lVar8;
    }
  }
  return 1;
}


