/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03351340; name: FUN_03351340
 */


void FUN_03351340(long param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68 [2];
  
  local_68[0] = param_4;
  do {
    puVar1 = (undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10);
    local_80 = *puVar1;
    uStack_78 = puVar1[1];
    iVar8 = param_2;
    iVar5 = param_3;
    do {
      puVar1 = (undefined8 *)(param_1 + (long)iVar8 * 0x10);
      do {
        iVar3 = iVar8;
        puVar7 = puVar1;
        uVar4 = FUN_03351464(local_68,puVar7,&local_80);
        puVar1 = puVar7 + 2;
        iVar8 = iVar3 + 1;
      } while ((uVar4 & 1) != 0);
      puVar1 = (undefined8 *)(param_1 + (long)iVar5 * 0x10);
      iVar5 = iVar5 + 1;
      do {
        iVar6 = iVar5;
        puVar9 = puVar1;
        uVar4 = FUN_03351464(local_68,&local_80,puVar9);
        iVar5 = iVar6 + -1;
        puVar1 = puVar9 + -2;
      } while ((uVar4 & 1) != 0);
      iVar8 = iVar3;
      if (iVar3 <= iVar5) {
        if (iVar3 != iVar5) {
          uVar11 = puVar9[1];
          uVar10 = *puVar9;
          uVar2 = puVar7[1];
          *puVar9 = *puVar7;
          puVar9[1] = uVar2;
          puVar7[1] = uVar11;
          *puVar7 = uVar10;
        }
        iVar5 = iVar6 + -2;
        iVar8 = iVar3 + 1;
      }
    } while (iVar8 <= iVar5);
    if (param_2 < iVar5) {
      FUN_03351340(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


