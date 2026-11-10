/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844200; name: FUN_00844200
 */


void FUN_00844200(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_48 [2];
  
  plVar4 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  memset(local_48,0,4);
  lVar5 = FUN_00845d68(*(undefined8 *)(param_1 + 0x48),0);
  if (lVar5 != 0) {
    iVar7 = 0;
    plVar1 = (long *)(param_1 + 0x50);
    do {
      lVar5 = FUN_00845d68(*(undefined8 *)(param_1 + 0x48),iVar7);
      if (*(char *)(lVar5 + 0x648) != '\0') {
        if (*(uint *)(lVar5 + 0x5f8) - 0x1c != (uint)*(byte *)(lVar5 + 0x14) &&
            *(byte *)(lVar5 + 0x14) + 0x1c <= *(uint *)(lVar5 + 0x5f8)) {
          uVar8 = 0;
          do {
            FUN_008484cc(plVar1,lVar5,uVar8);
            if (*plVar1 == 0) break;
            bVar3 = *(byte *)(param_1 + 0x78);
            iVar9 = 1;
            if ((bVar3 & 1) != 0) {
              iVar9 = 2;
            }
            if ((bVar3 & 2) != 0) {
              iVar9 = iVar9 + 2;
            }
            if ((bVar3 & 4) != 0) {
              iVar9 = iVar9 + 4;
            }
            if ((bVar3 & 8) != 0) {
              iVar9 = iVar9 + 8;
            }
            uVar8 = uVar8 + *(ushort *)(param_1 + 0x7a) + iVar9;
            if (((((*(byte *)(param_1 + 0x79) & 1) == 0) &&
                 (lVar6 = FUN_00848874(plVar1), lVar6 != 0)) &&
                (lVar6 = (**(code **)(*plVar4 + 0x38))(plVar4,lVar6), lVar6 != 0)) &&
               (*(byte *)(lVar6 + 0x28) != 0xfd)) {
              local_48[0] = local_48[0] | 1 << (ulong)(*(byte *)(lVar6 + 0x28) & 0x1f);
            }
            uVar2 = 0;
            if (*(byte *)(lVar5 + 0x14) + 0x1c <= *(uint *)(lVar5 + 0x5f8)) {
              uVar2 = (*(uint *)(lVar5 + 0x5f8) - (uint)*(byte *)(lVar5 + 0x14)) - 0x1c;
            }
          } while (uVar8 < uVar2);
        }
        lVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,lVar5 + 0x628);
        if ((lVar5 != 0) && (*(byte *)(lVar5 + 0x28) < 0x18)) {
          local_48[0] = local_48[0] | 1 << (ulong)(*(byte *)(lVar5 + 0x28) & 0x1f);
        }
      }
      iVar7 = iVar7 + 1;
      lVar5 = FUN_00845d68(*(undefined8 *)(param_1 + 0x48),iVar7);
    } while (lVar5 != 0);
  }
  FUN_00845a50(param_1 + 0xe8,local_48,param_2);
  return;
}


