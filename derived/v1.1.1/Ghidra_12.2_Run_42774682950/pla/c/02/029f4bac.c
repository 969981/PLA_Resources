/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f4bac; name: FUN_029f4bac
 */


void FUN_029f4bac(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long local_58;
  undefined1 auStack_48 [8];
  
  **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
  **(undefined8 **)(param_1 + 0x18) = 0;
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x40) + 200);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x40) + 200) = uVar5 | 2;
    FUN_029fc500(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x19a0),auStack_48,&local_58);
    *(undefined1 *)(*(long *)(param_1 + 0x48) + 0xd88) = 0;
    FUN_029f7b78(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1820),*(undefined8 *)(param_1 + 0x48)
                 ,*param_3);
    local_58 = *(long *)(param_1 + 0x48);
    FUN_029f7504(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1800),auStack_48,&local_58);
    lVar8 = *(long *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x60);
    uVar5 = (ulong)*(byte *)(lVar8 + 0xd88);
    if (*(byte *)(lVar8 + 0xd88) != 0) {
      lVar6 = *(long *)(lVar6 + 0x800);
      uVar9 = 0;
      piVar10 = (int *)(lVar8 + 0x10);
      do {
        if ((((uint)uVar9 & 0xff) < (uint)uVar5) && (*piVar10 == 1)) {
          uVar1 = FUN_0298c79c(*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(piVar10 + -2),
                               piVar10[2]);
          lVar4 = *(long *)(lVar6 + 0x20);
          lVar7 = *(long *)(piVar10 + -2);
          *(undefined1 *)
           (*(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar7 + 0x7d) * 8 + 0x120) + 0x36e) = uVar1;
          FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x4e,*(undefined1 *)(lVar7 + 0x7d),uVar1);
          uVar5 = (ulong)*(byte *)(lVar8 + 0xd88);
        }
        uVar9 = uVar9 + 1;
        piVar10 = piVar10 + 0x18;
      } while (uVar9 < uVar5);
      lVar8 = *(long *)(param_1 + 0x48);
      lVar6 = *(long *)(param_1 + 0x60);
    }
    local_58 = lVar8;
    FUN_029f7504(*(undefined8 *)(lVar6 + 0x1800),auStack_48,&local_58);
  }
  local_58 = *(long *)(param_1 + 0x48);
  FUN_029edcf8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1580),auStack_48,&local_58);
  if (**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\0') {
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x18a0);
    iVar2 = FUN_029f8afc(lVar6);
    uVar5 = FUN_029cddec(*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    if ((uVar5 & 1) == 0) {
      if (iVar2 == 3) {
        lVar6 = *(long *)(lVar6 + 0x40);
        uVar1 = 5;
      }
      else if (iVar2 == 2) {
        lVar6 = *(long *)(lVar6 + 0x40);
        uVar1 = 1;
      }
      else {
        if (iVar2 != 1) goto LAB_029f4d9c;
        lVar6 = *(long *)(lVar6 + 0x40);
        uVar1 = 3;
      }
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x40);
      uVar1 = 4;
    }
    **(undefined1 **)(lVar6 + 0x28) = uVar1;
  }
LAB_029f4d9c:
  bVar3 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  if (bVar3 == 0) {
    FUN_029d99c8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x540),auStack_48,&local_58);
    bVar3 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  }
  if ((bVar3 < 7) && ((1 << (ulong)(bVar3 & 0x1f) & 0x71U) != 0)) {
    FUN_029fbef4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1980),auStack_48,&local_58);
    bVar3 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  }
  *param_2 = bVar3;
  return;
}


