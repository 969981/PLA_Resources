/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c90b50; name: FUN_02c90b50
 */


undefined8 FUN_02c90b50(long param_1,byte param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined1 **ppuVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  ppuVar5 = &local_60;
  lVar6 = *(long *)(param_1 + 0x2e8);
  if ((((*(long *)(lVar6 + 0xe8) != 0) &&
       (*(int *)(lVar6 + 0xf0) == *(int *)(*(long *)(lVar6 + 0xe8) + 0x2c))) &&
      (lVar6 = FUN_002669c8(lVar6 + 0xe8), lVar6 != 0)) &&
     (lVar6 = FUN_002669c8(*(long *)(param_1 + 0x2e8) + 0xe8), *(char *)(lVar6 + 8) != '\0')) {
    if (*(char *)(lVar6 + 9) == '\0') {
      return 0;
    }
    FUN_02c90d40(param_1);
  }
  lVar6 = *(long *)(param_1 + 0x2e8);
  if ((*(long *)(lVar6 + 0xe8) != 0) &&
     (*(int *)(lVar6 + 0xf0) == *(int *)(*(long *)(lVar6 + 0xe8) + 0x2c))) {
    *(undefined8 *)(lVar6 + 0xe8) = 0;
    *(undefined4 *)(lVar6 + 0xf0) = 0xffffffff;
  }
  FUN_02c91034(param_1);
  *(byte *)(param_1 + 0x2f0) = param_2 & 1;
  if (**(char **)(param_1 + 0x2a8) == '\0') {
    uVar3 = FUN_02c8f704(*(undefined8 *)(param_1 + 0x268),param_1 + 0x270,0,
                         *(undefined8 *)(param_1 + 0x2e8));
    if ((uVar3 & 1) != 0) {
      local_50 = 0;
      uStack_48 = 0;
      local_60 = &DAT_cbf29ce484222645;
      puStack_58 = &DAT_03996322;
      goto LAB_02c90c4c;
    }
  }
  else {
    uVar3 = FUN_02c8f704(*(undefined8 *)(param_1 + 0x268),param_1 + 0x270,
                         *(char **)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x2e8));
    if ((uVar3 & 1) != 0) {
      ppuVar5 = (undefined1 **)(param_1 + 0x2a0);
LAB_02c90c4c:
      FUN_02c919a4(param_1,ppuVar5);
      lVar6 = FUN_002669c8(*(long *)(param_1 + 0x2e8) + 0xe8);
      iVar1 = **(int **)(lVar6 + 0x238);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          lVar4 = FUN_00266944(lVar6,iVar9);
          lVar7 = *(long *)(*(long *)(lVar4 + 0x238) + 0x10);
          *(bool *)(param_1 + 0x368) = *(float *)(lVar7 + 0x7cc) <= *(float *)(lVar7 + 2000);
          puVar8 = *(uint **)(*(long *)(lVar4 + 0x238) + 0x318);
          if (puVar8 == (uint *)0x0) {
            *(undefined1 *)(param_1 + 0x369) = 0;
            break;
          }
          if (*puVar8 < 2) {
            bVar2 = false;
          }
          else {
            bVar2 = 1.1920929e-07 <= (float)puVar8[0x72];
          }
          iVar9 = iVar9 + 1;
          *(bool *)(param_1 + 0x369) = bVar2;
        } while (iVar1 != iVar9);
      }
      *(undefined1 *)(param_1 + 0x36a) = 0;
      return 1;
    }
  }
  return 0;
}


