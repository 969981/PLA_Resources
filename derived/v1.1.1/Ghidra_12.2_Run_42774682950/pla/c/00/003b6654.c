/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b6654; name: FUN_003b6654
 */


undefined8 FUN_003b6654(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  if ((uVar8 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = param_2 + 1;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = param_2 + 1;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x4a);
    *(undefined1 *)param_2 = 0x18;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = param_2 + 1;
  }
  if ((uVar8 >> 3 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x4b);
    *(undefined1 *)param_2 = 0x38;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = param_2 + 1;
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (iVar1 == 0) {
LAB_003b67e4:
    uVar6 = FUN_00336518(param_1 + 0x10,1000,0x20000000,param_2,param_3);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return uVar6;
    }
    uVar6 = FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar6,param_3);
    return uVar6;
  }
  iVar9 = 0;
  if (param_2 < (undefined2 *)*param_3) goto LAB_003b676c;
  do {
    param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
LAB_003b676c:
    do {
      lVar5 = FUN_003c17a8(param_1 + 0x30,iVar9);
      *param_2 = 0x3eba;
      uVar8 = *(uint *)(lVar5 + 0x14);
      if (uVar8 < 0x80) {
        *(byte *)(param_2 + 1) = (byte)uVar8;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar8 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar8 = uVar8 >> 7;
          do {
            puVar7 = param_2;
            uVar3 = uVar8 >> 7;
            *(byte *)((long)puVar7 + -1) = (byte)uVar8 | 0x80;
            param_2 = (undefined2 *)((long)puVar7 + 1);
            uVar4 = uVar8 >> 0xe;
            uVar8 = uVar3;
          } while (uVar4 != 0);
          *(char *)puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined2 *)FUN_003bbc94(lVar5,param_2,param_3);
      iVar9 = iVar9 + 1;
      if (iVar9 == iVar1) goto LAB_003b67e4;
    } while (param_2 < (undefined2 *)*param_3);
  } while( true );
}


