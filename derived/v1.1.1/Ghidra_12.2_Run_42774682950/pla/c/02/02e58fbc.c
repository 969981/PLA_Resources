/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58fbc; name: FUN_02e58fbc
 */


void FUN_02e58fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong local_90;
  ulong uStack_88;
  undefined *local_80;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x80) != 0) {
    puVar1 = PTR_DAT_04388738 + 0x10;
    uVar6 = 0;
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar9 = *(long *)(param_1 + uVar6 * 8);
      uVar2 = uVar6 + 1;
      uVar4 = param_2;
      if (uVar2 < uVar5) {
        uVar4 = *(undefined8 *)(param_1 + uVar6 * 8 + 0x48);
      }
      uVar3 = FUN_02e54e88(lVar9,uVar4,param_3);
      if ((lVar8 != 0) && (((uVar7 | uVar3) & 1) != 0)) {
        local_90 = *(ulong *)(lVar9 + 0x40);
        uVar5 = *(ulong *)(lVar8 + 0x40);
        local_70 = 0;
        uStack_68 = 0;
        local_74 = 1;
        uStack_88 = uVar5;
        if (uVar5 <= local_90) {
          uStack_88 = local_90;
          local_90 = uVar5;
        }
        local_80 = puVar1;
        FUN_02e590d4(param_4,&local_90);
      }
      uVar5 = (ulong)*(uint *)(param_1 + 0x80);
      uVar6 = uVar2;
      lVar8 = lVar9;
      uVar7 = uVar3;
    } while (uVar2 < uVar5);
    if ((uVar3 & 1) != 0) {
      *param_5 = 1;
    }
  }
  return;
}


