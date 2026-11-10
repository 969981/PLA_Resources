/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bc44c; name: FUN_031bc44c
 */


void FUN_031bc44c(long param_1,int *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar2 = *param_2;
  lVar6 = (long)iVar2;
  if (-1 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 != 0) {
      if (iVar2 < iVar3) {
        if ((param_3 >> 1 & 1) == 0) {
          lVar8 = *(long *)(param_1 + 0x40);
          local_38[0] = *(uint *)(**(long **)(param_1 + 0x60) + lVar6 * 4) >> 0x16;
          if (*(char *)((long)param_2 + 7) == '\0') {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(lVar8 + lVar6 * 0x80 + 0x28);
          }
        }
        else {
          lVar8 = *(long *)(param_1 + 0x40);
          lVar1 = lVar8 + lVar6 * 0x80;
          uVar4 = *(undefined4 *)(lVar1 + 0x2c);
          local_38[0] = *(uint *)(lVar1 + 8) >> 0x16;
        }
        puVar7 = (undefined8 *)(lVar8 + lVar6 * 0x80 + 0x70);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x40) + (long)iVar3 * 0x80;
        uVar4 = 0;
        local_38[0] = *(uint *)(lVar6 + -0x74) >> 0x16;
        puVar7 = (undefined8 *)(lVar6 + -0x10);
      }
      goto LAB_031bc4c0;
    }
  }
  uVar4 = 0;
  puVar7 = (undefined8 *)(param_1 + 0x30);
  local_38[0] = *(uint *)(param_1 + 0x104) >> 0x16;
LAB_031bc4c0:
  uStack_28 = puVar7[1];
  local_30 = *puVar7;
  FUN_031ba1d4(*(undefined8 *)(param_1 + 0xc0),param_2 + 4,&local_30,local_38,uVar4);
  uVar5 = *(undefined8 *)param_2;
  *(char *)(param_1 + 0xd8) = (char)param_2[2];
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  return;
}


