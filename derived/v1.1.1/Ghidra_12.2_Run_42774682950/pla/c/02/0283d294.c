/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283d294; name: FUN_0283d294
 */


void FUN_0283d294(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar6 = *(long *)(param_1 + 0x1a8) * 0x30;
    puVar7 = (uint *)(*(long *)(param_1 + 0x1a0) + 0x28);
    do {
      lVar8 = *(long *)(puVar7 + -2);
      uVar1 = *puVar7;
      uVar9 = (ulong)uVar1;
      uVar3 = *(uint *)(lVar8 + 0x278);
      if (((uVar1 < uVar3) &&
          (lVar4 = *(long *)(lVar8 + 600), *(char *)(lVar4 + uVar9 * 0x48 + 8) != '\0')) &&
         (pcVar5 = (char *)(lVar4 + uVar9 * 0x48 + 0xb), *pcVar5 != '\0')) {
        plVar2 = *(long **)(lVar4 + uVar9 * 0x48 + 0x10);
        if (plVar2 != (long *)0x0) {
          *pcVar5 = '\0';
          (**(code **)(*plVar2 + 0x20))(plVar2,0);
          uVar3 = *(uint *)(lVar8 + 0x278);
        }
        if ((uVar1 < uVar3) && (*(char *)(*(long *)(lVar8 + 600) + uVar9 * 0x48 + 8) != '\0')) {
          FUN_00227728(*(undefined8 *)(*(long *)(lVar8 + 600) + uVar9 * 0x48 + 0x10));
          *(undefined4 *)(*(long *)(*(long *)(lVar8 + 600) + uVar9 * 0x48 + 0x10) + 0x20) = 0;
          *(undefined1 *)(lVar8 + 0x671) = 1;
        }
      }
      lVar6 = lVar6 + -0x30;
      puVar7 = puVar7 + 0xc;
    } while (lVar6 != 0);
  }
  return;
}


