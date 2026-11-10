/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083564c; name: FUN_0083564c
 */


void FUN_0083564c(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint local_60 [2];
  undefined8 local_58;
  
  puVar3 = PTR_DAT_043773c0;
  if (*(int *)(param_1 + 0xd8) != 0) {
    lVar4 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    uVar8 = **(ulong **)puVar3;
    memcpy(local_60,(void *)(*(long *)PTR_DAT_04377ce8 + 0x90),4);
    lVar9 = *(long *)(lVar4 + 0x20);
    if (lVar9 != lVar4 + 0x18) {
      lVar10 = *(long *)(lVar9 + 0x10);
      bVar1 = *(byte *)(lVar10 + 0x28);
      do {
        if ((((bVar1 != 0xfd) && ((local_60[0] & 1 << (ulong)(bVar1 & 0x1f)) != 0)) &&
            (*(int *)(lVar10 + 0x3c) == 2)) &&
           ((iVar2 = *(int *)(param_1 + 0xd8), plVar5 = (long *)FUN_007ecfa4(),
            (ulong)(*(long *)(lVar10 + 0x88) + *plVar5 * (long)iVar2) < uVar8 ||
            (uVar6 = FUN_0083f61c(*(undefined1 *)(lVar10 + 0x28)), (uVar6 & 1) != 0)))) {
          if (*(int *)(param_1 + 0x850) == 0) {
            FUN_007ecf14(param_1 + 0x858);
          }
          local_58 = 0;
          FUN_007ecf14(&local_58);
          *(undefined8 *)(lVar10 + 0x88) = local_58;
          iVar2 = *(int *)(param_1 + 0x850);
          if (iVar2 < 0x17) {
            if (0 < iVar2) {
              plVar5 = (long *)(param_1 + 0x798);
              lVar7 = (long)iVar2;
              do {
                if (*plVar5 == *(long *)(lVar10 + 0x30)) goto LAB_008356e8;
                lVar7 = lVar7 + -1;
                plVar5 = plVar5 + 1;
              } while (lVar7 != 0);
            }
            *(long *)(param_1 + (long)iVar2 * 8 + 0x798) = *(long *)(lVar10 + 0x30);
            *(int *)(param_1 + 0x850) = iVar2 + 1;
          }
        }
LAB_008356e8:
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 == lVar4 + 0x18) {
          return;
        }
        lVar10 = *(long *)(lVar9 + 0x10);
        bVar1 = *(byte *)(lVar10 + 0x28);
      } while( true );
    }
  }
  return;
}


