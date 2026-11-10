/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a07994; name: FUN_02a07994
 */


void FUN_02a07994(long param_1,long param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  if (param_3[8] == 1) {
    lVar5 = *(long *)(param_1 + 0x20);
    bVar2 = *(byte *)(param_2 + 0x7d);
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) + (ulong)bVar2 * 8 +
                     0x120);
    iVar1 = *(int *)(lVar6 + 0x3ac);
    iVar7 = 0xffff;
    if (iVar1 + 1U < 0xffff) {
      iVar7 = iVar1 + 1;
    }
    *(int *)(lVar6 + 0x3ac) = iVar7;
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x35,(ulong)bVar2,6,1);
    if (*param_3 == 0x347) {
      lVar5 = *(long *)(param_1 + 0x20);
      uVar4 = 7;
      uVar3 = (ulong)*(byte *)(param_2 + 0x7d);
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) + uVar3 * 8 + 0x120
                       );
      iVar1 = *(int *)(lVar6 + 0x3b0);
      iVar7 = 0xffff;
      if (iVar1 + 1U < 0xffff) {
        iVar7 = iVar1 + 1;
      }
      *(int *)(lVar6 + 0x3b0) = iVar7;
LAB_02a07ae0:
      FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x35,uVar3,uVar4,1);
      return;
    }
  }
  else if (param_3[8] == 2) {
    lVar5 = *(long *)(param_1 + 0x20);
    bVar2 = *(byte *)(param_2 + 0x7d);
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) + (ulong)bVar2 * 8 +
                     0x120);
    iVar1 = *(int *)(lVar6 + 0x3a4);
    iVar7 = 0xffff;
    if (iVar1 + 1U < 0xffff) {
      iVar7 = iVar1 + 1;
    }
    *(int *)(lVar6 + 0x3a4) = iVar7;
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x35,(ulong)bVar2,4,1);
    if (*param_3 == 0x33c) {
      lVar5 = *(long *)(param_1 + 0x20);
      uVar4 = 5;
      uVar3 = (ulong)*(byte *)(param_2 + 0x7d);
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) + uVar3 * 8 + 0x120
                       );
      iVar1 = *(int *)(lVar6 + 0x3a8);
      iVar7 = 0xffff;
      if (iVar1 + 1U < 0xffff) {
        iVar7 = iVar1 + 1;
      }
      *(int *)(lVar6 + 0x3a8) = iVar7;
      goto LAB_02a07ae0;
    }
  }
  return;
}


