/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004123c0; name: FUN_004123c0
 */


void FUN_004123c0(long param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  
  puVar3 = param_4;
  iVar5 = param_5;
  if (param_5 <= param_3) {
    puVar3 = param_2;
    param_2 = param_4;
    iVar5 = param_3;
    param_3 = param_5;
  }
  if (param_3 < 1) {
    FUN_0040ee50(param_1,puVar3,iVar5,0);
    return;
  }
  puVar1 = (undefined4 *)(param_1 + (long)iVar5 * 4);
  uVar6 = FUN_0040ee50(param_1,puVar3,iVar5,*param_2);
  *puVar1 = uVar6;
  if (param_3 != 1) {
    lVar7 = 0;
    do {
      lVar2 = param_1 + lVar7;
      uVar6 = FUN_0040ed60(lVar2 + 4,puVar3,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 4));
      *(undefined4 *)((long)puVar1 + lVar7 + 4) = uVar6;
      if (param_3 == 2) {
        return;
      }
      uVar6 = FUN_0040ed60(lVar2 + 8,puVar3,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 8));
      iVar4 = param_3 + -4;
      *(undefined4 *)((long)puVar1 + lVar7 + 8) = uVar6;
      if (param_3 < 4) {
        return;
      }
      uVar6 = FUN_0040ed60(lVar2 + 0xc,puVar3,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 0xc));
      *(undefined4 *)((long)puVar1 + lVar7 + 0xc) = uVar6;
      if (iVar4 < 1) {
        return;
      }
      uVar6 = FUN_0040ed60(lVar2 + 0x10,puVar3,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 0x10));
      *(undefined4 *)((long)puVar1 + lVar7 + 0x10) = uVar6;
      lVar7 = lVar7 + 0x10;
      param_3 = iVar4;
    } while (iVar4 != 1);
  }
  return;
}


