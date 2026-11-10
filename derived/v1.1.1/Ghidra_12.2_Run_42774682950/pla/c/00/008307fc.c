/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008307fc; name: FUN_008307fc
 */


int FUN_008307fc(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long lVar10;
  uint *puVar11;
  undefined1 auStack_90 [32];
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar7 = 0;
  }
  else {
    uVar8 = 0;
    iVar7 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      if (*(int *)(lVar4 + uVar8 * 0x18 + 0x10) != 0) {
        lVar4 = lVar4 + uVar8 * 0x18;
        puVar11 = (uint *)(lVar4 + 0x14);
        uVar5 = (ulong)(int)*puVar11;
        if (*(long *)(lVar4 + 8) != lVar4) {
          lVar10 = *(long *)(lVar4 + 8) - uVar5;
          lVar4 = lVar4 - uVar5;
          if (param_2 == 1) {
            do {
              bVar1 = *(byte *)(lVar10 + 0x1c);
              bVar2 = *(byte *)(param_1 + 6);
              if (((bVar1 != bVar2) &&
                  (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar2 * 8) +
                           (ulong)bVar1 * 4) == 1)) &&
                 (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar1 * 8) +
                          (ulong)bVar2 * 4) == 1)) {
                lVar6 = *(long *)(lVar10 + 0x10);
                FUN_007f0ce0(auStack_90);
                local_70 = 0xfdfd;
                uVar3 = *(undefined2 *)(lVar6 + 0x90);
                FUN_007f0f88(auStack_90,lVar6 + 8);
                local_70 = *(undefined2 *)(lVar6 + 0x90);
                uStack_6e = (undefined2)*(undefined4 *)(lVar10 + 0x18);
                puVar9 = (undefined2 *)(param_3 + (long)iVar7 * 0x38);
                local_68 = *(undefined8 *)(lVar6 + 0x30);
                *puVar9 = uVar3;
                FUN_007f0f88(puVar9 + 4,auStack_90);
                iVar7 = iVar7 + 1;
                *(ulong *)(puVar9 + 0x14) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
                *(undefined8 *)(puVar9 + 0x18) = local_68;
                uVar5 = (ulong)*puVar11;
              }
              lVar10 = *(long *)(lVar10 + (int)uVar5 + 8) + (long)-(int)uVar5;
            } while (lVar10 != lVar4);
          }
          else {
            do {
              bVar1 = *(byte *)(lVar10 + 0x1c);
              bVar2 = *(byte *)(param_1 + 6);
              if ((bVar1 != bVar2) &&
                 (((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar2 * 8) +
                            (ulong)bVar1 * 4) != 1 || (param_2 != 2)) ||
                  (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)bVar1 * 8) +
                           (ulong)bVar2 * 4) != 1)))) {
                lVar6 = *(long *)(lVar10 + 0x10);
                FUN_007f0ce0(auStack_90);
                local_70 = 0xfdfd;
                uVar3 = *(undefined2 *)(lVar6 + 0x90);
                FUN_007f0f88(auStack_90,lVar6 + 8);
                local_70 = *(undefined2 *)(lVar6 + 0x90);
                uStack_6e = (undefined2)*(undefined4 *)(lVar10 + 0x18);
                puVar9 = (undefined2 *)(param_3 + (long)iVar7 * 0x38);
                local_68 = *(undefined8 *)(lVar6 + 0x30);
                *puVar9 = uVar3;
                FUN_007f0f88(puVar9 + 4,auStack_90);
                iVar7 = iVar7 + 1;
                *(ulong *)(puVar9 + 0x14) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
                *(undefined8 *)(puVar9 + 0x18) = local_68;
                uVar5 = (ulong)*puVar11;
              }
              lVar10 = *(long *)(lVar10 + (int)uVar5 + 8) + (long)-(int)uVar5;
            } while (lVar10 != lVar4);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 3));
  }
  return iVar7;
}


