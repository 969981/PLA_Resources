/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830a60; name: FUN_00830a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00830a60(long param_1,int param_2,byte param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined1 auStack_90 [32];
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if (param_3 < *(byte *)(*(long *)(param_1 + 0x10) + 3)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + (ulong)param_3 * 0x18;
    lVar9 = *(long *)(lVar7 + 8);
    if (*(long *)(lVar7 + 8) == lVar7) {
      return 0;
    }
  }
  else {
    lVar7 = 0;
    lVar9 = _DAT_00000008;
    if (_DAT_00000008 == 0) {
      return 0;
    }
  }
  uVar4 = (ulong)*(int *)(lVar7 + 0x14);
  lVar8 = lVar7 - uVar4;
  lVar9 = lVar9 - uVar4;
  if (param_2 == 1) {
    iVar6 = 0;
    bVar1 = *(byte *)(lVar9 + 0x1c);
    bVar2 = *(byte *)(param_1 + 6);
    if (bVar1 != bVar2) goto LAB_00830b14;
    while (lVar9 = *(long *)(lVar9 + (int)uVar4 + 8) + (long)-(int)uVar4, lVar9 != lVar8) {
      bVar1 = *(byte *)(lVar9 + 0x1c);
      bVar2 = *(byte *)(param_1 + 6);
      if (bVar1 != bVar2) {
LAB_00830b14:
        if ((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar2 * 8) + (ulong)bVar1 * 4) ==
             1) && (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar1 * 8) +
                            (ulong)bVar2 * 4) == 1)) {
          lVar5 = *(long *)(lVar9 + 0x10);
          FUN_007f0ce0(auStack_90);
          local_70 = 0xfdfd;
          uVar3 = *(undefined2 *)(lVar5 + 0x90);
          FUN_007f0f88(auStack_90,lVar5 + 8);
          local_70 = *(undefined2 *)(lVar5 + 0x90);
          uStack_6e = (undefined2)*(undefined4 *)(lVar9 + 0x18);
          puVar10 = (undefined2 *)(param_4 + (long)iVar6 * 0x38);
          local_68 = *(undefined8 *)(lVar5 + 0x30);
          *puVar10 = uVar3;
          FUN_007f0f88(puVar10 + 4,auStack_90);
          iVar6 = iVar6 + 1;
          *(ulong *)(puVar10 + 0x14) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
          *(undefined8 *)(puVar10 + 0x18) = local_68;
          uVar4 = (ulong)*(uint *)(lVar7 + 0x14);
        }
      }
    }
    return iVar6;
  }
  iVar6 = 0;
  bVar1 = *(byte *)(lVar9 + 0x1c);
  bVar2 = *(byte *)(param_1 + 6);
  if (bVar1 == bVar2) goto LAB_00830c54;
  do {
    if (((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar2 * 8) + (ulong)bVar1 * 4) != 1)
        || (param_2 != 2)) ||
       (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar1 * 8) + (ulong)bVar2 * 4) != 1))
    {
      lVar5 = *(long *)(lVar9 + 0x10);
      FUN_007f0ce0(auStack_90);
      local_70 = 0xfdfd;
      uVar3 = *(undefined2 *)(lVar5 + 0x90);
      FUN_007f0f88(auStack_90,lVar5 + 8);
      local_70 = *(undefined2 *)(lVar5 + 0x90);
      uStack_6e = (undefined2)*(undefined4 *)(lVar9 + 0x18);
      puVar10 = (undefined2 *)(param_4 + (long)iVar6 * 0x38);
      local_68 = *(undefined8 *)(lVar5 + 0x30);
      *puVar10 = uVar3;
      FUN_007f0f88(puVar10 + 4,auStack_90);
      iVar6 = iVar6 + 1;
      *(ulong *)(puVar10 + 0x14) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
      *(undefined8 *)(puVar10 + 0x18) = local_68;
      uVar4 = (ulong)*(uint *)(lVar7 + 0x14);
    }
LAB_00830c54:
    do {
      lVar9 = *(long *)(lVar9 + (int)uVar4 + 8) + (long)-(int)uVar4;
      if (lVar9 == lVar8) {
        return iVar6;
      }
      bVar1 = *(byte *)(lVar9 + 0x1c);
      bVar2 = *(byte *)(param_1 + 6);
    } while (bVar1 == bVar2);
  } while( true );
}


