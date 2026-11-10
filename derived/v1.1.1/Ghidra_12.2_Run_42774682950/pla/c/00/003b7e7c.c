/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b7e7c; name: FUN_003b7e7c
 */


undefined8 FUN_003b7e7c(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
LAB_003b7f60:
    uVar5 = FUN_00336518(param_1 + 0x10,1000,0x20000000,param_2,param_3);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return uVar5;
    }
    uVar5 = FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar5,param_3);
    return uVar5;
  }
  iVar8 = 0;
  if (param_2 < (undefined2 *)*param_3) goto LAB_003b7ee8;
  do {
    param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
LAB_003b7ee8:
    do {
      lVar4 = FUN_003c17a8(param_1 + 0x28,iVar8);
      *param_2 = 0x3eba;
      uVar7 = *(uint *)(lVar4 + 0x14);
      if (uVar7 < 0x80) {
        *(byte *)(param_2 + 1) = (byte)uVar7;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        *(byte *)(param_2 + 1) = (byte)uVar7 | 0x80;
        if (uVar7 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar7 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar7 = uVar7 >> 7;
          do {
            puVar6 = param_2;
            uVar2 = uVar7 >> 7;
            *(byte *)((long)puVar6 + -1) = (byte)uVar7 | 0x80;
            param_2 = (undefined2 *)((long)puVar6 + 1);
            uVar3 = uVar7 >> 0xe;
            uVar7 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar6 = (char)uVar2;
        }
      }
      param_2 = (undefined2 *)FUN_003bbc94(lVar4,param_2,param_3);
      iVar8 = iVar8 + 1;
      if (iVar8 == iVar1) goto LAB_003b7f60;
    } while (param_2 < (undefined2 *)*param_3);
  } while( true );
}


