/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ba4a4; name: FUN_003ba4a4
 */


undefined8 FUN_003ba4a4(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  if ((uVar8 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 0x288;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar8 >> 1 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x4c);
    *param_2 = 0x290;
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      iVar1 = *(int *)(param_1 + 0x38);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      uVar9 = (ulong)(long)(int)uVar8 >> 7;
      if (((ulong)(long)(int)uVar8 >> 0xe & 0x3ffff) == 0) {
        *(char *)((long)param_2 + 3) = (char)uVar9;
        param_2 = param_2 + 2;
        iVar1 = *(int *)(param_1 + 0x38);
      }
      else {
        param_2 = param_2 + 2;
        do {
          puVar7 = param_2;
          uVar10 = uVar9 >> 7;
          *(byte *)((long)puVar7 + -1) = (byte)uVar9 | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          uVar11 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar11 != 0);
        *(char *)puVar7 = (char)uVar10;
        iVar1 = *(int *)(param_1 + 0x38);
      }
    }
  }
  if (iVar1 == 0) {
LAB_003ba640:
    uVar6 = FUN_00336518(param_1 + 0x10,1000,0x20000000,param_2,param_3);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return uVar6;
    }
    uVar6 = FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar6,param_3);
    return uVar6;
  }
  iVar12 = 0;
  if (param_2 < (undefined2 *)*param_3) goto LAB_003ba51c;
  do {
    param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
LAB_003ba51c:
    do {
      lVar5 = FUN_003c17a8(param_1 + 0x30,iVar12);
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
      iVar12 = iVar12 + 1;
      if (iVar12 == iVar1) goto LAB_003ba640;
    } while (param_2 < (undefined2 *)*param_3);
  } while( true );
}


