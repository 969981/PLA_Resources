/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003be134; name: FUN_003be134
 */


undefined1 * FUN_003be134(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
LAB_003be218:
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return param_2;
    }
    puVar5 = (undefined1 *)
             FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
    return puVar5;
  }
  iVar7 = 0;
  if (param_2 < (undefined1 *)*param_3) goto LAB_003be1a0;
  do {
    param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003be1a0:
    do {
      lVar4 = FUN_00366d44(param_1 + 0x10,iVar7);
      *param_2 = 10;
      uVar6 = *(uint *)(lVar4 + 0x14);
      if (uVar6 < 0x80) {
        param_2[1] = (byte)uVar6;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar6 | 0x80;
        if (uVar6 >> 0xe == 0) {
          param_2[2] = (char)(uVar6 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar6 = uVar6 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar6 >> 7;
            puVar5[-1] = (byte)uVar6 | 0x80;
            param_2 = puVar5 + 1;
            uVar3 = uVar6 >> 0xe;
            uVar6 = uVar2;
          } while (uVar3 != 0);
          *puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined1 *)FUN_003bd024(lVar4,param_2,param_3);
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar1) goto LAB_003be218;
    } while (param_2 < (undefined1 *)*param_3);
  } while( true );
}


