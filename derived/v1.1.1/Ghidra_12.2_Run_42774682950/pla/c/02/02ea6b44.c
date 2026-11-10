/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6b44; name: FUN_02ea6b44
 */


undefined8 FUN_02ea6b44(undefined4 param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar4 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) != 0) {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + ((uint)uVar4 >> 1);
      puVar7 = (ulong *)(*(long *)(param_2 + 0x18) + (long)iVar1 * 0x18);
      uVar8 = *puVar7;
      uVar2 = (uint)puVar7[1];
      if (uVar8 == param_3 && uVar2 == param_4) {
        lVar5 = *(long *)(param_2 + 0x18) + (long)iVar1 * 0x18;
        if (lVar5 != 0) {
          uVar3 = 0;
          goto LAB_02ea6b98;
        }
        break;
      }
      if ((uVar8 < param_3) || ((uVar8 == param_3 && (uVar2 < param_4)))) {
        iVar6 = iVar1 + 1;
        uVar4 = (ulong)((uint)uVar4 - 1);
      }
      uVar4 = uVar4 >> 1;
    } while ((int)uVar4 != 0);
  }
  lVar5 = FUN_02ea6a44();
  uVar3 = 1;
  if (lVar5 != 0) {
LAB_02ea6b98:
    *(undefined4 *)(lVar5 + 0x10) = param_1;
  }
  return uVar3;
}


